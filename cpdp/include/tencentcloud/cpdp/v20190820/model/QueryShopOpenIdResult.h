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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYSHOPOPENIDRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYSHOPOPENIDRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 获取门店OpenId响应对象
                */
                class QueryShopOpenIdResult : public AbstractModel
                {
                public:
                    QueryShopOpenIdResult();
                    ~QueryShopOpenIdResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取省份
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Province 省份
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置省份
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _province 省份
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取城市
注意：此字段可能返回 null，表示取不到有效值。
                     * @return City 城市
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置城市
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _city 城市
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取门店简称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShopName 门店简称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShopName() const;

                    /**
                     * 设置门店简称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shopName 门店简称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShopName(const std::string& _shopName);

                    /**
                     * 判断参数 ShopName 是否已赋值
                     * @return ShopName 是否已赋值
                     * 
                     */
                    bool ShopNameHasBeenSet() const;

                    /**
                     * 获取商户编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MerchantNo 商户编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMerchantNo() const;

                    /**
                     * 设置商户编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _merchantNo 商户编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMerchantNo(const std::string& _merchantNo);

                    /**
                     * 判断参数 MerchantNo 是否已赋值
                     * @return MerchantNo 是否已赋值
                     * 
                     */
                    bool MerchantNoHasBeenSet() const;

                    /**
                     * 获取城市编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CityId 城市编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCityId() const;

                    /**
                     * 设置城市编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cityId 城市编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCityId(const std::string& _cityId);

                    /**
                     * 判断参数 CityId 是否已赋值
                     * @return CityId 是否已赋值
                     * 
                     */
                    bool CityIdHasBeenSet() const;

                    /**
                     * 获取open_id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OpenId open_id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置open_id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _openId open_id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取门店电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Telephone 门店电话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTelephone() const;

                    /**
                     * 设置门店电话
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _telephone 门店电话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTelephone(const std::string& _telephone);

                    /**
                     * 判断参数 Telephone 是否已赋值
                     * @return Telephone 是否已赋值
                     * 
                     */
                    bool TelephoneHasBeenSet() const;

                    /**
                     * 获取门店编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShopNo 门店编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShopNo() const;

                    /**
                     * 设置门店编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shopNo 门店编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShopNo(const std::string& _shopNo);

                    /**
                     * 判断参数 ShopNo 是否已赋值
                     * @return ShopNo 是否已赋值
                     * 
                     */
                    bool ShopNoHasBeenSet() const;

                    /**
                     * 获取县/区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return County 县/区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCounty() const;

                    /**
                     * 设置县/区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _county 县/区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCounty(const std::string& _county);

                    /**
                     * 判断参数 County 是否已赋值
                     * @return County 是否已赋值
                     * 
                     */
                    bool CountyHasBeenSet() const;

                    /**
                     * 获取门店全称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShopFullName 门店全称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShopFullName() const;

                    /**
                     * 设置门店全称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shopFullName 门店全称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShopFullName(const std::string& _shopFullName);

                    /**
                     * 判断参数 ShopFullName 是否已赋值
                     * @return ShopFullName 是否已赋值
                     * 
                     */
                    bool ShopFullNameHasBeenSet() const;

                    /**
                     * 获取品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BrandName 品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBrandName() const;

                    /**
                     * 设置品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _brandName 品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBrandName(const std::string& _brandName);

                    /**
                     * 判断参数 BrandName 是否已赋值
                     * @return BrandName 是否已赋值
                     * 
                     */
                    bool BrandNameHasBeenSet() const;

                    /**
                     * 获取详细地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Address 详细地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置详细地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _address 详细地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取open_key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OpenKey open_key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOpenKey() const;

                    /**
                     * 设置open_key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _openKey open_key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOpenKey(const std::string& _openKey);

                    /**
                     * 判断参数 OpenKey 是否已赋值
                     * @return OpenKey 是否已赋值
                     * 
                     */
                    bool OpenKeyHasBeenSet() const;

                    /**
                     * 获取商户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MerchantName 商户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMerchantName() const;

                    /**
                     * 设置商户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _merchantName 商户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMerchantName(const std::string& _merchantName);

                    /**
                     * 判断参数 MerchantName 是否已赋值
                     * @return MerchantName 是否已赋值
                     * 
                     */
                    bool MerchantNameHasBeenSet() const;

                private:

                    /**
                     * 省份
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 城市
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 门店简称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shopName;
                    bool m_shopNameHasBeenSet;

                    /**
                     * 商户编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_merchantNo;
                    bool m_merchantNoHasBeenSet;

                    /**
                     * 城市编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cityId;
                    bool m_cityIdHasBeenSet;

                    /**
                     * open_id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 门店电话
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_telephone;
                    bool m_telephoneHasBeenSet;

                    /**
                     * 门店编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shopNo;
                    bool m_shopNoHasBeenSet;

                    /**
                     * 县/区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_county;
                    bool m_countyHasBeenSet;

                    /**
                     * 门店全称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shopFullName;
                    bool m_shopFullNameHasBeenSet;

                    /**
                     * 品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_brandName;
                    bool m_brandNameHasBeenSet;

                    /**
                     * 详细地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * open_key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_openKey;
                    bool m_openKeyHasBeenSet;

                    /**
                     * 商户名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_merchantName;
                    bool m_merchantNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYSHOPOPENIDRESULT_H_
