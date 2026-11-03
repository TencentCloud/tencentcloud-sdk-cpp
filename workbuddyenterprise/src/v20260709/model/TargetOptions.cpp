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

#include <tencentcloud/workbuddyenterprise/v20260709/model/TargetOptions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

TargetOptions::TargetOptions() :
    m_channelTypeHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_secretHasBeenSet(false),
    m_recipientIdSetHasBeenSet(false)
{
}

CoreInternalOutcome TargetOptions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelType") && !value["ChannelType"].IsNull())
    {
        if (!value["ChannelType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetOptions.ChannelType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelType = string(value["ChannelType"].GetString());
        m_channelTypeHasBeenSet = true;
    }

    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetOptions.ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(value["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetOptions.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Headers") && !value["Headers"].IsNull())
    {
        if (!value["Headers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TargetOptions.Headers` is not array type"));

        const rapidjson::Value &tmpValue = value["Headers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Header item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_headers.push_back(item);
        }
        m_headersHasBeenSet = true;
    }

    if (value.HasMember("Secret") && !value["Secret"].IsNull())
    {
        if (!value["Secret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetOptions.Secret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secret = string(value["Secret"].GetString());
        m_secretHasBeenSet = true;
    }

    if (value.HasMember("RecipientIdSet") && !value["RecipientIdSet"].IsNull())
    {
        if (!value["RecipientIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TargetOptions.RecipientIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["RecipientIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_recipientIdSet.push_back((*itr).GetString());
        }
        m_recipientIdSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetOptions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelType.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_headersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Headers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headers.begin(); itr != m_headers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_secretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Secret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secret.c_str(), allocator).Move(), allocator);
    }

    if (m_recipientIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecipientIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_recipientIdSet.begin(); itr != m_recipientIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string TargetOptions::GetChannelType() const
{
    return m_channelType;
}

void TargetOptions::SetChannelType(const string& _channelType)
{
    m_channelType = _channelType;
    m_channelTypeHasBeenSet = true;
}

bool TargetOptions::ChannelTypeHasBeenSet() const
{
    return m_channelTypeHasBeenSet;
}

string TargetOptions::GetChannelId() const
{
    return m_channelId;
}

void TargetOptions::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool TargetOptions::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string TargetOptions::GetUrl() const
{
    return m_url;
}

void TargetOptions::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool TargetOptions::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

vector<Header> TargetOptions::GetHeaders() const
{
    return m_headers;
}

void TargetOptions::SetHeaders(const vector<Header>& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool TargetOptions::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}

string TargetOptions::GetSecret() const
{
    return m_secret;
}

void TargetOptions::SetSecret(const string& _secret)
{
    m_secret = _secret;
    m_secretHasBeenSet = true;
}

bool TargetOptions::SecretHasBeenSet() const
{
    return m_secretHasBeenSet;
}

vector<string> TargetOptions::GetRecipientIdSet() const
{
    return m_recipientIdSet;
}

void TargetOptions::SetRecipientIdSet(const vector<string>& _recipientIdSet)
{
    m_recipientIdSet = _recipientIdSet;
    m_recipientIdSetHasBeenSet = true;
}

bool TargetOptions::RecipientIdSetHasBeenSet() const
{
    return m_recipientIdSetHasBeenSet;
}

