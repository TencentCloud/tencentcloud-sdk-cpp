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

#include <tencentcloud/igtm/v20231024/model/DescribeDetectPackageDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

DescribeDetectPackageDetailResponse::DescribeDetectPackageDetailResponse() :
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_quotaHasBeenSet(false),
    m_currentDeadlineHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_isExpireHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_costItemListHasBeenSet(false),
    m_usedNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDetectPackageDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ResourceId") && !rsp["ResourceId"].IsNull())
    {
        if (!rsp["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(rsp["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceType") && !rsp["ResourceType"].IsNull())
    {
        if (!rsp["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(rsp["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Quota") && !rsp["Quota"].IsNull())
    {
        if (!rsp["Quota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_quota = rsp["Quota"].GetUint64();
        m_quotaHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentDeadline") && !rsp["CurrentDeadline"].IsNull())
    {
        if (!rsp["CurrentDeadline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentDeadline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentDeadline = string(rsp["CurrentDeadline"].GetString());
        m_currentDeadlineHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("IsExpire") && !rsp["IsExpire"].IsNull())
    {
        if (!rsp["IsExpire"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IsExpire` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isExpire = rsp["IsExpire"].GetUint64();
        m_isExpireHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("AutoRenewFlag") && !rsp["AutoRenewFlag"].IsNull())
    {
        if (!rsp["AutoRenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoRenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = rsp["AutoRenewFlag"].GetUint64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (rsp.HasMember("Remark") && !rsp["Remark"].IsNull())
    {
        if (!rsp["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(rsp["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (rsp.HasMember("CostItemList") && !rsp["CostItemList"].IsNull())
    {
        if (!rsp["CostItemList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CostItemList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CostItemList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CostItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_costItemList.push_back(item);
        }
        m_costItemListHasBeenSet = true;
    }

    if (rsp.HasMember("UsedNum") && !rsp["UsedNum"].IsNull())
    {
        if (!rsp["UsedNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsedNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedNum = rsp["UsedNum"].GetUint64();
        m_usedNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDetectPackageDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quota, allocator);
    }

    if (m_currentDeadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentDeadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentDeadline.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isExpireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExpire";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isExpire, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_costItemListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostItemList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_costItemList.begin(); itr != m_costItemList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_usedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedNum, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeDetectPackageDetailResponse::GetResourceId() const
{
    return m_resourceId;
}

bool DescribeDetectPackageDetailResponse::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DescribeDetectPackageDetailResponse::GetResourceType() const
{
    return m_resourceType;
}

bool DescribeDetectPackageDetailResponse::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

uint64_t DescribeDetectPackageDetailResponse::GetQuota() const
{
    return m_quota;
}

bool DescribeDetectPackageDetailResponse::QuotaHasBeenSet() const
{
    return m_quotaHasBeenSet;
}

string DescribeDetectPackageDetailResponse::GetCurrentDeadline() const
{
    return m_currentDeadline;
}

bool DescribeDetectPackageDetailResponse::CurrentDeadlineHasBeenSet() const
{
    return m_currentDeadlineHasBeenSet;
}

string DescribeDetectPackageDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeDetectPackageDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t DescribeDetectPackageDetailResponse::GetIsExpire() const
{
    return m_isExpire;
}

bool DescribeDetectPackageDetailResponse::IsExpireHasBeenSet() const
{
    return m_isExpireHasBeenSet;
}

string DescribeDetectPackageDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeDetectPackageDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DescribeDetectPackageDetailResponse::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

bool DescribeDetectPackageDetailResponse::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string DescribeDetectPackageDetailResponse::GetRemark() const
{
    return m_remark;
}

bool DescribeDetectPackageDetailResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<CostItem> DescribeDetectPackageDetailResponse::GetCostItemList() const
{
    return m_costItemList;
}

bool DescribeDetectPackageDetailResponse::CostItemListHasBeenSet() const
{
    return m_costItemListHasBeenSet;
}

uint64_t DescribeDetectPackageDetailResponse::GetUsedNum() const
{
    return m_usedNum;
}

bool DescribeDetectPackageDetailResponse::UsedNumHasBeenSet() const
{
    return m_usedNumHasBeenSet;
}


