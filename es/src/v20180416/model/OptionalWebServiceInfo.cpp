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

#include <tencentcloud/es/v20180416/model/OptionalWebServiceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

OptionalWebServiceInfo::OptionalWebServiceInfo() :
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_publicUrlHasBeenSet(false),
    m_privateUrlHasBeenSet(false),
    m_publicAccessHasBeenSet(false),
    m_privateAccessHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_privateVipHasBeenSet(false),
    m_customPrivateUrlHasBeenSet(false)
{
}

CoreInternalOutcome OptionalWebServiceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OptionalWebServiceInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OptionalWebServiceInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PublicUrl") && !value["PublicUrl"].IsNull())
    {
        if (!value["PublicUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OptionalWebServiceInfo.PublicUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicUrl = string(value["PublicUrl"].GetString());
        m_publicUrlHasBeenSet = true;
    }

    if (value.HasMember("PrivateUrl") && !value["PrivateUrl"].IsNull())
    {
        if (!value["PrivateUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OptionalWebServiceInfo.PrivateUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateUrl = string(value["PrivateUrl"].GetString());
        m_privateUrlHasBeenSet = true;
    }

    if (value.HasMember("PublicAccess") && !value["PublicAccess"].IsNull())
    {
        if (!value["PublicAccess"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OptionalWebServiceInfo.PublicAccess` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicAccess = string(value["PublicAccess"].GetString());
        m_publicAccessHasBeenSet = true;
    }

    if (value.HasMember("PrivateAccess") && !value["PrivateAccess"].IsNull())
    {
        if (!value["PrivateAccess"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OptionalWebServiceInfo.PrivateAccess` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateAccess = string(value["PrivateAccess"].GetString());
        m_privateAccessHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OptionalWebServiceInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("PrivateVip") && !value["PrivateVip"].IsNull())
    {
        if (!value["PrivateVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OptionalWebServiceInfo.PrivateVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateVip = string(value["PrivateVip"].GetString());
        m_privateVipHasBeenSet = true;
    }

    if (value.HasMember("CustomPrivateUrl") && !value["CustomPrivateUrl"].IsNull())
    {
        if (!value["CustomPrivateUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OptionalWebServiceInfo.CustomPrivateUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customPrivateUrl = string(value["CustomPrivateUrl"].GetString());
        m_customPrivateUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OptionalWebServiceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_publicUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_privateUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_publicAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_privateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_privateVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateVip.c_str(), allocator).Move(), allocator);
    }

    if (m_customPrivateUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomPrivateUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customPrivateUrl.c_str(), allocator).Move(), allocator);
    }

}


string OptionalWebServiceInfo::GetType() const
{
    return m_type;
}

void OptionalWebServiceInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool OptionalWebServiceInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t OptionalWebServiceInfo::GetStatus() const
{
    return m_status;
}

void OptionalWebServiceInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool OptionalWebServiceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string OptionalWebServiceInfo::GetPublicUrl() const
{
    return m_publicUrl;
}

void OptionalWebServiceInfo::SetPublicUrl(const string& _publicUrl)
{
    m_publicUrl = _publicUrl;
    m_publicUrlHasBeenSet = true;
}

bool OptionalWebServiceInfo::PublicUrlHasBeenSet() const
{
    return m_publicUrlHasBeenSet;
}

string OptionalWebServiceInfo::GetPrivateUrl() const
{
    return m_privateUrl;
}

void OptionalWebServiceInfo::SetPrivateUrl(const string& _privateUrl)
{
    m_privateUrl = _privateUrl;
    m_privateUrlHasBeenSet = true;
}

bool OptionalWebServiceInfo::PrivateUrlHasBeenSet() const
{
    return m_privateUrlHasBeenSet;
}

string OptionalWebServiceInfo::GetPublicAccess() const
{
    return m_publicAccess;
}

void OptionalWebServiceInfo::SetPublicAccess(const string& _publicAccess)
{
    m_publicAccess = _publicAccess;
    m_publicAccessHasBeenSet = true;
}

bool OptionalWebServiceInfo::PublicAccessHasBeenSet() const
{
    return m_publicAccessHasBeenSet;
}

string OptionalWebServiceInfo::GetPrivateAccess() const
{
    return m_privateAccess;
}

void OptionalWebServiceInfo::SetPrivateAccess(const string& _privateAccess)
{
    m_privateAccess = _privateAccess;
    m_privateAccessHasBeenSet = true;
}

bool OptionalWebServiceInfo::PrivateAccessHasBeenSet() const
{
    return m_privateAccessHasBeenSet;
}

string OptionalWebServiceInfo::GetVersion() const
{
    return m_version;
}

void OptionalWebServiceInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool OptionalWebServiceInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string OptionalWebServiceInfo::GetPrivateVip() const
{
    return m_privateVip;
}

void OptionalWebServiceInfo::SetPrivateVip(const string& _privateVip)
{
    m_privateVip = _privateVip;
    m_privateVipHasBeenSet = true;
}

bool OptionalWebServiceInfo::PrivateVipHasBeenSet() const
{
    return m_privateVipHasBeenSet;
}

string OptionalWebServiceInfo::GetCustomPrivateUrl() const
{
    return m_customPrivateUrl;
}

void OptionalWebServiceInfo::SetCustomPrivateUrl(const string& _customPrivateUrl)
{
    m_customPrivateUrl = _customPrivateUrl;
    m_customPrivateUrlHasBeenSet = true;
}

bool OptionalWebServiceInfo::CustomPrivateUrlHasBeenSet() const
{
    return m_customPrivateUrlHasBeenSet;
}

