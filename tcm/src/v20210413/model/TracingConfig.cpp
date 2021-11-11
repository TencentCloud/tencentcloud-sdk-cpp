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

#include <tencentcloud/tcm/v20210413/model/TracingConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

TracingConfig::TracingConfig() :
    m_samplingHasBeenSet(false)
{
}

CoreInternalOutcome TracingConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Sampling") && !value["Sampling"].IsNull())
    {
        if (!value["Sampling"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TracingConfig.Sampling` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sampling = value["Sampling"].GetDouble();
        m_samplingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TracingConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_samplingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sampling";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sampling, allocator);
    }

}


double TracingConfig::GetSampling() const
{
    return m_sampling;
}

void TracingConfig::SetSampling(const double& _sampling)
{
    m_sampling = _sampling;
    m_samplingHasBeenSet = true;
}

bool TracingConfig::SamplingHasBeenSet() const
{
    return m_samplingHasBeenSet;
}

