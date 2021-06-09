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

#include <tencentcloud/dayu/v20180709/model/CreateL7HealthConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

CreateL7HealthConfigRequest::CreateL7HealthConfigRequest() :
    m_businessHasBeenSet(false),
    m_idHasBeenSet(false),
    m_healthConfigHasBeenSet(false)
{
}

string CreateL7HealthConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_healthConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_healthConfig.begin(); itr != m_healthConfig.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateL7HealthConfigRequest::GetBusiness() const
{
    return m_business;
}

void CreateL7HealthConfigRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool CreateL7HealthConfigRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string CreateL7HealthConfigRequest::GetId() const
{
    return m_id;
}

void CreateL7HealthConfigRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CreateL7HealthConfigRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<L7HealthConfig> CreateL7HealthConfigRequest::GetHealthConfig() const
{
    return m_healthConfig;
}

void CreateL7HealthConfigRequest::SetHealthConfig(const vector<L7HealthConfig>& _healthConfig)
{
    m_healthConfig = _healthConfig;
    m_healthConfigHasBeenSet = true;
}

bool CreateL7HealthConfigRequest::HealthConfigHasBeenSet() const
{
    return m_healthConfigHasBeenSet;
}


