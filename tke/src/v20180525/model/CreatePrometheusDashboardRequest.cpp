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

#include <tencentcloud/tke/v20180525/model/CreatePrometheusDashboardRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

CreatePrometheusDashboardRequest::CreatePrometheusDashboardRequest() :
    m_instanceIdHasBeenSet(false),
    m_dashboardNameHasBeenSet(false),
    m_contentsHasBeenSet(false)
{
}

string CreatePrometheusDashboardRequest::ToJsonString() const
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

    if (m_dashboardNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DashboardName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dashboardName.c_str(), allocator).Move(), allocator);
    }

    if (m_contentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Contents";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_contents.begin(); itr != m_contents.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePrometheusDashboardRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreatePrometheusDashboardRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreatePrometheusDashboardRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreatePrometheusDashboardRequest::GetDashboardName() const
{
    return m_dashboardName;
}

void CreatePrometheusDashboardRequest::SetDashboardName(const string& _dashboardName)
{
    m_dashboardName = _dashboardName;
    m_dashboardNameHasBeenSet = true;
}

bool CreatePrometheusDashboardRequest::DashboardNameHasBeenSet() const
{
    return m_dashboardNameHasBeenSet;
}

vector<string> CreatePrometheusDashboardRequest::GetContents() const
{
    return m_contents;
}

void CreatePrometheusDashboardRequest::SetContents(const vector<string>& _contents)
{
    m_contents = _contents;
    m_contentsHasBeenSet = true;
}

bool CreatePrometheusDashboardRequest::ContentsHasBeenSet() const
{
    return m_contentsHasBeenSet;
}


