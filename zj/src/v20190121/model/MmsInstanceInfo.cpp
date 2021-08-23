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

#include <tencentcloud/zj/v20190121/model/MmsInstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Zj::V20190121::Model;
using namespace std;

MmsInstanceInfo::MmsInstanceInfo() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusInfoHasBeenSet(false),
    m_appSubIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_signHasBeenSet(false),
    m_contentsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_urlsHasBeenSet(false),
    m_phoneTypeHasBeenSet(false),
    m_commonParamsHasBeenSet(false),
    m_urlParamsHasBeenSet(false)
{
}

CoreInternalOutcome MmsInstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MmsInstanceInfo.InstanceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = value["InstanceId"].GetInt64();
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MmsInstanceInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MmsInstanceInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusInfo") && !value["StatusInfo"].IsNull())
    {
        if (!value["StatusInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MmsInstanceInfo.StatusInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["StatusInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MmsInstanceStateInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_statusInfo.push_back(item);
        }
        m_statusInfoHasBeenSet = true;
    }

    if (value.HasMember("AppSubId") && !value["AppSubId"].IsNull())
    {
        if (!value["AppSubId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MmsInstanceInfo.AppSubId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appSubId = string(value["AppSubId"].GetString());
        m_appSubIdHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MmsInstanceInfo.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Sign") && !value["Sign"].IsNull())
    {
        if (!value["Sign"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MmsInstanceInfo.Sign` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sign = string(value["Sign"].GetString());
        m_signHasBeenSet = true;
    }

    if (value.HasMember("Contents") && !value["Contents"].IsNull())
    {
        if (!value["Contents"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MmsInstanceInfo.Contents` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contents = string(value["Contents"].GetString());
        m_contentsHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MmsInstanceInfo.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("Urls") && !value["Urls"].IsNull())
    {
        if (!value["Urls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MmsInstanceInfo.Urls` is not array type"));

        const rapidjson::Value &tmpValue = value["Urls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_urls.push_back((*itr).GetString());
        }
        m_urlsHasBeenSet = true;
    }

    if (value.HasMember("PhoneType") && !value["PhoneType"].IsNull())
    {
        if (!value["PhoneType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MmsInstanceInfo.PhoneType` is not array type"));

        const rapidjson::Value &tmpValue = value["PhoneType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_phoneType.push_back((*itr).GetUint64());
        }
        m_phoneTypeHasBeenSet = true;
    }

    if (value.HasMember("CommonParams") && !value["CommonParams"].IsNull())
    {
        if (!value["CommonParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MmsInstanceInfo.CommonParams` is not array type"));

        const rapidjson::Value &tmpValue = value["CommonParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_commonParams.push_back((*itr).GetUint64());
        }
        m_commonParamsHasBeenSet = true;
    }

    if (value.HasMember("UrlParams") && !value["UrlParams"].IsNull())
    {
        if (!value["UrlParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MmsInstanceInfo.UrlParams` is not array type"));

        const rapidjson::Value &tmpValue = value["UrlParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_urlParams.push_back((*itr).GetUint64());
        }
        m_urlParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MmsInstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceId, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_statusInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_statusInfo.begin(); itr != m_statusInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_appSubIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppSubId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appSubId.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_signHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sign";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sign.c_str(), allocator).Move(), allocator);
    }

    if (m_contentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Contents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contents.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_urlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Urls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_urls.begin(); itr != m_urls.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_phoneTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_phoneType.begin(); itr != m_phoneType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_commonParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_commonParams.begin(); itr != m_commonParams.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_urlParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_urlParams.begin(); itr != m_urlParams.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

}


int64_t MmsInstanceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void MmsInstanceInfo::SetInstanceId(const int64_t& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool MmsInstanceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string MmsInstanceInfo::GetInstanceName() const
{
    return m_instanceName;
}

void MmsInstanceInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool MmsInstanceInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t MmsInstanceInfo::GetStatus() const
{
    return m_status;
}

void MmsInstanceInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MmsInstanceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<MmsInstanceStateInfo> MmsInstanceInfo::GetStatusInfo() const
{
    return m_statusInfo;
}

void MmsInstanceInfo::SetStatusInfo(const vector<MmsInstanceStateInfo>& _statusInfo)
{
    m_statusInfo = _statusInfo;
    m_statusInfoHasBeenSet = true;
}

bool MmsInstanceInfo::StatusInfoHasBeenSet() const
{
    return m_statusInfoHasBeenSet;
}

string MmsInstanceInfo::GetAppSubId() const
{
    return m_appSubId;
}

void MmsInstanceInfo::SetAppSubId(const string& _appSubId)
{
    m_appSubId = _appSubId;
    m_appSubIdHasBeenSet = true;
}

bool MmsInstanceInfo::AppSubIdHasBeenSet() const
{
    return m_appSubIdHasBeenSet;
}

string MmsInstanceInfo::GetTitle() const
{
    return m_title;
}

void MmsInstanceInfo::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool MmsInstanceInfo::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string MmsInstanceInfo::GetSign() const
{
    return m_sign;
}

void MmsInstanceInfo::SetSign(const string& _sign)
{
    m_sign = _sign;
    m_signHasBeenSet = true;
}

bool MmsInstanceInfo::SignHasBeenSet() const
{
    return m_signHasBeenSet;
}

string MmsInstanceInfo::GetContents() const
{
    return m_contents;
}

void MmsInstanceInfo::SetContents(const string& _contents)
{
    m_contents = _contents;
    m_contentsHasBeenSet = true;
}

bool MmsInstanceInfo::ContentsHasBeenSet() const
{
    return m_contentsHasBeenSet;
}

string MmsInstanceInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void MmsInstanceInfo::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool MmsInstanceInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

vector<string> MmsInstanceInfo::GetUrls() const
{
    return m_urls;
}

void MmsInstanceInfo::SetUrls(const vector<string>& _urls)
{
    m_urls = _urls;
    m_urlsHasBeenSet = true;
}

bool MmsInstanceInfo::UrlsHasBeenSet() const
{
    return m_urlsHasBeenSet;
}

vector<uint64_t> MmsInstanceInfo::GetPhoneType() const
{
    return m_phoneType;
}

void MmsInstanceInfo::SetPhoneType(const vector<uint64_t>& _phoneType)
{
    m_phoneType = _phoneType;
    m_phoneTypeHasBeenSet = true;
}

bool MmsInstanceInfo::PhoneTypeHasBeenSet() const
{
    return m_phoneTypeHasBeenSet;
}

vector<uint64_t> MmsInstanceInfo::GetCommonParams() const
{
    return m_commonParams;
}

void MmsInstanceInfo::SetCommonParams(const vector<uint64_t>& _commonParams)
{
    m_commonParams = _commonParams;
    m_commonParamsHasBeenSet = true;
}

bool MmsInstanceInfo::CommonParamsHasBeenSet() const
{
    return m_commonParamsHasBeenSet;
}

vector<uint64_t> MmsInstanceInfo::GetUrlParams() const
{
    return m_urlParams;
}

void MmsInstanceInfo::SetUrlParams(const vector<uint64_t>& _urlParams)
{
    m_urlParams = _urlParams;
    m_urlParamsHasBeenSet = true;
}

bool MmsInstanceInfo::UrlParamsHasBeenSet() const
{
    return m_urlParamsHasBeenSet;
}

