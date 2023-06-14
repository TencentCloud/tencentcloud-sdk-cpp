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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCONTRACTRELATESHOPRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCONTRACTRELATESHOPRESULT_H_

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
                * 合同可关联门店响应对象
                */
                class QueryContractRelateShopResult : public AbstractModel
                {
                public:
                    QueryContractRelateShopResult();
                    ~QueryContractRelateShopResult() = default;
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
                     * 获取门店状态（0未审核，1已审核，2审核未通过，3待审核，4已删除，5初审通过）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShopStatus 门店状态（0未审核，1已审核，2审核未通过，3待审核，4已删除，5初审通过）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShopStatus() const;

                    /**
                     * 设置门店状态（0未审核，1已审核，2审核未通过，3待审核，4已删除，5初审通过）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shopStatus 门店状态（0未审核，1已审核，2审核未通过，3待审核，4已删除，5初审通过）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShopStatus(const std::string& _shopStatus);

                    /**
                     * 判断参数 ShopStatus 是否已赋值
                     * @return ShopStatus 是否已赋值
                     * 
                     */
                    bool ShopStatusHasBeenSet() const;

                    /**
                     * 获取若是支付宝合同，支付宝上线状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AliPayOnline 若是支付宝合同，支付宝上线状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAliPayOnline() const;

                    /**
                     * 设置若是支付宝合同，支付宝上线状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aliPayOnline 若是支付宝合同，支付宝上线状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAliPayOnline(const std::string& _aliPayOnline);

                    /**
                     * 判断参数 AliPayOnline 是否已赋值
                     * @return AliPayOnline 是否已赋值
                     * 
                     */
                    bool AliPayOnlineHasBeenSet() const;

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
                     * @return Country 县/区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置县/区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _country 县/区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取若是支付宝合同，支付宝审核状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AliPayStatus 若是支付宝合同，支付宝审核状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAliPayStatus() const;

                    /**
                     * 设置若是支付宝合同，支付宝审核状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aliPayStatus 若是支付宝合同，支付宝审核状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAliPayStatus(const std::string& _aliPayStatus);

                    /**
                     * 判断参数 AliPayStatus 是否已赋值
                     * @return AliPayStatus 是否已赋值
                     * 
                     */
                    bool AliPayStatusHasBeenSet() const;

                    /**
                     * 获取为空或者0表示未关联，大于0表示已关联
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsChecked 为空或者0表示未关联，大于0表示已关联
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsChecked() const;

                    /**
                     * 设置为空或者0表示未关联，大于0表示已关联
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isChecked 为空或者0表示未关联，大于0表示已关联
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsChecked(const std::string& _isChecked);

                    /**
                     * 判断参数 IsChecked 是否已赋值
                     * @return IsChecked 是否已赋值
                     * 
                     */
                    bool IsCheckedHasBeenSet() const;

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
                     * 获取若是支付宝合同，支付宝审核描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AliPayDesc 若是支付宝合同，支付宝审核描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAliPayDesc() const;

                    /**
                     * 设置若是支付宝合同，支付宝审核描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aliPayDesc 若是支付宝合同，支付宝审核描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAliPayDesc(const std::string& _aliPayDesc);

                    /**
                     * 判断参数 AliPayDesc 是否已赋值
                     * @return AliPayDesc 是否已赋值
                     * 
                     */
                    bool AliPayDescHasBeenSet() const;

                private:

                    /**
                     * 省份
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 城市编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cityId;
                    bool m_cityIdHasBeenSet;

                    /**
                     * 门店简称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shopName;
                    bool m_shopNameHasBeenSet;

                    /**
                     * 终端数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_terminalCount;
                    bool m_terminalCountHasBeenSet;

                    /**
                     * 城市
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 门店状态（0未审核，1已审核，2审核未通过，3待审核，4已删除，5初审通过）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shopStatus;
                    bool m_shopStatusHasBeenSet;

                    /**
                     * 若是支付宝合同，支付宝上线状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_aliPayOnline;
                    bool m_aliPayOnlineHasBeenSet;

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
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 若是支付宝合同，支付宝审核状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_aliPayStatus;
                    bool m_aliPayStatusHasBeenSet;

                    /**
                     * 为空或者0表示未关联，大于0表示已关联
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isChecked;
                    bool m_isCheckedHasBeenSet;

                    /**
                     * 详细地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 若是支付宝合同，支付宝审核描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_aliPayDesc;
                    bool m_aliPayDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCONTRACTRELATESHOPRESULT_H_
