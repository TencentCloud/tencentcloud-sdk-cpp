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

#include <tencentcloud/cpdp/v20190820/model/QueryCloudChannelDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryCloudChannelDataRequest::QueryCloudChannelDataRequest() :
    m_midasAppIdHasBeenSet(false),
    m_outOrderNoHasBeenSet(false),
    m_externalChannelDataTypeHasBeenSet(false),
    m_midasEnvironmentHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_channelOrderIdHasBeenSet(false),
    m_channelHasBeenSet(false)
{
}

string QueryCloudChannelDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_midasAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_outOrderNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutOrderNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outOrderNo.c_str(), allocator).Move(), allocator);
    }

    if (m_externalChannelDataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalChannelDataType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_externalChannelDataType.c_str(), allocator).Move(), allocator);
    }

    if (m_midasEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasEnvironment.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelOrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryCloudChannelDataRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void QueryCloudChannelDataRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool QueryCloudChannelDataRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string QueryCloudChannelDataRequest::GetOutOrderNo() const
{
    return m_outOrderNo;
}

void QueryCloudChannelDataRequest::SetOutOrderNo(const string& _outOrderNo)
{
    m_outOrderNo = _outOrderNo;
    m_outOrderNoHasBeenSet = true;
}

bool QueryCloudChannelDataRequest::OutOrderNoHasBeenSet() const
{
    return m_outOrderNoHasBeenSet;
}

string QueryCloudChannelDataRequest::GetExternalChannelDataType() const
{
    return m_externalChannelDataType;
}

void QueryCloudChannelDataRequest::SetExternalChannelDataType(const string& _externalChannelDataType)
{
    m_externalChannelDataType = _externalChannelDataType;
    m_externalChannelDataTypeHasBeenSet = true;
}

bool QueryCloudChannelDataRequest::ExternalChannelDataTypeHasBeenSet() const
{
    return m_externalChannelDataTypeHasBeenSet;
}

string QueryCloudChannelDataRequest::GetMidasEnvironment() const
{
    return m_midasEnvironment;
}

void QueryCloudChannelDataRequest::SetMidasEnvironment(const string& _midasEnvironment)
{
    m_midasEnvironment = _midasEnvironment;
    m_midasEnvironmentHasBeenSet = true;
}

bool QueryCloudChannelDataRequest::MidasEnvironmentHasBeenSet() const
{
    return m_midasEnvironmentHasBeenSet;
}

string QueryCloudChannelDataRequest::GetSubAppId() const
{
    return m_subAppId;
}

void QueryCloudChannelDataRequest::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool QueryCloudChannelDataRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string QueryCloudChannelDataRequest::GetChannelOrderId() const
{
    return m_channelOrderId;
}

void QueryCloudChannelDataRequest::SetChannelOrderId(const string& _channelOrderId)
{
    m_channelOrderId = _channelOrderId;
    m_channelOrderIdHasBeenSet = true;
}

bool QueryCloudChannelDataRequest::ChannelOrderIdHasBeenSet() const
{
    return m_channelOrderIdHasBeenSet;
}

string QueryCloudChannelDataRequest::GetChannel() const
{
    return m_channel;
}

void QueryCloudChannelDataRequest::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool QueryCloudChannelDataRequest::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}


