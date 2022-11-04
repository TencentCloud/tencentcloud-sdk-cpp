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

#include <tencentcloud/bma/v20210624/model/MonitorTort.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

MonitorTort::MonitorTort() :
    m_tortIdHasBeenSet(false),
    m_tortTitleHasBeenSet(false),
    m_tortPlatHasBeenSet(false),
    m_tortURLHasBeenSet(false),
    m_pubTimeHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_detectTimeHasBeenSet(false),
    m_obtainStatusHasBeenSet(false),
    m_rightStatusHasBeenSet(false),
    m_blockStatusHasBeenSet(false),
    m_tortNumHasBeenSet(false),
    m_obtainNoteHasBeenSet(false),
    m_workTitleHasBeenSet(false),
    m_tortSiteHasBeenSet(false),
    m_iCPHasBeenSet(false),
    m_rightNoteHasBeenSet(false),
    m_obtainTypeHasBeenSet(false),
    m_blockNoteHasBeenSet(false),
    m_workIdHasBeenSet(false),
    m_workNameHasBeenSet(false),
    m_authStatusHasBeenSet(false),
    m_commStatusHasBeenSet(false),
    m_evidenceStatusHasBeenSet(false),
    m_isProducerHasBeenSet(false),
    m_isOverseasHasBeenSet(false),
    m_iPLocHasBeenSet(false)
{
}

CoreInternalOutcome MonitorTort::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TortId") && !value["TortId"].IsNull())
    {
        if (!value["TortId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.TortId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tortId = value["TortId"].GetInt64();
        m_tortIdHasBeenSet = true;
    }

    if (value.HasMember("TortTitle") && !value["TortTitle"].IsNull())
    {
        if (!value["TortTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.TortTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tortTitle = string(value["TortTitle"].GetString());
        m_tortTitleHasBeenSet = true;
    }

    if (value.HasMember("TortPlat") && !value["TortPlat"].IsNull())
    {
        if (!value["TortPlat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.TortPlat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tortPlat = string(value["TortPlat"].GetString());
        m_tortPlatHasBeenSet = true;
    }

    if (value.HasMember("TortURL") && !value["TortURL"].IsNull())
    {
        if (!value["TortURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.TortURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tortURL = string(value["TortURL"].GetString());
        m_tortURLHasBeenSet = true;
    }

    if (value.HasMember("PubTime") && !value["PubTime"].IsNull())
    {
        if (!value["PubTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.PubTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pubTime = string(value["PubTime"].GetString());
        m_pubTimeHasBeenSet = true;
    }

    if (value.HasMember("Author") && !value["Author"].IsNull())
    {
        if (!value["Author"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.Author` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_author = string(value["Author"].GetString());
        m_authorHasBeenSet = true;
    }

    if (value.HasMember("DetectTime") && !value["DetectTime"].IsNull())
    {
        if (!value["DetectTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.DetectTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectTime = string(value["DetectTime"].GetString());
        m_detectTimeHasBeenSet = true;
    }

    if (value.HasMember("ObtainStatus") && !value["ObtainStatus"].IsNull())
    {
        if (!value["ObtainStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.ObtainStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_obtainStatus = value["ObtainStatus"].GetInt64();
        m_obtainStatusHasBeenSet = true;
    }

    if (value.HasMember("RightStatus") && !value["RightStatus"].IsNull())
    {
        if (!value["RightStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.RightStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rightStatus = value["RightStatus"].GetInt64();
        m_rightStatusHasBeenSet = true;
    }

    if (value.HasMember("BlockStatus") && !value["BlockStatus"].IsNull())
    {
        if (!value["BlockStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.BlockStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockStatus = value["BlockStatus"].GetInt64();
        m_blockStatusHasBeenSet = true;
    }

    if (value.HasMember("TortNum") && !value["TortNum"].IsNull())
    {
        if (!value["TortNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.TortNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tortNum = string(value["TortNum"].GetString());
        m_tortNumHasBeenSet = true;
    }

    if (value.HasMember("ObtainNote") && !value["ObtainNote"].IsNull())
    {
        if (!value["ObtainNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.ObtainNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_obtainNote = string(value["ObtainNote"].GetString());
        m_obtainNoteHasBeenSet = true;
    }

    if (value.HasMember("WorkTitle") && !value["WorkTitle"].IsNull())
    {
        if (!value["WorkTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.WorkTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workTitle = string(value["WorkTitle"].GetString());
        m_workTitleHasBeenSet = true;
    }

    if (value.HasMember("TortSite") && !value["TortSite"].IsNull())
    {
        if (!value["TortSite"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.TortSite` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tortSite = string(value["TortSite"].GetString());
        m_tortSiteHasBeenSet = true;
    }

    if (value.HasMember("ICP") && !value["ICP"].IsNull())
    {
        if (!value["ICP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.ICP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iCP = string(value["ICP"].GetString());
        m_iCPHasBeenSet = true;
    }

    if (value.HasMember("RightNote") && !value["RightNote"].IsNull())
    {
        if (!value["RightNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.RightNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rightNote = string(value["RightNote"].GetString());
        m_rightNoteHasBeenSet = true;
    }

    if (value.HasMember("ObtainType") && !value["ObtainType"].IsNull())
    {
        if (!value["ObtainType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.ObtainType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_obtainType = value["ObtainType"].GetInt64();
        m_obtainTypeHasBeenSet = true;
    }

    if (value.HasMember("BlockNote") && !value["BlockNote"].IsNull())
    {
        if (!value["BlockNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.BlockNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockNote = string(value["BlockNote"].GetString());
        m_blockNoteHasBeenSet = true;
    }

    if (value.HasMember("WorkId") && !value["WorkId"].IsNull())
    {
        if (!value["WorkId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.WorkId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workId = value["WorkId"].GetInt64();
        m_workIdHasBeenSet = true;
    }

    if (value.HasMember("WorkName") && !value["WorkName"].IsNull())
    {
        if (!value["WorkName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.WorkName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workName = string(value["WorkName"].GetString());
        m_workNameHasBeenSet = true;
    }

    if (value.HasMember("AuthStatus") && !value["AuthStatus"].IsNull())
    {
        if (!value["AuthStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.AuthStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authStatus = value["AuthStatus"].GetInt64();
        m_authStatusHasBeenSet = true;
    }

    if (value.HasMember("CommStatus") && !value["CommStatus"].IsNull())
    {
        if (!value["CommStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.CommStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_commStatus = value["CommStatus"].GetInt64();
        m_commStatusHasBeenSet = true;
    }

    if (value.HasMember("EvidenceStatus") && !value["EvidenceStatus"].IsNull())
    {
        if (!value["EvidenceStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.EvidenceStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evidenceStatus = value["EvidenceStatus"].GetInt64();
        m_evidenceStatusHasBeenSet = true;
    }

    if (value.HasMember("IsProducer") && !value["IsProducer"].IsNull())
    {
        if (!value["IsProducer"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.IsProducer` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isProducer = value["IsProducer"].GetInt64();
        m_isProducerHasBeenSet = true;
    }

    if (value.HasMember("IsOverseas") && !value["IsOverseas"].IsNull())
    {
        if (!value["IsOverseas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.IsOverseas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isOverseas = value["IsOverseas"].GetInt64();
        m_isOverseasHasBeenSet = true;
    }

    if (value.HasMember("IPLoc") && !value["IPLoc"].IsNull())
    {
        if (!value["IPLoc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTort.IPLoc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iPLoc = string(value["IPLoc"].GetString());
        m_iPLocHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MonitorTort::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tortIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tortId, allocator);
    }

    if (m_tortTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tortTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_tortPlatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortPlat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tortPlat.c_str(), allocator).Move(), allocator);
    }

    if (m_tortURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tortURL.c_str(), allocator).Move(), allocator);
    }

    if (m_pubTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PubTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pubTime.c_str(), allocator).Move(), allocator);
    }

    if (m_authorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Author";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_author.c_str(), allocator).Move(), allocator);
    }

    if (m_detectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_obtainStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObtainStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_obtainStatus, allocator);
    }

    if (m_rightStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rightStatus, allocator);
    }

    if (m_blockStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockStatus, allocator);
    }

    if (m_tortNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tortNum.c_str(), allocator).Move(), allocator);
    }

    if (m_obtainNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObtainNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_obtainNote.c_str(), allocator).Move(), allocator);
    }

    if (m_workTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_tortSiteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortSite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tortSite.c_str(), allocator).Move(), allocator);
    }

    if (m_iCPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ICP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iCP.c_str(), allocator).Move(), allocator);
    }

    if (m_rightNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rightNote.c_str(), allocator).Move(), allocator);
    }

    if (m_obtainTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObtainType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_obtainType, allocator);
    }

    if (m_blockNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockNote.c_str(), allocator).Move(), allocator);
    }

    if (m_workIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workId, allocator);
    }

    if (m_workNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workName.c_str(), allocator).Move(), allocator);
    }

    if (m_authStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authStatus, allocator);
    }

    if (m_commStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_commStatus, allocator);
    }

    if (m_evidenceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvidenceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evidenceStatus, allocator);
    }

    if (m_isProducerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsProducer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isProducer, allocator);
    }

    if (m_isOverseasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOverseas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOverseas, allocator);
    }

    if (m_iPLocHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPLoc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iPLoc.c_str(), allocator).Move(), allocator);
    }

}


int64_t MonitorTort::GetTortId() const
{
    return m_tortId;
}

void MonitorTort::SetTortId(const int64_t& _tortId)
{
    m_tortId = _tortId;
    m_tortIdHasBeenSet = true;
}

bool MonitorTort::TortIdHasBeenSet() const
{
    return m_tortIdHasBeenSet;
}

string MonitorTort::GetTortTitle() const
{
    return m_tortTitle;
}

void MonitorTort::SetTortTitle(const string& _tortTitle)
{
    m_tortTitle = _tortTitle;
    m_tortTitleHasBeenSet = true;
}

bool MonitorTort::TortTitleHasBeenSet() const
{
    return m_tortTitleHasBeenSet;
}

string MonitorTort::GetTortPlat() const
{
    return m_tortPlat;
}

void MonitorTort::SetTortPlat(const string& _tortPlat)
{
    m_tortPlat = _tortPlat;
    m_tortPlatHasBeenSet = true;
}

bool MonitorTort::TortPlatHasBeenSet() const
{
    return m_tortPlatHasBeenSet;
}

string MonitorTort::GetTortURL() const
{
    return m_tortURL;
}

void MonitorTort::SetTortURL(const string& _tortURL)
{
    m_tortURL = _tortURL;
    m_tortURLHasBeenSet = true;
}

bool MonitorTort::TortURLHasBeenSet() const
{
    return m_tortURLHasBeenSet;
}

string MonitorTort::GetPubTime() const
{
    return m_pubTime;
}

void MonitorTort::SetPubTime(const string& _pubTime)
{
    m_pubTime = _pubTime;
    m_pubTimeHasBeenSet = true;
}

bool MonitorTort::PubTimeHasBeenSet() const
{
    return m_pubTimeHasBeenSet;
}

string MonitorTort::GetAuthor() const
{
    return m_author;
}

void MonitorTort::SetAuthor(const string& _author)
{
    m_author = _author;
    m_authorHasBeenSet = true;
}

bool MonitorTort::AuthorHasBeenSet() const
{
    return m_authorHasBeenSet;
}

string MonitorTort::GetDetectTime() const
{
    return m_detectTime;
}

void MonitorTort::SetDetectTime(const string& _detectTime)
{
    m_detectTime = _detectTime;
    m_detectTimeHasBeenSet = true;
}

bool MonitorTort::DetectTimeHasBeenSet() const
{
    return m_detectTimeHasBeenSet;
}

int64_t MonitorTort::GetObtainStatus() const
{
    return m_obtainStatus;
}

void MonitorTort::SetObtainStatus(const int64_t& _obtainStatus)
{
    m_obtainStatus = _obtainStatus;
    m_obtainStatusHasBeenSet = true;
}

bool MonitorTort::ObtainStatusHasBeenSet() const
{
    return m_obtainStatusHasBeenSet;
}

int64_t MonitorTort::GetRightStatus() const
{
    return m_rightStatus;
}

void MonitorTort::SetRightStatus(const int64_t& _rightStatus)
{
    m_rightStatus = _rightStatus;
    m_rightStatusHasBeenSet = true;
}

bool MonitorTort::RightStatusHasBeenSet() const
{
    return m_rightStatusHasBeenSet;
}

int64_t MonitorTort::GetBlockStatus() const
{
    return m_blockStatus;
}

void MonitorTort::SetBlockStatus(const int64_t& _blockStatus)
{
    m_blockStatus = _blockStatus;
    m_blockStatusHasBeenSet = true;
}

bool MonitorTort::BlockStatusHasBeenSet() const
{
    return m_blockStatusHasBeenSet;
}

string MonitorTort::GetTortNum() const
{
    return m_tortNum;
}

void MonitorTort::SetTortNum(const string& _tortNum)
{
    m_tortNum = _tortNum;
    m_tortNumHasBeenSet = true;
}

bool MonitorTort::TortNumHasBeenSet() const
{
    return m_tortNumHasBeenSet;
}

string MonitorTort::GetObtainNote() const
{
    return m_obtainNote;
}

void MonitorTort::SetObtainNote(const string& _obtainNote)
{
    m_obtainNote = _obtainNote;
    m_obtainNoteHasBeenSet = true;
}

bool MonitorTort::ObtainNoteHasBeenSet() const
{
    return m_obtainNoteHasBeenSet;
}

string MonitorTort::GetWorkTitle() const
{
    return m_workTitle;
}

void MonitorTort::SetWorkTitle(const string& _workTitle)
{
    m_workTitle = _workTitle;
    m_workTitleHasBeenSet = true;
}

bool MonitorTort::WorkTitleHasBeenSet() const
{
    return m_workTitleHasBeenSet;
}

string MonitorTort::GetTortSite() const
{
    return m_tortSite;
}

void MonitorTort::SetTortSite(const string& _tortSite)
{
    m_tortSite = _tortSite;
    m_tortSiteHasBeenSet = true;
}

bool MonitorTort::TortSiteHasBeenSet() const
{
    return m_tortSiteHasBeenSet;
}

string MonitorTort::GetICP() const
{
    return m_iCP;
}

void MonitorTort::SetICP(const string& _iCP)
{
    m_iCP = _iCP;
    m_iCPHasBeenSet = true;
}

bool MonitorTort::ICPHasBeenSet() const
{
    return m_iCPHasBeenSet;
}

string MonitorTort::GetRightNote() const
{
    return m_rightNote;
}

void MonitorTort::SetRightNote(const string& _rightNote)
{
    m_rightNote = _rightNote;
    m_rightNoteHasBeenSet = true;
}

bool MonitorTort::RightNoteHasBeenSet() const
{
    return m_rightNoteHasBeenSet;
}

int64_t MonitorTort::GetObtainType() const
{
    return m_obtainType;
}

void MonitorTort::SetObtainType(const int64_t& _obtainType)
{
    m_obtainType = _obtainType;
    m_obtainTypeHasBeenSet = true;
}

bool MonitorTort::ObtainTypeHasBeenSet() const
{
    return m_obtainTypeHasBeenSet;
}

string MonitorTort::GetBlockNote() const
{
    return m_blockNote;
}

void MonitorTort::SetBlockNote(const string& _blockNote)
{
    m_blockNote = _blockNote;
    m_blockNoteHasBeenSet = true;
}

bool MonitorTort::BlockNoteHasBeenSet() const
{
    return m_blockNoteHasBeenSet;
}

int64_t MonitorTort::GetWorkId() const
{
    return m_workId;
}

void MonitorTort::SetWorkId(const int64_t& _workId)
{
    m_workId = _workId;
    m_workIdHasBeenSet = true;
}

bool MonitorTort::WorkIdHasBeenSet() const
{
    return m_workIdHasBeenSet;
}

string MonitorTort::GetWorkName() const
{
    return m_workName;
}

void MonitorTort::SetWorkName(const string& _workName)
{
    m_workName = _workName;
    m_workNameHasBeenSet = true;
}

bool MonitorTort::WorkNameHasBeenSet() const
{
    return m_workNameHasBeenSet;
}

int64_t MonitorTort::GetAuthStatus() const
{
    return m_authStatus;
}

void MonitorTort::SetAuthStatus(const int64_t& _authStatus)
{
    m_authStatus = _authStatus;
    m_authStatusHasBeenSet = true;
}

bool MonitorTort::AuthStatusHasBeenSet() const
{
    return m_authStatusHasBeenSet;
}

int64_t MonitorTort::GetCommStatus() const
{
    return m_commStatus;
}

void MonitorTort::SetCommStatus(const int64_t& _commStatus)
{
    m_commStatus = _commStatus;
    m_commStatusHasBeenSet = true;
}

bool MonitorTort::CommStatusHasBeenSet() const
{
    return m_commStatusHasBeenSet;
}

int64_t MonitorTort::GetEvidenceStatus() const
{
    return m_evidenceStatus;
}

void MonitorTort::SetEvidenceStatus(const int64_t& _evidenceStatus)
{
    m_evidenceStatus = _evidenceStatus;
    m_evidenceStatusHasBeenSet = true;
}

bool MonitorTort::EvidenceStatusHasBeenSet() const
{
    return m_evidenceStatusHasBeenSet;
}

int64_t MonitorTort::GetIsProducer() const
{
    return m_isProducer;
}

void MonitorTort::SetIsProducer(const int64_t& _isProducer)
{
    m_isProducer = _isProducer;
    m_isProducerHasBeenSet = true;
}

bool MonitorTort::IsProducerHasBeenSet() const
{
    return m_isProducerHasBeenSet;
}

int64_t MonitorTort::GetIsOverseas() const
{
    return m_isOverseas;
}

void MonitorTort::SetIsOverseas(const int64_t& _isOverseas)
{
    m_isOverseas = _isOverseas;
    m_isOverseasHasBeenSet = true;
}

bool MonitorTort::IsOverseasHasBeenSet() const
{
    return m_isOverseasHasBeenSet;
}

string MonitorTort::GetIPLoc() const
{
    return m_iPLoc;
}

void MonitorTort::SetIPLoc(const string& _iPLoc)
{
    m_iPLoc = _iPLoc;
    m_iPLocHasBeenSet = true;
}

bool MonitorTort::IPLocHasBeenSet() const
{
    return m_iPLocHasBeenSet;
}

