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

#include <tencentcloud/tdai/v20250717/model/Attachments.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

Attachments::Attachments() :
    m_cosKeyHasBeenSet(false),
    m_mimeTypeHasBeenSet(false)
{
}

CoreInternalOutcome Attachments::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CosKey") && !value["CosKey"].IsNull())
    {
        if (!value["CosKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Attachments.CosKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosKey = string(value["CosKey"].GetString());
        m_cosKeyHasBeenSet = true;
    }

    if (value.HasMember("MimeType") && !value["MimeType"].IsNull())
    {
        if (!value["MimeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Attachments.MimeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mimeType = string(value["MimeType"].GetString());
        m_mimeTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Attachments::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cosKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosKey.c_str(), allocator).Move(), allocator);
    }

    if (m_mimeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MimeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mimeType.c_str(), allocator).Move(), allocator);
    }

}


string Attachments::GetCosKey() const
{
    return m_cosKey;
}

void Attachments::SetCosKey(const string& _cosKey)
{
    m_cosKey = _cosKey;
    m_cosKeyHasBeenSet = true;
}

bool Attachments::CosKeyHasBeenSet() const
{
    return m_cosKeyHasBeenSet;
}

string Attachments::GetMimeType() const
{
    return m_mimeType;
}

void Attachments::SetMimeType(const string& _mimeType)
{
    m_mimeType = _mimeType;
    m_mimeTypeHasBeenSet = true;
}

bool Attachments::MimeTypeHasBeenSet() const
{
    return m_mimeTypeHasBeenSet;
}

