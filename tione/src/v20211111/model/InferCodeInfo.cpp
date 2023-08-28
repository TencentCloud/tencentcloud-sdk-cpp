/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/tione/v20211111/model/InferCodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

InferCodeInfo::InferCodeInfo() :
    m_cosPathInfoHasBeenSet(false)
{
}

CoreInternalOutcome InferCodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CosPathInfo") && !value["CosPathInfo"].IsNull())
    {
        if (!value["CosPathInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InferCodeInfo.CosPathInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cosPathInfo.Deserialize(value["CosPathInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cosPathInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InferCodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cosPathInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosPathInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosPathInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


CosPathInfo InferCodeInfo::GetCosPathInfo() const
{
    return m_cosPathInfo;
}

void InferCodeInfo::SetCosPathInfo(const CosPathInfo& _cosPathInfo)
{
    m_cosPathInfo = _cosPathInfo;
    m_cosPathInfoHasBeenSet = true;
}

bool InferCodeInfo::CosPathInfoHasBeenSet() const
{
    return m_cosPathInfoHasBeenSet;
}

