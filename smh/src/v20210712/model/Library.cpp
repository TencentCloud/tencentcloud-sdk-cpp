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

#include <tencentcloud/smh/v20210712/model/Library.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Smh::V20210712::Model;
using namespace std;

Library::Library() :
    m_libraryIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_bucketRegionHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_libraryExtensionHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_dirNumHasBeenSet(false),
    m_fileNumHasBeenSet(false)
{
}

CoreInternalOutcome Library::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LibraryId") && !value["LibraryId"].IsNull())
    {
        if (!value["LibraryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Library.LibraryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libraryId = string(value["LibraryId"].GetString());
        m_libraryIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Library.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Library.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("BucketName") && !value["BucketName"].IsNull())
    {
        if (!value["BucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Library.BucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketName = string(value["BucketName"].GetString());
        m_bucketNameHasBeenSet = true;
    }

    if (value.HasMember("BucketRegion") && !value["BucketRegion"].IsNull())
    {
        if (!value["BucketRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Library.BucketRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketRegion = string(value["BucketRegion"].GetString());
        m_bucketRegionHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Library.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("LibraryExtension") && !value["LibraryExtension"].IsNull())
    {
        if (!value["LibraryExtension"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Library.LibraryExtension` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_libraryExtension.Deserialize(value["LibraryExtension"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_libraryExtensionHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Library.Size` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_size = string(value["Size"].GetString());
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("DirNum") && !value["DirNum"].IsNull())
    {
        if (!value["DirNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Library.DirNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dirNum = string(value["DirNum"].GetString());
        m_dirNumHasBeenSet = true;
    }

    if (value.HasMember("FileNum") && !value["FileNum"].IsNull())
    {
        if (!value["FileNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Library.FileNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileNum = string(value["FileNum"].GetString());
        m_fileNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Library::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_libraryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibraryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_libraryId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_libraryExtensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibraryExtension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_libraryExtension.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_size.c_str(), allocator).Move(), allocator);
    }

    if (m_dirNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dirNum.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileNum.c_str(), allocator).Move(), allocator);
    }

}


string Library::GetLibraryId() const
{
    return m_libraryId;
}

void Library::SetLibraryId(const string& _libraryId)
{
    m_libraryId = _libraryId;
    m_libraryIdHasBeenSet = true;
}

bool Library::LibraryIdHasBeenSet() const
{
    return m_libraryIdHasBeenSet;
}

string Library::GetName() const
{
    return m_name;
}

void Library::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Library::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Library::GetRemark() const
{
    return m_remark;
}

void Library::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool Library::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string Library::GetBucketName() const
{
    return m_bucketName;
}

void Library::SetBucketName(const string& _bucketName)
{
    m_bucketName = _bucketName;
    m_bucketNameHasBeenSet = true;
}

bool Library::BucketNameHasBeenSet() const
{
    return m_bucketNameHasBeenSet;
}

string Library::GetBucketRegion() const
{
    return m_bucketRegion;
}

void Library::SetBucketRegion(const string& _bucketRegion)
{
    m_bucketRegion = _bucketRegion;
    m_bucketRegionHasBeenSet = true;
}

bool Library::BucketRegionHasBeenSet() const
{
    return m_bucketRegionHasBeenSet;
}

string Library::GetCreationTime() const
{
    return m_creationTime;
}

void Library::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool Library::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

LibraryExtension Library::GetLibraryExtension() const
{
    return m_libraryExtension;
}

void Library::SetLibraryExtension(const LibraryExtension& _libraryExtension)
{
    m_libraryExtension = _libraryExtension;
    m_libraryExtensionHasBeenSet = true;
}

bool Library::LibraryExtensionHasBeenSet() const
{
    return m_libraryExtensionHasBeenSet;
}

string Library::GetSize() const
{
    return m_size;
}

void Library::SetSize(const string& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool Library::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string Library::GetDirNum() const
{
    return m_dirNum;
}

void Library::SetDirNum(const string& _dirNum)
{
    m_dirNum = _dirNum;
    m_dirNumHasBeenSet = true;
}

bool Library::DirNumHasBeenSet() const
{
    return m_dirNumHasBeenSet;
}

string Library::GetFileNum() const
{
    return m_fileNum;
}

void Library::SetFileNum(const string& _fileNum)
{
    m_fileNum = _fileNum;
    m_fileNumHasBeenSet = true;
}

bool Library::FileNumHasBeenSet() const
{
    return m_fileNumHasBeenSet;
}

