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

#include <tencentcloud/es/v20180416/model/ExportIpTraceLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

ExportIpTraceLogRequest::ExportIpTraceLogRequest() :
    m_instanceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_remoteIpHasBeenSet(false),
    m_traceTypeHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_reqTypeOrRspStatusHasBeenSet(false),
    m_searchKeyHasBeenSet(false),
    m_uriHasBeenSet(false),
    m_nodeIpHasBeenSet(false)
{
}

string ExportIpTraceLogRequest::ToJsonString() const
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

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_remoteIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_remoteIp.begin(); itr != m_remoteIp.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_traceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_traceType.begin(); itr != m_traceType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_netType.begin(); itr != m_netType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_reqTypeOrRspStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqTypeOrRspStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_reqTypeOrRspStatus.begin(); itr != m_reqTypeOrRspStatus.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_searchKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_searchKey.c_str(), allocator).Move(), allocator);
    }

    if (m_uriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uri";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uri.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodeIp.begin(); itr != m_nodeIp.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ExportIpTraceLogRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ExportIpTraceLogRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ExportIpTraceLogRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ExportIpTraceLogRequest::GetStartTime() const
{
    return m_startTime;
}

void ExportIpTraceLogRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ExportIpTraceLogRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ExportIpTraceLogRequest::GetEndTime() const
{
    return m_endTime;
}

void ExportIpTraceLogRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ExportIpTraceLogRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t ExportIpTraceLogRequest::GetOffset() const
{
    return m_offset;
}

void ExportIpTraceLogRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ExportIpTraceLogRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t ExportIpTraceLogRequest::GetLimit() const
{
    return m_limit;
}

void ExportIpTraceLogRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ExportIpTraceLogRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> ExportIpTraceLogRequest::GetRemoteIp() const
{
    return m_remoteIp;
}

void ExportIpTraceLogRequest::SetRemoteIp(const vector<string>& _remoteIp)
{
    m_remoteIp = _remoteIp;
    m_remoteIpHasBeenSet = true;
}

bool ExportIpTraceLogRequest::RemoteIpHasBeenSet() const
{
    return m_remoteIpHasBeenSet;
}

vector<string> ExportIpTraceLogRequest::GetTraceType() const
{
    return m_traceType;
}

void ExportIpTraceLogRequest::SetTraceType(const vector<string>& _traceType)
{
    m_traceType = _traceType;
    m_traceTypeHasBeenSet = true;
}

bool ExportIpTraceLogRequest::TraceTypeHasBeenSet() const
{
    return m_traceTypeHasBeenSet;
}

vector<string> ExportIpTraceLogRequest::GetNetType() const
{
    return m_netType;
}

void ExportIpTraceLogRequest::SetNetType(const vector<string>& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool ExportIpTraceLogRequest::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

vector<string> ExportIpTraceLogRequest::GetReqTypeOrRspStatus() const
{
    return m_reqTypeOrRspStatus;
}

void ExportIpTraceLogRequest::SetReqTypeOrRspStatus(const vector<string>& _reqTypeOrRspStatus)
{
    m_reqTypeOrRspStatus = _reqTypeOrRspStatus;
    m_reqTypeOrRspStatusHasBeenSet = true;
}

bool ExportIpTraceLogRequest::ReqTypeOrRspStatusHasBeenSet() const
{
    return m_reqTypeOrRspStatusHasBeenSet;
}

string ExportIpTraceLogRequest::GetSearchKey() const
{
    return m_searchKey;
}

void ExportIpTraceLogRequest::SetSearchKey(const string& _searchKey)
{
    m_searchKey = _searchKey;
    m_searchKeyHasBeenSet = true;
}

bool ExportIpTraceLogRequest::SearchKeyHasBeenSet() const
{
    return m_searchKeyHasBeenSet;
}

string ExportIpTraceLogRequest::GetUri() const
{
    return m_uri;
}

void ExportIpTraceLogRequest::SetUri(const string& _uri)
{
    m_uri = _uri;
    m_uriHasBeenSet = true;
}

bool ExportIpTraceLogRequest::UriHasBeenSet() const
{
    return m_uriHasBeenSet;
}

vector<string> ExportIpTraceLogRequest::GetNodeIp() const
{
    return m_nodeIp;
}

void ExportIpTraceLogRequest::SetNodeIp(const vector<string>& _nodeIp)
{
    m_nodeIp = _nodeIp;
    m_nodeIpHasBeenSet = true;
}

bool ExportIpTraceLogRequest::NodeIpHasBeenSet() const
{
    return m_nodeIpHasBeenSet;
}


