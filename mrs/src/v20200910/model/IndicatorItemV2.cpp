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

#include <tencentcloud/mrs/v20200910/model/IndicatorItemV2.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

IndicatorItemV2::IndicatorItemV2() :
    m_itemHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_rangeHasBeenSet(false),
    m_arrowHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_normalHasBeenSet(false),
    m_idHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_inferNormalHasBeenSet(false)
{
}

CoreInternalOutcome IndicatorItemV2::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Item") && !value["Item"].IsNull())
    {
        if (!value["Item"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorItemV2.Item` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_item.Deserialize(value["Item"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_itemHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorItemV2.Code` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_code.Deserialize(value["Code"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorItemV2.Result` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_result.Deserialize(value["Result"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorItemV2.Unit` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_unit.Deserialize(value["Unit"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Range") && !value["Range"].IsNull())
    {
        if (!value["Range"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorItemV2.Range` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_range.Deserialize(value["Range"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rangeHasBeenSet = true;
    }

    if (value.HasMember("Arrow") && !value["Arrow"].IsNull())
    {
        if (!value["Arrow"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorItemV2.Arrow` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_arrow.Deserialize(value["Arrow"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_arrowHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorItemV2.Method` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_method.Deserialize(value["Method"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_methodHasBeenSet = true;
    }

    if (value.HasMember("Normal") && !value["Normal"].IsNull())
    {
        if (!value["Normal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorItemV2.Normal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_normal = value["Normal"].GetBool();
        m_normalHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorItemV2.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Order") && !value["Order"].IsNull())
    {
        if (!value["Order"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorItemV2.Order` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_order = value["Order"].GetInt64();
        m_orderHasBeenSet = true;
    }

    if (value.HasMember("InferNormal") && !value["InferNormal"].IsNull())
    {
        if (!value["InferNormal"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorItemV2.InferNormal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inferNormal = string(value["InferNormal"].GetString());
        m_inferNormalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IndicatorItemV2::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Item";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_item.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_code.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_result.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_unit.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Range";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_range.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_arrowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Arrow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_arrow.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_method.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_normalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Normal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_normal, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_order, allocator);
    }

    if (m_inferNormalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InferNormal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inferNormal.c_str(), allocator).Move(), allocator);
    }

}


BaseItem IndicatorItemV2::GetItem() const
{
    return m_item;
}

void IndicatorItemV2::SetItem(const BaseItem& _item)
{
    m_item = _item;
    m_itemHasBeenSet = true;
}

bool IndicatorItemV2::ItemHasBeenSet() const
{
    return m_itemHasBeenSet;
}

BaseItem IndicatorItemV2::GetCode() const
{
    return m_code;
}

void IndicatorItemV2::SetCode(const BaseItem& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool IndicatorItemV2::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

BaseItem IndicatorItemV2::GetResult() const
{
    return m_result;
}

void IndicatorItemV2::SetResult(const BaseItem& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool IndicatorItemV2::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

BaseItem IndicatorItemV2::GetUnit() const
{
    return m_unit;
}

void IndicatorItemV2::SetUnit(const BaseItem& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool IndicatorItemV2::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

BaseItem IndicatorItemV2::GetRange() const
{
    return m_range;
}

void IndicatorItemV2::SetRange(const BaseItem& _range)
{
    m_range = _range;
    m_rangeHasBeenSet = true;
}

bool IndicatorItemV2::RangeHasBeenSet() const
{
    return m_rangeHasBeenSet;
}

BaseItem IndicatorItemV2::GetArrow() const
{
    return m_arrow;
}

void IndicatorItemV2::SetArrow(const BaseItem& _arrow)
{
    m_arrow = _arrow;
    m_arrowHasBeenSet = true;
}

bool IndicatorItemV2::ArrowHasBeenSet() const
{
    return m_arrowHasBeenSet;
}

BaseItem IndicatorItemV2::GetMethod() const
{
    return m_method;
}

void IndicatorItemV2::SetMethod(const BaseItem& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool IndicatorItemV2::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

bool IndicatorItemV2::GetNormal() const
{
    return m_normal;
}

void IndicatorItemV2::SetNormal(const bool& _normal)
{
    m_normal = _normal;
    m_normalHasBeenSet = true;
}

bool IndicatorItemV2::NormalHasBeenSet() const
{
    return m_normalHasBeenSet;
}

int64_t IndicatorItemV2::GetId() const
{
    return m_id;
}

void IndicatorItemV2::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool IndicatorItemV2::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t IndicatorItemV2::GetOrder() const
{
    return m_order;
}

void IndicatorItemV2::SetOrder(const int64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool IndicatorItemV2::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string IndicatorItemV2::GetInferNormal() const
{
    return m_inferNormal;
}

void IndicatorItemV2::SetInferNormal(const string& _inferNormal)
{
    m_inferNormal = _inferNormal;
    m_inferNormalHasBeenSet = true;
}

bool IndicatorItemV2::InferNormalHasBeenSet() const
{
    return m_inferNormalHasBeenSet;
}

