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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_VIEWSHOPRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_VIEWSHOPRESULT_H_

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
                * 门店明细响应对象
                */
                class ViewShopResult : public AbstractModel
                {
                public:
                    ViewShopResult();
                    ~ViewShopResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取百度地图纬度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Latitude 百度地图纬度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatitude() const;

                    /**
                     * 设置百度地图纬度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latitude 百度地图纬度
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取开通应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppCount 开通应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppCount() const;

                    /**
                     * 设置开通应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appCount 开通应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppCount(const std::string& _appCount);

                    /**
                     * 判断参数 AppCount 是否已赋值
                     * @return AppCount 是否已赋值
                     * 
                     */
                    bool AppCountHasBeenSet() const;

                    /**
                     * 获取负责人手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContactTelephone 负责人手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContactTelephone() const;

                    /**
                     * 设置负责人手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contactTelephone 负责人手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContactTelephone(const std::string& _contactTelephone);

                    /**
                     * 判断参数 ContactTelephone 是否已赋值
                     * @return ContactTelephone 是否已赋值
                     * 
                     */
                    bool ContactTelephoneHasBeenSet() const;

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
                     * 获取更新时间（yyyy-mm-dd hh:ii:ss）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间（yyyy-mm-dd hh:ii:ss）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间（yyyy-mm-dd hh:ii:ss）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间（yyyy-mm-dd hh:ii:ss）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取终端数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TerminalCount 终端数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTerminalCount() const;

                    /**
                     * 设置终端数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _terminalCount 终端数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTerminalCount(const std::string& _terminalCount);

                    /**
                     * 判断参数 TerminalCount 是否已赋值
                     * @return TerminalCount 是否已赋值
                     * 
                     */
                    bool TerminalCountHasBeenSet() const;

                    /**
                     * 获取收银台图片【公共区】
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PictureTwo 收银台图片【公共区】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPictureTwo() const;

                    /**
                     * 设置收银台图片【公共区】
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pictureTwo 收银台图片【公共区】
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取高德地图纬度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatitudeTwo 高德地图纬度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatitudeTwo() const;

                    /**
                     * 设置高德地图纬度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latitudeTwo 高德地图纬度
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取机构名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentName 机构名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentName() const;

                    /**
                     * 设置机构名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentName 机构名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentName(const std::string& _agentName);

                    /**
                     * 判断参数 AgentName 是否已赋值
                     * @return AgentName 是否已赋值
                     * 
                     */
                    bool AgentNameHasBeenSet() const;

                    /**
                     * 获取其他照片【公共区】
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PictureFour 其他照片【公共区】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPictureFour() const;

                    /**
                     * 设置其他照片【公共区】
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pictureFour 其他照片【公共区】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPictureFour(const std::string& _pictureFour);

                    /**
                     * 判断参数 PictureFour 是否已赋值
                     * @return PictureFour 是否已赋值
                     * 
                     */
                    bool PictureFourHasBeenSet() const;

                    /**
                     * 获取高德地图经度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LongitudeTwo 高德地图经度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLongitudeTwo() const;

                    /**
                     * 设置高德地图经度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _longitudeTwo 高德地图经度
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取门店状态（0未审核，1已审核，2审核未通过，3待审核，4已删除，5初审通过）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 门店状态（0未审核，1已审核，2审核未通过，3待审核，4已删除，5初审通过）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置门店状态（0未审核，1已审核，2审核未通过，3待审核，4已删除，5初审通过）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 门店状态（0未审核，1已审核，2审核未通过，3待审核，4已删除，5初审通过）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取审核备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 审核备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置审核备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 审核备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取机构编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentNo 机构编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentNo() const;

                    /**
                     * 设置机构编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentNo 机构编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentNo(const std::string& _agentNo);

                    /**
                     * 判断参数 AgentNo 是否已赋值
                     * @return AgentNo 是否已赋值
                     * 
                     */
                    bool AgentNoHasBeenSet() const;

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
                     * 获取添加时间（yyyy-mm-dd hh:ii:ss）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddTime 添加时间（yyyy-mm-dd hh:ii:ss）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置添加时间（yyyy-mm-dd hh:ii:ss）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _addTime 添加时间（yyyy-mm-dd hh:ii:ss）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

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
                     * 获取百度地图经度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Longitude 百度地图经度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLongitude() const;

                    /**
                     * 设置百度地图经度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _longitude 百度地图经度
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取门店负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Contact 门店负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContact() const;

                    /**
                     * 设置门店负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contact 门店负责人
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取店内环境图片【公共区】
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PictureThree 店内环境图片【公共区】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPictureThree() const;

                    /**
                     * 设置店内环境图片【公共区】
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pictureThree 店内环境图片【公共区】
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取整体门面（含招牌）图片【公共区】
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PictureOne 整体门面（含招牌）图片【公共区】
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPictureOne() const;

                    /**
                     * 设置整体门面（含招牌）图片【公共区】
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pictureOne 整体门面（含招牌）图片【公共区】
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取机构门店主键
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutShopId 机构门店主键
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutShopId() const;

                    /**
                     * 设置机构门店主键
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outShopId 机构门店主键
注意：此字段可能返回 null，表示取不到有效值。
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

                private:

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
                     * 百度地图纬度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latitude;
                    bool m_latitudeHasBeenSet;

                    /**
                     * 品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_brandName;
                    bool m_brandNameHasBeenSet;

                    /**
                     * 开通应用数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appCount;
                    bool m_appCountHasBeenSet;

                    /**
                     * 负责人手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contactTelephone;
                    bool m_contactTelephoneHasBeenSet;

                    /**
                     * 商户名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_merchantName;
                    bool m_merchantNameHasBeenSet;

                    /**
                     * 省份
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 县/区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_county;
                    bool m_countyHasBeenSet;

                    /**
                     * 更新时间（yyyy-mm-dd hh:ii:ss）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 终端数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_terminalCount;
                    bool m_terminalCountHasBeenSet;

                    /**
                     * 收银台图片【公共区】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pictureTwo;
                    bool m_pictureTwoHasBeenSet;

                    /**
                     * 高德地图纬度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latitudeTwo;
                    bool m_latitudeTwoHasBeenSet;

                    /**
                     * 机构名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                    /**
                     * 其他照片【公共区】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pictureFour;
                    bool m_pictureFourHasBeenSet;

                    /**
                     * 高德地图经度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_longitudeTwo;
                    bool m_longitudeTwoHasBeenSet;

                    /**
                     * 门店状态（0未审核，1已审核，2审核未通过，3待审核，4已删除，5初审通过）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 审核备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 机构编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentNo;
                    bool m_agentNoHasBeenSet;

                    /**
                     * 商户编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_merchantNo;
                    bool m_merchantNoHasBeenSet;

                    /**
                     * 添加时间（yyyy-mm-dd hh:ii:ss）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 详细地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 百度地图经度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_longitude;
                    bool m_longitudeHasBeenSet;

                    /**
                     * 门店编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shopNo;
                    bool m_shopNoHasBeenSet;

                    /**
                     * 门店全称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shopFullName;
                    bool m_shopFullNameHasBeenSet;

                    /**
                     * 门店负责人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contact;
                    bool m_contactHasBeenSet;

                    /**
                     * 店内环境图片【公共区】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pictureThree;
                    bool m_pictureThreeHasBeenSet;

                    /**
                     * 整体门面（含招牌）图片【公共区】
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pictureOne;
                    bool m_pictureOneHasBeenSet;

                    /**
                     * 门店电话
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_telephone;
                    bool m_telephoneHasBeenSet;

                    /**
                     * 机构门店主键
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outShopId;
                    bool m_outShopIdHasBeenSet;

                    /**
                     * 城市编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cityId;
                    bool m_cityIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_VIEWSHOPRESULT_H_
