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

#include <tencentcloud/rce/v20201103/model/OutputDescribeUserUsageCnt.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

OutputDescribeUserUsageCnt::OutputDescribeUserUsageCnt() :
    m_payModeHasBeenSet(false),
    m_afterPayModeThisMonthUsedCntHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_afterPayModeLastMonthUsedCntHasBeenSet(false),
    m_beforePayModeTotalUsedCntHasBeenSet(false),
    m_beforePayModeRemainUsedCntHasBeenSet(false)
{
}

CoreInternalOutcome OutputDescribeUserUsageCnt::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeUserUsageCnt.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("AfterPayModeThisMonthUsedCnt") && !value["AfterPayModeThisMonthUsedCnt"].IsNull())
    {
        if (!value["AfterPayModeThisMonthUsedCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeUserUsageCnt.AfterPayModeThisMonthUsedCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_afterPayModeThisMonthUsedCnt = value["AfterPayModeThisMonthUsedCnt"].GetInt64();
        m_afterPayModeThisMonthUsedCntHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeUserUsageCnt.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeUserUsageCnt.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("AfterPayModeLastMonthUsedCnt") && !value["AfterPayModeLastMonthUsedCnt"].IsNull())
    {
        if (!value["AfterPayModeLastMonthUsedCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeUserUsageCnt.AfterPayModeLastMonthUsedCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_afterPayModeLastMonthUsedCnt = value["AfterPayModeLastMonthUsedCnt"].GetInt64();
        m_afterPayModeLastMonthUsedCntHasBeenSet = true;
    }

    if (value.HasMember("BeforePayModeTotalUsedCnt") && !value["BeforePayModeTotalUsedCnt"].IsNull())
    {
        if (!value["BeforePayModeTotalUsedCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeUserUsageCnt.BeforePayModeTotalUsedCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_beforePayModeTotalUsedCnt = value["BeforePayModeTotalUsedCnt"].GetInt64();
        m_beforePayModeTotalUsedCntHasBeenSet = true;
    }

    if (value.HasMember("BeforePayModeRemainUsedCnt") && !value["BeforePayModeRemainUsedCnt"].IsNull())
    {
        if (!value["BeforePayModeRemainUsedCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputDescribeUserUsageCnt.BeforePayModeRemainUsedCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_beforePayModeRemainUsedCnt = value["BeforePayModeRemainUsedCnt"].GetInt64();
        m_beforePayModeRemainUsedCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputDescribeUserUsageCnt::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_afterPayModeThisMonthUsedCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AfterPayModeThisMonthUsedCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_afterPayModeThisMonthUsedCnt, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_afterPayModeLastMonthUsedCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AfterPayModeLastMonthUsedCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_afterPayModeLastMonthUsedCnt, allocator);
    }

    if (m_beforePayModeTotalUsedCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeforePayModeTotalUsedCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_beforePayModeTotalUsedCnt, allocator);
    }

    if (m_beforePayModeRemainUsedCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeforePayModeRemainUsedCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_beforePayModeRemainUsedCnt, allocator);
    }

}


int64_t OutputDescribeUserUsageCnt::GetPayMode() const
{
    return m_payMode;
}

void OutputDescribeUserUsageCnt::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool OutputDescribeUserUsageCnt::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t OutputDescribeUserUsageCnt::GetAfterPayModeThisMonthUsedCnt() const
{
    return m_afterPayModeThisMonthUsedCnt;
}

void OutputDescribeUserUsageCnt::SetAfterPayModeThisMonthUsedCnt(const int64_t& _afterPayModeThisMonthUsedCnt)
{
    m_afterPayModeThisMonthUsedCnt = _afterPayModeThisMonthUsedCnt;
    m_afterPayModeThisMonthUsedCntHasBeenSet = true;
}

bool OutputDescribeUserUsageCnt::AfterPayModeThisMonthUsedCntHasBeenSet() const
{
    return m_afterPayModeThisMonthUsedCntHasBeenSet;
}

string OutputDescribeUserUsageCnt::GetCreateTime() const
{
    return m_createTime;
}

void OutputDescribeUserUsageCnt::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool OutputDescribeUserUsageCnt::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string OutputDescribeUserUsageCnt::GetExpireTime() const
{
    return m_expireTime;
}

void OutputDescribeUserUsageCnt::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool OutputDescribeUserUsageCnt::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t OutputDescribeUserUsageCnt::GetAfterPayModeLastMonthUsedCnt() const
{
    return m_afterPayModeLastMonthUsedCnt;
}

void OutputDescribeUserUsageCnt::SetAfterPayModeLastMonthUsedCnt(const int64_t& _afterPayModeLastMonthUsedCnt)
{
    m_afterPayModeLastMonthUsedCnt = _afterPayModeLastMonthUsedCnt;
    m_afterPayModeLastMonthUsedCntHasBeenSet = true;
}

bool OutputDescribeUserUsageCnt::AfterPayModeLastMonthUsedCntHasBeenSet() const
{
    return m_afterPayModeLastMonthUsedCntHasBeenSet;
}

int64_t OutputDescribeUserUsageCnt::GetBeforePayModeTotalUsedCnt() const
{
    return m_beforePayModeTotalUsedCnt;
}

void OutputDescribeUserUsageCnt::SetBeforePayModeTotalUsedCnt(const int64_t& _beforePayModeTotalUsedCnt)
{
    m_beforePayModeTotalUsedCnt = _beforePayModeTotalUsedCnt;
    m_beforePayModeTotalUsedCntHasBeenSet = true;
}

bool OutputDescribeUserUsageCnt::BeforePayModeTotalUsedCntHasBeenSet() const
{
    return m_beforePayModeTotalUsedCntHasBeenSet;
}

int64_t OutputDescribeUserUsageCnt::GetBeforePayModeRemainUsedCnt() const
{
    return m_beforePayModeRemainUsedCnt;
}

void OutputDescribeUserUsageCnt::SetBeforePayModeRemainUsedCnt(const int64_t& _beforePayModeRemainUsedCnt)
{
    m_beforePayModeRemainUsedCnt = _beforePayModeRemainUsedCnt;
    m_beforePayModeRemainUsedCntHasBeenSet = true;
}

bool OutputDescribeUserUsageCnt::BeforePayModeRemainUsedCntHasBeenSet() const
{
    return m_beforePayModeRemainUsedCntHasBeenSet;
}

