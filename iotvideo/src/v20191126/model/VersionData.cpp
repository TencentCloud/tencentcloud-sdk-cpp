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

#include <tencentcloud/iotvideo/v20191126/model/VersionData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

VersionData::VersionData() :
    m_productIdHasBeenSet(false),
    m_otaVersionHasBeenSet(false),
    m_pubStatusHasBeenSet(false),
    m_versionUrlHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_md5HasBeenSet(false),
    m_oldVersionsHasBeenSet(false),
    m_tidsHasBeenSet(false),
    m_grayValueHasBeenSet(false),
    m_publishTimeHasBeenSet(false),
    m_activeCountHasBeenSet(false),
    m_onlineCountHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_uploadTimeHasBeenSet(false),
    m_modifyTimesHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_contentsHasBeenSet(false),
    m_aliveInMonthCntHasBeenSet(false)
{
}

CoreInternalOutcome VersionData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionData.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("OtaVersion") && !value["OtaVersion"].IsNull())
    {
        if (!value["OtaVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionData.OtaVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_otaVersion = string(value["OtaVersion"].GetString());
        m_otaVersionHasBeenSet = true;
    }

    if (value.HasMember("PubStatus") && !value["PubStatus"].IsNull())
    {
        if (!value["PubStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionData.PubStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pubStatus = value["PubStatus"].GetUint64();
        m_pubStatusHasBeenSet = true;
    }

    if (value.HasMember("VersionUrl") && !value["VersionUrl"].IsNull())
    {
        if (!value["VersionUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionData.VersionUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionUrl = string(value["VersionUrl"].GetString());
        m_versionUrlHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionData.FileSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetUint64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("Md5") && !value["Md5"].IsNull())
    {
        if (!value["Md5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionData.Md5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5 = string(value["Md5"].GetString());
        m_md5HasBeenSet = true;
    }

    if (value.HasMember("OldVersions") && !value["OldVersions"].IsNull())
    {
        if (!value["OldVersions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionData.OldVersions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldVersions = string(value["OldVersions"].GetString());
        m_oldVersionsHasBeenSet = true;
    }

    if (value.HasMember("Tids") && !value["Tids"].IsNull())
    {
        if (!value["Tids"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionData.Tids` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tids = string(value["Tids"].GetString());
        m_tidsHasBeenSet = true;
    }

    if (value.HasMember("GrayValue") && !value["GrayValue"].IsNull())
    {
        if (!value["GrayValue"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionData.GrayValue` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_grayValue = value["GrayValue"].GetUint64();
        m_grayValueHasBeenSet = true;
    }

    if (value.HasMember("PublishTime") && !value["PublishTime"].IsNull())
    {
        if (!value["PublishTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionData.PublishTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_publishTime = value["PublishTime"].GetUint64();
        m_publishTimeHasBeenSet = true;
    }

    if (value.HasMember("ActiveCount") && !value["ActiveCount"].IsNull())
    {
        if (!value["ActiveCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionData.ActiveCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activeCount = value["ActiveCount"].GetInt64();
        m_activeCountHasBeenSet = true;
    }

    if (value.HasMember("OnlineCount") && !value["OnlineCount"].IsNull())
    {
        if (!value["OnlineCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionData.OnlineCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_onlineCount = value["OnlineCount"].GetInt64();
        m_onlineCountHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionData.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("UploadTime") && !value["UploadTime"].IsNull())
    {
        if (!value["UploadTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionData.UploadTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uploadTime = value["UploadTime"].GetUint64();
        m_uploadTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTimes") && !value["ModifyTimes"].IsNull())
    {
        if (!value["ModifyTimes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionData.ModifyTimes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTimes = value["ModifyTimes"].GetUint64();
        m_modifyTimesHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionData.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Contents") && !value["Contents"].IsNull())
    {
        if (!value["Contents"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VersionData.Contents` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_contents.Deserialize(value["Contents"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_contentsHasBeenSet = true;
    }

    if (value.HasMember("AliveInMonthCnt") && !value["AliveInMonthCnt"].IsNull())
    {
        if (!value["AliveInMonthCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionData.AliveInMonthCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aliveInMonthCnt = value["AliveInMonthCnt"].GetUint64();
        m_aliveInMonthCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VersionData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_otaVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtaVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_otaVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_pubStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PubStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pubStatus, allocator);
    }

    if (m_versionUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_md5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_md5.c_str(), allocator).Move(), allocator);
    }

    if (m_oldVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldVersions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldVersions.c_str(), allocator).Move(), allocator);
    }

    if (m_tidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tids.c_str(), allocator).Move(), allocator);
    }

    if (m_grayValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrayValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_grayValue, allocator);
    }

    if (m_publishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publishTime, allocator);
    }

    if (m_activeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeCount, allocator);
    }

    if (m_onlineCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlineCount, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_uploadTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uploadTime, allocator);
    }

    if (m_modifyTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modifyTimes, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_contentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Contents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_contents.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aliveInMonthCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliveInMonthCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aliveInMonthCnt, allocator);
    }

}


string VersionData::GetProductId() const
{
    return m_productId;
}

void VersionData::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool VersionData::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string VersionData::GetOtaVersion() const
{
    return m_otaVersion;
}

void VersionData::SetOtaVersion(const string& _otaVersion)
{
    m_otaVersion = _otaVersion;
    m_otaVersionHasBeenSet = true;
}

bool VersionData::OtaVersionHasBeenSet() const
{
    return m_otaVersionHasBeenSet;
}

uint64_t VersionData::GetPubStatus() const
{
    return m_pubStatus;
}

void VersionData::SetPubStatus(const uint64_t& _pubStatus)
{
    m_pubStatus = _pubStatus;
    m_pubStatusHasBeenSet = true;
}

bool VersionData::PubStatusHasBeenSet() const
{
    return m_pubStatusHasBeenSet;
}

string VersionData::GetVersionUrl() const
{
    return m_versionUrl;
}

void VersionData::SetVersionUrl(const string& _versionUrl)
{
    m_versionUrl = _versionUrl;
    m_versionUrlHasBeenSet = true;
}

bool VersionData::VersionUrlHasBeenSet() const
{
    return m_versionUrlHasBeenSet;
}

uint64_t VersionData::GetFileSize() const
{
    return m_fileSize;
}

void VersionData::SetFileSize(const uint64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool VersionData::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string VersionData::GetMd5() const
{
    return m_md5;
}

void VersionData::SetMd5(const string& _md5)
{
    m_md5 = _md5;
    m_md5HasBeenSet = true;
}

bool VersionData::Md5HasBeenSet() const
{
    return m_md5HasBeenSet;
}

string VersionData::GetOldVersions() const
{
    return m_oldVersions;
}

void VersionData::SetOldVersions(const string& _oldVersions)
{
    m_oldVersions = _oldVersions;
    m_oldVersionsHasBeenSet = true;
}

bool VersionData::OldVersionsHasBeenSet() const
{
    return m_oldVersionsHasBeenSet;
}

string VersionData::GetTids() const
{
    return m_tids;
}

void VersionData::SetTids(const string& _tids)
{
    m_tids = _tids;
    m_tidsHasBeenSet = true;
}

bool VersionData::TidsHasBeenSet() const
{
    return m_tidsHasBeenSet;
}

uint64_t VersionData::GetGrayValue() const
{
    return m_grayValue;
}

void VersionData::SetGrayValue(const uint64_t& _grayValue)
{
    m_grayValue = _grayValue;
    m_grayValueHasBeenSet = true;
}

bool VersionData::GrayValueHasBeenSet() const
{
    return m_grayValueHasBeenSet;
}

uint64_t VersionData::GetPublishTime() const
{
    return m_publishTime;
}

void VersionData::SetPublishTime(const uint64_t& _publishTime)
{
    m_publishTime = _publishTime;
    m_publishTimeHasBeenSet = true;
}

bool VersionData::PublishTimeHasBeenSet() const
{
    return m_publishTimeHasBeenSet;
}

int64_t VersionData::GetActiveCount() const
{
    return m_activeCount;
}

void VersionData::SetActiveCount(const int64_t& _activeCount)
{
    m_activeCount = _activeCount;
    m_activeCountHasBeenSet = true;
}

bool VersionData::ActiveCountHasBeenSet() const
{
    return m_activeCountHasBeenSet;
}

int64_t VersionData::GetOnlineCount() const
{
    return m_onlineCount;
}

void VersionData::SetOnlineCount(const int64_t& _onlineCount)
{
    m_onlineCount = _onlineCount;
    m_onlineCountHasBeenSet = true;
}

bool VersionData::OnlineCountHasBeenSet() const
{
    return m_onlineCountHasBeenSet;
}

uint64_t VersionData::GetUpdateTime() const
{
    return m_updateTime;
}

void VersionData::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool VersionData::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t VersionData::GetUploadTime() const
{
    return m_uploadTime;
}

void VersionData::SetUploadTime(const uint64_t& _uploadTime)
{
    m_uploadTime = _uploadTime;
    m_uploadTimeHasBeenSet = true;
}

bool VersionData::UploadTimeHasBeenSet() const
{
    return m_uploadTimeHasBeenSet;
}

uint64_t VersionData::GetModifyTimes() const
{
    return m_modifyTimes;
}

void VersionData::SetModifyTimes(const uint64_t& _modifyTimes)
{
    m_modifyTimes = _modifyTimes;
    m_modifyTimesHasBeenSet = true;
}

bool VersionData::ModifyTimesHasBeenSet() const
{
    return m_modifyTimesHasBeenSet;
}

string VersionData::GetRemark() const
{
    return m_remark;
}

void VersionData::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool VersionData::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

Contents VersionData::GetContents() const
{
    return m_contents;
}

void VersionData::SetContents(const Contents& _contents)
{
    m_contents = _contents;
    m_contentsHasBeenSet = true;
}

bool VersionData::ContentsHasBeenSet() const
{
    return m_contentsHasBeenSet;
}

uint64_t VersionData::GetAliveInMonthCnt() const
{
    return m_aliveInMonthCnt;
}

void VersionData::SetAliveInMonthCnt(const uint64_t& _aliveInMonthCnt)
{
    m_aliveInMonthCnt = _aliveInMonthCnt;
    m_aliveInMonthCntHasBeenSet = true;
}

bool VersionData::AliveInMonthCntHasBeenSet() const
{
    return m_aliveInMonthCntHasBeenSet;
}

