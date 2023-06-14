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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_ADDSHOPREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_ADDSHOPREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * AddShop请求参数结构体
                */
                class AddShopRequest : public AbstractModel
                {
                public:
                    AddShopRequest();
                    ~AddShopRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取收单系统分配的开放ID
                     * @return OpenId 收单系统分配的开放ID
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置收单系统分配的开放ID
                     * @param _openId 收单系统分配的开放ID
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
                     * 获取收单系统分配的密钥
                     * @return OpenKey 收单系统分配的密钥
                     * 
                     */
                    std::string GetOpenKey() const;

                    /**
                     * 设置收单系统分配的密钥
                     * @param _openKey 收单系统分配的密钥
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
                     * 获取机构门店主键（系统有唯一性校验），建议使用门店表的主键ID，防止重复添加门店
                     * @return OutShopId 机构门店主键（系统有唯一性校验），建议使用门店表的主键ID，防止重复添加门店
                     * 
                     */
                    std::string GetOutShopId() const;

                    /**
                     * 设置机构门店主键（系统有唯一性校验），建议使用门店表的主键ID，防止重复添加门店
                     * @param _outShopId 机构门店主键（系统有唯一性校验），建议使用门店表的主键ID，防止重复添加门店
                     * 
                     */
                    void SetOutShopId(const std::string& _outShopId);

                    /**
                     * 判断参数 OutShopId 是否已赋值
                     * @return OutShopId 是否已赋值
                     * 
                     */
                    bool OutShopIdHasBeenSet() const;

                    /**
                     * 获取门店简称（例如：南山店）
                     * @return ShopName 门店简称（例如：南山店）
                     * 
                     */
                    std::string GetShopName() const;

                    /**
                     * 设置门店简称（例如：南山店）
                     * @param _shopName 门店简称（例如：南山店）
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
                     * 获取门店全称（例如：江山小厨（南山店））
                     * @return ShopFullName 门店全称（例如：江山小厨（南山店））
                     * 
                     */
                    std::string GetShopFullName() const;

                    /**
                     * 设置门店全称（例如：江山小厨（南山店））
                     * @param _shopFullName 门店全称（例如：江山小厨（南山店））
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
                     * 获取商户编号
                     * @return MerchantNo 商户编号
                     * 
                     */
                    std::string GetMerchantNo() const;

                    /**
                     * 设置商户编号
                     * @param _merchantNo 商户编号
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
                     * 获取门店电话
                     * @return Telephone 门店电话
                     * 
                     */
                    std::string GetTelephone() const;

                    /**
                     * 设置门店电话
                     * @param _telephone 门店电话
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
                     * 获取营业时间，多个以小写逗号分开(9:00-12:00,13:00-18:00)
                     * @return OpenHours 营业时间，多个以小写逗号分开(9:00-12:00,13:00-18:00)
                     * 
                     */
                    std::string GetOpenHours() const;

                    /**
                     * 设置营业时间，多个以小写逗号分开(9:00-12:00,13:00-18:00)
                     * @param _openHours 营业时间，多个以小写逗号分开(9:00-12:00,13:00-18:00)
                     * 
                     */
                    void SetOpenHours(const std::string& _openHours);

                    /**
                     * 判断参数 OpenHours 是否已赋值
                     * @return OpenHours 是否已赋值
                     * 
                     */
                    bool OpenHoursHasBeenSet() const;

                    /**
                     * 获取门店所在的城市编码
                     * @return CityId 门店所在的城市编码
                     * 
                     */
                    std::string GetCityId() const;

                    /**
                     * 设置门店所在的城市编码
                     * @param _cityId 门店所在的城市编码
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
                     * 获取门店详细地址，不含省市区县名称
                     * @return Address 门店详细地址，不含省市区县名称
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置门店详细地址，不含省市区县名称
                     * @param _address 门店详细地址，不含省市区县名称
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
                     * 获取整体门面（含招牌）图片【公共区】
                     * @return PictureOne 整体门面（含招牌）图片【公共区】
                     * 
                     */
                    std::string GetPictureOne() const;

                    /**
                     * 设置整体门面（含招牌）图片【公共区】
                     * @param _pictureOne 整体门面（含招牌）图片【公共区】
                     * 
                     */
                    void SetPictureOne(const std::string& _pictureOne);

                    /**
                     * 判断参数 PictureOne 是否已赋值
                     * @return PictureOne 是否已赋值
                     * 
                     */
                    bool PictureOneHasBeenSet() const;

                    /**
                     * 获取整体门面（含招牌）图片【公共区】
                     * @return PictureTwo 整体门面（含招牌）图片【公共区】
                     * 
                     */
                    std::string GetPictureTwo() const;

                    /**
                     * 设置整体门面（含招牌）图片【公共区】
                     * @param _pictureTwo 整体门面（含招牌）图片【公共区】
                     * 
                     */
                    void SetPictureTwo(const std::string& _pictureTwo);

                    /**
                     * 判断参数 PictureTwo 是否已赋值
                     * @return PictureTwo 是否已赋值
                     * 
                     */
                    bool PictureTwoHasBeenSet() const;

                    /**
                     * 获取店内环境图片【公共区】
                     * @return PictureThree 店内环境图片【公共区】
                     * 
                     */
                    std::string GetPictureThree() const;

                    /**
                     * 设置店内环境图片【公共区】
                     * @param _pictureThree 店内环境图片【公共区】
                     * 
                     */
                    void SetPictureThree(const std::string& _pictureThree);

                    /**
                     * 判断参数 PictureThree 是否已赋值
                     * @return PictureThree 是否已赋值
                     * 
                     */
                    bool PictureThreeHasBeenSet() const;

                    /**
                     * 获取负责人手机号码
                     * @return FinancialTelephone 负责人手机号码
                     * 
                     */
                    std::string GetFinancialTelephone() const;

                    /**
                     * 设置负责人手机号码
                     * @param _financialTelephone 负责人手机号码
                     * 
                     */
                    void SetFinancialTelephone(const std::string& _financialTelephone);

                    /**
                     * 判断参数 FinancialTelephone 是否已赋值
                     * @return FinancialTelephone 是否已赋值
                     * 
                     */
                    bool FinancialTelephoneHasBeenSet() const;

                    /**
                     * 获取门店负责人
                     * @return Contact 门店负责人
                     * 
                     */
                    std::string GetContact() const;

                    /**
                     * 设置门店负责人
                     * @param _contact 门店负责人
                     * 
                     */
                    void SetContact(const std::string& _contact);

                    /**
                     * 判断参数 Contact 是否已赋值
                     * @return Contact 是否已赋值
                     * 
                     */
                    bool ContactHasBeenSet() const;

                    /**
                     * 获取百度地图纬度
                     * @return Latitude 百度地图纬度
                     * 
                     */
                    std::string GetLatitude() const;

                    /**
                     * 设置百度地图纬度
                     * @param _latitude 百度地图纬度
                     * 
                     */
                    void SetLatitude(const std::string& _latitude);

                    /**
                     * 判断参数 Latitude 是否已赋值
                     * @return Latitude 是否已赋值
                     * 
                     */
                    bool LatitudeHasBeenSet() const;

                    /**
                     * 获取高德地图纬度
                     * @return LatitudeTwo 高德地图纬度
                     * 
                     */
                    std::string GetLatitudeTwo() const;

                    /**
                     * 设置高德地图纬度
                     * @param _latitudeTwo 高德地图纬度
                     * 
                     */
                    void SetLatitudeTwo(const std::string& _latitudeTwo);

                    /**
                     * 判断参数 LatitudeTwo 是否已赋值
                     * @return LatitudeTwo 是否已赋值
                     * 
                     */
                    bool LatitudeTwoHasBeenSet() const;

                    /**
                     * 获取百度地图经度
                     * @return Longitude 百度地图经度
                     * 
                     */
                    std::string GetLongitude() const;

                    /**
                     * 设置百度地图经度
                     * @param _longitude 百度地图经度
                     * 
                     */
                    void SetLongitude(const std::string& _longitude);

                    /**
                     * 判断参数 Longitude 是否已赋值
                     * @return Longitude 是否已赋值
                     * 
                     */
                    bool LongitudeHasBeenSet() const;

                    /**
                     * 获取高德地图经度
                     * @return LongitudeTwo 高德地图经度
                     * 
                     */
                    std::string GetLongitudeTwo() const;

                    /**
                     * 设置高德地图经度
                     * @param _longitudeTwo 高德地图经度
                     * 
                     */
                    void SetLongitudeTwo(const std::string& _longitudeTwo);

                    /**
                     * 判断参数 LongitudeTwo 是否已赋值
                     * @return LongitudeTwo 是否已赋值
                     * 
                     */
                    bool LongitudeTwoHasBeenSet() const;

                    /**
                     * 获取其他照片【公共区】
                     * @return OtherPicture 其他照片【公共区】
                     * 
                     */
                    std::string GetOtherPicture() const;

                    /**
                     * 设置其他照片【公共区】
                     * @param _otherPicture 其他照片【公共区】
                     * 
                     */
                    void SetOtherPicture(const std::string& _otherPicture);

                    /**
                     * 判断参数 OtherPicture 是否已赋值
                     * @return OtherPicture 是否已赋值
                     * 
                     */
                    bool OtherPictureHasBeenSet() const;

                    /**
                     * 获取沙箱环境填sandbox，正式环境不填
                     * @return Profile 沙箱环境填sandbox，正式环境不填
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置沙箱环境填sandbox，正式环境不填
                     * @param _profile 沙箱环境填sandbox，正式环境不填
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                private:

                    /**
                     * 收单系统分配的开放ID
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 收单系统分配的密钥
                     */
                    std::string m_openKey;
                    bool m_openKeyHasBeenSet;

                    /**
                     * 机构门店主键（系统有唯一性校验），建议使用门店表的主键ID，防止重复添加门店
                     */
                    std::string m_outShopId;
                    bool m_outShopIdHasBeenSet;

                    /**
                     * 门店简称（例如：南山店）
                     */
                    std::string m_shopName;
                    bool m_shopNameHasBeenSet;

                    /**
                     * 门店全称（例如：江山小厨（南山店））
                     */
                    std::string m_shopFullName;
                    bool m_shopFullNameHasBeenSet;

                    /**
                     * 商户编号
                     */
                    std::string m_merchantNo;
                    bool m_merchantNoHasBeenSet;

                    /**
                     * 门店电话
                     */
                    std::string m_telephone;
                    bool m_telephoneHasBeenSet;

                    /**
                     * 营业时间，多个以小写逗号分开(9:00-12:00,13:00-18:00)
                     */
                    std::string m_openHours;
                    bool m_openHoursHasBeenSet;

                    /**
                     * 门店所在的城市编码
                     */
                    std::string m_cityId;
                    bool m_cityIdHasBeenSet;

                    /**
                     * 门店详细地址，不含省市区县名称
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 整体门面（含招牌）图片【公共区】
                     */
                    std::string m_pictureOne;
                    bool m_pictureOneHasBeenSet;

                    /**
                     * 整体门面（含招牌）图片【公共区】
                     */
                    std::string m_pictureTwo;
                    bool m_pictureTwoHasBeenSet;

                    /**
                     * 店内环境图片【公共区】
                     */
                    std::string m_pictureThree;
                    bool m_pictureThreeHasBeenSet;

                    /**
                     * 负责人手机号码
                     */
                    std::string m_financialTelephone;
                    bool m_financialTelephoneHasBeenSet;

                    /**
                     * 门店负责人
                     */
                    std::string m_contact;
                    bool m_contactHasBeenSet;

                    /**
                     * 百度地图纬度
                     */
                    std::string m_latitude;
                    bool m_latitudeHasBeenSet;

                    /**
                     * 高德地图纬度
                     */
                    std::string m_latitudeTwo;
                    bool m_latitudeTwoHasBeenSet;

                    /**
                     * 百度地图经度
                     */
                    std::string m_longitude;
                    bool m_longitudeHasBeenSet;

                    /**
                     * 高德地图经度
                     */
                    std::string m_longitudeTwo;
                    bool m_longitudeTwoHasBeenSet;

                    /**
                     * 其他照片【公共区】
                     */
                    std::string m_otherPicture;
                    bool m_otherPictureHasBeenSet;

                    /**
                     * 沙箱环境填sandbox，正式环境不填
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_ADDSHOPREQUEST_H_
