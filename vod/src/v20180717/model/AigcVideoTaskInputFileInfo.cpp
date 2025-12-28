/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/vod/v20180717/model/AigcVideoTaskInputFileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AigcVideoTaskInputFileInfo::AigcVideoTaskInputFileInfo() :
    m_typeHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_referenceTypeHasBeenSet(false),
    m_objectIdHasBeenSet(false),
    m_voiceIdHasBeenSet(false)
{
}

CoreInternalOutcome AigcVideoTaskInputFileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoTaskInputFileInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoTaskInputFileInfo.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoTaskInputFileInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("ReferenceType") && !value["ReferenceType"].IsNull())
    {
        if (!value["ReferenceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoTaskInputFileInfo.ReferenceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referenceType = string(value["ReferenceType"].GetString());
        m_referenceTypeHasBeenSet = true;
    }

    if (value.HasMember("ObjectId") && !value["ObjectId"].IsNull())
    {
        if (!value["ObjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoTaskInputFileInfo.ObjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectId = string(value["ObjectId"].GetString());
        m_objectIdHasBeenSet = true;
    }

    if (value.HasMember("VoiceId") && !value["VoiceId"].IsNull())
    {
        if (!value["VoiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcVideoTaskInputFileInfo.VoiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceId = string(value["VoiceId"].GetString());
        m_voiceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcVideoTaskInputFileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referenceType.c_str(), allocator).Move(), allocator);
    }

    if (m_objectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectId.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
    }

}


string AigcVideoTaskInputFileInfo::GetType() const
{
    return m_type;
}

void AigcVideoTaskInputFileInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AigcVideoTaskInputFileInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AigcVideoTaskInputFileInfo::GetFileId() const
{
    return m_fileId;
}

void AigcVideoTaskInputFileInfo::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool AigcVideoTaskInputFileInfo::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string AigcVideoTaskInputFileInfo::GetUrl() const
{
    return m_url;
}

void AigcVideoTaskInputFileInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool AigcVideoTaskInputFileInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string AigcVideoTaskInputFileInfo::GetReferenceType() const
{
    return m_referenceType;
}

void AigcVideoTaskInputFileInfo::SetReferenceType(const string& _referenceType)
{
    m_referenceType = _referenceType;
    m_referenceTypeHasBeenSet = true;
}

bool AigcVideoTaskInputFileInfo::ReferenceTypeHasBeenSet() const
{
    return m_referenceTypeHasBeenSet;
}

string AigcVideoTaskInputFileInfo::GetObjectId() const
{
    return m_objectId;
}

void AigcVideoTaskInputFileInfo::SetObjectId(const string& _objectId)
{
    m_objectId = _objectId;
    m_objectIdHasBeenSet = true;
}

bool AigcVideoTaskInputFileInfo::ObjectIdHasBeenSet() const
{
    return m_objectIdHasBeenSet;
}

string AigcVideoTaskInputFileInfo::GetVoiceId() const
{
    return m_voiceId;
}

void AigcVideoTaskInputFileInfo::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool AigcVideoTaskInputFileInfo::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

