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

#include <tencentcloud/cdn/v20180606/model/ViolationUrl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

ViolationUrl::ViolationUrl() :
    m_idHasBeenSet(false),
    m_realUrlHasBeenSet(false),
    m_downloadUrlHasBeenSet(false),
    m_urlStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ViolationUrl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ViolationUrl.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("RealUrl") && !value["RealUrl"].IsNull())
    {
        if (!value["RealUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViolationUrl.RealUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realUrl = string(value["RealUrl"].GetString());
        m_realUrlHasBeenSet = true;
    }

    if (value.HasMember("DownloadUrl") && !value["DownloadUrl"].IsNull())
    {
        if (!value["DownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViolationUrl.DownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadUrl = string(value["DownloadUrl"].GetString());
        m_downloadUrlHasBeenSet = true;
    }

    if (value.HasMember("UrlStatus") && !value["UrlStatus"].IsNull())
    {
        if (!value["UrlStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViolationUrl.UrlStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_urlStatus = string(value["UrlStatus"].GetString());
        m_urlStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViolationUrl.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViolationUrl.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ViolationUrl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_realUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_downloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_urlStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_urlStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t ViolationUrl::GetId() const
{
    return m_id;
}

void ViolationUrl::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ViolationUrl::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ViolationUrl::GetRealUrl() const
{
    return m_realUrl;
}

void ViolationUrl::SetRealUrl(const string& _realUrl)
{
    m_realUrl = _realUrl;
    m_realUrlHasBeenSet = true;
}

bool ViolationUrl::RealUrlHasBeenSet() const
{
    return m_realUrlHasBeenSet;
}

string ViolationUrl::GetDownloadUrl() const
{
    return m_downloadUrl;
}

void ViolationUrl::SetDownloadUrl(const string& _downloadUrl)
{
    m_downloadUrl = _downloadUrl;
    m_downloadUrlHasBeenSet = true;
}

bool ViolationUrl::DownloadUrlHasBeenSet() const
{
    return m_downloadUrlHasBeenSet;
}

string ViolationUrl::GetUrlStatus() const
{
    return m_urlStatus;
}

void ViolationUrl::SetUrlStatus(const string& _urlStatus)
{
    m_urlStatus = _urlStatus;
    m_urlStatusHasBeenSet = true;
}

bool ViolationUrl::UrlStatusHasBeenSet() const
{
    return m_urlStatusHasBeenSet;
}

string ViolationUrl::GetCreateTime() const
{
    return m_createTime;
}

void ViolationUrl::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ViolationUrl::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ViolationUrl::GetUpdateTime() const
{
    return m_updateTime;
}

void ViolationUrl::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ViolationUrl::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

