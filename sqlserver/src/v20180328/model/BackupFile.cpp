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

#include <tencentcloud/sqlserver/v20180328/model/BackupFile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

BackupFile::BackupFile() :
    m_idHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_dBsHasBeenSet(false),
    m_downloadLinkHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_crossBackupAddrHasBeenSet(false)
{
}

CoreInternalOutcome BackupFile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFile.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFile.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFile.Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("DBs") && !value["DBs"].IsNull())
    {
        if (!value["DBs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupFile.DBs` is not array type"));

        const rapidjson::Value &tmpValue = value["DBs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dBs.push_back((*itr).GetString());
        }
        m_dBsHasBeenSet = true;
    }

    if (value.HasMember("DownloadLink") && !value["DownloadLink"].IsNull())
    {
        if (!value["DownloadLink"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFile.DownloadLink` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadLink = string(value["DownloadLink"].GetString());
        m_downloadLinkHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupFile.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("CrossBackupAddr") && !value["CrossBackupAddr"].IsNull())
    {
        if (!value["CrossBackupAddr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupFile.CrossBackupAddr` is not array type"));

        const rapidjson::Value &tmpValue = value["CrossBackupAddr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CrossBackupAddr item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_crossBackupAddr.push_back(item);
        }
        m_crossBackupAddrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupFile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_dBsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dBs.begin(); itr != m_dBs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_downloadLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadLink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadLink.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_crossBackupAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossBackupAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_crossBackupAddr.begin(); itr != m_crossBackupAddr.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t BackupFile::GetId() const
{
    return m_id;
}

void BackupFile::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BackupFile::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string BackupFile::GetFileName() const
{
    return m_fileName;
}

void BackupFile::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool BackupFile::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

uint64_t BackupFile::GetSize() const
{
    return m_size;
}

void BackupFile::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool BackupFile::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

vector<string> BackupFile::GetDBs() const
{
    return m_dBs;
}

void BackupFile::SetDBs(const vector<string>& _dBs)
{
    m_dBs = _dBs;
    m_dBsHasBeenSet = true;
}

bool BackupFile::DBsHasBeenSet() const
{
    return m_dBsHasBeenSet;
}

string BackupFile::GetDownloadLink() const
{
    return m_downloadLink;
}

void BackupFile::SetDownloadLink(const string& _downloadLink)
{
    m_downloadLink = _downloadLink;
    m_downloadLinkHasBeenSet = true;
}

bool BackupFile::DownloadLinkHasBeenSet() const
{
    return m_downloadLinkHasBeenSet;
}

string BackupFile::GetRegion() const
{
    return m_region;
}

void BackupFile::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool BackupFile::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<CrossBackupAddr> BackupFile::GetCrossBackupAddr() const
{
    return m_crossBackupAddr;
}

void BackupFile::SetCrossBackupAddr(const vector<CrossBackupAddr>& _crossBackupAddr)
{
    m_crossBackupAddr = _crossBackupAddr;
    m_crossBackupAddrHasBeenSet = true;
}

bool BackupFile::CrossBackupAddrHasBeenSet() const
{
    return m_crossBackupAddrHasBeenSet;
}

