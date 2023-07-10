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

#include <tencentcloud/tse/v20201207/model/KongServiceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

KongServiceDetail::KongServiceDetail() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_retriesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_upstreamInfoHasBeenSet(false),
    m_upstreamTypeHasBeenSet(false),
    m_editableHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

CoreInternalOutcome KongServiceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongServiceDetail.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongServiceDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongServiceDetail.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongServiceDetail.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KongServiceDetail.Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("Retries") && !value["Retries"].IsNull())
    {
        if (!value["Retries"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KongServiceDetail.Retries` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retries = value["Retries"].GetInt64();
        m_retriesHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KongServiceDetail.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("UpstreamInfo") && !value["UpstreamInfo"].IsNull())
    {
        if (!value["UpstreamInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KongServiceDetail.UpstreamInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `KongServiceDetail.UpstreamType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamType = string(value["UpstreamType"].GetString());
        m_upstreamTypeHasBeenSet = true;
    }

    if (value.HasMember("Editable") && !value["Editable"].IsNull())
    {
        if (!value["Editable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KongServiceDetail.Editable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_editable = value["Editable"].GetBool();
        m_editableHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongServiceDetail.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KongServiceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_retriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Retries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retries, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_editableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Editable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_editable, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

}


string KongServiceDetail::GetID() const
{
    return m_iD;
}

void KongServiceDetail::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool KongServiceDetail::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string KongServiceDetail::GetName() const
{
    return m_name;
}

void KongServiceDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool KongServiceDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string KongServiceDetail::GetProtocol() const
{
    return m_protocol;
}

void KongServiceDetail::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool KongServiceDetail::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string KongServiceDetail::GetPath() const
{
    return m_path;
}

void KongServiceDetail::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool KongServiceDetail::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

int64_t KongServiceDetail::GetTimeout() const
{
    return m_timeout;
}

void KongServiceDetail::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool KongServiceDetail::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

int64_t KongServiceDetail::GetRetries() const
{
    return m_retries;
}

void KongServiceDetail::SetRetries(const int64_t& _retries)
{
    m_retries = _retries;
    m_retriesHasBeenSet = true;
}

bool KongServiceDetail::RetriesHasBeenSet() const
{
    return m_retriesHasBeenSet;
}

vector<string> KongServiceDetail::GetTags() const
{
    return m_tags;
}

void KongServiceDetail::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool KongServiceDetail::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

KongUpstreamInfo KongServiceDetail::GetUpstreamInfo() const
{
    return m_upstreamInfo;
}

void KongServiceDetail::SetUpstreamInfo(const KongUpstreamInfo& _upstreamInfo)
{
    m_upstreamInfo = _upstreamInfo;
    m_upstreamInfoHasBeenSet = true;
}

bool KongServiceDetail::UpstreamInfoHasBeenSet() const
{
    return m_upstreamInfoHasBeenSet;
}

string KongServiceDetail::GetUpstreamType() const
{
    return m_upstreamType;
}

void KongServiceDetail::SetUpstreamType(const string& _upstreamType)
{
    m_upstreamType = _upstreamType;
    m_upstreamTypeHasBeenSet = true;
}

bool KongServiceDetail::UpstreamTypeHasBeenSet() const
{
    return m_upstreamTypeHasBeenSet;
}

bool KongServiceDetail::GetEditable() const
{
    return m_editable;
}

void KongServiceDetail::SetEditable(const bool& _editable)
{
    m_editable = _editable;
    m_editableHasBeenSet = true;
}

bool KongServiceDetail::EditableHasBeenSet() const
{
    return m_editableHasBeenSet;
}

string KongServiceDetail::GetCreatedTime() const
{
    return m_createdTime;
}

void KongServiceDetail::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool KongServiceDetail::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

