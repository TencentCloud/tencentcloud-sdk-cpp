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

#include <tencentcloud/tse/v20201207/model/KongServiceLightPreview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

KongServiceLightPreview::KongServiceLightPreview() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_upstreamInfoHasBeenSet(false),
    m_upstreamTypeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_retriesHasBeenSet(false),
    m_timeoutHasBeenSet(false)
{
}

CoreInternalOutcome KongServiceLightPreview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongServiceLightPreview.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongServiceLightPreview.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("UpstreamInfo") && !value["UpstreamInfo"].IsNull())
    {
        if (!value["UpstreamInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KongServiceLightPreview.UpstreamInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_upstreamInfo.Deserialize(value["UpstreamInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_upstreamInfoHasBeenSet = true;
    }

    if (value.HasMember("UpstreamType") && !value["UpstreamType"].IsNull())
    {
        if (!value["UpstreamType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongServiceLightPreview.UpstreamType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamType = string(value["UpstreamType"].GetString());
        m_upstreamTypeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongServiceLightPreview.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongServiceLightPreview.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongServiceLightPreview.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Retries") && !value["Retries"].IsNull())
    {
        if (!value["Retries"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KongServiceLightPreview.Retries` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retries = value["Retries"].GetUint64();
        m_retriesHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KongServiceLightPreview.Timeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetUint64();
        m_timeoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KongServiceLightPreview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_upstreamInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_upstreamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamType.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_retriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Retries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retries, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

}


string KongServiceLightPreview::GetID() const
{
    return m_iD;
}

void KongServiceLightPreview::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool KongServiceLightPreview::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string KongServiceLightPreview::GetName() const
{
    return m_name;
}

void KongServiceLightPreview::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool KongServiceLightPreview::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

KongUpstreamInfo KongServiceLightPreview::GetUpstreamInfo() const
{
    return m_upstreamInfo;
}

void KongServiceLightPreview::SetUpstreamInfo(const KongUpstreamInfo& _upstreamInfo)
{
    m_upstreamInfo = _upstreamInfo;
    m_upstreamInfoHasBeenSet = true;
}

bool KongServiceLightPreview::UpstreamInfoHasBeenSet() const
{
    return m_upstreamInfoHasBeenSet;
}

string KongServiceLightPreview::GetUpstreamType() const
{
    return m_upstreamType;
}

void KongServiceLightPreview::SetUpstreamType(const string& _upstreamType)
{
    m_upstreamType = _upstreamType;
    m_upstreamTypeHasBeenSet = true;
}

bool KongServiceLightPreview::UpstreamTypeHasBeenSet() const
{
    return m_upstreamTypeHasBeenSet;
}

string KongServiceLightPreview::GetCreatedTime() const
{
    return m_createdTime;
}

void KongServiceLightPreview::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool KongServiceLightPreview::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string KongServiceLightPreview::GetPath() const
{
    return m_path;
}

void KongServiceLightPreview::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool KongServiceLightPreview::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string KongServiceLightPreview::GetProtocol() const
{
    return m_protocol;
}

void KongServiceLightPreview::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool KongServiceLightPreview::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

uint64_t KongServiceLightPreview::GetRetries() const
{
    return m_retries;
}

void KongServiceLightPreview::SetRetries(const uint64_t& _retries)
{
    m_retries = _retries;
    m_retriesHasBeenSet = true;
}

bool KongServiceLightPreview::RetriesHasBeenSet() const
{
    return m_retriesHasBeenSet;
}

uint64_t KongServiceLightPreview::GetTimeout() const
{
    return m_timeout;
}

void KongServiceLightPreview::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool KongServiceLightPreview::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

