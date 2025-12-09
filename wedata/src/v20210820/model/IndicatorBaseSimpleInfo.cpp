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

#include <tencentcloud/wedata/v20210820/model/IndicatorBaseSimpleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

IndicatorBaseSimpleInfo::IndicatorBaseSimpleInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_measureUnitHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_indicatorCodeHasBeenSet(false),
    m_bizOwnerNameHasBeenSet(false),
    m_techOwnerNameHasBeenSet(false),
    m_bizCaliberHasBeenSet(false),
    m_indicatorTypeHasBeenSet(false)
{
}

CoreInternalOutcome IndicatorBaseSimpleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseSimpleInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseSimpleInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("MeasureUnit") && !value["MeasureUnit"].IsNull())
    {
        if (!value["MeasureUnit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseSimpleInfo.MeasureUnit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_measureUnit = value["MeasureUnit"].GetInt64();
        m_measureUnitHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseSimpleInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IndicatorCode") && !value["IndicatorCode"].IsNull())
    {
        if (!value["IndicatorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseSimpleInfo.IndicatorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indicatorCode = string(value["IndicatorCode"].GetString());
        m_indicatorCodeHasBeenSet = true;
    }

    if (value.HasMember("BizOwnerName") && !value["BizOwnerName"].IsNull())
    {
        if (!value["BizOwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseSimpleInfo.BizOwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizOwnerName = string(value["BizOwnerName"].GetString());
        m_bizOwnerNameHasBeenSet = true;
    }

    if (value.HasMember("TechOwnerName") && !value["TechOwnerName"].IsNull())
    {
        if (!value["TechOwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseSimpleInfo.TechOwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_techOwnerName = string(value["TechOwnerName"].GetString());
        m_techOwnerNameHasBeenSet = true;
    }

    if (value.HasMember("BizCaliber") && !value["BizCaliber"].IsNull())
    {
        if (!value["BizCaliber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseSimpleInfo.BizCaliber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizCaliber = string(value["BizCaliber"].GetString());
        m_bizCaliberHasBeenSet = true;
    }

    if (value.HasMember("IndicatorType") && !value["IndicatorType"].IsNull())
    {
        if (!value["IndicatorType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseSimpleInfo.IndicatorType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_indicatorType = value["IndicatorType"].GetInt64();
        m_indicatorTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IndicatorBaseSimpleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_measureUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MeasureUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_measureUnit, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_indicatorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndicatorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indicatorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_bizOwnerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizOwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizOwnerName.c_str(), allocator).Move(), allocator);
    }

    if (m_techOwnerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TechOwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_techOwnerName.c_str(), allocator).Move(), allocator);
    }

    if (m_bizCaliberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizCaliber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizCaliber.c_str(), allocator).Move(), allocator);
    }

    if (m_indicatorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndicatorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indicatorType, allocator);
    }

}


int64_t IndicatorBaseSimpleInfo::GetId() const
{
    return m_id;
}

void IndicatorBaseSimpleInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool IndicatorBaseSimpleInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string IndicatorBaseSimpleInfo::GetName() const
{
    return m_name;
}

void IndicatorBaseSimpleInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool IndicatorBaseSimpleInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t IndicatorBaseSimpleInfo::GetMeasureUnit() const
{
    return m_measureUnit;
}

void IndicatorBaseSimpleInfo::SetMeasureUnit(const int64_t& _measureUnit)
{
    m_measureUnit = _measureUnit;
    m_measureUnitHasBeenSet = true;
}

bool IndicatorBaseSimpleInfo::MeasureUnitHasBeenSet() const
{
    return m_measureUnitHasBeenSet;
}

int64_t IndicatorBaseSimpleInfo::GetStatus() const
{
    return m_status;
}

void IndicatorBaseSimpleInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool IndicatorBaseSimpleInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string IndicatorBaseSimpleInfo::GetIndicatorCode() const
{
    return m_indicatorCode;
}

void IndicatorBaseSimpleInfo::SetIndicatorCode(const string& _indicatorCode)
{
    m_indicatorCode = _indicatorCode;
    m_indicatorCodeHasBeenSet = true;
}

bool IndicatorBaseSimpleInfo::IndicatorCodeHasBeenSet() const
{
    return m_indicatorCodeHasBeenSet;
}

string IndicatorBaseSimpleInfo::GetBizOwnerName() const
{
    return m_bizOwnerName;
}

void IndicatorBaseSimpleInfo::SetBizOwnerName(const string& _bizOwnerName)
{
    m_bizOwnerName = _bizOwnerName;
    m_bizOwnerNameHasBeenSet = true;
}

bool IndicatorBaseSimpleInfo::BizOwnerNameHasBeenSet() const
{
    return m_bizOwnerNameHasBeenSet;
}

string IndicatorBaseSimpleInfo::GetTechOwnerName() const
{
    return m_techOwnerName;
}

void IndicatorBaseSimpleInfo::SetTechOwnerName(const string& _techOwnerName)
{
    m_techOwnerName = _techOwnerName;
    m_techOwnerNameHasBeenSet = true;
}

bool IndicatorBaseSimpleInfo::TechOwnerNameHasBeenSet() const
{
    return m_techOwnerNameHasBeenSet;
}

string IndicatorBaseSimpleInfo::GetBizCaliber() const
{
    return m_bizCaliber;
}

void IndicatorBaseSimpleInfo::SetBizCaliber(const string& _bizCaliber)
{
    m_bizCaliber = _bizCaliber;
    m_bizCaliberHasBeenSet = true;
}

bool IndicatorBaseSimpleInfo::BizCaliberHasBeenSet() const
{
    return m_bizCaliberHasBeenSet;
}

int64_t IndicatorBaseSimpleInfo::GetIndicatorType() const
{
    return m_indicatorType;
}

void IndicatorBaseSimpleInfo::SetIndicatorType(const int64_t& _indicatorType)
{
    m_indicatorType = _indicatorType;
    m_indicatorTypeHasBeenSet = true;
}

bool IndicatorBaseSimpleInfo::IndicatorTypeHasBeenSet() const
{
    return m_indicatorTypeHasBeenSet;
}

