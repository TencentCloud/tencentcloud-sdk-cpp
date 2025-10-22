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

#include <tencentcloud/cpdp/v20190820/model/OldAttachmentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

OldAttachmentInfo::OldAttachmentInfo() :
    m_attachmentAmountHasBeenSet(false),
    m_attachmentTypeHasBeenSet(false),
    m_attachmentNameHasBeenSet(false),
    m_attachmentCodeHasBeenSet(false)
{
}

CoreInternalOutcome OldAttachmentInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AttachmentAmount") && !value["AttachmentAmount"].IsNull())
    {
        if (!value["AttachmentAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OldAttachmentInfo.AttachmentAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attachmentAmount = value["AttachmentAmount"].GetInt64();
        m_attachmentAmountHasBeenSet = true;
    }

    if (value.HasMember("AttachmentType") && !value["AttachmentType"].IsNull())
    {
        if (!value["AttachmentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OldAttachmentInfo.AttachmentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attachmentType = string(value["AttachmentType"].GetString());
        m_attachmentTypeHasBeenSet = true;
    }

    if (value.HasMember("AttachmentName") && !value["AttachmentName"].IsNull())
    {
        if (!value["AttachmentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OldAttachmentInfo.AttachmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attachmentName = string(value["AttachmentName"].GetString());
        m_attachmentNameHasBeenSet = true;
    }

    if (value.HasMember("AttachmentCode") && !value["AttachmentCode"].IsNull())
    {
        if (!value["AttachmentCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OldAttachmentInfo.AttachmentCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attachmentCode = string(value["AttachmentCode"].GetString());
        m_attachmentCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OldAttachmentInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_attachmentAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachmentAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attachmentAmount, allocator);
    }

    if (m_attachmentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachmentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attachmentType.c_str(), allocator).Move(), allocator);
    }

    if (m_attachmentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachmentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attachmentName.c_str(), allocator).Move(), allocator);
    }

    if (m_attachmentCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachmentCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attachmentCode.c_str(), allocator).Move(), allocator);
    }

}


int64_t OldAttachmentInfo::GetAttachmentAmount() const
{
    return m_attachmentAmount;
}

void OldAttachmentInfo::SetAttachmentAmount(const int64_t& _attachmentAmount)
{
    m_attachmentAmount = _attachmentAmount;
    m_attachmentAmountHasBeenSet = true;
}

bool OldAttachmentInfo::AttachmentAmountHasBeenSet() const
{
    return m_attachmentAmountHasBeenSet;
}

string OldAttachmentInfo::GetAttachmentType() const
{
    return m_attachmentType;
}

void OldAttachmentInfo::SetAttachmentType(const string& _attachmentType)
{
    m_attachmentType = _attachmentType;
    m_attachmentTypeHasBeenSet = true;
}

bool OldAttachmentInfo::AttachmentTypeHasBeenSet() const
{
    return m_attachmentTypeHasBeenSet;
}

string OldAttachmentInfo::GetAttachmentName() const
{
    return m_attachmentName;
}

void OldAttachmentInfo::SetAttachmentName(const string& _attachmentName)
{
    m_attachmentName = _attachmentName;
    m_attachmentNameHasBeenSet = true;
}

bool OldAttachmentInfo::AttachmentNameHasBeenSet() const
{
    return m_attachmentNameHasBeenSet;
}

string OldAttachmentInfo::GetAttachmentCode() const
{
    return m_attachmentCode;
}

void OldAttachmentInfo::SetAttachmentCode(const string& _attachmentCode)
{
    m_attachmentCode = _attachmentCode;
    m_attachmentCodeHasBeenSet = true;
}

bool OldAttachmentInfo::AttachmentCodeHasBeenSet() const
{
    return m_attachmentCodeHasBeenSet;
}

