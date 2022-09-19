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

#include <tencentcloud/ckafka/v20190819/model/CtsdbParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

CtsdbParam::CtsdbParam() :
    m_resourceHasBeenSet(false),
    m_ctsdbMetricHasBeenSet(false)
{
}

CoreInternalOutcome CtsdbParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CtsdbParam.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("CtsdbMetric") && !value["CtsdbMetric"].IsNull())
    {
        if (!value["CtsdbMetric"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CtsdbParam.CtsdbMetric` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ctsdbMetric = string(value["CtsdbMetric"].GetString());
        m_ctsdbMetricHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CtsdbParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_ctsdbMetricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CtsdbMetric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ctsdbMetric.c_str(), allocator).Move(), allocator);
    }

}


string CtsdbParam::GetResource() const
{
    return m_resource;
}

void CtsdbParam::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool CtsdbParam::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string CtsdbParam::GetCtsdbMetric() const
{
    return m_ctsdbMetric;
}

void CtsdbParam::SetCtsdbMetric(const string& _ctsdbMetric)
{
    m_ctsdbMetric = _ctsdbMetric;
    m_ctsdbMetricHasBeenSet = true;
}

bool CtsdbParam::CtsdbMetricHasBeenSet() const
{
    return m_ctsdbMetricHasBeenSet;
}

