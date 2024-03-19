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

#include <tencentcloud/monitor/v20180724/model/DescribeAlarmSmsQuotaQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribeAlarmSmsQuotaQuota::DescribeAlarmSmsQuotaQuota() :
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_freeLeftHasBeenSet(false),
    m_purchaseLeftHasBeenSet(false),
    m_usedHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAlarmSmsQuotaQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAlarmSmsQuotaQuota.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAlarmSmsQuotaQuota.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("FreeLeft") && !value["FreeLeft"].IsNull())
    {
        if (!value["FreeLeft"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAlarmSmsQuotaQuota.FreeLeft` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_freeLeft = value["FreeLeft"].GetInt64();
        m_freeLeftHasBeenSet = true;
    }

    if (value.HasMember("PurchaseLeft") && !value["PurchaseLeft"].IsNull())
    {
        if (!value["PurchaseLeft"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAlarmSmsQuotaQuota.PurchaseLeft` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_purchaseLeft = value["PurchaseLeft"].GetInt64();
        m_purchaseLeftHasBeenSet = true;
    }

    if (value.HasMember("Used") && !value["Used"].IsNull())
    {
        if (!value["Used"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAlarmSmsQuotaQuota.Used` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_used = value["Used"].GetInt64();
        m_usedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeAlarmSmsQuotaQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_freeLeftHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeLeft";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freeLeft, allocator);
    }

    if (m_purchaseLeftHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PurchaseLeft";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_purchaseLeft, allocator);
    }

    if (m_usedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Used";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_used, allocator);
    }

}


string DescribeAlarmSmsQuotaQuota::GetType() const
{
    return m_type;
}

void DescribeAlarmSmsQuotaQuota::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeAlarmSmsQuotaQuota::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeAlarmSmsQuotaQuota::GetName() const
{
    return m_name;
}

void DescribeAlarmSmsQuotaQuota::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeAlarmSmsQuotaQuota::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DescribeAlarmSmsQuotaQuota::GetFreeLeft() const
{
    return m_freeLeft;
}

void DescribeAlarmSmsQuotaQuota::SetFreeLeft(const int64_t& _freeLeft)
{
    m_freeLeft = _freeLeft;
    m_freeLeftHasBeenSet = true;
}

bool DescribeAlarmSmsQuotaQuota::FreeLeftHasBeenSet() const
{
    return m_freeLeftHasBeenSet;
}

int64_t DescribeAlarmSmsQuotaQuota::GetPurchaseLeft() const
{
    return m_purchaseLeft;
}

void DescribeAlarmSmsQuotaQuota::SetPurchaseLeft(const int64_t& _purchaseLeft)
{
    m_purchaseLeft = _purchaseLeft;
    m_purchaseLeftHasBeenSet = true;
}

bool DescribeAlarmSmsQuotaQuota::PurchaseLeftHasBeenSet() const
{
    return m_purchaseLeftHasBeenSet;
}

int64_t DescribeAlarmSmsQuotaQuota::GetUsed() const
{
    return m_used;
}

void DescribeAlarmSmsQuotaQuota::SetUsed(const int64_t& _used)
{
    m_used = _used;
    m_usedHasBeenSet = true;
}

bool DescribeAlarmSmsQuotaQuota::UsedHasBeenSet() const
{
    return m_usedHasBeenSet;
}

