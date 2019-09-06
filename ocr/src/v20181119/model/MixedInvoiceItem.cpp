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

#include <tencentcloud/ocr/v20181119/model/MixedInvoiceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace rapidjson;
using namespace std;

MixedInvoiceItem::MixedInvoiceItem() :
    m_codeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_rectHasBeenSet(false),
    m_angleHasBeenSet(false),
    m_singleInvoiceInfosHasBeenSet(false)
{
}

CoreInternalOutcome MixedInvoiceItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Error("response `MixedInvoiceItem.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `MixedInvoiceItem.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Rect") && !value["Rect"].IsNull())
    {
        if (!value["Rect"].IsObject())
        {
            return CoreInternalOutcome(Error("response `MixedInvoiceItem.Rect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rect.Deserialize(value["Rect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rectHasBeenSet = true;
    }

    if (value.HasMember("Angle") && !value["Angle"].IsNull())
    {
        if (!value["Angle"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `MixedInvoiceItem.Angle` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_angle = value["Angle"].GetDouble();
        m_angleHasBeenSet = true;
    }

    if (value.HasMember("SingleInvoiceInfos") && !value["SingleInvoiceInfos"].IsNull())
    {
        if (!value["SingleInvoiceInfos"].IsArray())
            return CoreInternalOutcome(Error("response `MixedInvoiceItem.SingleInvoiceInfos` is not array type"));

        const Value &tmpValue = value["SingleInvoiceInfos"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SingleInvoiceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_singleInvoiceInfos.push_back(item);
        }
        m_singleInvoiceInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MixedInvoiceItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_rectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Rect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_rect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_angleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Angle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_angle, allocator);
    }

    if (m_singleInvoiceInfosHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SingleInvoiceInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_singleInvoiceInfos.begin(); itr != m_singleInvoiceInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MixedInvoiceItem::GetCode() const
{
    return m_code;
}

void MixedInvoiceItem::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool MixedInvoiceItem::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

int64_t MixedInvoiceItem::GetType() const
{
    return m_type;
}

void MixedInvoiceItem::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MixedInvoiceItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

Rect MixedInvoiceItem::GetRect() const
{
    return m_rect;
}

void MixedInvoiceItem::SetRect(const Rect& _rect)
{
    m_rect = _rect;
    m_rectHasBeenSet = true;
}

bool MixedInvoiceItem::RectHasBeenSet() const
{
    return m_rectHasBeenSet;
}

double MixedInvoiceItem::GetAngle() const
{
    return m_angle;
}

void MixedInvoiceItem::SetAngle(const double& _angle)
{
    m_angle = _angle;
    m_angleHasBeenSet = true;
}

bool MixedInvoiceItem::AngleHasBeenSet() const
{
    return m_angleHasBeenSet;
}

vector<SingleInvoiceInfo> MixedInvoiceItem::GetSingleInvoiceInfos() const
{
    return m_singleInvoiceInfos;
}

void MixedInvoiceItem::SetSingleInvoiceInfos(const vector<SingleInvoiceInfo>& _singleInvoiceInfos)
{
    m_singleInvoiceInfos = _singleInvoiceInfos;
    m_singleInvoiceInfosHasBeenSet = true;
}

bool MixedInvoiceItem::SingleInvoiceInfosHasBeenSet() const
{
    return m_singleInvoiceInfosHasBeenSet;
}

