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

#include <tencentcloud/drm/v20181115/model/FairPlayPemDigestInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Drm::V20181115::Model;
using namespace std;

FairPlayPemDigestInfo::FairPlayPemDigestInfo() :
    m_fairPlayPemIdHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_md5PemHasBeenSet(false),
    m_md5AskHasBeenSet(false),
    m_md5PemDecryptKeyHasBeenSet(false)
{
}

CoreInternalOutcome FairPlayPemDigestInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FairPlayPemId") && !value["FairPlayPemId"].IsNull())
    {
        if (!value["FairPlayPemId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FairPlayPemDigestInfo.FairPlayPemId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fairPlayPemId = value["FairPlayPemId"].GetUint64();
        m_fairPlayPemIdHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FairPlayPemDigestInfo.Priority` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetUint64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("Md5Pem") && !value["Md5Pem"].IsNull())
    {
        if (!value["Md5Pem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FairPlayPemDigestInfo.Md5Pem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5Pem = string(value["Md5Pem"].GetString());
        m_md5PemHasBeenSet = true;
    }

    if (value.HasMember("Md5Ask") && !value["Md5Ask"].IsNull())
    {
        if (!value["Md5Ask"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FairPlayPemDigestInfo.Md5Ask` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5Ask = string(value["Md5Ask"].GetString());
        m_md5AskHasBeenSet = true;
    }

    if (value.HasMember("Md5PemDecryptKey") && !value["Md5PemDecryptKey"].IsNull())
    {
        if (!value["Md5PemDecryptKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FairPlayPemDigestInfo.Md5PemDecryptKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5PemDecryptKey = string(value["Md5PemDecryptKey"].GetString());
        m_md5PemDecryptKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FairPlayPemDigestInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fairPlayPemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FairPlayPemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fairPlayPemId, allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_md5PemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5Pem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_md5Pem.c_str(), allocator).Move(), allocator);
    }

    if (m_md5AskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5Ask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_md5Ask.c_str(), allocator).Move(), allocator);
    }

    if (m_md5PemDecryptKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5PemDecryptKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_md5PemDecryptKey.c_str(), allocator).Move(), allocator);
    }

}


uint64_t FairPlayPemDigestInfo::GetFairPlayPemId() const
{
    return m_fairPlayPemId;
}

void FairPlayPemDigestInfo::SetFairPlayPemId(const uint64_t& _fairPlayPemId)
{
    m_fairPlayPemId = _fairPlayPemId;
    m_fairPlayPemIdHasBeenSet = true;
}

bool FairPlayPemDigestInfo::FairPlayPemIdHasBeenSet() const
{
    return m_fairPlayPemIdHasBeenSet;
}

uint64_t FairPlayPemDigestInfo::GetPriority() const
{
    return m_priority;
}

void FairPlayPemDigestInfo::SetPriority(const uint64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool FairPlayPemDigestInfo::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string FairPlayPemDigestInfo::GetMd5Pem() const
{
    return m_md5Pem;
}

void FairPlayPemDigestInfo::SetMd5Pem(const string& _md5Pem)
{
    m_md5Pem = _md5Pem;
    m_md5PemHasBeenSet = true;
}

bool FairPlayPemDigestInfo::Md5PemHasBeenSet() const
{
    return m_md5PemHasBeenSet;
}

string FairPlayPemDigestInfo::GetMd5Ask() const
{
    return m_md5Ask;
}

void FairPlayPemDigestInfo::SetMd5Ask(const string& _md5Ask)
{
    m_md5Ask = _md5Ask;
    m_md5AskHasBeenSet = true;
}

bool FairPlayPemDigestInfo::Md5AskHasBeenSet() const
{
    return m_md5AskHasBeenSet;
}

string FairPlayPemDigestInfo::GetMd5PemDecryptKey() const
{
    return m_md5PemDecryptKey;
}

void FairPlayPemDigestInfo::SetMd5PemDecryptKey(const string& _md5PemDecryptKey)
{
    m_md5PemDecryptKey = _md5PemDecryptKey;
    m_md5PemDecryptKeyHasBeenSet = true;
}

bool FairPlayPemDigestInfo::Md5PemDecryptKeyHasBeenSet() const
{
    return m_md5PemDecryptKeyHasBeenSet;
}

