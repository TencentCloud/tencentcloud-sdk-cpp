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

#include <tencentcloud/ocr/v20181119/model/ProductDataRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

ProductDataRecord::ProductDataRecord() :
    m_productNameHasBeenSet(false),
    m_enNameHasBeenSet(false),
    m_brandNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_depthHasBeenSet(false),
    m_keyWordHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_imageLinkHasBeenSet(false),
    m_manufacturerNameHasBeenSet(false),
    m_manufacturerAddressHasBeenSet(false),
    m_firmCodeHasBeenSet(false),
    m_checkResultHasBeenSet(false),
    m_categoryCodeHasBeenSet(false)
{
}

CoreInternalOutcome ProductDataRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductDataRecord.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("EnName") && !value["EnName"].IsNull())
    {
        if (!value["EnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductDataRecord.EnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enName = string(value["EnName"].GetString());
        m_enNameHasBeenSet = true;
    }

    if (value.HasMember("BrandName") && !value["BrandName"].IsNull())
    {
        if (!value["BrandName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductDataRecord.BrandName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brandName = string(value["BrandName"].GetString());
        m_brandNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductDataRecord.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductDataRecord.Width` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_width = string(value["Width"].GetString());
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductDataRecord.Height` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_height = string(value["Height"].GetString());
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Depth") && !value["Depth"].IsNull())
    {
        if (!value["Depth"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductDataRecord.Depth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_depth = string(value["Depth"].GetString());
        m_depthHasBeenSet = true;
    }

    if (value.HasMember("KeyWord") && !value["KeyWord"].IsNull())
    {
        if (!value["KeyWord"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductDataRecord.KeyWord` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyWord = string(value["KeyWord"].GetString());
        m_keyWordHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductDataRecord.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ImageLink") && !value["ImageLink"].IsNull())
    {
        if (!value["ImageLink"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProductDataRecord.ImageLink` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageLink"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageLink.push_back((*itr).GetString());
        }
        m_imageLinkHasBeenSet = true;
    }

    if (value.HasMember("ManufacturerName") && !value["ManufacturerName"].IsNull())
    {
        if (!value["ManufacturerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductDataRecord.ManufacturerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manufacturerName = string(value["ManufacturerName"].GetString());
        m_manufacturerNameHasBeenSet = true;
    }

    if (value.HasMember("ManufacturerAddress") && !value["ManufacturerAddress"].IsNull())
    {
        if (!value["ManufacturerAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductDataRecord.ManufacturerAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manufacturerAddress = string(value["ManufacturerAddress"].GetString());
        m_manufacturerAddressHasBeenSet = true;
    }

    if (value.HasMember("FirmCode") && !value["FirmCode"].IsNull())
    {
        if (!value["FirmCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductDataRecord.FirmCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firmCode = string(value["FirmCode"].GetString());
        m_firmCodeHasBeenSet = true;
    }

    if (value.HasMember("CheckResult") && !value["CheckResult"].IsNull())
    {
        if (!value["CheckResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductDataRecord.CheckResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkResult = string(value["CheckResult"].GetString());
        m_checkResultHasBeenSet = true;
    }

    if (value.HasMember("CategoryCode") && !value["CategoryCode"].IsNull())
    {
        if (!value["CategoryCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductDataRecord.CategoryCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryCode = string(value["CategoryCode"].GetString());
        m_categoryCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductDataRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_enNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enName.c_str(), allocator).Move(), allocator);
    }

    if (m_brandNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brandName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_width.c_str(), allocator).Move(), allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_height.c_str(), allocator).Move(), allocator);
    }

    if (m_depthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Depth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_depth.c_str(), allocator).Move(), allocator);
    }

    if (m_keyWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyWord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyWord.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_imageLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageLink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageLink.begin(); itr != m_imageLink.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_manufacturerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManufacturerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manufacturerName.c_str(), allocator).Move(), allocator);
    }

    if (m_manufacturerAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManufacturerAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manufacturerAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_firmCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirmCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firmCode.c_str(), allocator).Move(), allocator);
    }

    if (m_checkResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkResult.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryCode.c_str(), allocator).Move(), allocator);
    }

}


string ProductDataRecord::GetProductName() const
{
    return m_productName;
}

void ProductDataRecord::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool ProductDataRecord::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string ProductDataRecord::GetEnName() const
{
    return m_enName;
}

void ProductDataRecord::SetEnName(const string& _enName)
{
    m_enName = _enName;
    m_enNameHasBeenSet = true;
}

bool ProductDataRecord::EnNameHasBeenSet() const
{
    return m_enNameHasBeenSet;
}

string ProductDataRecord::GetBrandName() const
{
    return m_brandName;
}

void ProductDataRecord::SetBrandName(const string& _brandName)
{
    m_brandName = _brandName;
    m_brandNameHasBeenSet = true;
}

bool ProductDataRecord::BrandNameHasBeenSet() const
{
    return m_brandNameHasBeenSet;
}

string ProductDataRecord::GetType() const
{
    return m_type;
}

void ProductDataRecord::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ProductDataRecord::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ProductDataRecord::GetWidth() const
{
    return m_width;
}

void ProductDataRecord::SetWidth(const string& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool ProductDataRecord::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

string ProductDataRecord::GetHeight() const
{
    return m_height;
}

void ProductDataRecord::SetHeight(const string& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool ProductDataRecord::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string ProductDataRecord::GetDepth() const
{
    return m_depth;
}

void ProductDataRecord::SetDepth(const string& _depth)
{
    m_depth = _depth;
    m_depthHasBeenSet = true;
}

bool ProductDataRecord::DepthHasBeenSet() const
{
    return m_depthHasBeenSet;
}

string ProductDataRecord::GetKeyWord() const
{
    return m_keyWord;
}

void ProductDataRecord::SetKeyWord(const string& _keyWord)
{
    m_keyWord = _keyWord;
    m_keyWordHasBeenSet = true;
}

bool ProductDataRecord::KeyWordHasBeenSet() const
{
    return m_keyWordHasBeenSet;
}

string ProductDataRecord::GetDescription() const
{
    return m_description;
}

void ProductDataRecord::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ProductDataRecord::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> ProductDataRecord::GetImageLink() const
{
    return m_imageLink;
}

void ProductDataRecord::SetImageLink(const vector<string>& _imageLink)
{
    m_imageLink = _imageLink;
    m_imageLinkHasBeenSet = true;
}

bool ProductDataRecord::ImageLinkHasBeenSet() const
{
    return m_imageLinkHasBeenSet;
}

string ProductDataRecord::GetManufacturerName() const
{
    return m_manufacturerName;
}

void ProductDataRecord::SetManufacturerName(const string& _manufacturerName)
{
    m_manufacturerName = _manufacturerName;
    m_manufacturerNameHasBeenSet = true;
}

bool ProductDataRecord::ManufacturerNameHasBeenSet() const
{
    return m_manufacturerNameHasBeenSet;
}

string ProductDataRecord::GetManufacturerAddress() const
{
    return m_manufacturerAddress;
}

void ProductDataRecord::SetManufacturerAddress(const string& _manufacturerAddress)
{
    m_manufacturerAddress = _manufacturerAddress;
    m_manufacturerAddressHasBeenSet = true;
}

bool ProductDataRecord::ManufacturerAddressHasBeenSet() const
{
    return m_manufacturerAddressHasBeenSet;
}

string ProductDataRecord::GetFirmCode() const
{
    return m_firmCode;
}

void ProductDataRecord::SetFirmCode(const string& _firmCode)
{
    m_firmCode = _firmCode;
    m_firmCodeHasBeenSet = true;
}

bool ProductDataRecord::FirmCodeHasBeenSet() const
{
    return m_firmCodeHasBeenSet;
}

string ProductDataRecord::GetCheckResult() const
{
    return m_checkResult;
}

void ProductDataRecord::SetCheckResult(const string& _checkResult)
{
    m_checkResult = _checkResult;
    m_checkResultHasBeenSet = true;
}

bool ProductDataRecord::CheckResultHasBeenSet() const
{
    return m_checkResultHasBeenSet;
}

string ProductDataRecord::GetCategoryCode() const
{
    return m_categoryCode;
}

void ProductDataRecord::SetCategoryCode(const string& _categoryCode)
{
    m_categoryCode = _categoryCode;
    m_categoryCodeHasBeenSet = true;
}

bool ProductDataRecord::CategoryCodeHasBeenSet() const
{
    return m_categoryCodeHasBeenSet;
}

