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

#ifndef TENCENTCLOUD_SVP_V20240125_MODEL_SAVINGPLANDEDUCTDETAIL_H_
#define TENCENTCLOUD_SVP_V20240125_MODEL_SAVINGPLANDEDUCTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Svp
    {
        namespace V20240125
        {
            namespace Model
            {
                /**
                * 节省计划抵扣明细
                */
                class SavingPlanDeductDetail : public AbstractModel
                {
                public:
                    SavingPlanDeductDetail();
                    ~SavingPlanDeductDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUin 账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUin 账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUinName 账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUinName() const;

                    /**
                     * 设置账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUinName 账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUinName(const std::string& _ownerUinName);

                    /**
                     * 判断参数 OwnerUinName 是否已赋值
                     * @return OwnerUinName 是否已赋值
                     * 
                     */
                    bool OwnerUinNameHasBeenSet() const;

                    /**
                     * 获取抵扣账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayerUin 抵扣账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置抵扣账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payerUin 抵扣账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayerUin(const std::string& _payerUin);

                    /**
                     * 判断参数 PayerUin 是否已赋值
                     * @return PayerUin 是否已赋值
                     * 
                     */
                    bool PayerUinHasBeenSet() const;

                    /**
                     * 获取抵扣账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayerUinName 抵扣账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayerUinName() const;

                    /**
                     * 设置抵扣账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payerUinName 抵扣账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayerUinName(const std::string& _payerUinName);

                    /**
                     * 判断参数 PayerUinName 是否已赋值
                     * @return PayerUinName 是否已赋值
                     * 
                     */
                    bool PayerUinNameHasBeenSet() const;

                    /**
                     * 获取节省计划资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpId 节省计划资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpId() const;

                    /**
                     * 设置节省计划资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _spId 节省计划资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpId(const std::string& _spId);

                    /**
                     * 判断参数 SpId 是否已赋值
                     * @return SpId 是否已赋值
                     * 
                     */
                    bool SpIdHasBeenSet() const;

                    /**
                     * 获取产品编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductCode 产品编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置产品编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productCode 产品编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * 
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductName 产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productName 产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取子产品编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubProductCode 子产品编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置子产品编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subProductCode 子产品编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     * 
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取子产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubProductName 子产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubProductName() const;

                    /**
                     * 设置子产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subProductName 子产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubProductName(const std::string& _subProductName);

                    /**
                     * 判断参数 SubProductName 是否已赋值
                     * @return SubProductName 是否已赋值
                     * 
                     */
                    bool SubProductNameHasBeenSet() const;

                    /**
                     * 获取交易ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutTradeNo 交易ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutTradeNo() const;

                    /**
                     * 设置交易ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outTradeNo 交易ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutTradeNo(const std::string& _outTradeNo);

                    /**
                     * 判断参数 OutTradeNo 是否已赋值
                     * @return OutTradeNo 是否已赋值
                     * 
                     */
                    bool OutTradeNoHasBeenSet() const;

                    /**
                     * 获取地域id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionId 地域id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionId 地域id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取地域名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionName 地域名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionName 地域名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取地区id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneId 地区id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置地区id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneId 地区id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取地区名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneName 地区名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置地区名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneName 地区名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取开始使用时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpStartTime 开始使用时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpStartTime() const;

                    /**
                     * 设置开始使用时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _spStartTime 开始使用时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpStartTime(const std::string& _spStartTime);

                    /**
                     * 判断参数 SpStartTime 是否已赋值
                     * @return SpStartTime 是否已赋值
                     * 
                     */
                    bool SpStartTimeHasBeenSet() const;

                    /**
                     * 获取结束使用时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpEndTime 结束使用时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpEndTime() const;

                    /**
                     * 设置结束使用时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _spEndTime 结束使用时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpEndTime(const std::string& _spEndTime);

                    /**
                     * 判断参数 SpEndTime 是否已赋值
                     * @return SpEndTime 是否已赋值
                     * 
                     */
                    bool SpEndTimeHasBeenSet() const;

                    /**
                     * 获取折扣时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeductTime 折扣时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeductTime() const;

                    /**
                     * 设置折扣时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deductTime 折扣时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeductTime(const std::string& _deductTime);

                    /**
                     * 判断参数 DeductTime 是否已赋值
                     * @return DeductTime 是否已赋值
                     * 
                     */
                    bool DeductTimeHasBeenSet() const;

                    /**
                     * 获取抵扣金额，单位分
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeductAmount 抵扣金额，单位分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeductAmount() const;

                    /**
                     * 设置抵扣金额，单位分
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deductAmount 抵扣金额，单位分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeductAmount(const std::string& _deductAmount);

                    /**
                     * 判断参数 DeductAmount 是否已赋值
                     * @return DeductAmount 是否已赋值
                     * 
                     */
                    bool DeductAmountHasBeenSet() const;

                    /**
                     * 获取抵扣折扣率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeductDiscount 抵扣折扣率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeductDiscount() const;

                    /**
                     * 设置抵扣折扣率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deductDiscount 抵扣折扣率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeductDiscount(const std::string& _deductDiscount);

                    /**
                     * 判断参数 DeductDiscount 是否已赋值
                     * @return DeductDiscount 是否已赋值
                     * 
                     */
                    bool DeductDiscountHasBeenSet() const;

                    /**
                     * 获取抵扣比率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeductRate 抵扣比率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeductRate() const;

                    /**
                     * 设置抵扣比率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deductRate 抵扣比率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeductRate(const std::string& _deductRate);

                    /**
                     * 判断参数 DeductRate 是否已赋值
                     * @return DeductRate 是否已赋值
                     * 
                     */
                    bool DeductRateHasBeenSet() const;

                private:

                    /**
                     * 账号id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUinName;
                    bool m_ownerUinNameHasBeenSet;

                    /**
                     * 抵扣账号id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * 抵扣账号名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payerUinName;
                    bool m_payerUinNameHasBeenSet;

                    /**
                     * 节省计划资源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_spId;
                    bool m_spIdHasBeenSet;

                    /**
                     * 产品编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 子产品编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * 子产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subProductName;
                    bool m_subProductNameHasBeenSet;

                    /**
                     * 交易ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outTradeNo;
                    bool m_outTradeNoHasBeenSet;

                    /**
                     * 地域id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 地域名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 地区id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 地区名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 开始使用时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_spStartTime;
                    bool m_spStartTimeHasBeenSet;

                    /**
                     * 结束使用时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_spEndTime;
                    bool m_spEndTimeHasBeenSet;

                    /**
                     * 折扣时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deductTime;
                    bool m_deductTimeHasBeenSet;

                    /**
                     * 抵扣金额，单位分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deductAmount;
                    bool m_deductAmountHasBeenSet;

                    /**
                     * 抵扣折扣率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deductDiscount;
                    bool m_deductDiscountHasBeenSet;

                    /**
                     * 抵扣比率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deductRate;
                    bool m_deductRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SVP_V20240125_MODEL_SAVINGPLANDEDUCTDETAIL_H_
