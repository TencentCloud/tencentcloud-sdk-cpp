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

#include <tencentcloud/cwp/v20180228/model/MachineLicenseDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

MachineLicenseDetail::MachineLicenseDetail() :
    m_quuidHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_inquireKeyHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_buyTimeHasBeenSet(false),
    m_licenseCntHasBeenSet(false)
{
}

CoreInternalOutcome MachineLicenseDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineLicenseDetail.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineLicenseDetail.PayMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetUint64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineLicenseDetail.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("LicenseType") && !value["LicenseType"].IsNull())
    {
        if (!value["LicenseType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineLicenseDetail.LicenseType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseType = value["LicenseType"].GetUint64();
        m_licenseTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineLicenseDetail.SourceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = value["SourceType"].GetUint64();
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("InquireKey") && !value["InquireKey"].IsNull())
    {
        if (!value["InquireKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineLicenseDetail.InquireKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inquireKey = string(value["InquireKey"].GetString());
        m_inquireKeyHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineLicenseDetail.AutoRenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetUint64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("Deadline") && !value["Deadline"].IsNull())
    {
        if (!value["Deadline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineLicenseDetail.Deadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadline = string(value["Deadline"].GetString());
        m_deadlineHasBeenSet = true;
    }

    if (value.HasMember("BuyTime") && !value["BuyTime"].IsNull())
    {
        if (!value["BuyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineLicenseDetail.BuyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyTime = string(value["BuyTime"].GetString());
        m_buyTimeHasBeenSet = true;
    }

    if (value.HasMember("LicenseCnt") && !value["LicenseCnt"].IsNull())
    {
        if (!value["LicenseCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineLicenseDetail.LicenseCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseCnt = value["LicenseCnt"].GetUint64();
        m_licenseCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MachineLicenseDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseType, allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_inquireKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InquireKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inquireKey.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadline.c_str(), allocator).Move(), allocator);
    }

    if (m_buyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseCnt, allocator);
    }

}


string MachineLicenseDetail::GetQuuid() const
{
    return m_quuid;
}

void MachineLicenseDetail::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool MachineLicenseDetail::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

uint64_t MachineLicenseDetail::GetPayMode() const
{
    return m_payMode;
}

void MachineLicenseDetail::SetPayMode(const uint64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool MachineLicenseDetail::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string MachineLicenseDetail::GetResourceId() const
{
    return m_resourceId;
}

void MachineLicenseDetail::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool MachineLicenseDetail::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

uint64_t MachineLicenseDetail::GetLicenseType() const
{
    return m_licenseType;
}

void MachineLicenseDetail::SetLicenseType(const uint64_t& _licenseType)
{
    m_licenseType = _licenseType;
    m_licenseTypeHasBeenSet = true;
}

bool MachineLicenseDetail::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

uint64_t MachineLicenseDetail::GetSourceType() const
{
    return m_sourceType;
}

void MachineLicenseDetail::SetSourceType(const uint64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool MachineLicenseDetail::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string MachineLicenseDetail::GetInquireKey() const
{
    return m_inquireKey;
}

void MachineLicenseDetail::SetInquireKey(const string& _inquireKey)
{
    m_inquireKey = _inquireKey;
    m_inquireKeyHasBeenSet = true;
}

bool MachineLicenseDetail::InquireKeyHasBeenSet() const
{
    return m_inquireKeyHasBeenSet;
}

uint64_t MachineLicenseDetail::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void MachineLicenseDetail::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool MachineLicenseDetail::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string MachineLicenseDetail::GetDeadline() const
{
    return m_deadline;
}

void MachineLicenseDetail::SetDeadline(const string& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool MachineLicenseDetail::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

string MachineLicenseDetail::GetBuyTime() const
{
    return m_buyTime;
}

void MachineLicenseDetail::SetBuyTime(const string& _buyTime)
{
    m_buyTime = _buyTime;
    m_buyTimeHasBeenSet = true;
}

bool MachineLicenseDetail::BuyTimeHasBeenSet() const
{
    return m_buyTimeHasBeenSet;
}

uint64_t MachineLicenseDetail::GetLicenseCnt() const
{
    return m_licenseCnt;
}

void MachineLicenseDetail::SetLicenseCnt(const uint64_t& _licenseCnt)
{
    m_licenseCnt = _licenseCnt;
    m_licenseCntHasBeenSet = true;
}

bool MachineLicenseDetail::LicenseCntHasBeenSet() const
{
    return m_licenseCntHasBeenSet;
}

