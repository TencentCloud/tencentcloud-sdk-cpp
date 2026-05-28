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

#include <tencentcloud/csip/v20221121/model/CosAuditPayInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosAuditPayInfo::CosAuditPayInfo() :
    m_appIdHasBeenSet(false),
    m_orderStatusHasBeenSet(false),
    m_bucketNumHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_isSelfBuyHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_autoRenewHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_betaEndTimeHasBeenSet(false),
    m_timeNowHasBeenSet(false),
    m_isShareToOtherHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_bindBucketHasBeenSet(false),
    m_sharedAppIdSetHasBeenSet(false),
    m_postPayStatusHasBeenSet(false),
    m_isTestUserHasBeenSet(false),
    m_availableBucketNumHasBeenSet(false),
    m_monitorBucketNumHasBeenSet(false),
    m_totalBucketNumHasBeenSet(false),
    m_postProductStatusListHasBeenSet(false),
    m_postProductBuyStatusListHasBeenSet(false),
    m_newPostPayResourceIdHasBeenSet(false)
{
}

CoreInternalOutcome CosAuditPayInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("OrderStatus") && !value["OrderStatus"].IsNull())
    {
        if (!value["OrderStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.OrderStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_orderStatus = value["OrderStatus"].GetUint64();
        m_orderStatusHasBeenSet = true;
    }

    if (value.HasMember("BucketNum") && !value["BucketNum"].IsNull())
    {
        if (!value["BucketNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.BucketNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bucketNum = value["BucketNum"].GetUint64();
        m_bucketNumHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.PayMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetUint64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("IsSelfBuy") && !value["IsSelfBuy"].IsNull())
    {
        if (!value["IsSelfBuy"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.IsSelfBuy` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isSelfBuy = value["IsSelfBuy"].GetUint64();
        m_isSelfBuyHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(value["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("AutoRenew") && !value["AutoRenew"].IsNull())
    {
        if (!value["AutoRenew"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.AutoRenew` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenew = value["AutoRenew"].GetUint64();
        m_autoRenewHasBeenSet = true;
    }

    if (value.HasMember("TimeSpan") && !value["TimeSpan"].IsNull())
    {
        if (!value["TimeSpan"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.TimeSpan` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeSpan = value["TimeSpan"].GetUint64();
        m_timeSpanHasBeenSet = true;
    }

    if (value.HasMember("TimeUnit") && !value["TimeUnit"].IsNull())
    {
        if (!value["TimeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.TimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeUnit = string(value["TimeUnit"].GetString());
        m_timeUnitHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("BetaEndTime") && !value["BetaEndTime"].IsNull())
    {
        if (!value["BetaEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.BetaEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_betaEndTime = string(value["BetaEndTime"].GetString());
        m_betaEndTimeHasBeenSet = true;
    }

    if (value.HasMember("TimeNow") && !value["TimeNow"].IsNull())
    {
        if (!value["TimeNow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.TimeNow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeNow = string(value["TimeNow"].GetString());
        m_timeNowHasBeenSet = true;
    }

    if (value.HasMember("IsShareToOther") && !value["IsShareToOther"].IsNull())
    {
        if (!value["IsShareToOther"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.IsShareToOther` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isShareToOther = value["IsShareToOther"].GetUint64();
        m_isShareToOtherHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("BindBucket") && !value["BindBucket"].IsNull())
    {
        if (!value["BindBucket"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.BindBucket` is not array type"));

        const rapidjson::Value &tmpValue = value["BindBucket"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CosBucketId item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bindBucket.push_back(item);
        }
        m_bindBucketHasBeenSet = true;
    }

    if (value.HasMember("SharedAppIdSet") && !value["SharedAppIdSet"].IsNull())
    {
        if (!value["SharedAppIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.SharedAppIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SharedAppIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sharedAppIdSet.push_back((*itr).GetUint64());
        }
        m_sharedAppIdSetHasBeenSet = true;
    }

    if (value.HasMember("PostPayStatus") && !value["PostPayStatus"].IsNull())
    {
        if (!value["PostPayStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.PostPayStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_postPayStatus = value["PostPayStatus"].GetUint64();
        m_postPayStatusHasBeenSet = true;
    }

    if (value.HasMember("IsTestUser") && !value["IsTestUser"].IsNull())
    {
        if (!value["IsTestUser"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.IsTestUser` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isTestUser = value["IsTestUser"].GetUint64();
        m_isTestUserHasBeenSet = true;
    }

    if (value.HasMember("AvailableBucketNum") && !value["AvailableBucketNum"].IsNull())
    {
        if (!value["AvailableBucketNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.AvailableBucketNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_availableBucketNum = value["AvailableBucketNum"].GetUint64();
        m_availableBucketNumHasBeenSet = true;
    }

    if (value.HasMember("MonitorBucketNum") && !value["MonitorBucketNum"].IsNull())
    {
        if (!value["MonitorBucketNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.MonitorBucketNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorBucketNum = value["MonitorBucketNum"].GetUint64();
        m_monitorBucketNumHasBeenSet = true;
    }

    if (value.HasMember("TotalBucketNum") && !value["TotalBucketNum"].IsNull())
    {
        if (!value["TotalBucketNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.TotalBucketNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalBucketNum = value["TotalBucketNum"].GetUint64();
        m_totalBucketNumHasBeenSet = true;
    }

    if (value.HasMember("PostProductStatusList") && !value["PostProductStatusList"].IsNull())
    {
        if (!value["PostProductStatusList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.PostProductStatusList` is not array type"));

        const rapidjson::Value &tmpValue = value["PostProductStatusList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_postProductStatusList.push_back((*itr).GetUint64());
        }
        m_postProductStatusListHasBeenSet = true;
    }

    if (value.HasMember("PostProductBuyStatusList") && !value["PostProductBuyStatusList"].IsNull())
    {
        if (!value["PostProductBuyStatusList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.PostProductBuyStatusList` is not array type"));

        const rapidjson::Value &tmpValue = value["PostProductBuyStatusList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_postProductBuyStatusList.push_back((*itr).GetUint64());
        }
        m_postProductBuyStatusListHasBeenSet = true;
    }

    if (value.HasMember("NewPostPayResourceId") && !value["NewPostPayResourceId"].IsNull())
    {
        if (!value["NewPostPayResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosAuditPayInfo.NewPostPayResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newPostPayResourceId = string(value["NewPostPayResourceId"].GetString());
        m_newPostPayResourceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosAuditPayInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_orderStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderStatus, allocator);
    }

    if (m_bucketNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bucketNum, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_isSelfBuyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSelfBuy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSelfBuy, allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenew, allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_betaEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BetaEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_betaEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_timeNowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeNow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeNow.c_str(), allocator).Move(), allocator);
    }

    if (m_isShareToOtherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsShareToOther";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isShareToOther, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_bindBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bindBucket.begin(); itr != m_bindBucket.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sharedAppIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedAppIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sharedAppIdSet.begin(); itr != m_sharedAppIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_postPayStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostPayStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_postPayStatus, allocator);
    }

    if (m_isTestUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTestUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isTestUser, allocator);
    }

    if (m_availableBucketNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableBucketNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableBucketNum, allocator);
    }

    if (m_monitorBucketNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorBucketNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorBucketNum, allocator);
    }

    if (m_totalBucketNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalBucketNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalBucketNum, allocator);
    }

    if (m_postProductStatusListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostProductStatusList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_postProductStatusList.begin(); itr != m_postProductStatusList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_postProductBuyStatusListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostProductBuyStatusList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_postProductBuyStatusList.begin(); itr != m_postProductBuyStatusList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_newPostPayResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewPostPayResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newPostPayResourceId.c_str(), allocator).Move(), allocator);
    }

}


uint64_t CosAuditPayInfo::GetAppId() const
{
    return m_appId;
}

void CosAuditPayInfo::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CosAuditPayInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

uint64_t CosAuditPayInfo::GetOrderStatus() const
{
    return m_orderStatus;
}

void CosAuditPayInfo::SetOrderStatus(const uint64_t& _orderStatus)
{
    m_orderStatus = _orderStatus;
    m_orderStatusHasBeenSet = true;
}

bool CosAuditPayInfo::OrderStatusHasBeenSet() const
{
    return m_orderStatusHasBeenSet;
}

uint64_t CosAuditPayInfo::GetBucketNum() const
{
    return m_bucketNum;
}

void CosAuditPayInfo::SetBucketNum(const uint64_t& _bucketNum)
{
    m_bucketNum = _bucketNum;
    m_bucketNumHasBeenSet = true;
}

bool CosAuditPayInfo::BucketNumHasBeenSet() const
{
    return m_bucketNumHasBeenSet;
}

uint64_t CosAuditPayInfo::GetPayMode() const
{
    return m_payMode;
}

void CosAuditPayInfo::SetPayMode(const uint64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CosAuditPayInfo::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

uint64_t CosAuditPayInfo::GetIsSelfBuy() const
{
    return m_isSelfBuy;
}

void CosAuditPayInfo::SetIsSelfBuy(const uint64_t& _isSelfBuy)
{
    m_isSelfBuy = _isSelfBuy;
    m_isSelfBuyHasBeenSet = true;
}

bool CosAuditPayInfo::IsSelfBuyHasBeenSet() const
{
    return m_isSelfBuyHasBeenSet;
}

string CosAuditPayInfo::GetBeginTime() const
{
    return m_beginTime;
}

void CosAuditPayInfo::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool CosAuditPayInfo::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string CosAuditPayInfo::GetEndTime() const
{
    return m_endTime;
}

void CosAuditPayInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CosAuditPayInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t CosAuditPayInfo::GetAutoRenew() const
{
    return m_autoRenew;
}

void CosAuditPayInfo::SetAutoRenew(const uint64_t& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool CosAuditPayInfo::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

uint64_t CosAuditPayInfo::GetTimeSpan() const
{
    return m_timeSpan;
}

void CosAuditPayInfo::SetTimeSpan(const uint64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool CosAuditPayInfo::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string CosAuditPayInfo::GetTimeUnit() const
{
    return m_timeUnit;
}

void CosAuditPayInfo::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool CosAuditPayInfo::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

string CosAuditPayInfo::GetResourceId() const
{
    return m_resourceId;
}

void CosAuditPayInfo::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool CosAuditPayInfo::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string CosAuditPayInfo::GetBetaEndTime() const
{
    return m_betaEndTime;
}

void CosAuditPayInfo::SetBetaEndTime(const string& _betaEndTime)
{
    m_betaEndTime = _betaEndTime;
    m_betaEndTimeHasBeenSet = true;
}

bool CosAuditPayInfo::BetaEndTimeHasBeenSet() const
{
    return m_betaEndTimeHasBeenSet;
}

string CosAuditPayInfo::GetTimeNow() const
{
    return m_timeNow;
}

void CosAuditPayInfo::SetTimeNow(const string& _timeNow)
{
    m_timeNow = _timeNow;
    m_timeNowHasBeenSet = true;
}

bool CosAuditPayInfo::TimeNowHasBeenSet() const
{
    return m_timeNowHasBeenSet;
}

uint64_t CosAuditPayInfo::GetIsShareToOther() const
{
    return m_isShareToOther;
}

void CosAuditPayInfo::SetIsShareToOther(const uint64_t& _isShareToOther)
{
    m_isShareToOther = _isShareToOther;
    m_isShareToOtherHasBeenSet = true;
}

bool CosAuditPayInfo::IsShareToOtherHasBeenSet() const
{
    return m_isShareToOtherHasBeenSet;
}

string CosAuditPayInfo::GetUin() const
{
    return m_uin;
}

void CosAuditPayInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool CosAuditPayInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string CosAuditPayInfo::GetNickName() const
{
    return m_nickName;
}

void CosAuditPayInfo::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool CosAuditPayInfo::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

vector<CosBucketId> CosAuditPayInfo::GetBindBucket() const
{
    return m_bindBucket;
}

void CosAuditPayInfo::SetBindBucket(const vector<CosBucketId>& _bindBucket)
{
    m_bindBucket = _bindBucket;
    m_bindBucketHasBeenSet = true;
}

bool CosAuditPayInfo::BindBucketHasBeenSet() const
{
    return m_bindBucketHasBeenSet;
}

vector<uint64_t> CosAuditPayInfo::GetSharedAppIdSet() const
{
    return m_sharedAppIdSet;
}

void CosAuditPayInfo::SetSharedAppIdSet(const vector<uint64_t>& _sharedAppIdSet)
{
    m_sharedAppIdSet = _sharedAppIdSet;
    m_sharedAppIdSetHasBeenSet = true;
}

bool CosAuditPayInfo::SharedAppIdSetHasBeenSet() const
{
    return m_sharedAppIdSetHasBeenSet;
}

uint64_t CosAuditPayInfo::GetPostPayStatus() const
{
    return m_postPayStatus;
}

void CosAuditPayInfo::SetPostPayStatus(const uint64_t& _postPayStatus)
{
    m_postPayStatus = _postPayStatus;
    m_postPayStatusHasBeenSet = true;
}

bool CosAuditPayInfo::PostPayStatusHasBeenSet() const
{
    return m_postPayStatusHasBeenSet;
}

uint64_t CosAuditPayInfo::GetIsTestUser() const
{
    return m_isTestUser;
}

void CosAuditPayInfo::SetIsTestUser(const uint64_t& _isTestUser)
{
    m_isTestUser = _isTestUser;
    m_isTestUserHasBeenSet = true;
}

bool CosAuditPayInfo::IsTestUserHasBeenSet() const
{
    return m_isTestUserHasBeenSet;
}

uint64_t CosAuditPayInfo::GetAvailableBucketNum() const
{
    return m_availableBucketNum;
}

void CosAuditPayInfo::SetAvailableBucketNum(const uint64_t& _availableBucketNum)
{
    m_availableBucketNum = _availableBucketNum;
    m_availableBucketNumHasBeenSet = true;
}

bool CosAuditPayInfo::AvailableBucketNumHasBeenSet() const
{
    return m_availableBucketNumHasBeenSet;
}

uint64_t CosAuditPayInfo::GetMonitorBucketNum() const
{
    return m_monitorBucketNum;
}

void CosAuditPayInfo::SetMonitorBucketNum(const uint64_t& _monitorBucketNum)
{
    m_monitorBucketNum = _monitorBucketNum;
    m_monitorBucketNumHasBeenSet = true;
}

bool CosAuditPayInfo::MonitorBucketNumHasBeenSet() const
{
    return m_monitorBucketNumHasBeenSet;
}

uint64_t CosAuditPayInfo::GetTotalBucketNum() const
{
    return m_totalBucketNum;
}

void CosAuditPayInfo::SetTotalBucketNum(const uint64_t& _totalBucketNum)
{
    m_totalBucketNum = _totalBucketNum;
    m_totalBucketNumHasBeenSet = true;
}

bool CosAuditPayInfo::TotalBucketNumHasBeenSet() const
{
    return m_totalBucketNumHasBeenSet;
}

vector<uint64_t> CosAuditPayInfo::GetPostProductStatusList() const
{
    return m_postProductStatusList;
}

void CosAuditPayInfo::SetPostProductStatusList(const vector<uint64_t>& _postProductStatusList)
{
    m_postProductStatusList = _postProductStatusList;
    m_postProductStatusListHasBeenSet = true;
}

bool CosAuditPayInfo::PostProductStatusListHasBeenSet() const
{
    return m_postProductStatusListHasBeenSet;
}

vector<uint64_t> CosAuditPayInfo::GetPostProductBuyStatusList() const
{
    return m_postProductBuyStatusList;
}

void CosAuditPayInfo::SetPostProductBuyStatusList(const vector<uint64_t>& _postProductBuyStatusList)
{
    m_postProductBuyStatusList = _postProductBuyStatusList;
    m_postProductBuyStatusListHasBeenSet = true;
}

bool CosAuditPayInfo::PostProductBuyStatusListHasBeenSet() const
{
    return m_postProductBuyStatusListHasBeenSet;
}

string CosAuditPayInfo::GetNewPostPayResourceId() const
{
    return m_newPostPayResourceId;
}

void CosAuditPayInfo::SetNewPostPayResourceId(const string& _newPostPayResourceId)
{
    m_newPostPayResourceId = _newPostPayResourceId;
    m_newPostPayResourceIdHasBeenSet = true;
}

bool CosAuditPayInfo::NewPostPayResourceIdHasBeenSet() const
{
    return m_newPostPayResourceIdHasBeenSet;
}

