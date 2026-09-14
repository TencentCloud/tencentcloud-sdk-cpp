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

#include <tencentcloud/iotexplorer/v20190423/model/SeeObjectSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

SeeObjectSummary::SeeObjectSummary() :
    m_keyHasBeenSet(false),
    m_cOSURIHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_eTagHasBeenSet(false),
    m_lastModifiedHasBeenSet(false)
{
}

CoreInternalOutcome SeeObjectSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeObjectSummary.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("COSURI") && !value["COSURI"].IsNull())
    {
        if (!value["COSURI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeObjectSummary.COSURI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cOSURI = string(value["COSURI"].GetString());
        m_cOSURIHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeObjectSummary.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("ETag") && !value["ETag"].IsNull())
    {
        if (!value["ETag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeObjectSummary.ETag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eTag = string(value["ETag"].GetString());
        m_eTagHasBeenSet = true;
    }

    if (value.HasMember("LastModified") && !value["LastModified"].IsNull())
    {
        if (!value["LastModified"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeObjectSummary.LastModified` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastModified = value["LastModified"].GetInt64();
        m_lastModifiedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SeeObjectSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string SeeObjectSummary::GetKey() const
{
    return m_key;
}

void SeeObjectSummary::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool SeeObjectSummary::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string SeeObjectSummary::GetCOSURI() const
{
    return m_cOSURI;
}

void SeeObjectSummary::SetCOSURI(const string& _cOSURI)
{
    m_cOSURI = _cOSURI;
    m_cOSURIHasBeenSet = true;
}

bool SeeObjectSummary::COSURIHasBeenSet() const
{
    return m_cOSURIHasBeenSet;
}

int64_t SeeObjectSummary::GetSize() const
{
    return m_size;
}

void SeeObjectSummary::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool SeeObjectSummary::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string SeeObjectSummary::GetETag() const
{
    return m_eTag;
}

void SeeObjectSummary::SetETag(const string& _eTag)
{
    m_eTag = _eTag;
    m_eTagHasBeenSet = true;
}

bool SeeObjectSummary::ETagHasBeenSet() const
{
    return m_eTagHasBeenSet;
}

int64_t SeeObjectSummary::GetLastModified() const
{
    return m_lastModified;
}

void SeeObjectSummary::SetLastModified(const int64_t& _lastModified)
{
    m_lastModified = _lastModified;
    m_lastModifiedHasBeenSet = true;
}

bool SeeObjectSummary::LastModifiedHasBeenSet() const
{
    return m_lastModifiedHasBeenSet;
}

