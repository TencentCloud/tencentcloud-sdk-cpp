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

#include <tencentcloud/cpdp/v20190820/model/CloudExternalAttachmentData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CloudExternalAttachmentData::CloudExternalAttachmentData() :
    m_channelNameHasBeenSet(false),
    m_attachmentDataHasBeenSet(false)
{
}

CoreInternalOutcome CloudExternalAttachmentData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelName") && !value["ChannelName"].IsNull())
    {
        if (!value["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudExternalAttachmentData.ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(value["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }

    if (value.HasMember("AttachmentData") && !value["AttachmentData"].IsNull())
    {
        if (!value["AttachmentData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudExternalAttachmentData.AttachmentData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attachmentData = string(value["AttachmentData"].GetString());
        m_attachmentDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudExternalAttachmentData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_attachmentDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachmentData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attachmentData.c_str(), allocator).Move(), allocator);
    }

}


string CloudExternalAttachmentData::GetChannelName() const
{
    return m_channelName;
}

void CloudExternalAttachmentData::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool CloudExternalAttachmentData::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string CloudExternalAttachmentData::GetAttachmentData() const
{
    return m_attachmentData;
}

void CloudExternalAttachmentData::SetAttachmentData(const string& _attachmentData)
{
    m_attachmentData = _attachmentData;
    m_attachmentDataHasBeenSet = true;
}

bool CloudExternalAttachmentData::AttachmentDataHasBeenSet() const
{
    return m_attachmentDataHasBeenSet;
}

