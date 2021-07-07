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

#include <tencentcloud/mrs/v20200910/model/IndicatorItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

IndicatorItem::IndicatorItem() :
    m_codeHasBeenSet(false),
    m_scodeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_snameHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_rangeHasBeenSet(false),
    m_arrowHasBeenSet(false),
    m_normalHasBeenSet(false),
    m_itemStringHasBeenSet(false)
{
}

CoreInternalOutcome IndicatorItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Error("response `IndicatorItem.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Scode") && !value["Scode"].IsNull())
    {
        if (!value["Scode"].IsString())
        {
            return CoreInternalOutcome(Error("response `IndicatorItem.Scode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scode = string(value["Scode"].GetString());
        m_scodeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `IndicatorItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Sname") && !value["Sname"].IsNull())
    {
        if (!value["Sname"].IsString())
        {
            return CoreInternalOutcome(Error("response `IndicatorItem.Sname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sname = string(value["Sname"].GetString());
        m_snameHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Error("response `IndicatorItem.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Error("response `IndicatorItem.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Range") && !value["Range"].IsNull())
    {
        if (!value["Range"].IsString())
        {
            return CoreInternalOutcome(Error("response `IndicatorItem.Range` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_range = string(value["Range"].GetString());
        m_rangeHasBeenSet = true;
    }

    if (value.HasMember("Arrow") && !value["Arrow"].IsNull())
    {
        if (!value["Arrow"].IsString())
        {
            return CoreInternalOutcome(Error("response `IndicatorItem.Arrow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_arrow = string(value["Arrow"].GetString());
        m_arrowHasBeenSet = true;
    }

    if (value.HasMember("Normal") && !value["Normal"].IsNull())
    {
        if (!value["Normal"].IsBool())
        {
            return CoreInternalOutcome(Error("response `IndicatorItem.Normal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_normal = value["Normal"].GetBool();
        m_normalHasBeenSet = true;
    }

    if (value.HasMember("ItemString") && !value["ItemString"].IsNull())
    {
        if (!value["ItemString"].IsString())
        {
            return CoreInternalOutcome(Error("response `IndicatorItem.ItemString` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemString = string(value["ItemString"].GetString());
        m_itemStringHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IndicatorItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_scodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scode.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_snameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sname.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_rangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Range";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_range.c_str(), allocator).Move(), allocator);
    }

    if (m_arrowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Arrow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_arrow.c_str(), allocator).Move(), allocator);
    }

    if (m_normalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Normal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_normal, allocator);
    }

    if (m_itemStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemString";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemString.c_str(), allocator).Move(), allocator);
    }

}


string IndicatorItem::GetCode() const
{
    return m_code;
}

void IndicatorItem::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool IndicatorItem::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string IndicatorItem::GetScode() const
{
    return m_scode;
}

void IndicatorItem::SetScode(const string& _scode)
{
    m_scode = _scode;
    m_scodeHasBeenSet = true;
}

bool IndicatorItem::ScodeHasBeenSet() const
{
    return m_scodeHasBeenSet;
}

string IndicatorItem::GetName() const
{
    return m_name;
}

void IndicatorItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool IndicatorItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string IndicatorItem::GetSname() const
{
    return m_sname;
}

void IndicatorItem::SetSname(const string& _sname)
{
    m_sname = _sname;
    m_snameHasBeenSet = true;
}

bool IndicatorItem::SnameHasBeenSet() const
{
    return m_snameHasBeenSet;
}

string IndicatorItem::GetResult() const
{
    return m_result;
}

void IndicatorItem::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool IndicatorItem::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string IndicatorItem::GetUnit() const
{
    return m_unit;
}

void IndicatorItem::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool IndicatorItem::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string IndicatorItem::GetRange() const
{
    return m_range;
}

void IndicatorItem::SetRange(const string& _range)
{
    m_range = _range;
    m_rangeHasBeenSet = true;
}

bool IndicatorItem::RangeHasBeenSet() const
{
    return m_rangeHasBeenSet;
}

string IndicatorItem::GetArrow() const
{
    return m_arrow;
}

void IndicatorItem::SetArrow(const string& _arrow)
{
    m_arrow = _arrow;
    m_arrowHasBeenSet = true;
}

bool IndicatorItem::ArrowHasBeenSet() const
{
    return m_arrowHasBeenSet;
}

bool IndicatorItem::GetNormal() const
{
    return m_normal;
}

void IndicatorItem::SetNormal(const bool& _normal)
{
    m_normal = _normal;
    m_normalHasBeenSet = true;
}

bool IndicatorItem::NormalHasBeenSet() const
{
    return m_normalHasBeenSet;
}

string IndicatorItem::GetItemString() const
{
    return m_itemString;
}

void IndicatorItem::SetItemString(const string& _itemString)
{
    m_itemString = _itemString;
    m_itemStringHasBeenSet = true;
}

bool IndicatorItem::ItemStringHasBeenSet() const
{
    return m_itemStringHasBeenSet;
}

