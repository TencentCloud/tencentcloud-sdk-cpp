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

#include <tencentcloud/tke/v20180525/model/DeletePrometheusAlertPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DeletePrometheusAlertPolicyRequest::DeletePrometheusAlertPolicyRequest() :
    m_instanceIdHasBeenSet(false),
    m_alertIdsHasBeenSet(false),
    m_namesHasBeenSet(false)
{
}

string DeletePrometheusAlertPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_alertIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alertIds.begin(); itr != m_alertIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_namesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Names";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_names.begin(); itr != m_names.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeletePrometheusAlertPolicyRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DeletePrometheusAlertPolicyRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DeletePrometheusAlertPolicyRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> DeletePrometheusAlertPolicyRequest::GetAlertIds() const
{
    return m_alertIds;
}

void DeletePrometheusAlertPolicyRequest::SetAlertIds(const vector<string>& _alertIds)
{
    m_alertIds = _alertIds;
    m_alertIdsHasBeenSet = true;
}

bool DeletePrometheusAlertPolicyRequest::AlertIdsHasBeenSet() const
{
    return m_alertIdsHasBeenSet;
}

vector<string> DeletePrometheusAlertPolicyRequest::GetNames() const
{
    return m_names;
}

void DeletePrometheusAlertPolicyRequest::SetNames(const vector<string>& _names)
{
    m_names = _names;
    m_namesHasBeenSet = true;
}

bool DeletePrometheusAlertPolicyRequest::NamesHasBeenSet() const
{
    return m_namesHasBeenSet;
}


