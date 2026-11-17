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

#include <tencentcloud/vod/v20180717/model/SetAigcWhitelistRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

SetAigcWhitelistRequest::SetAigcWhitelistRequest() :
    m_subAppIdHasBeenSet(false),
    m_aigcTypeHasBeenSet(false),
    m_modelWhitelistSwitchHasBeenSet(false),
    m_ipWhitelistSwitchHasBeenSet(false),
    m_modelWhitelistHasBeenSet(false),
    m_ipWhitelistHasBeenSet(false)
{
}

string SetAigcWhitelistRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_aigcTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AigcType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aigcType.c_str(), allocator).Move(), allocator);
    }

    if (m_modelWhitelistSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelWhitelistSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelWhitelistSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_ipWhitelistSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpWhitelistSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ipWhitelistSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_modelWhitelistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelWhitelist";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_modelWhitelist.begin(); itr != m_modelWhitelist.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_ipWhitelistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpWhitelist";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipWhitelist.begin(); itr != m_ipWhitelist.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t SetAigcWhitelistRequest::GetSubAppId() const
{
    return m_subAppId;
}

void SetAigcWhitelistRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool SetAigcWhitelistRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string SetAigcWhitelistRequest::GetAigcType() const
{
    return m_aigcType;
}

void SetAigcWhitelistRequest::SetAigcType(const string& _aigcType)
{
    m_aigcType = _aigcType;
    m_aigcTypeHasBeenSet = true;
}

bool SetAigcWhitelistRequest::AigcTypeHasBeenSet() const
{
    return m_aigcTypeHasBeenSet;
}

string SetAigcWhitelistRequest::GetModelWhitelistSwitch() const
{
    return m_modelWhitelistSwitch;
}

void SetAigcWhitelistRequest::SetModelWhitelistSwitch(const string& _modelWhitelistSwitch)
{
    m_modelWhitelistSwitch = _modelWhitelistSwitch;
    m_modelWhitelistSwitchHasBeenSet = true;
}

bool SetAigcWhitelistRequest::ModelWhitelistSwitchHasBeenSet() const
{
    return m_modelWhitelistSwitchHasBeenSet;
}

string SetAigcWhitelistRequest::GetIpWhitelistSwitch() const
{
    return m_ipWhitelistSwitch;
}

void SetAigcWhitelistRequest::SetIpWhitelistSwitch(const string& _ipWhitelistSwitch)
{
    m_ipWhitelistSwitch = _ipWhitelistSwitch;
    m_ipWhitelistSwitchHasBeenSet = true;
}

bool SetAigcWhitelistRequest::IpWhitelistSwitchHasBeenSet() const
{
    return m_ipWhitelistSwitchHasBeenSet;
}

vector<AigcWhitelistModel> SetAigcWhitelistRequest::GetModelWhitelist() const
{
    return m_modelWhitelist;
}

void SetAigcWhitelistRequest::SetModelWhitelist(const vector<AigcWhitelistModel>& _modelWhitelist)
{
    m_modelWhitelist = _modelWhitelist;
    m_modelWhitelistHasBeenSet = true;
}

bool SetAigcWhitelistRequest::ModelWhitelistHasBeenSet() const
{
    return m_modelWhitelistHasBeenSet;
}

vector<string> SetAigcWhitelistRequest::GetIpWhitelist() const
{
    return m_ipWhitelist;
}

void SetAigcWhitelistRequest::SetIpWhitelist(const vector<string>& _ipWhitelist)
{
    m_ipWhitelist = _ipWhitelist;
    m_ipWhitelistHasBeenSet = true;
}

bool SetAigcWhitelistRequest::IpWhitelistHasBeenSet() const
{
    return m_ipWhitelistHasBeenSet;
}


