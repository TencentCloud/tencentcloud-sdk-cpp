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

#include <tencentcloud/wav/v20210129/model/LicenseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

LicenseInfo::LicenseInfo() :
    m_licenseHasBeenSet(false),
    m_licenseEditionHasBeenSet(false),
    m_resourceStartTimeHasBeenSet(false),
    m_resourceEndTimeHasBeenSet(false),
    m_isolationDeadlineHasBeenSet(false),
    m_destroyTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_extraHasBeenSet(false)
{
}

CoreInternalOutcome LicenseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("License") && !value["License"].IsNull())
    {
        if (!value["License"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseInfo.License` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_license = string(value["License"].GetString());
        m_licenseHasBeenSet = true;
    }

    if (value.HasMember("LicenseEdition") && !value["LicenseEdition"].IsNull())
    {
        if (!value["LicenseEdition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseInfo.LicenseEdition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseEdition = value["LicenseEdition"].GetInt64();
        m_licenseEditionHasBeenSet = true;
    }

    if (value.HasMember("ResourceStartTime") && !value["ResourceStartTime"].IsNull())
    {
        if (!value["ResourceStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseInfo.ResourceStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceStartTime = string(value["ResourceStartTime"].GetString());
        m_resourceStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ResourceEndTime") && !value["ResourceEndTime"].IsNull())
    {
        if (!value["ResourceEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseInfo.ResourceEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceEndTime = string(value["ResourceEndTime"].GetString());
        m_resourceEndTimeHasBeenSet = true;
    }

    if (value.HasMember("IsolationDeadline") && !value["IsolationDeadline"].IsNull())
    {
        if (!value["IsolationDeadline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseInfo.IsolationDeadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolationDeadline = string(value["IsolationDeadline"].GetString());
        m_isolationDeadlineHasBeenSet = true;
    }

    if (value.HasMember("DestroyTime") && !value["DestroyTime"].IsNull())
    {
        if (!value["DestroyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseInfo.DestroyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destroyTime = string(value["DestroyTime"].GetString());
        m_destroyTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Extra") && !value["Extra"].IsNull())
    {
        if (!value["Extra"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseInfo.Extra` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extra = string(value["Extra"].GetString());
        m_extraHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LicenseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_licenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "License";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_license.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseEditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseEdition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseEdition, allocator);
    }

    if (m_resourceStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isolationDeadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolationDeadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolationDeadline.c_str(), allocator).Move(), allocator);
    }

    if (m_destroyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestroyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destroyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
    }

}


string LicenseInfo::GetLicense() const
{
    return m_license;
}

void LicenseInfo::SetLicense(const string& _license)
{
    m_license = _license;
    m_licenseHasBeenSet = true;
}

bool LicenseInfo::LicenseHasBeenSet() const
{
    return m_licenseHasBeenSet;
}

int64_t LicenseInfo::GetLicenseEdition() const
{
    return m_licenseEdition;
}

void LicenseInfo::SetLicenseEdition(const int64_t& _licenseEdition)
{
    m_licenseEdition = _licenseEdition;
    m_licenseEditionHasBeenSet = true;
}

bool LicenseInfo::LicenseEditionHasBeenSet() const
{
    return m_licenseEditionHasBeenSet;
}

string LicenseInfo::GetResourceStartTime() const
{
    return m_resourceStartTime;
}

void LicenseInfo::SetResourceStartTime(const string& _resourceStartTime)
{
    m_resourceStartTime = _resourceStartTime;
    m_resourceStartTimeHasBeenSet = true;
}

bool LicenseInfo::ResourceStartTimeHasBeenSet() const
{
    return m_resourceStartTimeHasBeenSet;
}

string LicenseInfo::GetResourceEndTime() const
{
    return m_resourceEndTime;
}

void LicenseInfo::SetResourceEndTime(const string& _resourceEndTime)
{
    m_resourceEndTime = _resourceEndTime;
    m_resourceEndTimeHasBeenSet = true;
}

bool LicenseInfo::ResourceEndTimeHasBeenSet() const
{
    return m_resourceEndTimeHasBeenSet;
}

string LicenseInfo::GetIsolationDeadline() const
{
    return m_isolationDeadline;
}

void LicenseInfo::SetIsolationDeadline(const string& _isolationDeadline)
{
    m_isolationDeadline = _isolationDeadline;
    m_isolationDeadlineHasBeenSet = true;
}

bool LicenseInfo::IsolationDeadlineHasBeenSet() const
{
    return m_isolationDeadlineHasBeenSet;
}

string LicenseInfo::GetDestroyTime() const
{
    return m_destroyTime;
}

void LicenseInfo::SetDestroyTime(const string& _destroyTime)
{
    m_destroyTime = _destroyTime;
    m_destroyTimeHasBeenSet = true;
}

bool LicenseInfo::DestroyTimeHasBeenSet() const
{
    return m_destroyTimeHasBeenSet;
}

int64_t LicenseInfo::GetStatus() const
{
    return m_status;
}

void LicenseInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LicenseInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string LicenseInfo::GetExtra() const
{
    return m_extra;
}

void LicenseInfo::SetExtra(const string& _extra)
{
    m_extra = _extra;
    m_extraHasBeenSet = true;
}

bool LicenseInfo::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}

