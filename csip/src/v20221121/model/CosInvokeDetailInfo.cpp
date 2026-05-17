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

#include <tencentcloud/csip/v20221121/model/CosInvokeDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosInvokeDetailInfo::CosInvokeDetailInfo() :
    m_invokeTimestampHasBeenSet(false),
    m_invokeRequestIdHasBeenSet(false),
    m_invokeContentHasBeenSet(false)
{
}

CoreInternalOutcome CosInvokeDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InvokeTimestamp") && !value["InvokeTimestamp"].IsNull())
    {
        if (!value["InvokeTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosInvokeDetailInfo.InvokeTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invokeTimestamp = value["InvokeTimestamp"].GetInt64();
        m_invokeTimestampHasBeenSet = true;
    }

    if (value.HasMember("InvokeRequestId") && !value["InvokeRequestId"].IsNull())
    {
        if (!value["InvokeRequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosInvokeDetailInfo.InvokeRequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invokeRequestId = string(value["InvokeRequestId"].GetString());
        m_invokeRequestIdHasBeenSet = true;
    }

    if (value.HasMember("InvokeContent") && !value["InvokeContent"].IsNull())
    {
        if (!value["InvokeContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosInvokeDetailInfo.InvokeContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invokeContent = string(value["InvokeContent"].GetString());
        m_invokeContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosInvokeDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_invokeTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invokeTimestamp, allocator);
    }

    if (m_invokeRequestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeRequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invokeRequestId.c_str(), allocator).Move(), allocator);
    }

    if (m_invokeContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invokeContent.c_str(), allocator).Move(), allocator);
    }

}


int64_t CosInvokeDetailInfo::GetInvokeTimestamp() const
{
    return m_invokeTimestamp;
}

void CosInvokeDetailInfo::SetInvokeTimestamp(const int64_t& _invokeTimestamp)
{
    m_invokeTimestamp = _invokeTimestamp;
    m_invokeTimestampHasBeenSet = true;
}

bool CosInvokeDetailInfo::InvokeTimestampHasBeenSet() const
{
    return m_invokeTimestampHasBeenSet;
}

string CosInvokeDetailInfo::GetInvokeRequestId() const
{
    return m_invokeRequestId;
}

void CosInvokeDetailInfo::SetInvokeRequestId(const string& _invokeRequestId)
{
    m_invokeRequestId = _invokeRequestId;
    m_invokeRequestIdHasBeenSet = true;
}

bool CosInvokeDetailInfo::InvokeRequestIdHasBeenSet() const
{
    return m_invokeRequestIdHasBeenSet;
}

string CosInvokeDetailInfo::GetInvokeContent() const
{
    return m_invokeContent;
}

void CosInvokeDetailInfo::SetInvokeContent(const string& _invokeContent)
{
    m_invokeContent = _invokeContent;
    m_invokeContentHasBeenSet = true;
}

bool CosInvokeDetailInfo::InvokeContentHasBeenSet() const
{
    return m_invokeContentHasBeenSet;
}

