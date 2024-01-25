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

#include <tencentcloud/wedata/v20210820/model/CodeDetailResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CodeDetailResult::CodeDetailResult() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_fileExtensionTypeHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_remotePathHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_extraInfoHasBeenSet(false),
    m_localPathHasBeenSet(false)
{
}

CoreInternalOutcome CodeDetailResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeDetailResult.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeDetailResult.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeDetailResult.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeDetailResult.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("FileExtensionType") && !value["FileExtensionType"].IsNull())
    {
        if (!value["FileExtensionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeDetailResult.FileExtensionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileExtensionType = string(value["FileExtensionType"].GetString());
        m_fileExtensionTypeHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeDetailResult.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("RemotePath") && !value["RemotePath"].IsNull())
    {
        if (!value["RemotePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeDetailResult.RemotePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remotePath = string(value["RemotePath"].GetString());
        m_remotePathHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeDetailResult.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("ExtraInfo") && !value["ExtraInfo"].IsNull())
    {
        if (!value["ExtraInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeDetailResult.ExtraInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraInfo = string(value["ExtraInfo"].GetString());
        m_extraInfoHasBeenSet = true;
    }

    if (value.HasMember("LocalPath") && !value["LocalPath"].IsNull())
    {
        if (!value["LocalPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeDetailResult.LocalPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localPath = string(value["LocalPath"].GetString());
        m_localPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CodeDetailResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileExtensionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileExtensionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileExtensionType.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_remotePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemotePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remotePath.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_extraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_localPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localPath.c_str(), allocator).Move(), allocator);
    }

}


string CodeDetailResult::GetId() const
{
    return m_id;
}

void CodeDetailResult::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CodeDetailResult::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CodeDetailResult::GetName() const
{
    return m_name;
}

void CodeDetailResult::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CodeDetailResult::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CodeDetailResult::GetType() const
{
    return m_type;
}

void CodeDetailResult::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CodeDetailResult::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CodeDetailResult::GetResourceId() const
{
    return m_resourceId;
}

void CodeDetailResult::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool CodeDetailResult::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string CodeDetailResult::GetFileExtensionType() const
{
    return m_fileExtensionType;
}

void CodeDetailResult::SetFileExtensionType(const string& _fileExtensionType)
{
    m_fileExtensionType = _fileExtensionType;
    m_fileExtensionTypeHasBeenSet = true;
}

bool CodeDetailResult::FileExtensionTypeHasBeenSet() const
{
    return m_fileExtensionTypeHasBeenSet;
}

string CodeDetailResult::GetBucket() const
{
    return m_bucket;
}

void CodeDetailResult::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool CodeDetailResult::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string CodeDetailResult::GetRemotePath() const
{
    return m_remotePath;
}

void CodeDetailResult::SetRemotePath(const string& _remotePath)
{
    m_remotePath = _remotePath;
    m_remotePathHasBeenSet = true;
}

bool CodeDetailResult::RemotePathHasBeenSet() const
{
    return m_remotePathHasBeenSet;
}

string CodeDetailResult::GetRegion() const
{
    return m_region;
}

void CodeDetailResult::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CodeDetailResult::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string CodeDetailResult::GetExtraInfo() const
{
    return m_extraInfo;
}

void CodeDetailResult::SetExtraInfo(const string& _extraInfo)
{
    m_extraInfo = _extraInfo;
    m_extraInfoHasBeenSet = true;
}

bool CodeDetailResult::ExtraInfoHasBeenSet() const
{
    return m_extraInfoHasBeenSet;
}

string CodeDetailResult::GetLocalPath() const
{
    return m_localPath;
}

void CodeDetailResult::SetLocalPath(const string& _localPath)
{
    m_localPath = _localPath;
    m_localPathHasBeenSet = true;
}

bool CodeDetailResult::LocalPathHasBeenSet() const
{
    return m_localPathHasBeenSet;
}

