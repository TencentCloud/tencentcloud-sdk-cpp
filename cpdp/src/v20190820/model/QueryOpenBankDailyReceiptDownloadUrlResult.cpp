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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankDailyReceiptDownloadUrlResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankDailyReceiptDownloadUrlResult::QueryOpenBankDailyReceiptDownloadUrlResult() :
    m_downloadUrlHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_receiptStatusHasBeenSet(false)
{
}

CoreInternalOutcome QueryOpenBankDailyReceiptDownloadUrlResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DownloadUrl") && !value["DownloadUrl"].IsNull())
    {
        if (!value["DownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankDailyReceiptDownloadUrlResult.DownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadUrl = string(value["DownloadUrl"].GetString());
        m_downloadUrlHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankDailyReceiptDownloadUrlResult.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("ReceiptStatus") && !value["ReceiptStatus"].IsNull())
    {
        if (!value["ReceiptStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankDailyReceiptDownloadUrlResult.ReceiptStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiptStatus = string(value["ReceiptStatus"].GetString());
        m_receiptStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryOpenBankDailyReceiptDownloadUrlResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_receiptStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiptStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiptStatus.c_str(), allocator).Move(), allocator);
    }

}


string QueryOpenBankDailyReceiptDownloadUrlResult::GetDownloadUrl() const
{
    return m_downloadUrl;
}

void QueryOpenBankDailyReceiptDownloadUrlResult::SetDownloadUrl(const string& _downloadUrl)
{
    m_downloadUrl = _downloadUrl;
    m_downloadUrlHasBeenSet = true;
}

bool QueryOpenBankDailyReceiptDownloadUrlResult::DownloadUrlHasBeenSet() const
{
    return m_downloadUrlHasBeenSet;
}

string QueryOpenBankDailyReceiptDownloadUrlResult::GetExpireTime() const
{
    return m_expireTime;
}

void QueryOpenBankDailyReceiptDownloadUrlResult::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool QueryOpenBankDailyReceiptDownloadUrlResult::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string QueryOpenBankDailyReceiptDownloadUrlResult::GetReceiptStatus() const
{
    return m_receiptStatus;
}

void QueryOpenBankDailyReceiptDownloadUrlResult::SetReceiptStatus(const string& _receiptStatus)
{
    m_receiptStatus = _receiptStatus;
    m_receiptStatusHasBeenSet = true;
}

bool QueryOpenBankDailyReceiptDownloadUrlResult::ReceiptStatusHasBeenSet() const
{
    return m_receiptStatusHasBeenSet;
}

