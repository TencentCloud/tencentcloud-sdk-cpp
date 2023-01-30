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

#include <tencentcloud/cdb/v20170320/model/DescribeDBFeaturesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeDBFeaturesResponse::DescribeDBFeaturesResponse() :
    m_isSupportAuditHasBeenSet(false),
    m_auditNeedUpgradeHasBeenSet(false),
    m_isSupportEncryptionHasBeenSet(false),
    m_encryptionNeedUpgradeHasBeenSet(false),
    m_isRemoteRoHasBeenSet(false),
    m_masterRegionHasBeenSet(false),
    m_isSupportUpdateSubVersionHasBeenSet(false),
    m_currentSubVersionHasBeenSet(false),
    m_targetSubVersionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBFeaturesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("IsSupportAudit") && !rsp["IsSupportAudit"].IsNull())
    {
        if (!rsp["IsSupportAudit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsSupportAudit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportAudit = rsp["IsSupportAudit"].GetBool();
        m_isSupportAuditHasBeenSet = true;
    }

    if (rsp.HasMember("AuditNeedUpgrade") && !rsp["AuditNeedUpgrade"].IsNull())
    {
        if (!rsp["AuditNeedUpgrade"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AuditNeedUpgrade` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_auditNeedUpgrade = rsp["AuditNeedUpgrade"].GetBool();
        m_auditNeedUpgradeHasBeenSet = true;
    }

    if (rsp.HasMember("IsSupportEncryption") && !rsp["IsSupportEncryption"].IsNull())
    {
        if (!rsp["IsSupportEncryption"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsSupportEncryption` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportEncryption = rsp["IsSupportEncryption"].GetBool();
        m_isSupportEncryptionHasBeenSet = true;
    }

    if (rsp.HasMember("EncryptionNeedUpgrade") && !rsp["EncryptionNeedUpgrade"].IsNull())
    {
        if (!rsp["EncryptionNeedUpgrade"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptionNeedUpgrade` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_encryptionNeedUpgrade = rsp["EncryptionNeedUpgrade"].GetBool();
        m_encryptionNeedUpgradeHasBeenSet = true;
    }

    if (rsp.HasMember("IsRemoteRo") && !rsp["IsRemoteRo"].IsNull())
    {
        if (!rsp["IsRemoteRo"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsRemoteRo` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRemoteRo = rsp["IsRemoteRo"].GetBool();
        m_isRemoteRoHasBeenSet = true;
    }

    if (rsp.HasMember("MasterRegion") && !rsp["MasterRegion"].IsNull())
    {
        if (!rsp["MasterRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MasterRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterRegion = string(rsp["MasterRegion"].GetString());
        m_masterRegionHasBeenSet = true;
    }

    if (rsp.HasMember("IsSupportUpdateSubVersion") && !rsp["IsSupportUpdateSubVersion"].IsNull())
    {
        if (!rsp["IsSupportUpdateSubVersion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsSupportUpdateSubVersion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportUpdateSubVersion = rsp["IsSupportUpdateSubVersion"].GetBool();
        m_isSupportUpdateSubVersionHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentSubVersion") && !rsp["CurrentSubVersion"].IsNull())
    {
        if (!rsp["CurrentSubVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentSubVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentSubVersion = string(rsp["CurrentSubVersion"].GetString());
        m_currentSubVersionHasBeenSet = true;
    }

    if (rsp.HasMember("TargetSubVersion") && !rsp["TargetSubVersion"].IsNull())
    {
        if (!rsp["TargetSubVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetSubVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetSubVersion = string(rsp["TargetSubVersion"].GetString());
        m_targetSubVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDBFeaturesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_isSupportAuditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportAudit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportAudit, allocator);
    }

    if (m_auditNeedUpgradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditNeedUpgrade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditNeedUpgrade, allocator);
    }

    if (m_isSupportEncryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportEncryption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportEncryption, allocator);
    }

    if (m_encryptionNeedUpgradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptionNeedUpgrade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encryptionNeedUpgrade, allocator);
    }

    if (m_isRemoteRoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRemoteRo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRemoteRo, allocator);
    }

    if (m_masterRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_masterRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_isSupportUpdateSubVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportUpdateSubVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportUpdateSubVersion, allocator);
    }

    if (m_currentSubVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentSubVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentSubVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_targetSubVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetSubVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetSubVersion.c_str(), allocator).Move(), allocator);
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


bool DescribeDBFeaturesResponse::GetIsSupportAudit() const
{
    return m_isSupportAudit;
}

bool DescribeDBFeaturesResponse::IsSupportAuditHasBeenSet() const
{
    return m_isSupportAuditHasBeenSet;
}

bool DescribeDBFeaturesResponse::GetAuditNeedUpgrade() const
{
    return m_auditNeedUpgrade;
}

bool DescribeDBFeaturesResponse::AuditNeedUpgradeHasBeenSet() const
{
    return m_auditNeedUpgradeHasBeenSet;
}

bool DescribeDBFeaturesResponse::GetIsSupportEncryption() const
{
    return m_isSupportEncryption;
}

bool DescribeDBFeaturesResponse::IsSupportEncryptionHasBeenSet() const
{
    return m_isSupportEncryptionHasBeenSet;
}

bool DescribeDBFeaturesResponse::GetEncryptionNeedUpgrade() const
{
    return m_encryptionNeedUpgrade;
}

bool DescribeDBFeaturesResponse::EncryptionNeedUpgradeHasBeenSet() const
{
    return m_encryptionNeedUpgradeHasBeenSet;
}

bool DescribeDBFeaturesResponse::GetIsRemoteRo() const
{
    return m_isRemoteRo;
}

bool DescribeDBFeaturesResponse::IsRemoteRoHasBeenSet() const
{
    return m_isRemoteRoHasBeenSet;
}

string DescribeDBFeaturesResponse::GetMasterRegion() const
{
    return m_masterRegion;
}

bool DescribeDBFeaturesResponse::MasterRegionHasBeenSet() const
{
    return m_masterRegionHasBeenSet;
}

bool DescribeDBFeaturesResponse::GetIsSupportUpdateSubVersion() const
{
    return m_isSupportUpdateSubVersion;
}

bool DescribeDBFeaturesResponse::IsSupportUpdateSubVersionHasBeenSet() const
{
    return m_isSupportUpdateSubVersionHasBeenSet;
}

string DescribeDBFeaturesResponse::GetCurrentSubVersion() const
{
    return m_currentSubVersion;
}

bool DescribeDBFeaturesResponse::CurrentSubVersionHasBeenSet() const
{
    return m_currentSubVersionHasBeenSet;
}

string DescribeDBFeaturesResponse::GetTargetSubVersion() const
{
    return m_targetSubVersion;
}

bool DescribeDBFeaturesResponse::TargetSubVersionHasBeenSet() const
{
    return m_targetSubVersionHasBeenSet;
}


