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

#include <tencentcloud/emr/v20190103/model/DescribeExportConfsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeExportConfsRequest::DescribeExportConfsRequest() :
    m_instanceIdHasBeenSet(false),
    m_exportConfContextsHasBeenSet(false),
    m_exportTypeHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_confGroupNameHasBeenSet(false)
{
}

string DescribeExportConfsRequest::ToJsonString() const
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

    if (m_exportConfContextsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportConfContexts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_exportConfContexts.begin(); itr != m_exportConfContexts.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_exportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_exportType, allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_confGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_confGroupName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeExportConfsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeExportConfsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeExportConfsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<ExportConfContext> DescribeExportConfsRequest::GetExportConfContexts() const
{
    return m_exportConfContexts;
}

void DescribeExportConfsRequest::SetExportConfContexts(const vector<ExportConfContext>& _exportConfContexts)
{
    m_exportConfContexts = _exportConfContexts;
    m_exportConfContextsHasBeenSet = true;
}

bool DescribeExportConfsRequest::ExportConfContextsHasBeenSet() const
{
    return m_exportConfContextsHasBeenSet;
}

int64_t DescribeExportConfsRequest::GetExportType() const
{
    return m_exportType;
}

void DescribeExportConfsRequest::SetExportType(const int64_t& _exportType)
{
    m_exportType = _exportType;
    m_exportTypeHasBeenSet = true;
}

bool DescribeExportConfsRequest::ExportTypeHasBeenSet() const
{
    return m_exportTypeHasBeenSet;
}

string DescribeExportConfsRequest::GetIp() const
{
    return m_ip;
}

void DescribeExportConfsRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DescribeExportConfsRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string DescribeExportConfsRequest::GetConfGroupName() const
{
    return m_confGroupName;
}

void DescribeExportConfsRequest::SetConfGroupName(const string& _confGroupName)
{
    m_confGroupName = _confGroupName;
    m_confGroupNameHasBeenSet = true;
}

bool DescribeExportConfsRequest::ConfGroupNameHasBeenSet() const
{
    return m_confGroupNameHasBeenSet;
}


