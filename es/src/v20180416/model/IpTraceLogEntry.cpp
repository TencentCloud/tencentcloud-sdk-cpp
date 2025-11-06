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

#include <tencentcloud/es/v20180416/model/IpTraceLogEntry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

IpTraceLogEntry::IpTraceLogEntry() :
    m_timestampHasBeenSet(false),
    m_remoteIpHasBeenSet(false),
    m_traceTypeHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_uriHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_reqTypeOrRspStatusHasBeenSet(false),
    m_nodeIpHasBeenSet(false)
{
}

CoreInternalOutcome IpTraceLogEntry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpTraceLogEntry.Timestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = string(value["Timestamp"].GetString());
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("RemoteIp") && !value["RemoteIp"].IsNull())
    {
        if (!value["RemoteIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpTraceLogEntry.RemoteIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteIp = string(value["RemoteIp"].GetString());
        m_remoteIpHasBeenSet = true;
    }

    if (value.HasMember("TraceType") && !value["TraceType"].IsNull())
    {
        if (!value["TraceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpTraceLogEntry.TraceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceType = string(value["TraceType"].GetString());
        m_traceTypeHasBeenSet = true;
    }

    if (value.HasMember("NetType") && !value["NetType"].IsNull())
    {
        if (!value["NetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpTraceLogEntry.NetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netType = string(value["NetType"].GetString());
        m_netTypeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpTraceLogEntry.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Uri") && !value["Uri"].IsNull())
    {
        if (!value["Uri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpTraceLogEntry.Uri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uri = string(value["Uri"].GetString());
        m_uriHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpTraceLogEntry.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("ReqTypeOrRspStatus") && !value["ReqTypeOrRspStatus"].IsNull())
    {
        if (!value["ReqTypeOrRspStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpTraceLogEntry.ReqTypeOrRspStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reqTypeOrRspStatus = string(value["ReqTypeOrRspStatus"].GetString());
        m_reqTypeOrRspStatusHasBeenSet = true;
    }

    if (value.HasMember("NodeIp") && !value["NodeIp"].IsNull())
    {
        if (!value["NodeIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpTraceLogEntry.NodeIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeIp = string(value["NodeIp"].GetString());
        m_nodeIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpTraceLogEntry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteIp.c_str(), allocator).Move(), allocator);
    }

    if (m_traceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traceType.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netType.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_uriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uri.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_reqTypeOrRspStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqTypeOrRspStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reqTypeOrRspStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeIp.c_str(), allocator).Move(), allocator);
    }

}


string IpTraceLogEntry::GetTimestamp() const
{
    return m_timestamp;
}

void IpTraceLogEntry::SetTimestamp(const string& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool IpTraceLogEntry::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string IpTraceLogEntry::GetRemoteIp() const
{
    return m_remoteIp;
}

void IpTraceLogEntry::SetRemoteIp(const string& _remoteIp)
{
    m_remoteIp = _remoteIp;
    m_remoteIpHasBeenSet = true;
}

bool IpTraceLogEntry::RemoteIpHasBeenSet() const
{
    return m_remoteIpHasBeenSet;
}

string IpTraceLogEntry::GetTraceType() const
{
    return m_traceType;
}

void IpTraceLogEntry::SetTraceType(const string& _traceType)
{
    m_traceType = _traceType;
    m_traceTypeHasBeenSet = true;
}

bool IpTraceLogEntry::TraceTypeHasBeenSet() const
{
    return m_traceTypeHasBeenSet;
}

string IpTraceLogEntry::GetNetType() const
{
    return m_netType;
}

void IpTraceLogEntry::SetNetType(const string& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool IpTraceLogEntry::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string IpTraceLogEntry::GetMessage() const
{
    return m_message;
}

void IpTraceLogEntry::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool IpTraceLogEntry::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string IpTraceLogEntry::GetUri() const
{
    return m_uri;
}

void IpTraceLogEntry::SetUri(const string& _uri)
{
    m_uri = _uri;
    m_uriHasBeenSet = true;
}

bool IpTraceLogEntry::UriHasBeenSet() const
{
    return m_uriHasBeenSet;
}

string IpTraceLogEntry::GetPublicIp() const
{
    return m_publicIp;
}

void IpTraceLogEntry::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool IpTraceLogEntry::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string IpTraceLogEntry::GetReqTypeOrRspStatus() const
{
    return m_reqTypeOrRspStatus;
}

void IpTraceLogEntry::SetReqTypeOrRspStatus(const string& _reqTypeOrRspStatus)
{
    m_reqTypeOrRspStatus = _reqTypeOrRspStatus;
    m_reqTypeOrRspStatusHasBeenSet = true;
}

bool IpTraceLogEntry::ReqTypeOrRspStatusHasBeenSet() const
{
    return m_reqTypeOrRspStatusHasBeenSet;
}

string IpTraceLogEntry::GetNodeIp() const
{
    return m_nodeIp;
}

void IpTraceLogEntry::SetNodeIp(const string& _nodeIp)
{
    m_nodeIp = _nodeIp;
    m_nodeIpHasBeenSet = true;
}

bool IpTraceLogEntry::NodeIpHasBeenSet() const
{
    return m_nodeIpHasBeenSet;
}

