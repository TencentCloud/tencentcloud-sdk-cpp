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

#include <tencentcloud/tsf/v20180326/model/PkgInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

PkgInfo::PkgInfo() :
    m_pkgIdHasBeenSet(false),
    m_pkgNameHasBeenSet(false),
    m_pkgTypeHasBeenSet(false),
    m_pkgVersionHasBeenSet(false),
    m_pkgDescHasBeenSet(false),
    m_uploadTimeHasBeenSet(false),
    m_md5HasBeenSet(false),
    m_pkgPubStatusHasBeenSet(false),
    m_pkgBindInfoHasBeenSet(false)
{
}

CoreInternalOutcome PkgInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PkgId") && !value["PkgId"].IsNull())
    {
        if (!value["PkgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PkgInfo.PkgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgId = string(value["PkgId"].GetString());
        m_pkgIdHasBeenSet = true;
    }

    if (value.HasMember("PkgName") && !value["PkgName"].IsNull())
    {
        if (!value["PkgName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PkgInfo.PkgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgName = string(value["PkgName"].GetString());
        m_pkgNameHasBeenSet = true;
    }

    if (value.HasMember("PkgType") && !value["PkgType"].IsNull())
    {
        if (!value["PkgType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PkgInfo.PkgType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgType = string(value["PkgType"].GetString());
        m_pkgTypeHasBeenSet = true;
    }

    if (value.HasMember("PkgVersion") && !value["PkgVersion"].IsNull())
    {
        if (!value["PkgVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PkgInfo.PkgVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgVersion = string(value["PkgVersion"].GetString());
        m_pkgVersionHasBeenSet = true;
    }

    if (value.HasMember("PkgDesc") && !value["PkgDesc"].IsNull())
    {
        if (!value["PkgDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PkgInfo.PkgDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pkgDesc = string(value["PkgDesc"].GetString());
        m_pkgDescHasBeenSet = true;
    }

    if (value.HasMember("UploadTime") && !value["UploadTime"].IsNull())
    {
        if (!value["UploadTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PkgInfo.UploadTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadTime = string(value["UploadTime"].GetString());
        m_uploadTimeHasBeenSet = true;
    }

    if (value.HasMember("Md5") && !value["Md5"].IsNull())
    {
        if (!value["Md5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PkgInfo.Md5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5 = string(value["Md5"].GetString());
        m_md5HasBeenSet = true;
    }

    if (value.HasMember("PkgPubStatus") && !value["PkgPubStatus"].IsNull())
    {
        if (!value["PkgPubStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PkgInfo.PkgPubStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pkgPubStatus = value["PkgPubStatus"].GetInt64();
        m_pkgPubStatusHasBeenSet = true;
    }

    if (value.HasMember("PkgBindInfo") && !value["PkgBindInfo"].IsNull())
    {
        if (!value["PkgBindInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PkgInfo.PkgBindInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["PkgBindInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PkgBind item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pkgBindInfo.push_back(item);
        }
        m_pkgBindInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PkgInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pkgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pkgId.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pkgName.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pkgType.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pkgVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pkgDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uploadTime.c_str(), allocator).Move(), allocator);
    }

    if (m_md5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_md5.c_str(), allocator).Move(), allocator);
    }

    if (m_pkgPubStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgPubStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pkgPubStatus, allocator);
    }

    if (m_pkgBindInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PkgBindInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pkgBindInfo.begin(); itr != m_pkgBindInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string PkgInfo::GetPkgId() const
{
    return m_pkgId;
}

void PkgInfo::SetPkgId(const string& _pkgId)
{
    m_pkgId = _pkgId;
    m_pkgIdHasBeenSet = true;
}

bool PkgInfo::PkgIdHasBeenSet() const
{
    return m_pkgIdHasBeenSet;
}

string PkgInfo::GetPkgName() const
{
    return m_pkgName;
}

void PkgInfo::SetPkgName(const string& _pkgName)
{
    m_pkgName = _pkgName;
    m_pkgNameHasBeenSet = true;
}

bool PkgInfo::PkgNameHasBeenSet() const
{
    return m_pkgNameHasBeenSet;
}

string PkgInfo::GetPkgType() const
{
    return m_pkgType;
}

void PkgInfo::SetPkgType(const string& _pkgType)
{
    m_pkgType = _pkgType;
    m_pkgTypeHasBeenSet = true;
}

bool PkgInfo::PkgTypeHasBeenSet() const
{
    return m_pkgTypeHasBeenSet;
}

string PkgInfo::GetPkgVersion() const
{
    return m_pkgVersion;
}

void PkgInfo::SetPkgVersion(const string& _pkgVersion)
{
    m_pkgVersion = _pkgVersion;
    m_pkgVersionHasBeenSet = true;
}

bool PkgInfo::PkgVersionHasBeenSet() const
{
    return m_pkgVersionHasBeenSet;
}

string PkgInfo::GetPkgDesc() const
{
    return m_pkgDesc;
}

void PkgInfo::SetPkgDesc(const string& _pkgDesc)
{
    m_pkgDesc = _pkgDesc;
    m_pkgDescHasBeenSet = true;
}

bool PkgInfo::PkgDescHasBeenSet() const
{
    return m_pkgDescHasBeenSet;
}

string PkgInfo::GetUploadTime() const
{
    return m_uploadTime;
}

void PkgInfo::SetUploadTime(const string& _uploadTime)
{
    m_uploadTime = _uploadTime;
    m_uploadTimeHasBeenSet = true;
}

bool PkgInfo::UploadTimeHasBeenSet() const
{
    return m_uploadTimeHasBeenSet;
}

string PkgInfo::GetMd5() const
{
    return m_md5;
}

void PkgInfo::SetMd5(const string& _md5)
{
    m_md5 = _md5;
    m_md5HasBeenSet = true;
}

bool PkgInfo::Md5HasBeenSet() const
{
    return m_md5HasBeenSet;
}

int64_t PkgInfo::GetPkgPubStatus() const
{
    return m_pkgPubStatus;
}

void PkgInfo::SetPkgPubStatus(const int64_t& _pkgPubStatus)
{
    m_pkgPubStatus = _pkgPubStatus;
    m_pkgPubStatusHasBeenSet = true;
}

bool PkgInfo::PkgPubStatusHasBeenSet() const
{
    return m_pkgPubStatusHasBeenSet;
}

vector<PkgBind> PkgInfo::GetPkgBindInfo() const
{
    return m_pkgBindInfo;
}

void PkgInfo::SetPkgBindInfo(const vector<PkgBind>& _pkgBindInfo)
{
    m_pkgBindInfo = _pkgBindInfo;
    m_pkgBindInfoHasBeenSet = true;
}

bool PkgInfo::PkgBindInfoHasBeenSet() const
{
    return m_pkgBindInfoHasBeenSet;
}

