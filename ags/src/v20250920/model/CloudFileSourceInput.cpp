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

#include <tencentcloud/ags/v20250920/model/CloudFileSourceInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

CloudFileSourceInput::CloudFileSourceInput() :
    m_typeHasBeenSet(false),
    m_sizeBytesHasBeenSet(false),
    m_sHA256HasBeenSet(false),
    m_sourceVersionIdHasBeenSet(false)
{
}

CoreInternalOutcome CloudFileSourceInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudFileSourceInput.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SizeBytes") && !value["SizeBytes"].IsNull())
    {
        if (!value["SizeBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudFileSourceInput.SizeBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sizeBytes = value["SizeBytes"].GetInt64();
        m_sizeBytesHasBeenSet = true;
    }

    if (value.HasMember("SHA256") && !value["SHA256"].IsNull())
    {
        if (!value["SHA256"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudFileSourceInput.SHA256` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sHA256 = string(value["SHA256"].GetString());
        m_sHA256HasBeenSet = true;
    }

    if (value.HasMember("SourceVersionId") && !value["SourceVersionId"].IsNull())
    {
        if (!value["SourceVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudFileSourceInput.SourceVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceVersionId = string(value["SourceVersionId"].GetString());
        m_sourceVersionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudFileSourceInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SizeBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sizeBytes, allocator);
    }

    if (m_sHA256HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SHA256";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sHA256.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceVersionId.c_str(), allocator).Move(), allocator);
    }

}


string CloudFileSourceInput::GetType() const
{
    return m_type;
}

void CloudFileSourceInput::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CloudFileSourceInput::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t CloudFileSourceInput::GetSizeBytes() const
{
    return m_sizeBytes;
}

void CloudFileSourceInput::SetSizeBytes(const int64_t& _sizeBytes)
{
    m_sizeBytes = _sizeBytes;
    m_sizeBytesHasBeenSet = true;
}

bool CloudFileSourceInput::SizeBytesHasBeenSet() const
{
    return m_sizeBytesHasBeenSet;
}

string CloudFileSourceInput::GetSHA256() const
{
    return m_sHA256;
}

void CloudFileSourceInput::SetSHA256(const string& _sHA256)
{
    m_sHA256 = _sHA256;
    m_sHA256HasBeenSet = true;
}

bool CloudFileSourceInput::SHA256HasBeenSet() const
{
    return m_sHA256HasBeenSet;
}

string CloudFileSourceInput::GetSourceVersionId() const
{
    return m_sourceVersionId;
}

void CloudFileSourceInput::SetSourceVersionId(const string& _sourceVersionId)
{
    m_sourceVersionId = _sourceVersionId;
    m_sourceVersionIdHasBeenSet = true;
}

bool CloudFileSourceInput::SourceVersionIdHasBeenSet() const
{
    return m_sourceVersionIdHasBeenSet;
}

