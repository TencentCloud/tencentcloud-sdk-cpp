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

#include <tencentcloud/ms/v20180408/model/Orders.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

Orders::Orders() :
    m_orderIdHasBeenSet(false),
    m_platformTypeHasBeenSet(false),
    m_platformTypeDescHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_orderTypeDescHasBeenSet(false),
    m_appPkgNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceStatusHasBeenSet(false),
    m_resourceStatusDescHasBeenSet(false),
    m_testTimesHasBeenSet(false),
    m_validTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_approverHasBeenSet(false),
    m_approvalStatusHasBeenSet(false),
    m_approvalStatusDescHasBeenSet(false),
    m_approvalTimeHasBeenSet(false),
    m_timesTaskTotalCountHasBeenSet(false),
    m_timesTaskSuccessCountHasBeenSet(false),
    m_timesTaskFailCountHasBeenSet(false)
{
}

CoreInternalOutcome Orders::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Orders.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("PlatformType") && !value["PlatformType"].IsNull())
    {
        if (!value["PlatformType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Orders.PlatformType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_platformType = value["PlatformType"].GetInt64();
        m_platformTypeHasBeenSet = true;
    }

    if (value.HasMember("PlatformTypeDesc") && !value["PlatformTypeDesc"].IsNull())
    {
        if (!value["PlatformTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Orders.PlatformTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platformTypeDesc = string(value["PlatformTypeDesc"].GetString());
        m_platformTypeDescHasBeenSet = true;
    }

    if (value.HasMember("OrderType") && !value["OrderType"].IsNull())
    {
        if (!value["OrderType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Orders.OrderType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orderType = value["OrderType"].GetInt64();
        m_orderTypeHasBeenSet = true;
    }

    if (value.HasMember("OrderTypeDesc") && !value["OrderTypeDesc"].IsNull())
    {
        if (!value["OrderTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Orders.OrderTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderTypeDesc = string(value["OrderTypeDesc"].GetString());
        m_orderTypeDescHasBeenSet = true;
    }

    if (value.HasMember("AppPkgName") && !value["AppPkgName"].IsNull())
    {
        if (!value["AppPkgName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Orders.AppPkgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appPkgName = string(value["AppPkgName"].GetString());
        m_appPkgNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Orders.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceStatus") && !value["ResourceStatus"].IsNull())
    {
        if (!value["ResourceStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Orders.ResourceStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceStatus = value["ResourceStatus"].GetInt64();
        m_resourceStatusHasBeenSet = true;
    }

    if (value.HasMember("ResourceStatusDesc") && !value["ResourceStatusDesc"].IsNull())
    {
        if (!value["ResourceStatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Orders.ResourceStatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceStatusDesc = string(value["ResourceStatusDesc"].GetString());
        m_resourceStatusDescHasBeenSet = true;
    }

    if (value.HasMember("TestTimes") && !value["TestTimes"].IsNull())
    {
        if (!value["TestTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Orders.TestTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_testTimes = value["TestTimes"].GetInt64();
        m_testTimesHasBeenSet = true;
    }

    if (value.HasMember("ValidTime") && !value["ValidTime"].IsNull())
    {
        if (!value["ValidTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Orders.ValidTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validTime = string(value["ValidTime"].GetString());
        m_validTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Orders.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Orders.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Approver") && !value["Approver"].IsNull())
    {
        if (!value["Approver"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Orders.Approver` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approver = string(value["Approver"].GetString());
        m_approverHasBeenSet = true;
    }

    if (value.HasMember("ApprovalStatus") && !value["ApprovalStatus"].IsNull())
    {
        if (!value["ApprovalStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Orders.ApprovalStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approvalStatus = value["ApprovalStatus"].GetInt64();
        m_approvalStatusHasBeenSet = true;
    }

    if (value.HasMember("ApprovalStatusDesc") && !value["ApprovalStatusDesc"].IsNull())
    {
        if (!value["ApprovalStatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Orders.ApprovalStatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approvalStatusDesc = string(value["ApprovalStatusDesc"].GetString());
        m_approvalStatusDescHasBeenSet = true;
    }

    if (value.HasMember("ApprovalTime") && !value["ApprovalTime"].IsNull())
    {
        if (!value["ApprovalTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Orders.ApprovalTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approvalTime = string(value["ApprovalTime"].GetString());
        m_approvalTimeHasBeenSet = true;
    }

    if (value.HasMember("TimesTaskTotalCount") && !value["TimesTaskTotalCount"].IsNull())
    {
        if (!value["TimesTaskTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Orders.TimesTaskTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timesTaskTotalCount = value["TimesTaskTotalCount"].GetInt64();
        m_timesTaskTotalCountHasBeenSet = true;
    }

    if (value.HasMember("TimesTaskSuccessCount") && !value["TimesTaskSuccessCount"].IsNull())
    {
        if (!value["TimesTaskSuccessCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Orders.TimesTaskSuccessCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timesTaskSuccessCount = value["TimesTaskSuccessCount"].GetInt64();
        m_timesTaskSuccessCountHasBeenSet = true;
    }

    if (value.HasMember("TimesTaskFailCount") && !value["TimesTaskFailCount"].IsNull())
    {
        if (!value["TimesTaskFailCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Orders.TimesTaskFailCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timesTaskFailCount = value["TimesTaskFailCount"].GetInt64();
        m_timesTaskFailCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Orders::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_platformTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_platformType, allocator);
    }

    if (m_platformTypeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformTypeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platformTypeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderType, allocator);
    }

    if (m_orderTypeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderTypeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderTypeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_appPkgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppPkgName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appPkgName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceStatus, allocator);
    }

    if (m_resourceStatusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceStatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceStatusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_testTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TestTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_testTimes, allocator);
    }

    if (m_validTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_approverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Approver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approver.c_str(), allocator).Move(), allocator);
    }

    if (m_approvalStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approvalStatus, allocator);
    }

    if (m_approvalStatusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalStatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approvalStatusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_approvalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approvalTime.c_str(), allocator).Move(), allocator);
    }

    if (m_timesTaskTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimesTaskTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timesTaskTotalCount, allocator);
    }

    if (m_timesTaskSuccessCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimesTaskSuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timesTaskSuccessCount, allocator);
    }

    if (m_timesTaskFailCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimesTaskFailCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timesTaskFailCount, allocator);
    }

}


string Orders::GetOrderId() const
{
    return m_orderId;
}

void Orders::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool Orders::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

int64_t Orders::GetPlatformType() const
{
    return m_platformType;
}

void Orders::SetPlatformType(const int64_t& _platformType)
{
    m_platformType = _platformType;
    m_platformTypeHasBeenSet = true;
}

bool Orders::PlatformTypeHasBeenSet() const
{
    return m_platformTypeHasBeenSet;
}

string Orders::GetPlatformTypeDesc() const
{
    return m_platformTypeDesc;
}

void Orders::SetPlatformTypeDesc(const string& _platformTypeDesc)
{
    m_platformTypeDesc = _platformTypeDesc;
    m_platformTypeDescHasBeenSet = true;
}

bool Orders::PlatformTypeDescHasBeenSet() const
{
    return m_platformTypeDescHasBeenSet;
}

int64_t Orders::GetOrderType() const
{
    return m_orderType;
}

void Orders::SetOrderType(const int64_t& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool Orders::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

string Orders::GetOrderTypeDesc() const
{
    return m_orderTypeDesc;
}

void Orders::SetOrderTypeDesc(const string& _orderTypeDesc)
{
    m_orderTypeDesc = _orderTypeDesc;
    m_orderTypeDescHasBeenSet = true;
}

bool Orders::OrderTypeDescHasBeenSet() const
{
    return m_orderTypeDescHasBeenSet;
}

string Orders::GetAppPkgName() const
{
    return m_appPkgName;
}

void Orders::SetAppPkgName(const string& _appPkgName)
{
    m_appPkgName = _appPkgName;
    m_appPkgNameHasBeenSet = true;
}

bool Orders::AppPkgNameHasBeenSet() const
{
    return m_appPkgNameHasBeenSet;
}

string Orders::GetResourceId() const
{
    return m_resourceId;
}

void Orders::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool Orders::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

int64_t Orders::GetResourceStatus() const
{
    return m_resourceStatus;
}

void Orders::SetResourceStatus(const int64_t& _resourceStatus)
{
    m_resourceStatus = _resourceStatus;
    m_resourceStatusHasBeenSet = true;
}

bool Orders::ResourceStatusHasBeenSet() const
{
    return m_resourceStatusHasBeenSet;
}

string Orders::GetResourceStatusDesc() const
{
    return m_resourceStatusDesc;
}

void Orders::SetResourceStatusDesc(const string& _resourceStatusDesc)
{
    m_resourceStatusDesc = _resourceStatusDesc;
    m_resourceStatusDescHasBeenSet = true;
}

bool Orders::ResourceStatusDescHasBeenSet() const
{
    return m_resourceStatusDescHasBeenSet;
}

int64_t Orders::GetTestTimes() const
{
    return m_testTimes;
}

void Orders::SetTestTimes(const int64_t& _testTimes)
{
    m_testTimes = _testTimes;
    m_testTimesHasBeenSet = true;
}

bool Orders::TestTimesHasBeenSet() const
{
    return m_testTimesHasBeenSet;
}

string Orders::GetValidTime() const
{
    return m_validTime;
}

void Orders::SetValidTime(const string& _validTime)
{
    m_validTime = _validTime;
    m_validTimeHasBeenSet = true;
}

bool Orders::ValidTimeHasBeenSet() const
{
    return m_validTimeHasBeenSet;
}

string Orders::GetExpireTime() const
{
    return m_expireTime;
}

void Orders::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool Orders::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string Orders::GetCreateTime() const
{
    return m_createTime;
}

void Orders::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Orders::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Orders::GetApprover() const
{
    return m_approver;
}

void Orders::SetApprover(const string& _approver)
{
    m_approver = _approver;
    m_approverHasBeenSet = true;
}

bool Orders::ApproverHasBeenSet() const
{
    return m_approverHasBeenSet;
}

int64_t Orders::GetApprovalStatus() const
{
    return m_approvalStatus;
}

void Orders::SetApprovalStatus(const int64_t& _approvalStatus)
{
    m_approvalStatus = _approvalStatus;
    m_approvalStatusHasBeenSet = true;
}

bool Orders::ApprovalStatusHasBeenSet() const
{
    return m_approvalStatusHasBeenSet;
}

string Orders::GetApprovalStatusDesc() const
{
    return m_approvalStatusDesc;
}

void Orders::SetApprovalStatusDesc(const string& _approvalStatusDesc)
{
    m_approvalStatusDesc = _approvalStatusDesc;
    m_approvalStatusDescHasBeenSet = true;
}

bool Orders::ApprovalStatusDescHasBeenSet() const
{
    return m_approvalStatusDescHasBeenSet;
}

string Orders::GetApprovalTime() const
{
    return m_approvalTime;
}

void Orders::SetApprovalTime(const string& _approvalTime)
{
    m_approvalTime = _approvalTime;
    m_approvalTimeHasBeenSet = true;
}

bool Orders::ApprovalTimeHasBeenSet() const
{
    return m_approvalTimeHasBeenSet;
}

int64_t Orders::GetTimesTaskTotalCount() const
{
    return m_timesTaskTotalCount;
}

void Orders::SetTimesTaskTotalCount(const int64_t& _timesTaskTotalCount)
{
    m_timesTaskTotalCount = _timesTaskTotalCount;
    m_timesTaskTotalCountHasBeenSet = true;
}

bool Orders::TimesTaskTotalCountHasBeenSet() const
{
    return m_timesTaskTotalCountHasBeenSet;
}

int64_t Orders::GetTimesTaskSuccessCount() const
{
    return m_timesTaskSuccessCount;
}

void Orders::SetTimesTaskSuccessCount(const int64_t& _timesTaskSuccessCount)
{
    m_timesTaskSuccessCount = _timesTaskSuccessCount;
    m_timesTaskSuccessCountHasBeenSet = true;
}

bool Orders::TimesTaskSuccessCountHasBeenSet() const
{
    return m_timesTaskSuccessCountHasBeenSet;
}

int64_t Orders::GetTimesTaskFailCount() const
{
    return m_timesTaskFailCount;
}

void Orders::SetTimesTaskFailCount(const int64_t& _timesTaskFailCount)
{
    m_timesTaskFailCount = _timesTaskFailCount;
    m_timesTaskFailCountHasBeenSet = true;
}

bool Orders::TimesTaskFailCountHasBeenSet() const
{
    return m_timesTaskFailCountHasBeenSet;
}

