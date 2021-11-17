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

#include <tencentcloud/cpdp/v20190820/model/ViewShopResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ViewShopResult::ViewShopResult() :
    m_cityHasBeenSet(false),
    m_shopNameHasBeenSet(false),
    m_latitudeHasBeenSet(false),
    m_brandNameHasBeenSet(false),
    m_appCountHasBeenSet(false),
    m_contactTelephoneHasBeenSet(false),
    m_merchantNameHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_countyHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_terminalCountHasBeenSet(false),
    m_pictureTwoHasBeenSet(false),
    m_latitudeTwoHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_pictureFourHasBeenSet(false),
    m_longitudeTwoHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_agentNoHasBeenSet(false),
    m_merchantNoHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_longitudeHasBeenSet(false),
    m_shopNoHasBeenSet(false),
    m_shopFullNameHasBeenSet(false),
    m_contactHasBeenSet(false),
    m_pictureThreeHasBeenSet(false),
    m_pictureOneHasBeenSet(false),
    m_telephoneHasBeenSet(false),
    m_outShopIdHasBeenSet(false),
    m_cityIdHasBeenSet(false)
{
}

CoreInternalOutcome ViewShopResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("ShopName") && !value["ShopName"].IsNull())
    {
        if (!value["ShopName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.ShopName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shopName = string(value["ShopName"].GetString());
        m_shopNameHasBeenSet = true;
    }

    if (value.HasMember("Latitude") && !value["Latitude"].IsNull())
    {
        if (!value["Latitude"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.Latitude` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latitude = string(value["Latitude"].GetString());
        m_latitudeHasBeenSet = true;
    }

    if (value.HasMember("BrandName") && !value["BrandName"].IsNull())
    {
        if (!value["BrandName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.BrandName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brandName = string(value["BrandName"].GetString());
        m_brandNameHasBeenSet = true;
    }

    if (value.HasMember("AppCount") && !value["AppCount"].IsNull())
    {
        if (!value["AppCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.AppCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appCount = string(value["AppCount"].GetString());
        m_appCountHasBeenSet = true;
    }

    if (value.HasMember("ContactTelephone") && !value["ContactTelephone"].IsNull())
    {
        if (!value["ContactTelephone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.ContactTelephone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contactTelephone = string(value["ContactTelephone"].GetString());
        m_contactTelephoneHasBeenSet = true;
    }

    if (value.HasMember("MerchantName") && !value["MerchantName"].IsNull())
    {
        if (!value["MerchantName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.MerchantName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantName = string(value["MerchantName"].GetString());
        m_merchantNameHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("County") && !value["County"].IsNull())
    {
        if (!value["County"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.County` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_county = string(value["County"].GetString());
        m_countyHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("TerminalCount") && !value["TerminalCount"].IsNull())
    {
        if (!value["TerminalCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.TerminalCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_terminalCount = string(value["TerminalCount"].GetString());
        m_terminalCountHasBeenSet = true;
    }

    if (value.HasMember("PictureTwo") && !value["PictureTwo"].IsNull())
    {
        if (!value["PictureTwo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.PictureTwo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pictureTwo = string(value["PictureTwo"].GetString());
        m_pictureTwoHasBeenSet = true;
    }

    if (value.HasMember("LatitudeTwo") && !value["LatitudeTwo"].IsNull())
    {
        if (!value["LatitudeTwo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.LatitudeTwo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latitudeTwo = string(value["LatitudeTwo"].GetString());
        m_latitudeTwoHasBeenSet = true;
    }

    if (value.HasMember("AgentName") && !value["AgentName"].IsNull())
    {
        if (!value["AgentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.AgentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentName = string(value["AgentName"].GetString());
        m_agentNameHasBeenSet = true;
    }

    if (value.HasMember("PictureFour") && !value["PictureFour"].IsNull())
    {
        if (!value["PictureFour"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.PictureFour` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pictureFour = string(value["PictureFour"].GetString());
        m_pictureFourHasBeenSet = true;
    }

    if (value.HasMember("LongitudeTwo") && !value["LongitudeTwo"].IsNull())
    {
        if (!value["LongitudeTwo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.LongitudeTwo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_longitudeTwo = string(value["LongitudeTwo"].GetString());
        m_longitudeTwoHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("AgentNo") && !value["AgentNo"].IsNull())
    {
        if (!value["AgentNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.AgentNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentNo = string(value["AgentNo"].GetString());
        m_agentNoHasBeenSet = true;
    }

    if (value.HasMember("MerchantNo") && !value["MerchantNo"].IsNull())
    {
        if (!value["MerchantNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.MerchantNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantNo = string(value["MerchantNo"].GetString());
        m_merchantNoHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("Longitude") && !value["Longitude"].IsNull())
    {
        if (!value["Longitude"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.Longitude` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_longitude = string(value["Longitude"].GetString());
        m_longitudeHasBeenSet = true;
    }

    if (value.HasMember("ShopNo") && !value["ShopNo"].IsNull())
    {
        if (!value["ShopNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.ShopNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shopNo = string(value["ShopNo"].GetString());
        m_shopNoHasBeenSet = true;
    }

    if (value.HasMember("ShopFullName") && !value["ShopFullName"].IsNull())
    {
        if (!value["ShopFullName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.ShopFullName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shopFullName = string(value["ShopFullName"].GetString());
        m_shopFullNameHasBeenSet = true;
    }

    if (value.HasMember("Contact") && !value["Contact"].IsNull())
    {
        if (!value["Contact"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.Contact` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contact = string(value["Contact"].GetString());
        m_contactHasBeenSet = true;
    }

    if (value.HasMember("PictureThree") && !value["PictureThree"].IsNull())
    {
        if (!value["PictureThree"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.PictureThree` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pictureThree = string(value["PictureThree"].GetString());
        m_pictureThreeHasBeenSet = true;
    }

    if (value.HasMember("PictureOne") && !value["PictureOne"].IsNull())
    {
        if (!value["PictureOne"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.PictureOne` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pictureOne = string(value["PictureOne"].GetString());
        m_pictureOneHasBeenSet = true;
    }

    if (value.HasMember("Telephone") && !value["Telephone"].IsNull())
    {
        if (!value["Telephone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.Telephone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_telephone = string(value["Telephone"].GetString());
        m_telephoneHasBeenSet = true;
    }

    if (value.HasMember("OutShopId") && !value["OutShopId"].IsNull())
    {
        if (!value["OutShopId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.OutShopId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outShopId = string(value["OutShopId"].GetString());
        m_outShopIdHasBeenSet = true;
    }

    if (value.HasMember("CityId") && !value["CityId"].IsNull())
    {
        if (!value["CityId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ViewShopResult.CityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cityId = string(value["CityId"].GetString());
        m_cityIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ViewShopResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_shopNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shopName.c_str(), allocator).Move(), allocator);
    }

    if (m_latitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Latitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latitude.c_str(), allocator).Move(), allocator);
    }

    if (m_brandNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brandName.c_str(), allocator).Move(), allocator);
    }

    if (m_appCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appCount.c_str(), allocator).Move(), allocator);
    }

    if (m_contactTelephoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactTelephone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contactTelephone.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantName.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_countyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "County";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_county.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_terminalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerminalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_terminalCount.c_str(), allocator).Move(), allocator);
    }

    if (m_pictureTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PictureTwo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pictureTwo.c_str(), allocator).Move(), allocator);
    }

    if (m_latitudeTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatitudeTwo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latitudeTwo.c_str(), allocator).Move(), allocator);
    }

    if (m_agentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentName.c_str(), allocator).Move(), allocator);
    }

    if (m_pictureFourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PictureFour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pictureFour.c_str(), allocator).Move(), allocator);
    }

    if (m_longitudeTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongitudeTwo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_longitudeTwo.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_agentNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentNo.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantNo.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_longitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Longitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_longitude.c_str(), allocator).Move(), allocator);
    }

    if (m_shopNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shopNo.c_str(), allocator).Move(), allocator);
    }

    if (m_shopFullNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopFullName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shopFullName.c_str(), allocator).Move(), allocator);
    }

    if (m_contactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Contact";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contact.c_str(), allocator).Move(), allocator);
    }

    if (m_pictureThreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PictureThree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pictureThree.c_str(), allocator).Move(), allocator);
    }

    if (m_pictureOneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PictureOne";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pictureOne.c_str(), allocator).Move(), allocator);
    }

    if (m_telephoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Telephone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_telephone.c_str(), allocator).Move(), allocator);
    }

    if (m_outShopIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutShopId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outShopId.c_str(), allocator).Move(), allocator);
    }

    if (m_cityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cityId.c_str(), allocator).Move(), allocator);
    }

}


string ViewShopResult::GetCity() const
{
    return m_city;
}

void ViewShopResult::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool ViewShopResult::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string ViewShopResult::GetShopName() const
{
    return m_shopName;
}

void ViewShopResult::SetShopName(const string& _shopName)
{
    m_shopName = _shopName;
    m_shopNameHasBeenSet = true;
}

bool ViewShopResult::ShopNameHasBeenSet() const
{
    return m_shopNameHasBeenSet;
}

string ViewShopResult::GetLatitude() const
{
    return m_latitude;
}

void ViewShopResult::SetLatitude(const string& _latitude)
{
    m_latitude = _latitude;
    m_latitudeHasBeenSet = true;
}

bool ViewShopResult::LatitudeHasBeenSet() const
{
    return m_latitudeHasBeenSet;
}

string ViewShopResult::GetBrandName() const
{
    return m_brandName;
}

void ViewShopResult::SetBrandName(const string& _brandName)
{
    m_brandName = _brandName;
    m_brandNameHasBeenSet = true;
}

bool ViewShopResult::BrandNameHasBeenSet() const
{
    return m_brandNameHasBeenSet;
}

string ViewShopResult::GetAppCount() const
{
    return m_appCount;
}

void ViewShopResult::SetAppCount(const string& _appCount)
{
    m_appCount = _appCount;
    m_appCountHasBeenSet = true;
}

bool ViewShopResult::AppCountHasBeenSet() const
{
    return m_appCountHasBeenSet;
}

string ViewShopResult::GetContactTelephone() const
{
    return m_contactTelephone;
}

void ViewShopResult::SetContactTelephone(const string& _contactTelephone)
{
    m_contactTelephone = _contactTelephone;
    m_contactTelephoneHasBeenSet = true;
}

bool ViewShopResult::ContactTelephoneHasBeenSet() const
{
    return m_contactTelephoneHasBeenSet;
}

string ViewShopResult::GetMerchantName() const
{
    return m_merchantName;
}

void ViewShopResult::SetMerchantName(const string& _merchantName)
{
    m_merchantName = _merchantName;
    m_merchantNameHasBeenSet = true;
}

bool ViewShopResult::MerchantNameHasBeenSet() const
{
    return m_merchantNameHasBeenSet;
}

string ViewShopResult::GetProvince() const
{
    return m_province;
}

void ViewShopResult::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool ViewShopResult::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string ViewShopResult::GetCounty() const
{
    return m_county;
}

void ViewShopResult::SetCounty(const string& _county)
{
    m_county = _county;
    m_countyHasBeenSet = true;
}

bool ViewShopResult::CountyHasBeenSet() const
{
    return m_countyHasBeenSet;
}

string ViewShopResult::GetUpdateTime() const
{
    return m_updateTime;
}

void ViewShopResult::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ViewShopResult::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ViewShopResult::GetTerminalCount() const
{
    return m_terminalCount;
}

void ViewShopResult::SetTerminalCount(const string& _terminalCount)
{
    m_terminalCount = _terminalCount;
    m_terminalCountHasBeenSet = true;
}

bool ViewShopResult::TerminalCountHasBeenSet() const
{
    return m_terminalCountHasBeenSet;
}

string ViewShopResult::GetPictureTwo() const
{
    return m_pictureTwo;
}

void ViewShopResult::SetPictureTwo(const string& _pictureTwo)
{
    m_pictureTwo = _pictureTwo;
    m_pictureTwoHasBeenSet = true;
}

bool ViewShopResult::PictureTwoHasBeenSet() const
{
    return m_pictureTwoHasBeenSet;
}

string ViewShopResult::GetLatitudeTwo() const
{
    return m_latitudeTwo;
}

void ViewShopResult::SetLatitudeTwo(const string& _latitudeTwo)
{
    m_latitudeTwo = _latitudeTwo;
    m_latitudeTwoHasBeenSet = true;
}

bool ViewShopResult::LatitudeTwoHasBeenSet() const
{
    return m_latitudeTwoHasBeenSet;
}

string ViewShopResult::GetAgentName() const
{
    return m_agentName;
}

void ViewShopResult::SetAgentName(const string& _agentName)
{
    m_agentName = _agentName;
    m_agentNameHasBeenSet = true;
}

bool ViewShopResult::AgentNameHasBeenSet() const
{
    return m_agentNameHasBeenSet;
}

string ViewShopResult::GetPictureFour() const
{
    return m_pictureFour;
}

void ViewShopResult::SetPictureFour(const string& _pictureFour)
{
    m_pictureFour = _pictureFour;
    m_pictureFourHasBeenSet = true;
}

bool ViewShopResult::PictureFourHasBeenSet() const
{
    return m_pictureFourHasBeenSet;
}

string ViewShopResult::GetLongitudeTwo() const
{
    return m_longitudeTwo;
}

void ViewShopResult::SetLongitudeTwo(const string& _longitudeTwo)
{
    m_longitudeTwo = _longitudeTwo;
    m_longitudeTwoHasBeenSet = true;
}

bool ViewShopResult::LongitudeTwoHasBeenSet() const
{
    return m_longitudeTwoHasBeenSet;
}

string ViewShopResult::GetStatus() const
{
    return m_status;
}

void ViewShopResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ViewShopResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ViewShopResult::GetRemark() const
{
    return m_remark;
}

void ViewShopResult::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ViewShopResult::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string ViewShopResult::GetAgentNo() const
{
    return m_agentNo;
}

void ViewShopResult::SetAgentNo(const string& _agentNo)
{
    m_agentNo = _agentNo;
    m_agentNoHasBeenSet = true;
}

bool ViewShopResult::AgentNoHasBeenSet() const
{
    return m_agentNoHasBeenSet;
}

string ViewShopResult::GetMerchantNo() const
{
    return m_merchantNo;
}

void ViewShopResult::SetMerchantNo(const string& _merchantNo)
{
    m_merchantNo = _merchantNo;
    m_merchantNoHasBeenSet = true;
}

bool ViewShopResult::MerchantNoHasBeenSet() const
{
    return m_merchantNoHasBeenSet;
}

string ViewShopResult::GetAddTime() const
{
    return m_addTime;
}

void ViewShopResult::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool ViewShopResult::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

string ViewShopResult::GetAddress() const
{
    return m_address;
}

void ViewShopResult::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool ViewShopResult::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string ViewShopResult::GetLongitude() const
{
    return m_longitude;
}

void ViewShopResult::SetLongitude(const string& _longitude)
{
    m_longitude = _longitude;
    m_longitudeHasBeenSet = true;
}

bool ViewShopResult::LongitudeHasBeenSet() const
{
    return m_longitudeHasBeenSet;
}

string ViewShopResult::GetShopNo() const
{
    return m_shopNo;
}

void ViewShopResult::SetShopNo(const string& _shopNo)
{
    m_shopNo = _shopNo;
    m_shopNoHasBeenSet = true;
}

bool ViewShopResult::ShopNoHasBeenSet() const
{
    return m_shopNoHasBeenSet;
}

string ViewShopResult::GetShopFullName() const
{
    return m_shopFullName;
}

void ViewShopResult::SetShopFullName(const string& _shopFullName)
{
    m_shopFullName = _shopFullName;
    m_shopFullNameHasBeenSet = true;
}

bool ViewShopResult::ShopFullNameHasBeenSet() const
{
    return m_shopFullNameHasBeenSet;
}

string ViewShopResult::GetContact() const
{
    return m_contact;
}

void ViewShopResult::SetContact(const string& _contact)
{
    m_contact = _contact;
    m_contactHasBeenSet = true;
}

bool ViewShopResult::ContactHasBeenSet() const
{
    return m_contactHasBeenSet;
}

string ViewShopResult::GetPictureThree() const
{
    return m_pictureThree;
}

void ViewShopResult::SetPictureThree(const string& _pictureThree)
{
    m_pictureThree = _pictureThree;
    m_pictureThreeHasBeenSet = true;
}

bool ViewShopResult::PictureThreeHasBeenSet() const
{
    return m_pictureThreeHasBeenSet;
}

string ViewShopResult::GetPictureOne() const
{
    return m_pictureOne;
}

void ViewShopResult::SetPictureOne(const string& _pictureOne)
{
    m_pictureOne = _pictureOne;
    m_pictureOneHasBeenSet = true;
}

bool ViewShopResult::PictureOneHasBeenSet() const
{
    return m_pictureOneHasBeenSet;
}

string ViewShopResult::GetTelephone() const
{
    return m_telephone;
}

void ViewShopResult::SetTelephone(const string& _telephone)
{
    m_telephone = _telephone;
    m_telephoneHasBeenSet = true;
}

bool ViewShopResult::TelephoneHasBeenSet() const
{
    return m_telephoneHasBeenSet;
}

string ViewShopResult::GetOutShopId() const
{
    return m_outShopId;
}

void ViewShopResult::SetOutShopId(const string& _outShopId)
{
    m_outShopId = _outShopId;
    m_outShopIdHasBeenSet = true;
}

bool ViewShopResult::OutShopIdHasBeenSet() const
{
    return m_outShopIdHasBeenSet;
}

string ViewShopResult::GetCityId() const
{
    return m_cityId;
}

void ViewShopResult::SetCityId(const string& _cityId)
{
    m_cityId = _cityId;
    m_cityIdHasBeenSet = true;
}

bool ViewShopResult::CityIdHasBeenSet() const
{
    return m_cityIdHasBeenSet;
}

