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

#include <tencentcloud/tcbr/v20220217/model/ReleaseGrayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

ReleaseGrayRequest::ReleaseGrayRequest() :
    m_envIdHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_grayTypeHasBeenSet(false),
    m_trafficTypeHasBeenSet(false),
    m_versionFlowItemsHasBeenSet(false),
    m_operatorRemarkHasBeenSet(false),
    m_grayFlowRatioHasBeenSet(false)
{
}

string ReleaseGrayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_serverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverName.c_str(), allocator).Move(), allocator);
    }

    if (m_grayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_grayType.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trafficType.c_str(), allocator).Move(), allocator);
    }

    if (m_versionFlowItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionFlowItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_versionFlowItems.begin(); itr != m_versionFlowItems.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_operatorRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorRemark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operatorRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_grayFlowRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrayFlowRatio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_grayFlowRatio, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ReleaseGrayRequest::GetEnvId() const
{
    return m_envId;
}

void ReleaseGrayRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool ReleaseGrayRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string ReleaseGrayRequest::GetServerName() const
{
    return m_serverName;
}

void ReleaseGrayRequest::SetServerName(const string& _serverName)
{
    m_serverName = _serverName;
    m_serverNameHasBeenSet = true;
}

bool ReleaseGrayRequest::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
}

string ReleaseGrayRequest::GetGrayType() const
{
    return m_grayType;
}

void ReleaseGrayRequest::SetGrayType(const string& _grayType)
{
    m_grayType = _grayType;
    m_grayTypeHasBeenSet = true;
}

bool ReleaseGrayRequest::GrayTypeHasBeenSet() const
{
    return m_grayTypeHasBeenSet;
}

string ReleaseGrayRequest::GetTrafficType() const
{
    return m_trafficType;
}

void ReleaseGrayRequest::SetTrafficType(const string& _trafficType)
{
    m_trafficType = _trafficType;
    m_trafficTypeHasBeenSet = true;
}

bool ReleaseGrayRequest::TrafficTypeHasBeenSet() const
{
    return m_trafficTypeHasBeenSet;
}

vector<VersionFlowInfo> ReleaseGrayRequest::GetVersionFlowItems() const
{
    return m_versionFlowItems;
}

void ReleaseGrayRequest::SetVersionFlowItems(const vector<VersionFlowInfo>& _versionFlowItems)
{
    m_versionFlowItems = _versionFlowItems;
    m_versionFlowItemsHasBeenSet = true;
}

bool ReleaseGrayRequest::VersionFlowItemsHasBeenSet() const
{
    return m_versionFlowItemsHasBeenSet;
}

string ReleaseGrayRequest::GetOperatorRemark() const
{
    return m_operatorRemark;
}

void ReleaseGrayRequest::SetOperatorRemark(const string& _operatorRemark)
{
    m_operatorRemark = _operatorRemark;
    m_operatorRemarkHasBeenSet = true;
}

bool ReleaseGrayRequest::OperatorRemarkHasBeenSet() const
{
    return m_operatorRemarkHasBeenSet;
}

int64_t ReleaseGrayRequest::GetGrayFlowRatio() const
{
    return m_grayFlowRatio;
}

void ReleaseGrayRequest::SetGrayFlowRatio(const int64_t& _grayFlowRatio)
{
    m_grayFlowRatio = _grayFlowRatio;
    m_grayFlowRatioHasBeenSet = true;
}

bool ReleaseGrayRequest::GrayFlowRatioHasBeenSet() const
{
    return m_grayFlowRatioHasBeenSet;
}


