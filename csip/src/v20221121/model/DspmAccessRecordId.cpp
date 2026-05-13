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

#include <tencentcloud/csip/v20221121/model/DspmAccessRecordId.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmAccessRecordId::DspmAccessRecordId() :
    m_sourceIpHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_recordTimeHasBeenSet(false)
{
}

CoreInternalOutcome DspmAccessRecordId::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceIp") && !value["SourceIp"].IsNull())
    {
        if (!value["SourceIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAccessRecordId.SourceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIp = string(value["SourceIp"].GetString());
        m_sourceIpHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAccessRecordId.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAccessRecordId.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Account") && !value["Account"].IsNull())
    {
        if (!value["Account"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAccessRecordId.Account` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_account = string(value["Account"].GetString());
        m_accountHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAccessRecordId.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("RecordTime") && !value["RecordTime"].IsNull())
    {
        if (!value["RecordTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAccessRecordId.RecordTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordTime = string(value["RecordTime"].GetString());
        m_recordTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmAccessRecordId::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
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

    if (m_recordTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordTime.c_str(), allocator).Move(), allocator);
    }

}


string DspmAccessRecordId::GetSourceIp() const
{
    return m_sourceIp;
}

void DspmAccessRecordId::SetSourceIp(const string& _sourceIp)
{
    m_sourceIp = _sourceIp;
    m_sourceIpHasBeenSet = true;
}

bool DspmAccessRecordId::SourceIpHasBeenSet() const
{
    return m_sourceIpHasBeenSet;
}

string DspmAccessRecordId::GetAssetId() const
{
    return m_assetId;
}

void DspmAccessRecordId::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool DspmAccessRecordId::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string DspmAccessRecordId::GetRegion() const
{
    return m_region;
}

void DspmAccessRecordId::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DspmAccessRecordId::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DspmAccessRecordId::GetAccount() const
{
    return m_account;
}

void DspmAccessRecordId::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool DspmAccessRecordId::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string DspmAccessRecordId::GetHost() const
{
    return m_host;
}

void DspmAccessRecordId::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DspmAccessRecordId::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string DspmAccessRecordId::GetRecordTime() const
{
    return m_recordTime;
}

void DspmAccessRecordId::SetRecordTime(const string& _recordTime)
{
    m_recordTime = _recordTime;
    m_recordTimeHasBeenSet = true;
}

bool DspmAccessRecordId::RecordTimeHasBeenSet() const
{
    return m_recordTimeHasBeenSet;
}

