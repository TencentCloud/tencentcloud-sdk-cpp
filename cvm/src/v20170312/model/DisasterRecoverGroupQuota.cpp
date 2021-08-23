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

#include <tencentcloud/cvm/v20170312/model/DisasterRecoverGroupQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

DisasterRecoverGroupQuota::DisasterRecoverGroupQuota() :
    m_groupQuotaHasBeenSet(false),
    m_currentNumHasBeenSet(false),
    m_cvmInHostGroupQuotaHasBeenSet(false),
    m_cvmInSwitchGroupQuotaHasBeenSet(false),
    m_cvmInRackGroupQuotaHasBeenSet(false)
{
}

CoreInternalOutcome DisasterRecoverGroupQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupQuota") && !value["GroupQuota"].IsNull())
    {
        if (!value["GroupQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroupQuota.GroupQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupQuota = value["GroupQuota"].GetInt64();
        m_groupQuotaHasBeenSet = true;
    }

    if (value.HasMember("CurrentNum") && !value["CurrentNum"].IsNull())
    {
        if (!value["CurrentNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroupQuota.CurrentNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentNum = value["CurrentNum"].GetInt64();
        m_currentNumHasBeenSet = true;
    }

    if (value.HasMember("CvmInHostGroupQuota") && !value["CvmInHostGroupQuota"].IsNull())
    {
        if (!value["CvmInHostGroupQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroupQuota.CvmInHostGroupQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cvmInHostGroupQuota = value["CvmInHostGroupQuota"].GetInt64();
        m_cvmInHostGroupQuotaHasBeenSet = true;
    }

    if (value.HasMember("CvmInSwitchGroupQuota") && !value["CvmInSwitchGroupQuota"].IsNull())
    {
        if (!value["CvmInSwitchGroupQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroupQuota.CvmInSwitchGroupQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cvmInSwitchGroupQuota = value["CvmInSwitchGroupQuota"].GetInt64();
        m_cvmInSwitchGroupQuotaHasBeenSet = true;
    }

    if (value.HasMember("CvmInRackGroupQuota") && !value["CvmInRackGroupQuota"].IsNull())
    {
        if (!value["CvmInRackGroupQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroupQuota.CvmInRackGroupQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cvmInRackGroupQuota = value["CvmInRackGroupQuota"].GetInt64();
        m_cvmInRackGroupQuotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisasterRecoverGroupQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupQuota, allocator);
    }

    if (m_currentNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentNum, allocator);
    }

    if (m_cvmInHostGroupQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmInHostGroupQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cvmInHostGroupQuota, allocator);
    }

    if (m_cvmInSwitchGroupQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmInSwitchGroupQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cvmInSwitchGroupQuota, allocator);
    }

    if (m_cvmInRackGroupQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmInRackGroupQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cvmInRackGroupQuota, allocator);
    }

}


int64_t DisasterRecoverGroupQuota::GetGroupQuota() const
{
    return m_groupQuota;
}

void DisasterRecoverGroupQuota::SetGroupQuota(const int64_t& _groupQuota)
{
    m_groupQuota = _groupQuota;
    m_groupQuotaHasBeenSet = true;
}

bool DisasterRecoverGroupQuota::GroupQuotaHasBeenSet() const
{
    return m_groupQuotaHasBeenSet;
}

int64_t DisasterRecoverGroupQuota::GetCurrentNum() const
{
    return m_currentNum;
}

void DisasterRecoverGroupQuota::SetCurrentNum(const int64_t& _currentNum)
{
    m_currentNum = _currentNum;
    m_currentNumHasBeenSet = true;
}

bool DisasterRecoverGroupQuota::CurrentNumHasBeenSet() const
{
    return m_currentNumHasBeenSet;
}

int64_t DisasterRecoverGroupQuota::GetCvmInHostGroupQuota() const
{
    return m_cvmInHostGroupQuota;
}

void DisasterRecoverGroupQuota::SetCvmInHostGroupQuota(const int64_t& _cvmInHostGroupQuota)
{
    m_cvmInHostGroupQuota = _cvmInHostGroupQuota;
    m_cvmInHostGroupQuotaHasBeenSet = true;
}

bool DisasterRecoverGroupQuota::CvmInHostGroupQuotaHasBeenSet() const
{
    return m_cvmInHostGroupQuotaHasBeenSet;
}

int64_t DisasterRecoverGroupQuota::GetCvmInSwitchGroupQuota() const
{
    return m_cvmInSwitchGroupQuota;
}

void DisasterRecoverGroupQuota::SetCvmInSwitchGroupQuota(const int64_t& _cvmInSwitchGroupQuota)
{
    m_cvmInSwitchGroupQuota = _cvmInSwitchGroupQuota;
    m_cvmInSwitchGroupQuotaHasBeenSet = true;
}

bool DisasterRecoverGroupQuota::CvmInSwitchGroupQuotaHasBeenSet() const
{
    return m_cvmInSwitchGroupQuotaHasBeenSet;
}

int64_t DisasterRecoverGroupQuota::GetCvmInRackGroupQuota() const
{
    return m_cvmInRackGroupQuota;
}

void DisasterRecoverGroupQuota::SetCvmInRackGroupQuota(const int64_t& _cvmInRackGroupQuota)
{
    m_cvmInRackGroupQuota = _cvmInRackGroupQuota;
    m_cvmInRackGroupQuotaHasBeenSet = true;
}

bool DisasterRecoverGroupQuota::CvmInRackGroupQuotaHasBeenSet() const
{
    return m_cvmInRackGroupQuotaHasBeenSet;
}

