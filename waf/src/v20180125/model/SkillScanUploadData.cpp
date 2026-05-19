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

#include <tencentcloud/waf/v20180125/model/SkillScanUploadData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

SkillScanUploadData::SkillScanUploadData() :
    m_contentHashHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome SkillScanUploadData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ContentHash") && !value["ContentHash"].IsNull())
    {
        if (!value["ContentHash"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanUploadData.ContentHash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentHash = string(value["ContentHash"].GetString());
        m_contentHashHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanUploadData.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanUploadData.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkillScanUploadData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentHash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentHash.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


string SkillScanUploadData::GetContentHash() const
{
    return m_contentHash;
}

void SkillScanUploadData::SetContentHash(const string& _contentHash)
{
    m_contentHash = _contentHash;
    m_contentHashHasBeenSet = true;
}

bool SkillScanUploadData::ContentHashHasBeenSet() const
{
    return m_contentHashHasBeenSet;
}

string SkillScanUploadData::GetStatus() const
{
    return m_status;
}

void SkillScanUploadData::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SkillScanUploadData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SkillScanUploadData::GetMessage() const
{
    return m_message;
}

void SkillScanUploadData::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool SkillScanUploadData::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

