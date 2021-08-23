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

#include <tencentcloud/monitor/v20180724/model/DescribeProductEventListOverView.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribeProductEventListOverView::DescribeProductEventListOverView() :
    m_statusChangeAmountHasBeenSet(false),
    m_unConfigAlarmAmountHasBeenSet(false),
    m_unNormalEventAmountHasBeenSet(false),
    m_unRecoverAmountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeProductEventListOverView::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StatusChangeAmount") && !value["StatusChangeAmount"].IsNull())
    {
        if (!value["StatusChangeAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeProductEventListOverView.StatusChangeAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statusChangeAmount = value["StatusChangeAmount"].GetInt64();
        m_statusChangeAmountHasBeenSet = true;
    }

    if (value.HasMember("UnConfigAlarmAmount") && !value["UnConfigAlarmAmount"].IsNull())
    {
        if (!value["UnConfigAlarmAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeProductEventListOverView.UnConfigAlarmAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unConfigAlarmAmount = value["UnConfigAlarmAmount"].GetInt64();
        m_unConfigAlarmAmountHasBeenSet = true;
    }

    if (value.HasMember("UnNormalEventAmount") && !value["UnNormalEventAmount"].IsNull())
    {
        if (!value["UnNormalEventAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeProductEventListOverView.UnNormalEventAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unNormalEventAmount = value["UnNormalEventAmount"].GetInt64();
        m_unNormalEventAmountHasBeenSet = true;
    }

    if (value.HasMember("UnRecoverAmount") && !value["UnRecoverAmount"].IsNull())
    {
        if (!value["UnRecoverAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeProductEventListOverView.UnRecoverAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unRecoverAmount = value["UnRecoverAmount"].GetInt64();
        m_unRecoverAmountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeProductEventListOverView::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusChangeAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusChangeAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusChangeAmount, allocator);
    }

    if (m_unConfigAlarmAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnConfigAlarmAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unConfigAlarmAmount, allocator);
    }

    if (m_unNormalEventAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnNormalEventAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unNormalEventAmount, allocator);
    }

    if (m_unRecoverAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnRecoverAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unRecoverAmount, allocator);
    }

}


int64_t DescribeProductEventListOverView::GetStatusChangeAmount() const
{
    return m_statusChangeAmount;
}

void DescribeProductEventListOverView::SetStatusChangeAmount(const int64_t& _statusChangeAmount)
{
    m_statusChangeAmount = _statusChangeAmount;
    m_statusChangeAmountHasBeenSet = true;
}

bool DescribeProductEventListOverView::StatusChangeAmountHasBeenSet() const
{
    return m_statusChangeAmountHasBeenSet;
}

int64_t DescribeProductEventListOverView::GetUnConfigAlarmAmount() const
{
    return m_unConfigAlarmAmount;
}

void DescribeProductEventListOverView::SetUnConfigAlarmAmount(const int64_t& _unConfigAlarmAmount)
{
    m_unConfigAlarmAmount = _unConfigAlarmAmount;
    m_unConfigAlarmAmountHasBeenSet = true;
}

bool DescribeProductEventListOverView::UnConfigAlarmAmountHasBeenSet() const
{
    return m_unConfigAlarmAmountHasBeenSet;
}

int64_t DescribeProductEventListOverView::GetUnNormalEventAmount() const
{
    return m_unNormalEventAmount;
}

void DescribeProductEventListOverView::SetUnNormalEventAmount(const int64_t& _unNormalEventAmount)
{
    m_unNormalEventAmount = _unNormalEventAmount;
    m_unNormalEventAmountHasBeenSet = true;
}

bool DescribeProductEventListOverView::UnNormalEventAmountHasBeenSet() const
{
    return m_unNormalEventAmountHasBeenSet;
}

int64_t DescribeProductEventListOverView::GetUnRecoverAmount() const
{
    return m_unRecoverAmount;
}

void DescribeProductEventListOverView::SetUnRecoverAmount(const int64_t& _unRecoverAmount)
{
    m_unRecoverAmount = _unRecoverAmount;
    m_unRecoverAmountHasBeenSet = true;
}

bool DescribeProductEventListOverView::UnRecoverAmountHasBeenSet() const
{
    return m_unRecoverAmountHasBeenSet;
}

