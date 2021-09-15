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

#include <tencentcloud/essbasic/v20201222/model/Seal.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

Seal::Seal() :
    m_sealIdHasBeenSet(false),
    m_sealNameHasBeenSet(false),
    m_sealTypeHasBeenSet(false),
    m_sealSourceHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_defaultSealHasBeenSet(false)
{
}

CoreInternalOutcome Seal::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SealId") && !value["SealId"].IsNull())
    {
        if (!value["SealId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Seal.SealId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sealId = string(value["SealId"].GetString());
        m_sealIdHasBeenSet = true;
    }

    if (value.HasMember("SealName") && !value["SealName"].IsNull())
    {
        if (!value["SealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Seal.SealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sealName = string(value["SealName"].GetString());
        m_sealNameHasBeenSet = true;
    }

    if (value.HasMember("SealType") && !value["SealType"].IsNull())
    {
        if (!value["SealType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Seal.SealType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sealType = string(value["SealType"].GetString());
        m_sealTypeHasBeenSet = true;
    }

    if (value.HasMember("SealSource") && !value["SealSource"].IsNull())
    {
        if (!value["SealSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Seal.SealSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sealSource = string(value["SealSource"].GetString());
        m_sealSourceHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Seal.Creator` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_creator.Deserialize(value["Creator"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Seal.CreatedOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = value["CreatedOn"].GetInt64();
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Seal.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("FileUrl") && !value["FileUrl"].IsNull())
    {
        if (!value["FileUrl"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Seal.FileUrl` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fileUrl.Deserialize(value["FileUrl"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileUrlHasBeenSet = true;
    }

    if (value.HasMember("DefaultSeal") && !value["DefaultSeal"].IsNull())
    {
        if (!value["DefaultSeal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Seal.DefaultSeal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_defaultSeal = value["DefaultSeal"].GetBool();
        m_defaultSealHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Seal::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sealIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sealId.c_str(), allocator).Move(), allocator);
    }

    if (m_sealNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sealName.c_str(), allocator).Move(), allocator);
    }

    if (m_sealTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sealType.c_str(), allocator).Move(), allocator);
    }

    if (m_sealSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sealSource.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_creator.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdOn, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fileUrl.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_defaultSealHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultSeal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultSeal, allocator);
    }

}


string Seal::GetSealId() const
{
    return m_sealId;
}

void Seal::SetSealId(const string& _sealId)
{
    m_sealId = _sealId;
    m_sealIdHasBeenSet = true;
}

bool Seal::SealIdHasBeenSet() const
{
    return m_sealIdHasBeenSet;
}

string Seal::GetSealName() const
{
    return m_sealName;
}

void Seal::SetSealName(const string& _sealName)
{
    m_sealName = _sealName;
    m_sealNameHasBeenSet = true;
}

bool Seal::SealNameHasBeenSet() const
{
    return m_sealNameHasBeenSet;
}

string Seal::GetSealType() const
{
    return m_sealType;
}

void Seal::SetSealType(const string& _sealType)
{
    m_sealType = _sealType;
    m_sealTypeHasBeenSet = true;
}

bool Seal::SealTypeHasBeenSet() const
{
    return m_sealTypeHasBeenSet;
}

string Seal::GetSealSource() const
{
    return m_sealSource;
}

void Seal::SetSealSource(const string& _sealSource)
{
    m_sealSource = _sealSource;
    m_sealSourceHasBeenSet = true;
}

bool Seal::SealSourceHasBeenSet() const
{
    return m_sealSourceHasBeenSet;
}

Caller Seal::GetCreator() const
{
    return m_creator;
}

void Seal::SetCreator(const Caller& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool Seal::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

int64_t Seal::GetCreatedOn() const
{
    return m_createdOn;
}

void Seal::SetCreatedOn(const int64_t& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool Seal::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string Seal::GetUserId() const
{
    return m_userId;
}

void Seal::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool Seal::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

FileUrl Seal::GetFileUrl() const
{
    return m_fileUrl;
}

void Seal::SetFileUrl(const FileUrl& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool Seal::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

bool Seal::GetDefaultSeal() const
{
    return m_defaultSeal;
}

void Seal::SetDefaultSeal(const bool& _defaultSeal)
{
    m_defaultSeal = _defaultSeal;
    m_defaultSealHasBeenSet = true;
}

bool Seal::DefaultSealHasBeenSet() const
{
    return m_defaultSealHasBeenSet;
}

