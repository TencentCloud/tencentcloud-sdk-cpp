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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankOrderDetailReceiptInfoResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankOrderDetailReceiptInfoResult::QueryOpenBankOrderDetailReceiptInfoResult() :
    m_channelApplyIdHasBeenSet(false),
    m_receiptStatusHasBeenSet(false),
    m_receiptMessageHasBeenSet(false),
    m_downloadUrlHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

CoreInternalOutcome QueryOpenBankOrderDetailReceiptInfoResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelApplyId") && !value["ChannelApplyId"].IsNull())
    {
        if (!value["ChannelApplyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankOrderDetailReceiptInfoResult.ChannelApplyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelApplyId = string(value["ChannelApplyId"].GetString());
        m_channelApplyIdHasBeenSet = true;
    }

    if (value.HasMember("ReceiptStatus") && !value["ReceiptStatus"].IsNull())
    {
        if (!value["ReceiptStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankOrderDetailReceiptInfoResult.ReceiptStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiptStatus = string(value["ReceiptStatus"].GetString());
        m_receiptStatusHasBeenSet = true;
    }

    if (value.HasMember("ReceiptMessage") && !value["ReceiptMessage"].IsNull())
    {
        if (!value["ReceiptMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankOrderDetailReceiptInfoResult.ReceiptMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiptMessage = string(value["ReceiptMessage"].GetString());
        m_receiptMessageHasBeenSet = true;
    }

    if (value.HasMember("DownloadUrl") && !value["DownloadUrl"].IsNull())
    {
        if (!value["DownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankOrderDetailReceiptInfoResult.DownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadUrl = string(value["DownloadUrl"].GetString());
        m_downloadUrlHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankOrderDetailReceiptInfoResult.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryOpenBankOrderDetailReceiptInfoResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelApplyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelApplyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelApplyId.c_str(), allocator).Move(), allocator);
    }

    if (m_receiptStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiptStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiptStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_receiptMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiptMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiptMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_downloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

}


string QueryOpenBankOrderDetailReceiptInfoResult::GetChannelApplyId() const
{
    return m_channelApplyId;
}

void QueryOpenBankOrderDetailReceiptInfoResult::SetChannelApplyId(const string& _channelApplyId)
{
    m_channelApplyId = _channelApplyId;
    m_channelApplyIdHasBeenSet = true;
}

bool QueryOpenBankOrderDetailReceiptInfoResult::ChannelApplyIdHasBeenSet() const
{
    return m_channelApplyIdHasBeenSet;
}

string QueryOpenBankOrderDetailReceiptInfoResult::GetReceiptStatus() const
{
    return m_receiptStatus;
}

void QueryOpenBankOrderDetailReceiptInfoResult::SetReceiptStatus(const string& _receiptStatus)
{
    m_receiptStatus = _receiptStatus;
    m_receiptStatusHasBeenSet = true;
}

bool QueryOpenBankOrderDetailReceiptInfoResult::ReceiptStatusHasBeenSet() const
{
    return m_receiptStatusHasBeenSet;
}

string QueryOpenBankOrderDetailReceiptInfoResult::GetReceiptMessage() const
{
    return m_receiptMessage;
}

void QueryOpenBankOrderDetailReceiptInfoResult::SetReceiptMessage(const string& _receiptMessage)
{
    m_receiptMessage = _receiptMessage;
    m_receiptMessageHasBeenSet = true;
}

bool QueryOpenBankOrderDetailReceiptInfoResult::ReceiptMessageHasBeenSet() const
{
    return m_receiptMessageHasBeenSet;
}

string QueryOpenBankOrderDetailReceiptInfoResult::GetDownloadUrl() const
{
    return m_downloadUrl;
}

void QueryOpenBankOrderDetailReceiptInfoResult::SetDownloadUrl(const string& _downloadUrl)
{
    m_downloadUrl = _downloadUrl;
    m_downloadUrlHasBeenSet = true;
}

bool QueryOpenBankOrderDetailReceiptInfoResult::DownloadUrlHasBeenSet() const
{
    return m_downloadUrlHasBeenSet;
}

string QueryOpenBankOrderDetailReceiptInfoResult::GetExpireTime() const
{
    return m_expireTime;
}

void QueryOpenBankOrderDetailReceiptInfoResult::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool QueryOpenBankOrderDetailReceiptInfoResult::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

