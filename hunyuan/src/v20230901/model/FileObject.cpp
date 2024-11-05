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

#include <tencentcloud/hunyuan/v20230901/model/FileObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

FileObject::FileObject() :
    m_iDHasBeenSet(false),
    m_objectHasBeenSet(false),
    m_bytesHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_filenameHasBeenSet(false),
    m_purposeHasBeenSet(false)
{
}

CoreInternalOutcome FileObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileObject.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Object") && !value["Object"].IsNull())
    {
        if (!value["Object"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileObject.Object` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_object = string(value["Object"].GetString());
        m_objectHasBeenSet = true;
    }

    if (value.HasMember("Bytes") && !value["Bytes"].IsNull())
    {
        if (!value["Bytes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileObject.Bytes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bytes = value["Bytes"].GetUint64();
        m_bytesHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileObject.CreatedAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = value["CreatedAt"].GetInt64();
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("Filename") && !value["Filename"].IsNull())
    {
        if (!value["Filename"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileObject.Filename` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filename = string(value["Filename"].GetString());
        m_filenameHasBeenSet = true;
    }

    if (value.HasMember("Purpose") && !value["Purpose"].IsNull())
    {
        if (!value["Purpose"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileObject.Purpose` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_purpose = string(value["Purpose"].GetString());
        m_purposeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileObject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_objectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Object";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_object.c_str(), allocator).Move(), allocator);
    }

    if (m_bytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bytes, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdAt, allocator);
    }

    if (m_filenameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filename";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filename.c_str(), allocator).Move(), allocator);
    }

    if (m_purposeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Purpose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_purpose.c_str(), allocator).Move(), allocator);
    }

}


string FileObject::GetID() const
{
    return m_iD;
}

void FileObject::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool FileObject::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string FileObject::GetObject() const
{
    return m_object;
}

void FileObject::SetObject(const string& _object)
{
    m_object = _object;
    m_objectHasBeenSet = true;
}

bool FileObject::ObjectHasBeenSet() const
{
    return m_objectHasBeenSet;
}

uint64_t FileObject::GetBytes() const
{
    return m_bytes;
}

void FileObject::SetBytes(const uint64_t& _bytes)
{
    m_bytes = _bytes;
    m_bytesHasBeenSet = true;
}

bool FileObject::BytesHasBeenSet() const
{
    return m_bytesHasBeenSet;
}

int64_t FileObject::GetCreatedAt() const
{
    return m_createdAt;
}

void FileObject::SetCreatedAt(const int64_t& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool FileObject::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string FileObject::GetFilename() const
{
    return m_filename;
}

void FileObject::SetFilename(const string& _filename)
{
    m_filename = _filename;
    m_filenameHasBeenSet = true;
}

bool FileObject::FilenameHasBeenSet() const
{
    return m_filenameHasBeenSet;
}

string FileObject::GetPurpose() const
{
    return m_purpose;
}

void FileObject::SetPurpose(const string& _purpose)
{
    m_purpose = _purpose;
    m_purposeHasBeenSet = true;
}

bool FileObject::PurposeHasBeenSet() const
{
    return m_purposeHasBeenSet;
}

