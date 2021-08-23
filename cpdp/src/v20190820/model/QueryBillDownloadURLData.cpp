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

#include <tencentcloud/cpdp/v20190820/model/QueryBillDownloadURLData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryBillDownloadURLData::QueryBillDownloadURLData() :
    m_billDownloadURLHasBeenSet(false),
    m_originalBillDownloadURLHasBeenSet(false)
{
}

CoreInternalOutcome QueryBillDownloadURLData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BillDownloadURL") && !value["BillDownloadURL"].IsNull())
    {
        if (!value["BillDownloadURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryBillDownloadURLData.BillDownloadURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billDownloadURL = string(value["BillDownloadURL"].GetString());
        m_billDownloadURLHasBeenSet = true;
    }

    if (value.HasMember("OriginalBillDownloadURL") && !value["OriginalBillDownloadURL"].IsNull())
    {
        if (!value["OriginalBillDownloadURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryBillDownloadURLData.OriginalBillDownloadURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalBillDownloadURL = string(value["OriginalBillDownloadURL"].GetString());
        m_originalBillDownloadURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryBillDownloadURLData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_billDownloadURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillDownloadURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billDownloadURL.c_str(), allocator).Move(), allocator);
    }

    if (m_originalBillDownloadURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalBillDownloadURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalBillDownloadURL.c_str(), allocator).Move(), allocator);
    }

}


string QueryBillDownloadURLData::GetBillDownloadURL() const
{
    return m_billDownloadURL;
}

void QueryBillDownloadURLData::SetBillDownloadURL(const string& _billDownloadURL)
{
    m_billDownloadURL = _billDownloadURL;
    m_billDownloadURLHasBeenSet = true;
}

bool QueryBillDownloadURLData::BillDownloadURLHasBeenSet() const
{
    return m_billDownloadURLHasBeenSet;
}

string QueryBillDownloadURLData::GetOriginalBillDownloadURL() const
{
    return m_originalBillDownloadURL;
}

void QueryBillDownloadURLData::SetOriginalBillDownloadURL(const string& _originalBillDownloadURL)
{
    m_originalBillDownloadURL = _originalBillDownloadURL;
    m_originalBillDownloadURLHasBeenSet = true;
}

bool QueryBillDownloadURLData::OriginalBillDownloadURLHasBeenSet() const
{
    return m_originalBillDownloadURLHasBeenSet;
}

