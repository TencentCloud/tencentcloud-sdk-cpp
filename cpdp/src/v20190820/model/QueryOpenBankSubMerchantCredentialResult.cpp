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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankSubMerchantCredentialResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankSubMerchantCredentialResult::QueryOpenBankSubMerchantCredentialResult() :
    m_uploadStatusHasBeenSet(false),
    m_uploadMessageHasBeenSet(false)
{
}

CoreInternalOutcome QueryOpenBankSubMerchantCredentialResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UploadStatus") && !value["UploadStatus"].IsNull())
    {
        if (!value["UploadStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankSubMerchantCredentialResult.UploadStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadStatus = string(value["UploadStatus"].GetString());
        m_uploadStatusHasBeenSet = true;
    }

    if (value.HasMember("UploadMessage") && !value["UploadMessage"].IsNull())
    {
        if (!value["UploadMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankSubMerchantCredentialResult.UploadMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadMessage = string(value["UploadMessage"].GetString());
        m_uploadMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryOpenBankSubMerchantCredentialResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string QueryOpenBankSubMerchantCredentialResult::GetUploadStatus() const
{
    return m_uploadStatus;
}

void QueryOpenBankSubMerchantCredentialResult::SetUploadStatus(const string& _uploadStatus)
{
    m_uploadStatus = _uploadStatus;
    m_uploadStatusHasBeenSet = true;
}

bool QueryOpenBankSubMerchantCredentialResult::UploadStatusHasBeenSet() const
{
    return m_uploadStatusHasBeenSet;
}

string QueryOpenBankSubMerchantCredentialResult::GetUploadMessage() const
{
    return m_uploadMessage;
}

void QueryOpenBankSubMerchantCredentialResult::SetUploadMessage(const string& _uploadMessage)
{
    m_uploadMessage = _uploadMessage;
    m_uploadMessageHasBeenSet = true;
}

bool QueryOpenBankSubMerchantCredentialResult::UploadMessageHasBeenSet() const
{
    return m_uploadMessageHasBeenSet;
}

