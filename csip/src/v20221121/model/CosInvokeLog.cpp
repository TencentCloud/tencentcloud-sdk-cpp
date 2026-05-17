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

#include <tencentcloud/csip/v20221121/model/CosInvokeLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosInvokeLog::CosInvokeLog() :
    m_invokeTimestampHasBeenSet(false),
    m_requestIdHasBeenSet(false),
    m_requestContentHasBeenSet(false)
{
}

CoreInternalOutcome CosInvokeLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InvokeTimestamp") && !value["InvokeTimestamp"].IsNull())
    {
        if (!value["InvokeTimestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosInvokeLog.InvokeTimestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_invokeTimestamp = value["InvokeTimestamp"].GetUint64();
        m_invokeTimestampHasBeenSet = true;
    }

    if (value.HasMember("RequestId") && !value["RequestId"].IsNull())
    {
        if (!value["RequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosInvokeLog.RequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestId = string(value["RequestId"].GetString());
        m_requestIdHasBeenSet = true;
    }

    if (value.HasMember("RequestContent") && !value["RequestContent"].IsNull())
    {
        if (!value["RequestContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosInvokeLog.RequestContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestContent = string(value["RequestContent"].GetString());
        m_requestContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosInvokeLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_invokeTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invokeTimestamp, allocator);
    }

    if (m_requestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestId.c_str(), allocator).Move(), allocator);
    }

    if (m_requestContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestContent.c_str(), allocator).Move(), allocator);
    }

}


uint64_t CosInvokeLog::GetInvokeTimestamp() const
{
    return m_invokeTimestamp;
}

void CosInvokeLog::SetInvokeTimestamp(const uint64_t& _invokeTimestamp)
{
    m_invokeTimestamp = _invokeTimestamp;
    m_invokeTimestampHasBeenSet = true;
}

bool CosInvokeLog::InvokeTimestampHasBeenSet() const
{
    return m_invokeTimestampHasBeenSet;
}

string CosInvokeLog::GetRequestId() const
{
    return m_requestId;
}

void CosInvokeLog::SetRequestId(const string& _requestId)
{
    m_requestId = _requestId;
    m_requestIdHasBeenSet = true;
}

bool CosInvokeLog::RequestIdHasBeenSet() const
{
    return m_requestIdHasBeenSet;
}

string CosInvokeLog::GetRequestContent() const
{
    return m_requestContent;
}

void CosInvokeLog::SetRequestContent(const string& _requestContent)
{
    m_requestContent = _requestContent;
    m_requestContentHasBeenSet = true;
}

bool CosInvokeLog::RequestContentHasBeenSet() const
{
    return m_requestContentHasBeenSet;
}

