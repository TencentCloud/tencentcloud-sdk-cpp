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

#include <tencentcloud/tcb/v20180608/model/BuildSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

BuildSource::BuildSource() :
    m_typeHasBeenSet(false),
    m_repoHasBeenSet(false),
    m_refHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_isPrivateHasBeenSet(false),
    m_codeUrlWithAuthHasBeenSet(false),
    m_cosTimestampHasBeenSet(false),
    m_cosSuffixHasBeenSet(false)
{
}

CoreInternalOutcome BuildSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildSource.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Repo") && !value["Repo"].IsNull())
    {
        if (!value["Repo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildSource.Repo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repo = string(value["Repo"].GetString());
        m_repoHasBeenSet = true;
    }

    if (value.HasMember("Ref") && !value["Ref"].IsNull())
    {
        if (!value["Ref"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildSource.Ref` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ref = string(value["Ref"].GetString());
        m_refHasBeenSet = true;
    }

    if (value.HasMember("Channel") && !value["Channel"].IsNull())
    {
        if (!value["Channel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildSource.Channel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channel = string(value["Channel"].GetString());
        m_channelHasBeenSet = true;
    }

    if (value.HasMember("IsPrivate") && !value["IsPrivate"].IsNull())
    {
        if (!value["IsPrivate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BuildSource.IsPrivate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPrivate = value["IsPrivate"].GetBool();
        m_isPrivateHasBeenSet = true;
    }

    if (value.HasMember("CodeUrlWithAuth") && !value["CodeUrlWithAuth"].IsNull())
    {
        if (!value["CodeUrlWithAuth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildSource.CodeUrlWithAuth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeUrlWithAuth = string(value["CodeUrlWithAuth"].GetString());
        m_codeUrlWithAuthHasBeenSet = true;
    }

    if (value.HasMember("CosTimestamp") && !value["CosTimestamp"].IsNull())
    {
        if (!value["CosTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildSource.CosTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosTimestamp = string(value["CosTimestamp"].GetString());
        m_cosTimestampHasBeenSet = true;
    }

    if (value.HasMember("CosSuffix") && !value["CosSuffix"].IsNull())
    {
        if (!value["CosSuffix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildSource.CosSuffix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosSuffix = string(value["CosSuffix"].GetString());
        m_cosSuffixHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BuildSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_repoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Repo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repo.c_str(), allocator).Move(), allocator);
    }

    if (m_refHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ref";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ref.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }

    if (m_isPrivateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPrivate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPrivate, allocator);
    }

    if (m_codeUrlWithAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeUrlWithAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeUrlWithAuth.c_str(), allocator).Move(), allocator);
    }

    if (m_cosTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_cosSuffixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosSuffix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosSuffix.c_str(), allocator).Move(), allocator);
    }

}


string BuildSource::GetType() const
{
    return m_type;
}

void BuildSource::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool BuildSource::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string BuildSource::GetRepo() const
{
    return m_repo;
}

void BuildSource::SetRepo(const string& _repo)
{
    m_repo = _repo;
    m_repoHasBeenSet = true;
}

bool BuildSource::RepoHasBeenSet() const
{
    return m_repoHasBeenSet;
}

string BuildSource::GetRef() const
{
    return m_ref;
}

void BuildSource::SetRef(const string& _ref)
{
    m_ref = _ref;
    m_refHasBeenSet = true;
}

bool BuildSource::RefHasBeenSet() const
{
    return m_refHasBeenSet;
}

string BuildSource::GetChannel() const
{
    return m_channel;
}

void BuildSource::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool BuildSource::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

bool BuildSource::GetIsPrivate() const
{
    return m_isPrivate;
}

void BuildSource::SetIsPrivate(const bool& _isPrivate)
{
    m_isPrivate = _isPrivate;
    m_isPrivateHasBeenSet = true;
}

bool BuildSource::IsPrivateHasBeenSet() const
{
    return m_isPrivateHasBeenSet;
}

string BuildSource::GetCodeUrlWithAuth() const
{
    return m_codeUrlWithAuth;
}

void BuildSource::SetCodeUrlWithAuth(const string& _codeUrlWithAuth)
{
    m_codeUrlWithAuth = _codeUrlWithAuth;
    m_codeUrlWithAuthHasBeenSet = true;
}

bool BuildSource::CodeUrlWithAuthHasBeenSet() const
{
    return m_codeUrlWithAuthHasBeenSet;
}

string BuildSource::GetCosTimestamp() const
{
    return m_cosTimestamp;
}

void BuildSource::SetCosTimestamp(const string& _cosTimestamp)
{
    m_cosTimestamp = _cosTimestamp;
    m_cosTimestampHasBeenSet = true;
}

bool BuildSource::CosTimestampHasBeenSet() const
{
    return m_cosTimestampHasBeenSet;
}

string BuildSource::GetCosSuffix() const
{
    return m_cosSuffix;
}

void BuildSource::SetCosSuffix(const string& _cosSuffix)
{
    m_cosSuffix = _cosSuffix;
    m_cosSuffixHasBeenSet = true;
}

bool BuildSource::CosSuffixHasBeenSet() const
{
    return m_cosSuffixHasBeenSet;
}

