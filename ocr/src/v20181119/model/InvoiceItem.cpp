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

#include <tencentcloud/ocr/v20181119/model/InvoiceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

InvoiceItem::InvoiceItem() :
    m_codeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_polygonHasBeenSet(false),
    m_angleHasBeenSet(false),
    m_singleInvoiceInfosHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_subTypeHasBeenSet(false),
    m_typeDescriptionHasBeenSet(false),
    m_cutImageHasBeenSet(false),
    m_subTypeDescriptionHasBeenSet(false),
    m_itemPolygonHasBeenSet(false),
    m_qRCodeHasBeenSet(false),
    m_invoiceSealInfoHasBeenSet(false)
{
}

CoreInternalOutcome InvoiceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceItem.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceItem.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Polygon") && !value["Polygon"].IsNull())
    {
        if (!value["Polygon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceItem.Polygon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_polygon.Deserialize(value["Polygon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_polygonHasBeenSet = true;
    }

    if (value.HasMember("Angle") && !value["Angle"].IsNull())
    {
        if (!value["Angle"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceItem.Angle` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_angle = value["Angle"].GetDouble();
        m_angleHasBeenSet = true;
    }

    if (value.HasMember("SingleInvoiceInfos") && !value["SingleInvoiceInfos"].IsNull())
    {
        if (!value["SingleInvoiceInfos"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceItem.SingleInvoiceInfos` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_singleInvoiceInfos.Deserialize(value["SingleInvoiceInfos"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_singleInvoiceInfosHasBeenSet = true;
    }

    if (value.HasMember("Page") && !value["Page"].IsNull())
    {
        if (!value["Page"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceItem.Page` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_page = value["Page"].GetInt64();
        m_pageHasBeenSet = true;
    }

    if (value.HasMember("SubType") && !value["SubType"].IsNull())
    {
        if (!value["SubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceItem.SubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subType = string(value["SubType"].GetString());
        m_subTypeHasBeenSet = true;
    }

    if (value.HasMember("TypeDescription") && !value["TypeDescription"].IsNull())
    {
        if (!value["TypeDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceItem.TypeDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeDescription = string(value["TypeDescription"].GetString());
        m_typeDescriptionHasBeenSet = true;
    }

    if (value.HasMember("CutImage") && !value["CutImage"].IsNull())
    {
        if (!value["CutImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceItem.CutImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cutImage = string(value["CutImage"].GetString());
        m_cutImageHasBeenSet = true;
    }

    if (value.HasMember("SubTypeDescription") && !value["SubTypeDescription"].IsNull())
    {
        if (!value["SubTypeDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceItem.SubTypeDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subTypeDescription = string(value["SubTypeDescription"].GetString());
        m_subTypeDescriptionHasBeenSet = true;
    }

    if (value.HasMember("ItemPolygon") && !value["ItemPolygon"].IsNull())
    {
        if (!value["ItemPolygon"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InvoiceItem.ItemPolygon` is not array type"));

        const rapidjson::Value &tmpValue = value["ItemPolygon"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ItemPolygonInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_itemPolygon.push_back(item);
        }
        m_itemPolygonHasBeenSet = true;
    }

    if (value.HasMember("QRCode") && !value["QRCode"].IsNull())
    {
        if (!value["QRCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceItem.QRCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qRCode = string(value["QRCode"].GetString());
        m_qRCodeHasBeenSet = true;
    }

    if (value.HasMember("InvoiceSealInfo") && !value["InvoiceSealInfo"].IsNull())
    {
        if (!value["InvoiceSealInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InvoiceItem.InvoiceSealInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_invoiceSealInfo.Deserialize(value["InvoiceSealInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_invoiceSealInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InvoiceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_polygonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Polygon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_polygon.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_angleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Angle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_angle, allocator);
    }

    if (m_singleInvoiceInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SingleInvoiceInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_singleInvoiceInfos.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_page, allocator);
    }

    if (m_subTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subType.c_str(), allocator).Move(), allocator);
    }

    if (m_typeDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_cutImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CutImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cutImage.c_str(), allocator).Move(), allocator);
    }

    if (m_subTypeDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubTypeDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subTypeDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_itemPolygonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemPolygon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_itemPolygon.begin(); itr != m_itemPolygon.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_qRCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QRCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qRCode.c_str(), allocator).Move(), allocator);
    }

    if (m_invoiceSealInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceSealInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_invoiceSealInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string InvoiceItem::GetCode() const
{
    return m_code;
}

void InvoiceItem::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool InvoiceItem::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

int64_t InvoiceItem::GetType() const
{
    return m_type;
}

void InvoiceItem::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool InvoiceItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

Polygon InvoiceItem::GetPolygon() const
{
    return m_polygon;
}

void InvoiceItem::SetPolygon(const Polygon& _polygon)
{
    m_polygon = _polygon;
    m_polygonHasBeenSet = true;
}

bool InvoiceItem::PolygonHasBeenSet() const
{
    return m_polygonHasBeenSet;
}

double InvoiceItem::GetAngle() const
{
    return m_angle;
}

void InvoiceItem::SetAngle(const double& _angle)
{
    m_angle = _angle;
    m_angleHasBeenSet = true;
}

bool InvoiceItem::AngleHasBeenSet() const
{
    return m_angleHasBeenSet;
}

SingleInvoiceItem InvoiceItem::GetSingleInvoiceInfos() const
{
    return m_singleInvoiceInfos;
}

void InvoiceItem::SetSingleInvoiceInfos(const SingleInvoiceItem& _singleInvoiceInfos)
{
    m_singleInvoiceInfos = _singleInvoiceInfos;
    m_singleInvoiceInfosHasBeenSet = true;
}

bool InvoiceItem::SingleInvoiceInfosHasBeenSet() const
{
    return m_singleInvoiceInfosHasBeenSet;
}

int64_t InvoiceItem::GetPage() const
{
    return m_page;
}

void InvoiceItem::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool InvoiceItem::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

string InvoiceItem::GetSubType() const
{
    return m_subType;
}

void InvoiceItem::SetSubType(const string& _subType)
{
    m_subType = _subType;
    m_subTypeHasBeenSet = true;
}

bool InvoiceItem::SubTypeHasBeenSet() const
{
    return m_subTypeHasBeenSet;
}

string InvoiceItem::GetTypeDescription() const
{
    return m_typeDescription;
}

void InvoiceItem::SetTypeDescription(const string& _typeDescription)
{
    m_typeDescription = _typeDescription;
    m_typeDescriptionHasBeenSet = true;
}

bool InvoiceItem::TypeDescriptionHasBeenSet() const
{
    return m_typeDescriptionHasBeenSet;
}

string InvoiceItem::GetCutImage() const
{
    return m_cutImage;
}

void InvoiceItem::SetCutImage(const string& _cutImage)
{
    m_cutImage = _cutImage;
    m_cutImageHasBeenSet = true;
}

bool InvoiceItem::CutImageHasBeenSet() const
{
    return m_cutImageHasBeenSet;
}

string InvoiceItem::GetSubTypeDescription() const
{
    return m_subTypeDescription;
}

void InvoiceItem::SetSubTypeDescription(const string& _subTypeDescription)
{
    m_subTypeDescription = _subTypeDescription;
    m_subTypeDescriptionHasBeenSet = true;
}

bool InvoiceItem::SubTypeDescriptionHasBeenSet() const
{
    return m_subTypeDescriptionHasBeenSet;
}

vector<ItemPolygonInfo> InvoiceItem::GetItemPolygon() const
{
    return m_itemPolygon;
}

void InvoiceItem::SetItemPolygon(const vector<ItemPolygonInfo>& _itemPolygon)
{
    m_itemPolygon = _itemPolygon;
    m_itemPolygonHasBeenSet = true;
}

bool InvoiceItem::ItemPolygonHasBeenSet() const
{
    return m_itemPolygonHasBeenSet;
}

string InvoiceItem::GetQRCode() const
{
    return m_qRCode;
}

void InvoiceItem::SetQRCode(const string& _qRCode)
{
    m_qRCode = _qRCode;
    m_qRCodeHasBeenSet = true;
}

bool InvoiceItem::QRCodeHasBeenSet() const
{
    return m_qRCodeHasBeenSet;
}

InvoiceSealInfo InvoiceItem::GetInvoiceSealInfo() const
{
    return m_invoiceSealInfo;
}

void InvoiceItem::SetInvoiceSealInfo(const InvoiceSealInfo& _invoiceSealInfo)
{
    m_invoiceSealInfo = _invoiceSealInfo;
    m_invoiceSealInfoHasBeenSet = true;
}

bool InvoiceItem::InvoiceSealInfoHasBeenSet() const
{
    return m_invoiceSealInfoHasBeenSet;
}

