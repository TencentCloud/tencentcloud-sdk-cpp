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

#include <tencentcloud/bma/v20221115/model/FakeAPPData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bma::V20221115::Model;
using namespace std;

FakeAPPData::FakeAPPData() :
    m_fakeAPPIdHasBeenSet(false),
    m_brandNameHasBeenSet(false),
    m_originHasBeenSet(false),
    m_fakeAPPNameHasBeenSet(false),
    m_fakeAPPPackageNameHasBeenSet(false),
    m_fakeAPPCertHasBeenSet(false),
    m_fakeAPPSizeHasBeenSet(false),
    m_heatHasBeenSet(false),
    m_blockStatusHasBeenSet(false),
    m_blockNoteHasBeenSet(false),
    m_offlineStatusHasBeenSet(false),
    m_offlineNoteHasBeenSet(false),
    m_downloadWayHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_downloadCosURLHasBeenSet(false),
    m_certificationStatusHasBeenSet(false)
{
}

CoreInternalOutcome FakeAPPData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FakeAPPId") && !value["FakeAPPId"].IsNull())
    {
        if (!value["FakeAPPId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FakeAPPData.FakeAPPId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fakeAPPId = value["FakeAPPId"].GetInt64();
        m_fakeAPPIdHasBeenSet = true;
    }

    if (value.HasMember("BrandName") && !value["BrandName"].IsNull())
    {
        if (!value["BrandName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeAPPData.BrandName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brandName = string(value["BrandName"].GetString());
        m_brandNameHasBeenSet = true;
    }

    if (value.HasMember("Origin") && !value["Origin"].IsNull())
    {
        if (!value["Origin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FakeAPPData.Origin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_origin = value["Origin"].GetInt64();
        m_originHasBeenSet = true;
    }

    if (value.HasMember("FakeAPPName") && !value["FakeAPPName"].IsNull())
    {
        if (!value["FakeAPPName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeAPPData.FakeAPPName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fakeAPPName = string(value["FakeAPPName"].GetString());
        m_fakeAPPNameHasBeenSet = true;
    }

    if (value.HasMember("FakeAPPPackageName") && !value["FakeAPPPackageName"].IsNull())
    {
        if (!value["FakeAPPPackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeAPPData.FakeAPPPackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fakeAPPPackageName = string(value["FakeAPPPackageName"].GetString());
        m_fakeAPPPackageNameHasBeenSet = true;
    }

    if (value.HasMember("FakeAPPCert") && !value["FakeAPPCert"].IsNull())
    {
        if (!value["FakeAPPCert"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeAPPData.FakeAPPCert` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fakeAPPCert = string(value["FakeAPPCert"].GetString());
        m_fakeAPPCertHasBeenSet = true;
    }

    if (value.HasMember("FakeAPPSize") && !value["FakeAPPSize"].IsNull())
    {
        if (!value["FakeAPPSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeAPPData.FakeAPPSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fakeAPPSize = string(value["FakeAPPSize"].GetString());
        m_fakeAPPSizeHasBeenSet = true;
    }

    if (value.HasMember("Heat") && !value["Heat"].IsNull())
    {
        if (!value["Heat"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FakeAPPData.Heat` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_heat = value["Heat"].GetInt64();
        m_heatHasBeenSet = true;
    }

    if (value.HasMember("BlockStatus") && !value["BlockStatus"].IsNull())
    {
        if (!value["BlockStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FakeAPPData.BlockStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockStatus = value["BlockStatus"].GetInt64();
        m_blockStatusHasBeenSet = true;
    }

    if (value.HasMember("BlockNote") && !value["BlockNote"].IsNull())
    {
        if (!value["BlockNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeAPPData.BlockNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockNote = string(value["BlockNote"].GetString());
        m_blockNoteHasBeenSet = true;
    }

    if (value.HasMember("OfflineStatus") && !value["OfflineStatus"].IsNull())
    {
        if (!value["OfflineStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FakeAPPData.OfflineStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offlineStatus = value["OfflineStatus"].GetInt64();
        m_offlineStatusHasBeenSet = true;
    }

    if (value.HasMember("OfflineNote") && !value["OfflineNote"].IsNull())
    {
        if (!value["OfflineNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeAPPData.OfflineNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offlineNote = string(value["OfflineNote"].GetString());
        m_offlineNoteHasBeenSet = true;
    }

    if (value.HasMember("DownloadWay") && !value["DownloadWay"].IsNull())
    {
        if (!value["DownloadWay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeAPPData.DownloadWay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadWay = string(value["DownloadWay"].GetString());
        m_downloadWayHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeAPPData.InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(value["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }

    if (value.HasMember("DownloadCosURL") && !value["DownloadCosURL"].IsNull())
    {
        if (!value["DownloadCosURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FakeAPPData.DownloadCosURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadCosURL = string(value["DownloadCosURL"].GetString());
        m_downloadCosURLHasBeenSet = true;
    }

    if (value.HasMember("CertificationStatus") && !value["CertificationStatus"].IsNull())
    {
        if (!value["CertificationStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FakeAPPData.CertificationStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_certificationStatus = value["CertificationStatus"].GetInt64();
        m_certificationStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FakeAPPData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fakeAPPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeAPPId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fakeAPPId, allocator);
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

    if (m_fakeAPPNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeAPPName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fakeAPPName.c_str(), allocator).Move(), allocator);
    }

    if (m_fakeAPPPackageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeAPPPackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fakeAPPPackageName.c_str(), allocator).Move(), allocator);
    }

    if (m_fakeAPPCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeAPPCert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fakeAPPCert.c_str(), allocator).Move(), allocator);
    }

    if (m_fakeAPPSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeAPPSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fakeAPPSize.c_str(), allocator).Move(), allocator);
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

    if (m_downloadWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadWay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadWay.c_str(), allocator).Move(), allocator);
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insertTime.c_str(), allocator).Move(), allocator);
    }

    if (m_downloadCosURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadCosURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadCosURL.c_str(), allocator).Move(), allocator);
    }

    if (m_certificationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certificationStatus, allocator);
    }

}


int64_t FakeAPPData::GetFakeAPPId() const
{
    return m_fakeAPPId;
}

void FakeAPPData::SetFakeAPPId(const int64_t& _fakeAPPId)
{
    m_fakeAPPId = _fakeAPPId;
    m_fakeAPPIdHasBeenSet = true;
}

bool FakeAPPData::FakeAPPIdHasBeenSet() const
{
    return m_fakeAPPIdHasBeenSet;
}

string FakeAPPData::GetBrandName() const
{
    return m_brandName;
}

void FakeAPPData::SetBrandName(const string& _brandName)
{
    m_brandName = _brandName;
    m_brandNameHasBeenSet = true;
}

bool FakeAPPData::BrandNameHasBeenSet() const
{
    return m_brandNameHasBeenSet;
}

int64_t FakeAPPData::GetOrigin() const
{
    return m_origin;
}

void FakeAPPData::SetOrigin(const int64_t& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool FakeAPPData::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

string FakeAPPData::GetFakeAPPName() const
{
    return m_fakeAPPName;
}

void FakeAPPData::SetFakeAPPName(const string& _fakeAPPName)
{
    m_fakeAPPName = _fakeAPPName;
    m_fakeAPPNameHasBeenSet = true;
}

bool FakeAPPData::FakeAPPNameHasBeenSet() const
{
    return m_fakeAPPNameHasBeenSet;
}

string FakeAPPData::GetFakeAPPPackageName() const
{
    return m_fakeAPPPackageName;
}

void FakeAPPData::SetFakeAPPPackageName(const string& _fakeAPPPackageName)
{
    m_fakeAPPPackageName = _fakeAPPPackageName;
    m_fakeAPPPackageNameHasBeenSet = true;
}

bool FakeAPPData::FakeAPPPackageNameHasBeenSet() const
{
    return m_fakeAPPPackageNameHasBeenSet;
}

string FakeAPPData::GetFakeAPPCert() const
{
    return m_fakeAPPCert;
}

void FakeAPPData::SetFakeAPPCert(const string& _fakeAPPCert)
{
    m_fakeAPPCert = _fakeAPPCert;
    m_fakeAPPCertHasBeenSet = true;
}

bool FakeAPPData::FakeAPPCertHasBeenSet() const
{
    return m_fakeAPPCertHasBeenSet;
}

string FakeAPPData::GetFakeAPPSize() const
{
    return m_fakeAPPSize;
}

void FakeAPPData::SetFakeAPPSize(const string& _fakeAPPSize)
{
    m_fakeAPPSize = _fakeAPPSize;
    m_fakeAPPSizeHasBeenSet = true;
}

bool FakeAPPData::FakeAPPSizeHasBeenSet() const
{
    return m_fakeAPPSizeHasBeenSet;
}

int64_t FakeAPPData::GetHeat() const
{
    return m_heat;
}

void FakeAPPData::SetHeat(const int64_t& _heat)
{
    m_heat = _heat;
    m_heatHasBeenSet = true;
}

bool FakeAPPData::HeatHasBeenSet() const
{
    return m_heatHasBeenSet;
}

int64_t FakeAPPData::GetBlockStatus() const
{
    return m_blockStatus;
}

void FakeAPPData::SetBlockStatus(const int64_t& _blockStatus)
{
    m_blockStatus = _blockStatus;
    m_blockStatusHasBeenSet = true;
}

bool FakeAPPData::BlockStatusHasBeenSet() const
{
    return m_blockStatusHasBeenSet;
}

string FakeAPPData::GetBlockNote() const
{
    return m_blockNote;
}

void FakeAPPData::SetBlockNote(const string& _blockNote)
{
    m_blockNote = _blockNote;
    m_blockNoteHasBeenSet = true;
}

bool FakeAPPData::BlockNoteHasBeenSet() const
{
    return m_blockNoteHasBeenSet;
}

int64_t FakeAPPData::GetOfflineStatus() const
{
    return m_offlineStatus;
}

void FakeAPPData::SetOfflineStatus(const int64_t& _offlineStatus)
{
    m_offlineStatus = _offlineStatus;
    m_offlineStatusHasBeenSet = true;
}

bool FakeAPPData::OfflineStatusHasBeenSet() const
{
    return m_offlineStatusHasBeenSet;
}

string FakeAPPData::GetOfflineNote() const
{
    return m_offlineNote;
}

void FakeAPPData::SetOfflineNote(const string& _offlineNote)
{
    m_offlineNote = _offlineNote;
    m_offlineNoteHasBeenSet = true;
}

bool FakeAPPData::OfflineNoteHasBeenSet() const
{
    return m_offlineNoteHasBeenSet;
}

string FakeAPPData::GetDownloadWay() const
{
    return m_downloadWay;
}

void FakeAPPData::SetDownloadWay(const string& _downloadWay)
{
    m_downloadWay = _downloadWay;
    m_downloadWayHasBeenSet = true;
}

bool FakeAPPData::DownloadWayHasBeenSet() const
{
    return m_downloadWayHasBeenSet;
}

string FakeAPPData::GetInsertTime() const
{
    return m_insertTime;
}

void FakeAPPData::SetInsertTime(const string& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool FakeAPPData::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

string FakeAPPData::GetDownloadCosURL() const
{
    return m_downloadCosURL;
}

void FakeAPPData::SetDownloadCosURL(const string& _downloadCosURL)
{
    m_downloadCosURL = _downloadCosURL;
    m_downloadCosURLHasBeenSet = true;
}

bool FakeAPPData::DownloadCosURLHasBeenSet() const
{
    return m_downloadCosURLHasBeenSet;
}

int64_t FakeAPPData::GetCertificationStatus() const
{
    return m_certificationStatus;
}

void FakeAPPData::SetCertificationStatus(const int64_t& _certificationStatus)
{
    m_certificationStatus = _certificationStatus;
    m_certificationStatusHasBeenSet = true;
}

bool FakeAPPData::CertificationStatusHasBeenSet() const
{
    return m_certificationStatusHasBeenSet;
}

