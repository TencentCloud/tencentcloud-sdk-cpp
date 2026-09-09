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

#include <tencentcloud/emr/v20190103/model/ModifyServiceParamsByExportConfsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ModifyServiceParamsByExportConfsRequest::ModifyServiceParamsByExportConfsRequest() :
    m_instanceIdHasBeenSet(false),
    m_exportConfParamListHasBeenSet(false),
    m_ipListHasBeenSet(false),
    m_confGroupNameHasBeenSet(false)
{
}

string ModifyServiceParamsByExportConfsRequest::ToJsonString() const
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

    if (m_exportConfParamListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportConfParamList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_exportConfParamList.begin(); itr != m_exportConfParamList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_ipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipList.begin(); itr != m_ipList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


string ModifyServiceParamsByExportConfsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyServiceParamsByExportConfsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyServiceParamsByExportConfsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<ExportConfMeta> ModifyServiceParamsByExportConfsRequest::GetExportConfParamList() const
{
    return m_exportConfParamList;
}

void ModifyServiceParamsByExportConfsRequest::SetExportConfParamList(const vector<ExportConfMeta>& _exportConfParamList)
{
    m_exportConfParamList = _exportConfParamList;
    m_exportConfParamListHasBeenSet = true;
}

bool ModifyServiceParamsByExportConfsRequest::ExportConfParamListHasBeenSet() const
{
    return m_exportConfParamListHasBeenSet;
}

vector<string> ModifyServiceParamsByExportConfsRequest::GetIpList() const
{
    return m_ipList;
}

void ModifyServiceParamsByExportConfsRequest::SetIpList(const vector<string>& _ipList)
{
    m_ipList = _ipList;
    m_ipListHasBeenSet = true;
}

bool ModifyServiceParamsByExportConfsRequest::IpListHasBeenSet() const
{
    return m_ipListHasBeenSet;
}

string ModifyServiceParamsByExportConfsRequest::GetConfGroupName() const
{
    return m_confGroupName;
}

void ModifyServiceParamsByExportConfsRequest::SetConfGroupName(const string& _confGroupName)
{
    m_confGroupName = _confGroupName;
    m_confGroupNameHasBeenSet = true;
}

bool ModifyServiceParamsByExportConfsRequest::ConfGroupNameHasBeenSet() const
{
    return m_confGroupNameHasBeenSet;
}


