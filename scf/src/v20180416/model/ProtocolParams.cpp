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

#include <tencentcloud/scf/v20180416/model/ProtocolParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

ProtocolParams::ProtocolParams() :
    m_wSParamsHasBeenSet(false)
{
}

CoreInternalOutcome ProtocolParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WSParams") && !value["WSParams"].IsNull())
    {
        if (!value["WSParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProtocolParams.WSParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_wSParams.Deserialize(value["WSParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wSParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProtocolParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wSParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WSParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_wSParams.ToJsonObject(value[key.c_str()], allocator);
    }

}


WSParams ProtocolParams::GetWSParams() const
{
    return m_wSParams;
}

void ProtocolParams::SetWSParams(const WSParams& _wSParams)
{
    m_wSParams = _wSParams;
    m_wSParamsHasBeenSet = true;
}

bool ProtocolParams::WSParamsHasBeenSet() const
{
    return m_wSParamsHasBeenSet;
}

