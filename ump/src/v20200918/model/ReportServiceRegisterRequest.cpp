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

#include <tencentcloud/ump/v20200918/model/ReportServiceRegisterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ump::V20200918::Model;
using namespace std;

ReportServiceRegisterRequest::ReportServiceRegisterRequest() :
    m_groupCodeHasBeenSet(false),
    m_mallIdHasBeenSet(false),
    m_serviceRegisterInfosHasBeenSet(false),
    m_serverIpHasBeenSet(false),
    m_serverNodeIdHasBeenSet(false),
    m_reportTimeHasBeenSet(false)
{
}

string ReportServiceRegisterRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupCode.c_str(), allocator).Move(), allocator);
    }

    if (m_mallIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MallId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mallId, allocator);
    }

    if (m_serviceRegisterInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceRegisterInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceRegisterInfos.begin(); itr != m_serviceRegisterInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_serverIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverIp.c_str(), allocator).Move(), allocator);
    }

    if (m_serverNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerNodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_reportTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reportTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ReportServiceRegisterRequest::GetGroupCode() const
{
    return m_groupCode;
}

void ReportServiceRegisterRequest::SetGroupCode(const string& _groupCode)
{
    m_groupCode = _groupCode;
    m_groupCodeHasBeenSet = true;
}

bool ReportServiceRegisterRequest::GroupCodeHasBeenSet() const
{
    return m_groupCodeHasBeenSet;
}

uint64_t ReportServiceRegisterRequest::GetMallId() const
{
    return m_mallId;
}

void ReportServiceRegisterRequest::SetMallId(const uint64_t& _mallId)
{
    m_mallId = _mallId;
    m_mallIdHasBeenSet = true;
}

bool ReportServiceRegisterRequest::MallIdHasBeenSet() const
{
    return m_mallIdHasBeenSet;
}

vector<ServiceRegisterInfo> ReportServiceRegisterRequest::GetServiceRegisterInfos() const
{
    return m_serviceRegisterInfos;
}

void ReportServiceRegisterRequest::SetServiceRegisterInfos(const vector<ServiceRegisterInfo>& _serviceRegisterInfos)
{
    m_serviceRegisterInfos = _serviceRegisterInfos;
    m_serviceRegisterInfosHasBeenSet = true;
}

bool ReportServiceRegisterRequest::ServiceRegisterInfosHasBeenSet() const
{
    return m_serviceRegisterInfosHasBeenSet;
}

string ReportServiceRegisterRequest::GetServerIp() const
{
    return m_serverIp;
}

void ReportServiceRegisterRequest::SetServerIp(const string& _serverIp)
{
    m_serverIp = _serverIp;
    m_serverIpHasBeenSet = true;
}

bool ReportServiceRegisterRequest::ServerIpHasBeenSet() const
{
    return m_serverIpHasBeenSet;
}

string ReportServiceRegisterRequest::GetServerNodeId() const
{
    return m_serverNodeId;
}

void ReportServiceRegisterRequest::SetServerNodeId(const string& _serverNodeId)
{
    m_serverNodeId = _serverNodeId;
    m_serverNodeIdHasBeenSet = true;
}

bool ReportServiceRegisterRequest::ServerNodeIdHasBeenSet() const
{
    return m_serverNodeIdHasBeenSet;
}

int64_t ReportServiceRegisterRequest::GetReportTime() const
{
    return m_reportTime;
}

void ReportServiceRegisterRequest::SetReportTime(const int64_t& _reportTime)
{
    m_reportTime = _reportTime;
    m_reportTimeHasBeenSet = true;
}

bool ReportServiceRegisterRequest::ReportTimeHasBeenSet() const
{
    return m_reportTimeHasBeenSet;
}


