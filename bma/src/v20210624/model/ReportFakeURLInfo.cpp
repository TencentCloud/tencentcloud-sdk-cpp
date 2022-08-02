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

#include <tencentcloud/bma/v20210624/model/ReportFakeURLInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

ReportFakeURLInfo::ReportFakeURLInfo() :
    m_fakeURLIdHasBeenSet(false),
    m_detectTimeHasBeenSet(false),
    m_protectURLHasBeenSet(false),
    m_protectWebHasBeenSet(false),
    m_fakeURLHasBeenSet(false),
    m_snapshotHasBeenSet(false),
    m_iPHasBeenSet(false),
    m_iPLocHasBeenSet(false),
    m_heatHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_fakeURLCompanyHasBeenSet(false),
    m_fakeURLAttrHasBeenSet(false),
    m_fakeURLNameHasBeenSet(false),
    m_fakeURLICPHasBeenSet(false),
    m_fakeURLCreateTimeHasBeenSet(false),
    m_fakeURLExpireTimeHasBeenSet(false),
    m_blockTimeHasBeenSet(false)
{
}

CoreInternalOutcome ReportFakeURLInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FakeURLId") && !value["FakeURLId"].IsNull())
    {
        if (!value["FakeURLId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportFakeURLInfo.FakeURLId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fakeURLId = value["FakeURLId"].GetInt64();
        m_fakeURLIdHasBeenSet = true;
    }

    if (value.HasMember("DetectTime") && !value["DetectTime"].IsNull())
    {
        if (!value["DetectTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportFakeURLInfo.DetectTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectTime = string(value["DetectTime"].GetString());
        m_detectTimeHasBeenSet = true;
    }

    if (value.HasMember("ProtectURL") && !value["ProtectURL"].IsNull())
    {
        if (!value["ProtectURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportFakeURLInfo.ProtectURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectURL = string(value["ProtectURL"].GetString());
        m_protectURLHasBeenSet = true;
    }

    if (value.HasMember("ProtectWeb") && !value["ProtectWeb"].IsNull())
    {
        if (!value["ProtectWeb"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportFakeURLInfo.ProtectWeb` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectWeb = string(value["ProtectWeb"].GetString());
        m_protectWebHasBeenSet = true;
    }

    if (value.HasMember("FakeURL") && !value["FakeURL"].IsNull())
    {
        if (!value["FakeURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportFakeURLInfo.FakeURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fakeURL = string(value["FakeURL"].GetString());
        m_fakeURLHasBeenSet = true;
    }

    if (value.HasMember("Snapshot") && !value["Snapshot"].IsNull())
    {
        if (!value["Snapshot"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportFakeURLInfo.Snapshot` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshot = string(value["Snapshot"].GetString());
        m_snapshotHasBeenSet = true;
    }

    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportFakeURLInfo.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("IPLoc") && !value["IPLoc"].IsNull())
    {
        if (!value["IPLoc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportFakeURLInfo.IPLoc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iPLoc = string(value["IPLoc"].GetString());
        m_iPLocHasBeenSet = true;
    }

    if (value.HasMember("Heat") && !value["Heat"].IsNull())
    {
        if (!value["Heat"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportFakeURLInfo.Heat` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_heat = value["Heat"].GetInt64();
        m_heatHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportFakeURLInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Note") && !value["Note"].IsNull())
    {
        if (!value["Note"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportFakeURLInfo.Note` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_note = string(value["Note"].GetString());
        m_noteHasBeenSet = true;
    }

    if (value.HasMember("FakeURLCompany") && !value["FakeURLCompany"].IsNull())
    {
        if (!value["FakeURLCompany"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportFakeURLInfo.FakeURLCompany` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fakeURLCompany = string(value["FakeURLCompany"].GetString());
        m_fakeURLCompanyHasBeenSet = true;
    }

    if (value.HasMember("FakeURLAttr") && !value["FakeURLAttr"].IsNull())
    {
        if (!value["FakeURLAttr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportFakeURLInfo.FakeURLAttr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fakeURLAttr = string(value["FakeURLAttr"].GetString());
        m_fakeURLAttrHasBeenSet = true;
    }

    if (value.HasMember("FakeURLName") && !value["FakeURLName"].IsNull())
    {
        if (!value["FakeURLName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportFakeURLInfo.FakeURLName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fakeURLName = string(value["FakeURLName"].GetString());
        m_fakeURLNameHasBeenSet = true;
    }

    if (value.HasMember("FakeURLICP") && !value["FakeURLICP"].IsNull())
    {
        if (!value["FakeURLICP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportFakeURLInfo.FakeURLICP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fakeURLICP = string(value["FakeURLICP"].GetString());
        m_fakeURLICPHasBeenSet = true;
    }

    if (value.HasMember("FakeURLCreateTime") && !value["FakeURLCreateTime"].IsNull())
    {
        if (!value["FakeURLCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportFakeURLInfo.FakeURLCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fakeURLCreateTime = string(value["FakeURLCreateTime"].GetString());
        m_fakeURLCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("FakeURLExpireTime") && !value["FakeURLExpireTime"].IsNull())
    {
        if (!value["FakeURLExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportFakeURLInfo.FakeURLExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fakeURLExpireTime = string(value["FakeURLExpireTime"].GetString());
        m_fakeURLExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("BlockTime") && !value["BlockTime"].IsNull())
    {
        if (!value["BlockTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportFakeURLInfo.BlockTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockTime = string(value["BlockTime"].GetString());
        m_blockTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReportFakeURLInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fakeURLIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeURLId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fakeURLId, allocator);
    }

    if (m_detectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_protectURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectURL.c_str(), allocator).Move(), allocator);
    }

    if (m_protectWebHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectWeb";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectWeb.c_str(), allocator).Move(), allocator);
    }

    if (m_fakeURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fakeURL.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Snapshot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshot.c_str(), allocator).Move(), allocator);
    }

    if (m_iPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_iPLocHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPLoc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iPLoc.c_str(), allocator).Move(), allocator);
    }

    if (m_heatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Heat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_heat, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
    }

    if (m_fakeURLCompanyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeURLCompany";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fakeURLCompany.c_str(), allocator).Move(), allocator);
    }

    if (m_fakeURLAttrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeURLAttr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fakeURLAttr.c_str(), allocator).Move(), allocator);
    }

    if (m_fakeURLNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeURLName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fakeURLName.c_str(), allocator).Move(), allocator);
    }

    if (m_fakeURLICPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeURLICP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fakeURLICP.c_str(), allocator).Move(), allocator);
    }

    if (m_fakeURLCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeURLCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fakeURLCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fakeURLExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FakeURLExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fakeURLExpireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_blockTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t ReportFakeURLInfo::GetFakeURLId() const
{
    return m_fakeURLId;
}

void ReportFakeURLInfo::SetFakeURLId(const int64_t& _fakeURLId)
{
    m_fakeURLId = _fakeURLId;
    m_fakeURLIdHasBeenSet = true;
}

bool ReportFakeURLInfo::FakeURLIdHasBeenSet() const
{
    return m_fakeURLIdHasBeenSet;
}

string ReportFakeURLInfo::GetDetectTime() const
{
    return m_detectTime;
}

void ReportFakeURLInfo::SetDetectTime(const string& _detectTime)
{
    m_detectTime = _detectTime;
    m_detectTimeHasBeenSet = true;
}

bool ReportFakeURLInfo::DetectTimeHasBeenSet() const
{
    return m_detectTimeHasBeenSet;
}

string ReportFakeURLInfo::GetProtectURL() const
{
    return m_protectURL;
}

void ReportFakeURLInfo::SetProtectURL(const string& _protectURL)
{
    m_protectURL = _protectURL;
    m_protectURLHasBeenSet = true;
}

bool ReportFakeURLInfo::ProtectURLHasBeenSet() const
{
    return m_protectURLHasBeenSet;
}

string ReportFakeURLInfo::GetProtectWeb() const
{
    return m_protectWeb;
}

void ReportFakeURLInfo::SetProtectWeb(const string& _protectWeb)
{
    m_protectWeb = _protectWeb;
    m_protectWebHasBeenSet = true;
}

bool ReportFakeURLInfo::ProtectWebHasBeenSet() const
{
    return m_protectWebHasBeenSet;
}

string ReportFakeURLInfo::GetFakeURL() const
{
    return m_fakeURL;
}

void ReportFakeURLInfo::SetFakeURL(const string& _fakeURL)
{
    m_fakeURL = _fakeURL;
    m_fakeURLHasBeenSet = true;
}

bool ReportFakeURLInfo::FakeURLHasBeenSet() const
{
    return m_fakeURLHasBeenSet;
}

string ReportFakeURLInfo::GetSnapshot() const
{
    return m_snapshot;
}

void ReportFakeURLInfo::SetSnapshot(const string& _snapshot)
{
    m_snapshot = _snapshot;
    m_snapshotHasBeenSet = true;
}

bool ReportFakeURLInfo::SnapshotHasBeenSet() const
{
    return m_snapshotHasBeenSet;
}

string ReportFakeURLInfo::GetIP() const
{
    return m_iP;
}

void ReportFakeURLInfo::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool ReportFakeURLInfo::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

string ReportFakeURLInfo::GetIPLoc() const
{
    return m_iPLoc;
}

void ReportFakeURLInfo::SetIPLoc(const string& _iPLoc)
{
    m_iPLoc = _iPLoc;
    m_iPLocHasBeenSet = true;
}

bool ReportFakeURLInfo::IPLocHasBeenSet() const
{
    return m_iPLocHasBeenSet;
}

int64_t ReportFakeURLInfo::GetHeat() const
{
    return m_heat;
}

void ReportFakeURLInfo::SetHeat(const int64_t& _heat)
{
    m_heat = _heat;
    m_heatHasBeenSet = true;
}

bool ReportFakeURLInfo::HeatHasBeenSet() const
{
    return m_heatHasBeenSet;
}

int64_t ReportFakeURLInfo::GetStatus() const
{
    return m_status;
}

void ReportFakeURLInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ReportFakeURLInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ReportFakeURLInfo::GetNote() const
{
    return m_note;
}

void ReportFakeURLInfo::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool ReportFakeURLInfo::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

string ReportFakeURLInfo::GetFakeURLCompany() const
{
    return m_fakeURLCompany;
}

void ReportFakeURLInfo::SetFakeURLCompany(const string& _fakeURLCompany)
{
    m_fakeURLCompany = _fakeURLCompany;
    m_fakeURLCompanyHasBeenSet = true;
}

bool ReportFakeURLInfo::FakeURLCompanyHasBeenSet() const
{
    return m_fakeURLCompanyHasBeenSet;
}

string ReportFakeURLInfo::GetFakeURLAttr() const
{
    return m_fakeURLAttr;
}

void ReportFakeURLInfo::SetFakeURLAttr(const string& _fakeURLAttr)
{
    m_fakeURLAttr = _fakeURLAttr;
    m_fakeURLAttrHasBeenSet = true;
}

bool ReportFakeURLInfo::FakeURLAttrHasBeenSet() const
{
    return m_fakeURLAttrHasBeenSet;
}

string ReportFakeURLInfo::GetFakeURLName() const
{
    return m_fakeURLName;
}

void ReportFakeURLInfo::SetFakeURLName(const string& _fakeURLName)
{
    m_fakeURLName = _fakeURLName;
    m_fakeURLNameHasBeenSet = true;
}

bool ReportFakeURLInfo::FakeURLNameHasBeenSet() const
{
    return m_fakeURLNameHasBeenSet;
}

string ReportFakeURLInfo::GetFakeURLICP() const
{
    return m_fakeURLICP;
}

void ReportFakeURLInfo::SetFakeURLICP(const string& _fakeURLICP)
{
    m_fakeURLICP = _fakeURLICP;
    m_fakeURLICPHasBeenSet = true;
}

bool ReportFakeURLInfo::FakeURLICPHasBeenSet() const
{
    return m_fakeURLICPHasBeenSet;
}

string ReportFakeURLInfo::GetFakeURLCreateTime() const
{
    return m_fakeURLCreateTime;
}

void ReportFakeURLInfo::SetFakeURLCreateTime(const string& _fakeURLCreateTime)
{
    m_fakeURLCreateTime = _fakeURLCreateTime;
    m_fakeURLCreateTimeHasBeenSet = true;
}

bool ReportFakeURLInfo::FakeURLCreateTimeHasBeenSet() const
{
    return m_fakeURLCreateTimeHasBeenSet;
}

string ReportFakeURLInfo::GetFakeURLExpireTime() const
{
    return m_fakeURLExpireTime;
}

void ReportFakeURLInfo::SetFakeURLExpireTime(const string& _fakeURLExpireTime)
{
    m_fakeURLExpireTime = _fakeURLExpireTime;
    m_fakeURLExpireTimeHasBeenSet = true;
}

bool ReportFakeURLInfo::FakeURLExpireTimeHasBeenSet() const
{
    return m_fakeURLExpireTimeHasBeenSet;
}

string ReportFakeURLInfo::GetBlockTime() const
{
    return m_blockTime;
}

void ReportFakeURLInfo::SetBlockTime(const string& _blockTime)
{
    m_blockTime = _blockTime;
    m_blockTimeHasBeenSet = true;
}

bool ReportFakeURLInfo::BlockTimeHasBeenSet() const
{
    return m_blockTimeHasBeenSet;
}

