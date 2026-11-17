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

#include <tencentcloud/databuddy/v20260715/model/CreateExperimentRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

CreateExperimentRsp::CreateExperimentRsp() :
    m_experimentIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateExperimentRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExperimentId") && !value["ExperimentId"].IsNull())
    {
        if (!value["ExperimentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateExperimentRsp.ExperimentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_experimentId = string(value["ExperimentId"].GetString());
        m_experimentIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateExperimentRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_experimentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExperimentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_experimentId.c_str(), allocator).Move(), allocator);
    }

}


string CreateExperimentRsp::GetExperimentId() const
{
    return m_experimentId;
}

void CreateExperimentRsp::SetExperimentId(const string& _experimentId)
{
    m_experimentId = _experimentId;
    m_experimentIdHasBeenSet = true;
}

bool CreateExperimentRsp::ExperimentIdHasBeenSet() const
{
    return m_experimentIdHasBeenSet;
}

