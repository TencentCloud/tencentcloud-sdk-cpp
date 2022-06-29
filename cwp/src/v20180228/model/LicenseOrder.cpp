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

#include <tencentcloud/cwp/v20180228/model/LicenseOrder.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

LicenseOrder::LicenseOrder() :
    m_licenseIdHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
}

CoreInternalOutcome LicenseOrder::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LicenseId") && !value["LicenseId"].IsNull())
    {
        if (!value["LicenseId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseOrder.LicenseId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseId = value["LicenseId"].GetUint64();
        m_licenseIdHasBeenSet = true;
    }

    if (value.HasMember("LicenseType") && !value["LicenseType"].IsNull())
    {
        if (!value["LicenseType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseOrder.LicenseType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseType = value["LicenseType"].GetUint64();
        m_licenseTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseOrder.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseOrder.SourceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = value["SourceType"].GetUint64();
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseOrder.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LicenseOrder::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_licenseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseId, allocator);
    }

    if (m_licenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseType, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

}


uint64_t LicenseOrder::GetLicenseId() const
{
    return m_licenseId;
}

void LicenseOrder::SetLicenseId(const uint64_t& _licenseId)
{
    m_licenseId = _licenseId;
    m_licenseIdHasBeenSet = true;
}

bool LicenseOrder::LicenseIdHasBeenSet() const
{
    return m_licenseIdHasBeenSet;
}

uint64_t LicenseOrder::GetLicenseType() const
{
    return m_licenseType;
}

void LicenseOrder::SetLicenseType(const uint64_t& _licenseType)
{
    m_licenseType = _licenseType;
    m_licenseTypeHasBeenSet = true;
}

bool LicenseOrder::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

uint64_t LicenseOrder::GetStatus() const
{
    return m_status;
}

void LicenseOrder::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LicenseOrder::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t LicenseOrder::GetSourceType() const
{
    return m_sourceType;
}

void LicenseOrder::SetSourceType(const uint64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool LicenseOrder::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string LicenseOrder::GetResourceId() const
{
    return m_resourceId;
}

void LicenseOrder::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool LicenseOrder::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

