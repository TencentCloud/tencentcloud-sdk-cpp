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

#include <tencentcloud/databuddy/v20260715/model/UpdateModelVersionRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

UpdateModelVersionRsp::UpdateModelVersionRsp() :
    m_modelVersionHasBeenSet(false)
{
}

CoreInternalOutcome UpdateModelVersionRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelVersion") && !value["ModelVersion"].IsNull())
    {
        if (!value["ModelVersion"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateModelVersionRsp.ModelVersion` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelVersion.Deserialize(value["ModelVersion"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpdateModelVersionRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelVersion.ToJsonObject(value[key.c_str()], allocator);
    }

}


ModelVersionInfo UpdateModelVersionRsp::GetModelVersion() const
{
    return m_modelVersion;
}

void UpdateModelVersionRsp::SetModelVersion(const ModelVersionInfo& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool UpdateModelVersionRsp::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

