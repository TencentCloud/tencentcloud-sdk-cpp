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

#include <tencentcloud/iotvideo/v20211125/model/AIModelInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

AIModelInfo::AIModelInfo() :
    m_productIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_usedHasBeenSet(false),
    m_applyTimeHasBeenSet(false),
    m_approvalTimeHasBeenSet(false)
{
}

CoreInternalOutcome AIModelInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIModelInfo.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIModelInfo.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIModelInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIModelInfo.Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Used") && !value["Used"].IsNull())
    {
        if (!value["Used"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIModelInfo.Used` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_used = value["Used"].GetUint64();
        m_usedHasBeenSet = true;
    }

    if (value.HasMember("ApplyTime") && !value["ApplyTime"].IsNull())
    {
        if (!value["ApplyTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIModelInfo.ApplyTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_applyTime = value["ApplyTime"].GetUint64();
        m_applyTimeHasBeenSet = true;
    }

    if (value.HasMember("ApprovalTime") && !value["ApprovalTime"].IsNull())
    {
        if (!value["ApprovalTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIModelInfo.ApprovalTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_approvalTime = value["ApprovalTime"].GetUint64();
        m_approvalTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIModelInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_usedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Used";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_used, allocator);
    }

    if (m_applyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applyTime, allocator);
    }

    if (m_approvalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approvalTime, allocator);
    }

}


string AIModelInfo::GetProductId() const
{
    return m_productId;
}

void AIModelInfo::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool AIModelInfo::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string AIModelInfo::GetProductName() const
{
    return m_productName;
}

void AIModelInfo::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool AIModelInfo::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

uint64_t AIModelInfo::GetStatus() const
{
    return m_status;
}

void AIModelInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AIModelInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t AIModelInfo::GetTotal() const
{
    return m_total;
}

void AIModelInfo::SetTotal(const uint64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool AIModelInfo::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

uint64_t AIModelInfo::GetUsed() const
{
    return m_used;
}

void AIModelInfo::SetUsed(const uint64_t& _used)
{
    m_used = _used;
    m_usedHasBeenSet = true;
}

bool AIModelInfo::UsedHasBeenSet() const
{
    return m_usedHasBeenSet;
}

uint64_t AIModelInfo::GetApplyTime() const
{
    return m_applyTime;
}

void AIModelInfo::SetApplyTime(const uint64_t& _applyTime)
{
    m_applyTime = _applyTime;
    m_applyTimeHasBeenSet = true;
}

bool AIModelInfo::ApplyTimeHasBeenSet() const
{
    return m_applyTimeHasBeenSet;
}

uint64_t AIModelInfo::GetApprovalTime() const
{
    return m_approvalTime;
}

void AIModelInfo::SetApprovalTime(const uint64_t& _approvalTime)
{
    m_approvalTime = _approvalTime;
    m_approvalTimeHasBeenSet = true;
}

bool AIModelInfo::ApprovalTimeHasBeenSet() const
{
    return m_approvalTimeHasBeenSet;
}

