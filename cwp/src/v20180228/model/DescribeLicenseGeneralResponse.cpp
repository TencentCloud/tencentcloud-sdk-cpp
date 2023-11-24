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

#include <tencentcloud/cwp/v20180228/model/DescribeLicenseGeneralResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeLicenseGeneralResponse::DescribeLicenseGeneralResponse() :
    m_licenseCntHasBeenSet(false),
    m_availableLicenseCntHasBeenSet(false),
    m_availableProVersionLicenseCntHasBeenSet(false),
    m_availableFlagshipVersionLicenseCntHasBeenSet(false),
    m_nearExpiryLicenseCntHasBeenSet(false),
    m_expireLicenseCntHasBeenSet(false),
    m_autoOpenStatusHasBeenSet(false),
    m_protectTypeHasBeenSet(false),
    m_isOpenStatusHistoryHasBeenSet(false),
    m_usedLicenseCntHasBeenSet(false),
    m_notExpiredLicenseCntHasBeenSet(false),
    m_flagshipVersionLicenseCntHasBeenSet(false),
    m_proVersionLicenseCntHasBeenSet(false),
    m_cwpVersionLicenseCntHasBeenSet(false),
    m_availableLHLicenseCntHasBeenSet(false),
    m_autoRepurchaseSwitchHasBeenSet(false),
    m_autoRepurchaseRenewSwitchHasBeenSet(false),
    m_destroyOrderNumHasBeenSet(false),
    m_repurchaseRenewSwitchHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLicenseGeneralResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("LicenseCnt") && !rsp["LicenseCnt"].IsNull())
    {
        if (!rsp["LicenseCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseCnt = rsp["LicenseCnt"].GetUint64();
        m_licenseCntHasBeenSet = true;
    }

    if (rsp.HasMember("AvailableLicenseCnt") && !rsp["AvailableLicenseCnt"].IsNull())
    {
        if (!rsp["AvailableLicenseCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableLicenseCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_availableLicenseCnt = rsp["AvailableLicenseCnt"].GetUint64();
        m_availableLicenseCntHasBeenSet = true;
    }

    if (rsp.HasMember("AvailableProVersionLicenseCnt") && !rsp["AvailableProVersionLicenseCnt"].IsNull())
    {
        if (!rsp["AvailableProVersionLicenseCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableProVersionLicenseCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_availableProVersionLicenseCnt = rsp["AvailableProVersionLicenseCnt"].GetUint64();
        m_availableProVersionLicenseCntHasBeenSet = true;
    }

    if (rsp.HasMember("AvailableFlagshipVersionLicenseCnt") && !rsp["AvailableFlagshipVersionLicenseCnt"].IsNull())
    {
        if (!rsp["AvailableFlagshipVersionLicenseCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableFlagshipVersionLicenseCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_availableFlagshipVersionLicenseCnt = rsp["AvailableFlagshipVersionLicenseCnt"].GetUint64();
        m_availableFlagshipVersionLicenseCntHasBeenSet = true;
    }

    if (rsp.HasMember("NearExpiryLicenseCnt") && !rsp["NearExpiryLicenseCnt"].IsNull())
    {
        if (!rsp["NearExpiryLicenseCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NearExpiryLicenseCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nearExpiryLicenseCnt = rsp["NearExpiryLicenseCnt"].GetUint64();
        m_nearExpiryLicenseCntHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireLicenseCnt") && !rsp["ExpireLicenseCnt"].IsNull())
    {
        if (!rsp["ExpireLicenseCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireLicenseCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireLicenseCnt = rsp["ExpireLicenseCnt"].GetUint64();
        m_expireLicenseCntHasBeenSet = true;
    }

    if (rsp.HasMember("AutoOpenStatus") && !rsp["AutoOpenStatus"].IsNull())
    {
        if (!rsp["AutoOpenStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AutoOpenStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoOpenStatus = rsp["AutoOpenStatus"].GetBool();
        m_autoOpenStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ProtectType") && !rsp["ProtectType"].IsNull())
    {
        if (!rsp["ProtectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectType = string(rsp["ProtectType"].GetString());
        m_protectTypeHasBeenSet = true;
    }

    if (rsp.HasMember("IsOpenStatusHistory") && !rsp["IsOpenStatusHistory"].IsNull())
    {
        if (!rsp["IsOpenStatusHistory"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsOpenStatusHistory` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isOpenStatusHistory = rsp["IsOpenStatusHistory"].GetBool();
        m_isOpenStatusHistoryHasBeenSet = true;
    }

    if (rsp.HasMember("UsedLicenseCnt") && !rsp["UsedLicenseCnt"].IsNull())
    {
        if (!rsp["UsedLicenseCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsedLicenseCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedLicenseCnt = rsp["UsedLicenseCnt"].GetUint64();
        m_usedLicenseCntHasBeenSet = true;
    }

    if (rsp.HasMember("NotExpiredLicenseCnt") && !rsp["NotExpiredLicenseCnt"].IsNull())
    {
        if (!rsp["NotExpiredLicenseCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NotExpiredLicenseCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_notExpiredLicenseCnt = rsp["NotExpiredLicenseCnt"].GetUint64();
        m_notExpiredLicenseCntHasBeenSet = true;
    }

    if (rsp.HasMember("FlagshipVersionLicenseCnt") && !rsp["FlagshipVersionLicenseCnt"].IsNull())
    {
        if (!rsp["FlagshipVersionLicenseCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FlagshipVersionLicenseCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_flagshipVersionLicenseCnt = rsp["FlagshipVersionLicenseCnt"].GetUint64();
        m_flagshipVersionLicenseCntHasBeenSet = true;
    }

    if (rsp.HasMember("ProVersionLicenseCnt") && !rsp["ProVersionLicenseCnt"].IsNull())
    {
        if (!rsp["ProVersionLicenseCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProVersionLicenseCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_proVersionLicenseCnt = rsp["ProVersionLicenseCnt"].GetUint64();
        m_proVersionLicenseCntHasBeenSet = true;
    }

    if (rsp.HasMember("CwpVersionLicenseCnt") && !rsp["CwpVersionLicenseCnt"].IsNull())
    {
        if (!rsp["CwpVersionLicenseCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CwpVersionLicenseCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cwpVersionLicenseCnt = rsp["CwpVersionLicenseCnt"].GetUint64();
        m_cwpVersionLicenseCntHasBeenSet = true;
    }

    if (rsp.HasMember("AvailableLHLicenseCnt") && !rsp["AvailableLHLicenseCnt"].IsNull())
    {
        if (!rsp["AvailableLHLicenseCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableLHLicenseCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_availableLHLicenseCnt = rsp["AvailableLHLicenseCnt"].GetUint64();
        m_availableLHLicenseCntHasBeenSet = true;
    }

    if (rsp.HasMember("AutoRepurchaseSwitch") && !rsp["AutoRepurchaseSwitch"].IsNull())
    {
        if (!rsp["AutoRepurchaseSwitch"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AutoRepurchaseSwitch` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoRepurchaseSwitch = rsp["AutoRepurchaseSwitch"].GetBool();
        m_autoRepurchaseSwitchHasBeenSet = true;
    }

    if (rsp.HasMember("AutoRepurchaseRenewSwitch") && !rsp["AutoRepurchaseRenewSwitch"].IsNull())
    {
        if (!rsp["AutoRepurchaseRenewSwitch"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AutoRepurchaseRenewSwitch` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoRepurchaseRenewSwitch = rsp["AutoRepurchaseRenewSwitch"].GetBool();
        m_autoRepurchaseRenewSwitchHasBeenSet = true;
    }

    if (rsp.HasMember("DestroyOrderNum") && !rsp["DestroyOrderNum"].IsNull())
    {
        if (!rsp["DestroyOrderNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DestroyOrderNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_destroyOrderNum = rsp["DestroyOrderNum"].GetUint64();
        m_destroyOrderNumHasBeenSet = true;
    }

    if (rsp.HasMember("RepurchaseRenewSwitch") && !rsp["RepurchaseRenewSwitch"].IsNull())
    {
        if (!rsp["RepurchaseRenewSwitch"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RepurchaseRenewSwitch` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_repurchaseRenewSwitch = rsp["RepurchaseRenewSwitch"].GetBool();
        m_repurchaseRenewSwitchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeLicenseGeneralResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_licenseCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseCnt, allocator);
    }

    if (m_availableLicenseCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableLicenseCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableLicenseCnt, allocator);
    }

    if (m_availableProVersionLicenseCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableProVersionLicenseCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableProVersionLicenseCnt, allocator);
    }

    if (m_availableFlagshipVersionLicenseCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableFlagshipVersionLicenseCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableFlagshipVersionLicenseCnt, allocator);
    }

    if (m_nearExpiryLicenseCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NearExpiryLicenseCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nearExpiryLicenseCnt, allocator);
    }

    if (m_expireLicenseCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireLicenseCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireLicenseCnt, allocator);
    }

    if (m_autoOpenStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoOpenStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoOpenStatus, allocator);
    }

    if (m_protectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectType.c_str(), allocator).Move(), allocator);
    }

    if (m_isOpenStatusHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOpenStatusHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOpenStatusHistory, allocator);
    }

    if (m_usedLicenseCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedLicenseCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedLicenseCnt, allocator);
    }

    if (m_notExpiredLicenseCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotExpiredLicenseCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notExpiredLicenseCnt, allocator);
    }

    if (m_flagshipVersionLicenseCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlagshipVersionLicenseCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flagshipVersionLicenseCnt, allocator);
    }

    if (m_proVersionLicenseCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProVersionLicenseCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proVersionLicenseCnt, allocator);
    }

    if (m_cwpVersionLicenseCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CwpVersionLicenseCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cwpVersionLicenseCnt, allocator);
    }

    if (m_availableLHLicenseCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableLHLicenseCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableLHLicenseCnt, allocator);
    }

    if (m_autoRepurchaseSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRepurchaseSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRepurchaseSwitch, allocator);
    }

    if (m_autoRepurchaseRenewSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRepurchaseRenewSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRepurchaseRenewSwitch, allocator);
    }

    if (m_destroyOrderNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestroyOrderNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_destroyOrderNum, allocator);
    }

    if (m_repurchaseRenewSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepurchaseRenewSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_repurchaseRenewSwitch, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeLicenseGeneralResponse::GetLicenseCnt() const
{
    return m_licenseCnt;
}

bool DescribeLicenseGeneralResponse::LicenseCntHasBeenSet() const
{
    return m_licenseCntHasBeenSet;
}

uint64_t DescribeLicenseGeneralResponse::GetAvailableLicenseCnt() const
{
    return m_availableLicenseCnt;
}

bool DescribeLicenseGeneralResponse::AvailableLicenseCntHasBeenSet() const
{
    return m_availableLicenseCntHasBeenSet;
}

uint64_t DescribeLicenseGeneralResponse::GetAvailableProVersionLicenseCnt() const
{
    return m_availableProVersionLicenseCnt;
}

bool DescribeLicenseGeneralResponse::AvailableProVersionLicenseCntHasBeenSet() const
{
    return m_availableProVersionLicenseCntHasBeenSet;
}

uint64_t DescribeLicenseGeneralResponse::GetAvailableFlagshipVersionLicenseCnt() const
{
    return m_availableFlagshipVersionLicenseCnt;
}

bool DescribeLicenseGeneralResponse::AvailableFlagshipVersionLicenseCntHasBeenSet() const
{
    return m_availableFlagshipVersionLicenseCntHasBeenSet;
}

uint64_t DescribeLicenseGeneralResponse::GetNearExpiryLicenseCnt() const
{
    return m_nearExpiryLicenseCnt;
}

bool DescribeLicenseGeneralResponse::NearExpiryLicenseCntHasBeenSet() const
{
    return m_nearExpiryLicenseCntHasBeenSet;
}

uint64_t DescribeLicenseGeneralResponse::GetExpireLicenseCnt() const
{
    return m_expireLicenseCnt;
}

bool DescribeLicenseGeneralResponse::ExpireLicenseCntHasBeenSet() const
{
    return m_expireLicenseCntHasBeenSet;
}

bool DescribeLicenseGeneralResponse::GetAutoOpenStatus() const
{
    return m_autoOpenStatus;
}

bool DescribeLicenseGeneralResponse::AutoOpenStatusHasBeenSet() const
{
    return m_autoOpenStatusHasBeenSet;
}

string DescribeLicenseGeneralResponse::GetProtectType() const
{
    return m_protectType;
}

bool DescribeLicenseGeneralResponse::ProtectTypeHasBeenSet() const
{
    return m_protectTypeHasBeenSet;
}

bool DescribeLicenseGeneralResponse::GetIsOpenStatusHistory() const
{
    return m_isOpenStatusHistory;
}

bool DescribeLicenseGeneralResponse::IsOpenStatusHistoryHasBeenSet() const
{
    return m_isOpenStatusHistoryHasBeenSet;
}

uint64_t DescribeLicenseGeneralResponse::GetUsedLicenseCnt() const
{
    return m_usedLicenseCnt;
}

bool DescribeLicenseGeneralResponse::UsedLicenseCntHasBeenSet() const
{
    return m_usedLicenseCntHasBeenSet;
}

uint64_t DescribeLicenseGeneralResponse::GetNotExpiredLicenseCnt() const
{
    return m_notExpiredLicenseCnt;
}

bool DescribeLicenseGeneralResponse::NotExpiredLicenseCntHasBeenSet() const
{
    return m_notExpiredLicenseCntHasBeenSet;
}

uint64_t DescribeLicenseGeneralResponse::GetFlagshipVersionLicenseCnt() const
{
    return m_flagshipVersionLicenseCnt;
}

bool DescribeLicenseGeneralResponse::FlagshipVersionLicenseCntHasBeenSet() const
{
    return m_flagshipVersionLicenseCntHasBeenSet;
}

uint64_t DescribeLicenseGeneralResponse::GetProVersionLicenseCnt() const
{
    return m_proVersionLicenseCnt;
}

bool DescribeLicenseGeneralResponse::ProVersionLicenseCntHasBeenSet() const
{
    return m_proVersionLicenseCntHasBeenSet;
}

uint64_t DescribeLicenseGeneralResponse::GetCwpVersionLicenseCnt() const
{
    return m_cwpVersionLicenseCnt;
}

bool DescribeLicenseGeneralResponse::CwpVersionLicenseCntHasBeenSet() const
{
    return m_cwpVersionLicenseCntHasBeenSet;
}

uint64_t DescribeLicenseGeneralResponse::GetAvailableLHLicenseCnt() const
{
    return m_availableLHLicenseCnt;
}

bool DescribeLicenseGeneralResponse::AvailableLHLicenseCntHasBeenSet() const
{
    return m_availableLHLicenseCntHasBeenSet;
}

bool DescribeLicenseGeneralResponse::GetAutoRepurchaseSwitch() const
{
    return m_autoRepurchaseSwitch;
}

bool DescribeLicenseGeneralResponse::AutoRepurchaseSwitchHasBeenSet() const
{
    return m_autoRepurchaseSwitchHasBeenSet;
}

bool DescribeLicenseGeneralResponse::GetAutoRepurchaseRenewSwitch() const
{
    return m_autoRepurchaseRenewSwitch;
}

bool DescribeLicenseGeneralResponse::AutoRepurchaseRenewSwitchHasBeenSet() const
{
    return m_autoRepurchaseRenewSwitchHasBeenSet;
}

uint64_t DescribeLicenseGeneralResponse::GetDestroyOrderNum() const
{
    return m_destroyOrderNum;
}

bool DescribeLicenseGeneralResponse::DestroyOrderNumHasBeenSet() const
{
    return m_destroyOrderNumHasBeenSet;
}

bool DescribeLicenseGeneralResponse::GetRepurchaseRenewSwitch() const
{
    return m_repurchaseRenewSwitch;
}

bool DescribeLicenseGeneralResponse::RepurchaseRenewSwitchHasBeenSet() const
{
    return m_repurchaseRenewSwitchHasBeenSet;
}


