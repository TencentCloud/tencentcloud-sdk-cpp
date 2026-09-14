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

#include <tencentcloud/iotexplorer/v20190423/model/SeeObjectMetadata.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

SeeObjectMetadata::SeeObjectMetadata() :
    m_keyHasBeenSet(false),
    m_cOSURIHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_eTagHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
}

CoreInternalOutcome SeeObjectMetadata::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeObjectMetadata.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("COSURI") && !value["COSURI"].IsNull())
    {
        if (!value["COSURI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeObjectMetadata.COSURI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cOSURI = string(value["COSURI"].GetString());
        m_cOSURIHasBeenSet = true;
    }

    if (value.HasMember("ContentType") && !value["ContentType"].IsNull())
    {
        if (!value["ContentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeObjectMetadata.ContentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentType = string(value["ContentType"].GetString());
        m_contentTypeHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeObjectMetadata.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("ETag") && !value["ETag"].IsNull())
    {
        if (!value["ETag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeObjectMetadata.ETag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eTag = string(value["ETag"].GetString());
        m_eTagHasBeenSet = true;
    }

    if (value.HasMember("LastModified") && !value["LastModified"].IsNull())
    {
        if (!value["LastModified"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeObjectMetadata.LastModified` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastModified = value["LastModified"].GetInt64();
        m_lastModifiedHasBeenSet = true;
    }

    if (value.HasMember("Metadata") && !value["Metadata"].IsNull())
    {
        if (!value["Metadata"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SeeObjectMetadata.Metadata` is not array type"));

        const rapidjson::Value &tmpValue = value["Metadata"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SeeObjectMetadataEntry item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metadata.push_back(item);
        }
        m_metadataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SeeObjectMetadata::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_cOSURIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "COSURI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cOSURI.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_eTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ETag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eTag.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifiedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModified";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastModified, allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metadata.begin(); itr != m_metadata.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SeeObjectMetadata::GetKey() const
{
    return m_key;
}

void SeeObjectMetadata::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool SeeObjectMetadata::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string SeeObjectMetadata::GetCOSURI() const
{
    return m_cOSURI;
}

void SeeObjectMetadata::SetCOSURI(const string& _cOSURI)
{
    m_cOSURI = _cOSURI;
    m_cOSURIHasBeenSet = true;
}

bool SeeObjectMetadata::COSURIHasBeenSet() const
{
    return m_cOSURIHasBeenSet;
}

string SeeObjectMetadata::GetContentType() const
{
    return m_contentType;
}

void SeeObjectMetadata::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool SeeObjectMetadata::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

int64_t SeeObjectMetadata::GetSize() const
{
    return m_size;
}

void SeeObjectMetadata::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool SeeObjectMetadata::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string SeeObjectMetadata::GetETag() const
{
    return m_eTag;
}

void SeeObjectMetadata::SetETag(const string& _eTag)
{
    m_eTag = _eTag;
    m_eTagHasBeenSet = true;
}

bool SeeObjectMetadata::ETagHasBeenSet() const
{
    return m_eTagHasBeenSet;
}

int64_t SeeObjectMetadata::GetLastModified() const
{
    return m_lastModified;
}

void SeeObjectMetadata::SetLastModified(const int64_t& _lastModified)
{
    m_lastModified = _lastModified;
    m_lastModifiedHasBeenSet = true;
}

bool SeeObjectMetadata::LastModifiedHasBeenSet() const
{
    return m_lastModifiedHasBeenSet;
}

vector<SeeObjectMetadataEntry> SeeObjectMetadata::GetMetadata() const
{
    return m_metadata;
}

void SeeObjectMetadata::SetMetadata(const vector<SeeObjectMetadataEntry>& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool SeeObjectMetadata::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

