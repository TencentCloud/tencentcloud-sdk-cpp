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

#include <tencentcloud/cwp/v20180228/model/ProtectDirInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ProtectDirInfo::ProtectDirInfo() :
    m_dirNameHasBeenSet(false),
    m_dirPathHasBeenSet(false),
    m_relatedServerNumHasBeenSet(false),
    m_protectServerNumHasBeenSet(false),
    m_noProtectServerNumHasBeenSet(false),
    m_idHasBeenSet(false),
    m_protectStatusHasBeenSet(false),
    m_protectExceptionHasBeenSet(false),
    m_autoRestoreSwitchStatusHasBeenSet(false)
{
}

CoreInternalOutcome ProtectDirInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DirName") && !value["DirName"].IsNull())
    {
        if (!value["DirName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDirInfo.DirName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dirName = string(value["DirName"].GetString());
        m_dirNameHasBeenSet = true;
    }

    if (value.HasMember("DirPath") && !value["DirPath"].IsNull())
    {
        if (!value["DirPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDirInfo.DirPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dirPath = string(value["DirPath"].GetString());
        m_dirPathHasBeenSet = true;
    }

    if (value.HasMember("RelatedServerNum") && !value["RelatedServerNum"].IsNull())
    {
        if (!value["RelatedServerNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDirInfo.RelatedServerNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_relatedServerNum = value["RelatedServerNum"].GetUint64();
        m_relatedServerNumHasBeenSet = true;
    }

    if (value.HasMember("ProtectServerNum") && !value["ProtectServerNum"].IsNull())
    {
        if (!value["ProtectServerNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDirInfo.ProtectServerNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectServerNum = value["ProtectServerNum"].GetUint64();
        m_protectServerNumHasBeenSet = true;
    }

    if (value.HasMember("NoProtectServerNum") && !value["NoProtectServerNum"].IsNull())
    {
        if (!value["NoProtectServerNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDirInfo.NoProtectServerNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_noProtectServerNum = value["NoProtectServerNum"].GetUint64();
        m_noProtectServerNumHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDirInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ProtectStatus") && !value["ProtectStatus"].IsNull())
    {
        if (!value["ProtectStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDirInfo.ProtectStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectStatus = value["ProtectStatus"].GetUint64();
        m_protectStatusHasBeenSet = true;
    }

    if (value.HasMember("ProtectException") && !value["ProtectException"].IsNull())
    {
        if (!value["ProtectException"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDirInfo.ProtectException` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectException = value["ProtectException"].GetUint64();
        m_protectExceptionHasBeenSet = true;
    }

    if (value.HasMember("AutoRestoreSwitchStatus") && !value["AutoRestoreSwitchStatus"].IsNull())
    {
        if (!value["AutoRestoreSwitchStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectDirInfo.AutoRestoreSwitchStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRestoreSwitchStatus = value["AutoRestoreSwitchStatus"].GetUint64();
        m_autoRestoreSwitchStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProtectDirInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dirNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dirName.c_str(), allocator).Move(), allocator);
    }

    if (m_dirPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dirPath.c_str(), allocator).Move(), allocator);
    }

    if (m_relatedServerNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedServerNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relatedServerNum, allocator);
    }

    if (m_protectServerNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectServerNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectServerNum, allocator);
    }

    if (m_noProtectServerNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoProtectServerNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noProtectServerNum, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_protectStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectStatus, allocator);
    }

    if (m_protectExceptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectException";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectException, allocator);
    }

    if (m_autoRestoreSwitchStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRestoreSwitchStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRestoreSwitchStatus, allocator);
    }

}


string ProtectDirInfo::GetDirName() const
{
    return m_dirName;
}

void ProtectDirInfo::SetDirName(const string& _dirName)
{
    m_dirName = _dirName;
    m_dirNameHasBeenSet = true;
}

bool ProtectDirInfo::DirNameHasBeenSet() const
{
    return m_dirNameHasBeenSet;
}

string ProtectDirInfo::GetDirPath() const
{
    return m_dirPath;
}

void ProtectDirInfo::SetDirPath(const string& _dirPath)
{
    m_dirPath = _dirPath;
    m_dirPathHasBeenSet = true;
}

bool ProtectDirInfo::DirPathHasBeenSet() const
{
    return m_dirPathHasBeenSet;
}

uint64_t ProtectDirInfo::GetRelatedServerNum() const
{
    return m_relatedServerNum;
}

void ProtectDirInfo::SetRelatedServerNum(const uint64_t& _relatedServerNum)
{
    m_relatedServerNum = _relatedServerNum;
    m_relatedServerNumHasBeenSet = true;
}

bool ProtectDirInfo::RelatedServerNumHasBeenSet() const
{
    return m_relatedServerNumHasBeenSet;
}

uint64_t ProtectDirInfo::GetProtectServerNum() const
{
    return m_protectServerNum;
}

void ProtectDirInfo::SetProtectServerNum(const uint64_t& _protectServerNum)
{
    m_protectServerNum = _protectServerNum;
    m_protectServerNumHasBeenSet = true;
}

bool ProtectDirInfo::ProtectServerNumHasBeenSet() const
{
    return m_protectServerNumHasBeenSet;
}

uint64_t ProtectDirInfo::GetNoProtectServerNum() const
{
    return m_noProtectServerNum;
}

void ProtectDirInfo::SetNoProtectServerNum(const uint64_t& _noProtectServerNum)
{
    m_noProtectServerNum = _noProtectServerNum;
    m_noProtectServerNumHasBeenSet = true;
}

bool ProtectDirInfo::NoProtectServerNumHasBeenSet() const
{
    return m_noProtectServerNumHasBeenSet;
}

string ProtectDirInfo::GetId() const
{
    return m_id;
}

void ProtectDirInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ProtectDirInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t ProtectDirInfo::GetProtectStatus() const
{
    return m_protectStatus;
}

void ProtectDirInfo::SetProtectStatus(const uint64_t& _protectStatus)
{
    m_protectStatus = _protectStatus;
    m_protectStatusHasBeenSet = true;
}

bool ProtectDirInfo::ProtectStatusHasBeenSet() const
{
    return m_protectStatusHasBeenSet;
}

uint64_t ProtectDirInfo::GetProtectException() const
{
    return m_protectException;
}

void ProtectDirInfo::SetProtectException(const uint64_t& _protectException)
{
    m_protectException = _protectException;
    m_protectExceptionHasBeenSet = true;
}

bool ProtectDirInfo::ProtectExceptionHasBeenSet() const
{
    return m_protectExceptionHasBeenSet;
}

uint64_t ProtectDirInfo::GetAutoRestoreSwitchStatus() const
{
    return m_autoRestoreSwitchStatus;
}

void ProtectDirInfo::SetAutoRestoreSwitchStatus(const uint64_t& _autoRestoreSwitchStatus)
{
    m_autoRestoreSwitchStatus = _autoRestoreSwitchStatus;
    m_autoRestoreSwitchStatusHasBeenSet = true;
}

bool ProtectDirInfo::AutoRestoreSwitchStatusHasBeenSet() const
{
    return m_autoRestoreSwitchStatusHasBeenSet;
}

