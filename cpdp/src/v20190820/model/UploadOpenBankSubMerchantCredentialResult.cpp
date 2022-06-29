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

#include <tencentcloud/cpdp/v20190820/model/UploadOpenBankSubMerchantCredentialResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

UploadOpenBankSubMerchantCredentialResult::UploadOpenBankSubMerchantCredentialResult() :
    m_uploadStatusHasBeenSet(false),
    m_uploadMessageHasBeenSet(false),
    m_channelApplyIdHasBeenSet(false)
{
}

CoreInternalOutcome UploadOpenBankSubMerchantCredentialResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UploadStatus") && !value["UploadStatus"].IsNull())
    {
        if (!value["UploadStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadOpenBankSubMerchantCredentialResult.UploadStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadStatus = string(value["UploadStatus"].GetString());
        m_uploadStatusHasBeenSet = true;
    }

    if (value.HasMember("UploadMessage") && !value["UploadMessage"].IsNull())
    {
        if (!value["UploadMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadOpenBankSubMerchantCredentialResult.UploadMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadMessage = string(value["UploadMessage"].GetString());
        m_uploadMessageHasBeenSet = true;
    }

    if (value.HasMember("ChannelApplyId") && !value["ChannelApplyId"].IsNull())
    {
        if (!value["ChannelApplyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadOpenBankSubMerchantCredentialResult.ChannelApplyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelApplyId = string(value["ChannelApplyId"].GetString());
        m_channelApplyIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UploadOpenBankSubMerchantCredentialResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uploadStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uploadStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uploadMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_channelApplyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelApplyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelApplyId.c_str(), allocator).Move(), allocator);
    }

}


string UploadOpenBankSubMerchantCredentialResult::GetUploadStatus() const
{
    return m_uploadStatus;
}

void UploadOpenBankSubMerchantCredentialResult::SetUploadStatus(const string& _uploadStatus)
{
    m_uploadStatus = _uploadStatus;
    m_uploadStatusHasBeenSet = true;
}

bool UploadOpenBankSubMerchantCredentialResult::UploadStatusHasBeenSet() const
{
    return m_uploadStatusHasBeenSet;
}

string UploadOpenBankSubMerchantCredentialResult::GetUploadMessage() const
{
    return m_uploadMessage;
}

void UploadOpenBankSubMerchantCredentialResult::SetUploadMessage(const string& _uploadMessage)
{
    m_uploadMessage = _uploadMessage;
    m_uploadMessageHasBeenSet = true;
}

bool UploadOpenBankSubMerchantCredentialResult::UploadMessageHasBeenSet() const
{
    return m_uploadMessageHasBeenSet;
}

string UploadOpenBankSubMerchantCredentialResult::GetChannelApplyId() const
{
    return m_channelApplyId;
}

void UploadOpenBankSubMerchantCredentialResult::SetChannelApplyId(const string& _channelApplyId)
{
    m_channelApplyId = _channelApplyId;
    m_channelApplyIdHasBeenSet = true;
}

bool UploadOpenBankSubMerchantCredentialResult::ChannelApplyIdHasBeenSet() const
{
    return m_channelApplyIdHasBeenSet;
}

