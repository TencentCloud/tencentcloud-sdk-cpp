/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/dlc/v20210125/model/LoraAdapterBinding.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

LoraAdapterBinding::LoraAdapterBinding() :
    m_modelVersionUidHasBeenSet(false)
{
}

CoreInternalOutcome LoraAdapterBinding::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelVersionUid") && !value["ModelVersionUid"].IsNull())
    {
        if (!value["ModelVersionUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoraAdapterBinding.ModelVersionUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelVersionUid = string(value["ModelVersionUid"].GetString());
        m_modelVersionUidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoraAdapterBinding::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelVersionUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersionUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelVersionUid.c_str(), allocator).Move(), allocator);
    }

}


string LoraAdapterBinding::GetModelVersionUid() const
{
    return m_modelVersionUid;
}

void LoraAdapterBinding::SetModelVersionUid(const string& _modelVersionUid)
{
    m_modelVersionUid = _modelVersionUid;
    m_modelVersionUidHasBeenSet = true;
}

bool LoraAdapterBinding::ModelVersionUidHasBeenSet() const
{
    return m_modelVersionUidHasBeenSet;
}

