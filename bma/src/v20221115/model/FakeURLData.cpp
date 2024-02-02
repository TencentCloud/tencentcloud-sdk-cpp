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

#include <tencentcloud/bma/v20221115/model/FakeURLData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bma::V20221115::Model;
using namespace std;

FakeURLData::FakeURLData() :
    m_fakeURLIdHasBeenSet(false),
    m_brandNameHasBeenSet(false),
    m_originHasBeenSet(false),
    m_fakeURLHasBeenSet(false),
    m_fakeDomainHasBeenSet(false),
    m_heatHasBeenSet(false),
    m_blockStatusHasBeenSet(false),
    m_blockNoteHasBeenSet(false),
    m_offlineStatusHasBeenSet(false),
    m_offlineNoteHasBeenSet(false),
    m_iPHasBeenSet(false),
    m_iPLocationHasBeenSet(false),
    m_webCompanyHasBeenSet(false),
    m_webAttributeHasBeenSet(false),
    m_webNameHasBeenSet(false),
    m_webICPHasBeenSet(false),
    m_webCreateTimeHasBeenSet(false),
    m_webExpireTimeHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_certificationStatusHasBeenSet(false),
    m_snapshotHasBeenSet(false),
    m_accountStatusHasBeenSet(false),
    m_auditStatusHasBeenSet(false),
    m_offlineTimeHasBeenSet(false)
{
}

CoreInternalOutcome FakeURLData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FakeURLId") && !value["FakeURLId"].IsNull())
    {
        if (!value["FakeURLId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FakeURLData.FakeURLId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fakeURLId = value["FakeURLId"].GetInt64();
        m_fakeURLIdHasBeenSet = true;
    }

    if (value.HasMember("BrandName") && !value["BrandName"].IsNull())
    {
        if (!value["BrandName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeURLData.BrandName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brandName = string(value["BrandName"].GetString());
        m_brandNameHasBeenSet = true;
    }

    if (value.HasMember("Origin") && !value["Origin"].IsNull())
    {
        if (!value["Origin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FakeURLData.Origin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_origin = value["Origin"].GetInt64();
        m_originHasBeenSet = true;
    }

    if (value.HasMember("FakeURL") && !value["FakeURL"].IsNull())
    {
        if (!value["FakeURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeURLData.FakeURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fakeURL = string(value["FakeURL"].GetString());
        m_fakeURLHasBeenSet = true;
    }

    if (value.HasMember("FakeDomain") && !value["FakeDomain"].IsNull())
    {
        if (!value["FakeDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeURLData.FakeDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fakeDomain = string(value["FakeDomain"].GetString());
        m_fakeDomainHasBeenSet = true;
    }

    if (value.HasMember("Heat") && !value["Heat"].IsNull())
    {
        if (!value["Heat"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FakeURLData.Heat` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_heat = value["Heat"].GetInt64();
        m_heatHasBeenSet = true;
    }

    if (value.HasMember("BlockStatus") && !value["BlockStatus"].IsNull())
    {
        if (!value["BlockStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FakeURLData.BlockStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockStatus = value["BlockStatus"].GetInt64();
        m_blockStatusHasBeenSet = true;
    }

    if (value.HasMember("BlockNote") && !value["BlockNote"].IsNull())
    {
        if (!value["BlockNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeURLData.BlockNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockNote = string(value["BlockNote"].GetString());
        m_blockNoteHasBeenSet = true;
    }

    if (value.HasMember("OfflineStatus") && !value["OfflineStatus"].IsNull())
    {
        if (!value["OfflineStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FakeURLData.OfflineStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offlineStatus = value["OfflineStatus"].GetInt64();
        m_offlineStatusHasBeenSet = true;
    }

    if (value.HasMember("OfflineNote") && !value["OfflineNote"].IsNull())
    {
        if (!value["OfflineNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeURLData.OfflineNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offlineNote = string(value["OfflineNote"].GetString());
        m_offlineNoteHasBeenSet = true;
    }

    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeURLData.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("IPLocation") && !value["IPLocation"].IsNull())
    {
        if (!value["IPLocation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeURLData.IPLocation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iPLocation = string(value["IPLocation"].GetString());
        m_iPLocationHasBeenSet = true;
    }

    if (value.HasMember("WebCompany") && !value["WebCompany"].IsNull())
    {
        if (!value["WebCompany"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeURLData.WebCompany` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webCompany = string(value["WebCompany"].GetString());
        m_webCompanyHasBeenSet = true;
    }

    if (value.HasMember("WebAttribute") && !value["WebAttribute"].IsNull())
    {
        if (!value["WebAttribute"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeURLData.WebAttribute` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webAttribute = string(value["WebAttribute"].GetString());
        m_webAttributeHasBeenSet = true;
    }

    if (value.HasMember("WebName") && !value["WebName"].IsNull())
    {
        if (!value["WebName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeURLData.WebName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webName = string(value["WebName"].GetString());
        m_webNameHasBeenSet = true;
    }

    if (value.HasMember("WebICP") && !value["WebICP"].IsNull())
    {
        if (!value["WebICP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeURLData.WebICP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webICP = string(value["WebICP"].GetString());
        m_webICPHasBeenSet = true;
    }

    if (value.HasMember("WebCreateTime") && !value["WebCreateTime"].IsNull())
    {
        if (!value["WebCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeURLData.WebCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webCreateTime = string(value["WebCreateTime"].GetString());
        m_webCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("WebExpireTime") && !value["WebExpireTime"].IsNull())
    {
        if (!value["WebExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeURLData.WebExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webExpireTime = string(value["WebExpireTime"].GetString());
        m_webExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeURLData.InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(value["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }

    if (value.HasMember("CertificationStatus") && !value["CertificationStatus"].IsNull())
    {
        if (!value["CertificationStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FakeURLData.CertificationStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_certificationStatus = value["CertificationStatus"].GetInt64();
        m_certificationStatusHasBeenSet = true;
    }

    if (value.HasMember("Snapshot") && !value["Snapshot"].IsNull())
    {
        if (!value["Snapshot"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeURLData.Snapshot` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshot = string(value["Snapshot"].GetString());
        m_snapshotHasBeenSet = true;
    }

    if (value.HasMember("AccountStatus") && !value["AccountStatus"].IsNull())
    {
        if (!value["AccountStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FakeURLData.AccountStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountStatus = value["AccountStatus"].GetInt64();
        m_accountStatusHasBeenSet = true;
    }

    if (value.HasMember("AuditStatus") && !value["AuditStatus"].IsNull())
    {
        if (!value["AuditStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FakeURLData.AuditStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_auditStatus = value["AuditStatus"].GetInt64();
        m_auditStatusHasBeenSet = true;
    }

    if (value.HasMember("OfflineTime") && !value["OfflineTime"].IsNull())
    {
        if (!value["OfflineTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeURLData.OfflineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offlineTime = string(value["OfflineTime"].GetString());
        m_offlineTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FakeURLData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fakeURLIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeURLId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fakeURLId, allocator);
    }

    if (m_brandNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brandName.c_str(), allocator).Move(), allocator);
    }

    if (m_originHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_origin, allocator);
    }

    if (m_fakeURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fakeURL.c_str(), allocator).Move(), allocator);
    }

    if (m_fakeDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fakeDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_heatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Heat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_heat, allocator);
    }

    if (m_blockStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockStatus, allocator);
    }

    if (m_blockNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockNote.c_str(), allocator).Move(), allocator);
    }

    if (m_offlineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offlineStatus, allocator);
    }

    if (m_offlineNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offlineNote.c_str(), allocator).Move(), allocator);
    }

    if (m_iPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_iPLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iPLocation.c_str(), allocator).Move(), allocator);
    }

    if (m_webCompanyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebCompany";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webCompany.c_str(), allocator).Move(), allocator);
    }

    if (m_webAttributeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebAttribute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webAttribute.c_str(), allocator).Move(), allocator);
    }

    if (m_webNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webName.c_str(), allocator).Move(), allocator);
    }

    if (m_webICPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebICP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webICP.c_str(), allocator).Move(), allocator);
    }

    if (m_webCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_webExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webExpireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insertTime.c_str(), allocator).Move(), allocator);
    }

    if (m_certificationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certificationStatus, allocator);
    }

    if (m_snapshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Snapshot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshot.c_str(), allocator).Move(), allocator);
    }

    if (m_accountStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountStatus, allocator);
    }

    if (m_auditStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditStatus, allocator);
    }

    if (m_offlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offlineTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t FakeURLData::GetFakeURLId() const
{
    return m_fakeURLId;
}

void FakeURLData::SetFakeURLId(const int64_t& _fakeURLId)
{
    m_fakeURLId = _fakeURLId;
    m_fakeURLIdHasBeenSet = true;
}

bool FakeURLData::FakeURLIdHasBeenSet() const
{
    return m_fakeURLIdHasBeenSet;
}

string FakeURLData::GetBrandName() const
{
    return m_brandName;
}

void FakeURLData::SetBrandName(const string& _brandName)
{
    m_brandName = _brandName;
    m_brandNameHasBeenSet = true;
}

bool FakeURLData::BrandNameHasBeenSet() const
{
    return m_brandNameHasBeenSet;
}

int64_t FakeURLData::GetOrigin() const
{
    return m_origin;
}

void FakeURLData::SetOrigin(const int64_t& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool FakeURLData::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

string FakeURLData::GetFakeURL() const
{
    return m_fakeURL;
}

void FakeURLData::SetFakeURL(const string& _fakeURL)
{
    m_fakeURL = _fakeURL;
    m_fakeURLHasBeenSet = true;
}

bool FakeURLData::FakeURLHasBeenSet() const
{
    return m_fakeURLHasBeenSet;
}

string FakeURLData::GetFakeDomain() const
{
    return m_fakeDomain;
}

void FakeURLData::SetFakeDomain(const string& _fakeDomain)
{
    m_fakeDomain = _fakeDomain;
    m_fakeDomainHasBeenSet = true;
}

bool FakeURLData::FakeDomainHasBeenSet() const
{
    return m_fakeDomainHasBeenSet;
}

int64_t FakeURLData::GetHeat() const
{
    return m_heat;
}

void FakeURLData::SetHeat(const int64_t& _heat)
{
    m_heat = _heat;
    m_heatHasBeenSet = true;
}

bool FakeURLData::HeatHasBeenSet() const
{
    return m_heatHasBeenSet;
}

int64_t FakeURLData::GetBlockStatus() const
{
    return m_blockStatus;
}

void FakeURLData::SetBlockStatus(const int64_t& _blockStatus)
{
    m_blockStatus = _blockStatus;
    m_blockStatusHasBeenSet = true;
}

bool FakeURLData::BlockStatusHasBeenSet() const
{
    return m_blockStatusHasBeenSet;
}

string FakeURLData::GetBlockNote() const
{
    return m_blockNote;
}

void FakeURLData::SetBlockNote(const string& _blockNote)
{
    m_blockNote = _blockNote;
    m_blockNoteHasBeenSet = true;
}

bool FakeURLData::BlockNoteHasBeenSet() const
{
    return m_blockNoteHasBeenSet;
}

int64_t FakeURLData::GetOfflineStatus() const
{
    return m_offlineStatus;
}

void FakeURLData::SetOfflineStatus(const int64_t& _offlineStatus)
{
    m_offlineStatus = _offlineStatus;
    m_offlineStatusHasBeenSet = true;
}

bool FakeURLData::OfflineStatusHasBeenSet() const
{
    return m_offlineStatusHasBeenSet;
}

string FakeURLData::GetOfflineNote() const
{
    return m_offlineNote;
}

void FakeURLData::SetOfflineNote(const string& _offlineNote)
{
    m_offlineNote = _offlineNote;
    m_offlineNoteHasBeenSet = true;
}

bool FakeURLData::OfflineNoteHasBeenSet() const
{
    return m_offlineNoteHasBeenSet;
}

string FakeURLData::GetIP() const
{
    return m_iP;
}

void FakeURLData::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool FakeURLData::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

string FakeURLData::GetIPLocation() const
{
    return m_iPLocation;
}

void FakeURLData::SetIPLocation(const string& _iPLocation)
{
    m_iPLocation = _iPLocation;
    m_iPLocationHasBeenSet = true;
}

bool FakeURLData::IPLocationHasBeenSet() const
{
    return m_iPLocationHasBeenSet;
}

string FakeURLData::GetWebCompany() const
{
    return m_webCompany;
}

void FakeURLData::SetWebCompany(const string& _webCompany)
{
    m_webCompany = _webCompany;
    m_webCompanyHasBeenSet = true;
}

bool FakeURLData::WebCompanyHasBeenSet() const
{
    return m_webCompanyHasBeenSet;
}

string FakeURLData::GetWebAttribute() const
{
    return m_webAttribute;
}

void FakeURLData::SetWebAttribute(const string& _webAttribute)
{
    m_webAttribute = _webAttribute;
    m_webAttributeHasBeenSet = true;
}

bool FakeURLData::WebAttributeHasBeenSet() const
{
    return m_webAttributeHasBeenSet;
}

string FakeURLData::GetWebName() const
{
    return m_webName;
}

void FakeURLData::SetWebName(const string& _webName)
{
    m_webName = _webName;
    m_webNameHasBeenSet = true;
}

bool FakeURLData::WebNameHasBeenSet() const
{
    return m_webNameHasBeenSet;
}

string FakeURLData::GetWebICP() const
{
    return m_webICP;
}

void FakeURLData::SetWebICP(const string& _webICP)
{
    m_webICP = _webICP;
    m_webICPHasBeenSet = true;
}

bool FakeURLData::WebICPHasBeenSet() const
{
    return m_webICPHasBeenSet;
}

string FakeURLData::GetWebCreateTime() const
{
    return m_webCreateTime;
}

void FakeURLData::SetWebCreateTime(const string& _webCreateTime)
{
    m_webCreateTime = _webCreateTime;
    m_webCreateTimeHasBeenSet = true;
}

bool FakeURLData::WebCreateTimeHasBeenSet() const
{
    return m_webCreateTimeHasBeenSet;
}

string FakeURLData::GetWebExpireTime() const
{
    return m_webExpireTime;
}

void FakeURLData::SetWebExpireTime(const string& _webExpireTime)
{
    m_webExpireTime = _webExpireTime;
    m_webExpireTimeHasBeenSet = true;
}

bool FakeURLData::WebExpireTimeHasBeenSet() const
{
    return m_webExpireTimeHasBeenSet;
}

string FakeURLData::GetInsertTime() const
{
    return m_insertTime;
}

void FakeURLData::SetInsertTime(const string& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool FakeURLData::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

int64_t FakeURLData::GetCertificationStatus() const
{
    return m_certificationStatus;
}

void FakeURLData::SetCertificationStatus(const int64_t& _certificationStatus)
{
    m_certificationStatus = _certificationStatus;
    m_certificationStatusHasBeenSet = true;
}

bool FakeURLData::CertificationStatusHasBeenSet() const
{
    return m_certificationStatusHasBeenSet;
}

string FakeURLData::GetSnapshot() const
{
    return m_snapshot;
}

void FakeURLData::SetSnapshot(const string& _snapshot)
{
    m_snapshot = _snapshot;
    m_snapshotHasBeenSet = true;
}

bool FakeURLData::SnapshotHasBeenSet() const
{
    return m_snapshotHasBeenSet;
}

int64_t FakeURLData::GetAccountStatus() const
{
    return m_accountStatus;
}

void FakeURLData::SetAccountStatus(const int64_t& _accountStatus)
{
    m_accountStatus = _accountStatus;
    m_accountStatusHasBeenSet = true;
}

bool FakeURLData::AccountStatusHasBeenSet() const
{
    return m_accountStatusHasBeenSet;
}

int64_t FakeURLData::GetAuditStatus() const
{
    return m_auditStatus;
}

void FakeURLData::SetAuditStatus(const int64_t& _auditStatus)
{
    m_auditStatus = _auditStatus;
    m_auditStatusHasBeenSet = true;
}

bool FakeURLData::AuditStatusHasBeenSet() const
{
    return m_auditStatusHasBeenSet;
}

string FakeURLData::GetOfflineTime() const
{
    return m_offlineTime;
}

void FakeURLData::SetOfflineTime(const string& _offlineTime)
{
    m_offlineTime = _offlineTime;
    m_offlineTimeHasBeenSet = true;
}

bool FakeURLData::OfflineTimeHasBeenSet() const
{
    return m_offlineTimeHasBeenSet;
}

