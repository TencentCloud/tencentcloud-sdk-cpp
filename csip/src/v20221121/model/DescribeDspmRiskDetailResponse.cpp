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

#include <tencentcloud/csip/v20221121/model/DescribeDspmRiskDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeDspmRiskDetailResponse::DescribeDspmRiskDetailResponse() :
    m_riskLevelHasBeenSet(false),
    m_detectTimeHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_identifyIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_personHasBeenSet(false),
    m_riskNameHasBeenSet(false),
    m_riskNameEnHasBeenSet(false),
    m_riskDataHasBeenSet(false),
    m_baselineDataHasBeenSet(false),
    m_riskIdHasBeenSet(false),
    m_strategyTypeHasBeenSet(false),
    m_strategyCategoryHasBeenSet(false),
    m_accountTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isAssetManagerHasBeenSet(false),
    m_dataBeginTimeHasBeenSet(false),
    m_dataEndTimeHasBeenSet(false),
    m_riskTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDspmRiskDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RiskLevel") && !rsp["RiskLevel"].IsNull())
    {
        if (!rsp["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(rsp["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (rsp.HasMember("DetectTime") && !rsp["DetectTime"].IsNull())
    {
        if (!rsp["DetectTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectTime = string(rsp["DetectTime"].GetString());
        m_detectTimeHasBeenSet = true;
    }

    if (rsp.HasMember("AssetId") && !rsp["AssetId"].IsNull())
    {
        if (!rsp["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(rsp["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (rsp.HasMember("AssetName") && !rsp["AssetName"].IsNull())
    {
        if (!rsp["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(rsp["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (rsp.HasMember("AssetType") && !rsp["AssetType"].IsNull())
    {
        if (!rsp["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(rsp["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Region") && !rsp["Region"].IsNull())
    {
        if (!rsp["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(rsp["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (rsp.HasMember("PublicIp") && !rsp["PublicIp"].IsNull())
    {
        if (!rsp["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(rsp["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (rsp.HasMember("PrivateIp") && !rsp["PrivateIp"].IsNull())
    {
        if (!rsp["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(rsp["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (rsp.HasMember("Account") && !rsp["Account"].IsNull())
    {
        if (!rsp["Account"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Account` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_account = string(rsp["Account"].GetString());
        m_accountHasBeenSet = true;
    }

    if (rsp.HasMember("Host") && !rsp["Host"].IsNull())
    {
        if (!rsp["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(rsp["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (rsp.HasMember("IdentifyId") && !rsp["IdentifyId"].IsNull())
    {
        if (!rsp["IdentifyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdentifyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifyId = string(rsp["IdentifyId"].GetString());
        m_identifyIdHasBeenSet = true;
    }

    if (rsp.HasMember("OwnerUin") && !rsp["OwnerUin"].IsNull())
    {
        if (!rsp["OwnerUin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OwnerUin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ownerUin.Deserialize(rsp["OwnerUin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownerUinHasBeenSet = true;
    }

    if (rsp.HasMember("Person") && !rsp["Person"].IsNull())
    {
        if (!rsp["Person"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Person` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_person.Deserialize(rsp["Person"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_personHasBeenSet = true;
    }

    if (rsp.HasMember("RiskName") && !rsp["RiskName"].IsNull())
    {
        if (!rsp["RiskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskName = string(rsp["RiskName"].GetString());
        m_riskNameHasBeenSet = true;
    }

    if (rsp.HasMember("RiskNameEn") && !rsp["RiskNameEn"].IsNull())
    {
        if (!rsp["RiskNameEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskNameEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskNameEn = string(rsp["RiskNameEn"].GetString());
        m_riskNameEnHasBeenSet = true;
    }

    if (rsp.HasMember("RiskData") && !rsp["RiskData"].IsNull())
    {
        if (!rsp["RiskData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskData = string(rsp["RiskData"].GetString());
        m_riskDataHasBeenSet = true;
    }

    if (rsp.HasMember("BaselineData") && !rsp["BaselineData"].IsNull())
    {
        if (!rsp["BaselineData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baselineData = string(rsp["BaselineData"].GetString());
        m_baselineDataHasBeenSet = true;
    }

    if (rsp.HasMember("RiskId") && !rsp["RiskId"].IsNull())
    {
        if (!rsp["RiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskId = string(rsp["RiskId"].GetString());
        m_riskIdHasBeenSet = true;
    }

    if (rsp.HasMember("StrategyType") && !rsp["StrategyType"].IsNull())
    {
        if (!rsp["StrategyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyType = string(rsp["StrategyType"].GetString());
        m_strategyTypeHasBeenSet = true;
    }

    if (rsp.HasMember("StrategyCategory") && !rsp["StrategyCategory"].IsNull())
    {
        if (!rsp["StrategyCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategyCategory = string(rsp["StrategyCategory"].GetString());
        m_strategyCategoryHasBeenSet = true;
    }

    if (rsp.HasMember("AccountType") && !rsp["AccountType"].IsNull())
    {
        if (!rsp["AccountType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = rsp["AccountType"].GetInt64();
        m_accountTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("IsAssetManager") && !rsp["IsAssetManager"].IsNull())
    {
        if (!rsp["IsAssetManager"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsAssetManager` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isAssetManager = rsp["IsAssetManager"].GetInt64();
        m_isAssetManagerHasBeenSet = true;
    }

    if (rsp.HasMember("DataBeginTime") && !rsp["DataBeginTime"].IsNull())
    {
        if (!rsp["DataBeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataBeginTime = string(rsp["DataBeginTime"].GetString());
        m_dataBeginTimeHasBeenSet = true;
    }

    if (rsp.HasMember("DataEndTime") && !rsp["DataEndTime"].IsNull())
    {
        if (!rsp["DataEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEndTime = string(rsp["DataEndTime"].GetString());
        m_dataEndTimeHasBeenSet = true;
    }

    if (rsp.HasMember("RiskType") && !rsp["RiskType"].IsNull())
    {
        if (!rsp["RiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskType = string(rsp["RiskType"].GetString());
        m_riskTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDspmRiskDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_detectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_account.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_identifyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identifyId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ownerUin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_personHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Person";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_person.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_riskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskNameEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskNameEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskNameEn.c_str(), allocator).Move(), allocator);
    }

    if (m_riskDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskData.c_str(), allocator).Move(), allocator);
    }

    if (m_baselineDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_baselineData.c_str(), allocator).Move(), allocator);
    }

    if (m_riskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskId.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyType.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategyCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountType, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_isAssetManagerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAssetManager";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAssetManager, allocator);
    }

    if (m_dataBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataBeginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_riskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskType.c_str(), allocator).Move(), allocator);
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


string DescribeDspmRiskDetailResponse::GetRiskLevel() const
{
    return m_riskLevel;
}

bool DescribeDspmRiskDetailResponse::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string DescribeDspmRiskDetailResponse::GetDetectTime() const
{
    return m_detectTime;
}

bool DescribeDspmRiskDetailResponse::DetectTimeHasBeenSet() const
{
    return m_detectTimeHasBeenSet;
}

string DescribeDspmRiskDetailResponse::GetAssetId() const
{
    return m_assetId;
}

bool DescribeDspmRiskDetailResponse::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string DescribeDspmRiskDetailResponse::GetAssetName() const
{
    return m_assetName;
}

bool DescribeDspmRiskDetailResponse::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

string DescribeDspmRiskDetailResponse::GetAssetType() const
{
    return m_assetType;
}

bool DescribeDspmRiskDetailResponse::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string DescribeDspmRiskDetailResponse::GetRegion() const
{
    return m_region;
}

bool DescribeDspmRiskDetailResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DescribeDspmRiskDetailResponse::GetPublicIp() const
{
    return m_publicIp;
}

bool DescribeDspmRiskDetailResponse::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string DescribeDspmRiskDetailResponse::GetPrivateIp() const
{
    return m_privateIp;
}

bool DescribeDspmRiskDetailResponse::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string DescribeDspmRiskDetailResponse::GetAccount() const
{
    return m_account;
}

bool DescribeDspmRiskDetailResponse::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string DescribeDspmRiskDetailResponse::GetHost() const
{
    return m_host;
}

bool DescribeDspmRiskDetailResponse::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string DescribeDspmRiskDetailResponse::GetIdentifyId() const
{
    return m_identifyId;
}

bool DescribeDspmRiskDetailResponse::IdentifyIdHasBeenSet() const
{
    return m_identifyIdHasBeenSet;
}

DspmUinUser DescribeDspmRiskDetailResponse::GetOwnerUin() const
{
    return m_ownerUin;
}

bool DescribeDspmRiskDetailResponse::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

DspmPersonUser DescribeDspmRiskDetailResponse::GetPerson() const
{
    return m_person;
}

bool DescribeDspmRiskDetailResponse::PersonHasBeenSet() const
{
    return m_personHasBeenSet;
}

string DescribeDspmRiskDetailResponse::GetRiskName() const
{
    return m_riskName;
}

bool DescribeDspmRiskDetailResponse::RiskNameHasBeenSet() const
{
    return m_riskNameHasBeenSet;
}

string DescribeDspmRiskDetailResponse::GetRiskNameEn() const
{
    return m_riskNameEn;
}

bool DescribeDspmRiskDetailResponse::RiskNameEnHasBeenSet() const
{
    return m_riskNameEnHasBeenSet;
}

string DescribeDspmRiskDetailResponse::GetRiskData() const
{
    return m_riskData;
}

bool DescribeDspmRiskDetailResponse::RiskDataHasBeenSet() const
{
    return m_riskDataHasBeenSet;
}

string DescribeDspmRiskDetailResponse::GetBaselineData() const
{
    return m_baselineData;
}

bool DescribeDspmRiskDetailResponse::BaselineDataHasBeenSet() const
{
    return m_baselineDataHasBeenSet;
}

string DescribeDspmRiskDetailResponse::GetRiskId() const
{
    return m_riskId;
}

bool DescribeDspmRiskDetailResponse::RiskIdHasBeenSet() const
{
    return m_riskIdHasBeenSet;
}

string DescribeDspmRiskDetailResponse::GetStrategyType() const
{
    return m_strategyType;
}

bool DescribeDspmRiskDetailResponse::StrategyTypeHasBeenSet() const
{
    return m_strategyTypeHasBeenSet;
}

string DescribeDspmRiskDetailResponse::GetStrategyCategory() const
{
    return m_strategyCategory;
}

bool DescribeDspmRiskDetailResponse::StrategyCategoryHasBeenSet() const
{
    return m_strategyCategoryHasBeenSet;
}

int64_t DescribeDspmRiskDetailResponse::GetAccountType() const
{
    return m_accountType;
}

bool DescribeDspmRiskDetailResponse::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

int64_t DescribeDspmRiskDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeDspmRiskDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeDspmRiskDetailResponse::GetIsAssetManager() const
{
    return m_isAssetManager;
}

bool DescribeDspmRiskDetailResponse::IsAssetManagerHasBeenSet() const
{
    return m_isAssetManagerHasBeenSet;
}

string DescribeDspmRiskDetailResponse::GetDataBeginTime() const
{
    return m_dataBeginTime;
}

bool DescribeDspmRiskDetailResponse::DataBeginTimeHasBeenSet() const
{
    return m_dataBeginTimeHasBeenSet;
}

string DescribeDspmRiskDetailResponse::GetDataEndTime() const
{
    return m_dataEndTime;
}

bool DescribeDspmRiskDetailResponse::DataEndTimeHasBeenSet() const
{
    return m_dataEndTimeHasBeenSet;
}

string DescribeDspmRiskDetailResponse::GetRiskType() const
{
    return m_riskType;
}

bool DescribeDspmRiskDetailResponse::RiskTypeHasBeenSet() const
{
    return m_riskTypeHasBeenSet;
}


