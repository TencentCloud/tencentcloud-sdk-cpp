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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDOSAGEDETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDOSAGEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/JsonObject.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 计量标准接入类产品支持API接口获取用量明细返回数据结构
                */
                class DescribeDosageDetail : public AbstractModel
                {
                public:
                    DescribeDosageDetail();
                    ~DescribeDosageDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Date 日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _date 日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取账号 ID 是用户在腾讯云的唯一账号标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 账号 ID 是用户在腾讯云的唯一账号标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置账号 ID 是用户在腾讯云的唯一账号标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin 账号 ID 是用户在腾讯云的唯一账号标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取用量统计类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DosageType 用量统计类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDosageType() const;

                    /**
                     * 设置用量统计类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dosageType 用量统计类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDosageType(const std::string& _dosageType);

                    /**
                     * 判断参数 DosageType 是否已赋值
                     * @return DosageType 是否已赋值
                     * 
                     */
                    bool DosageTypeHasBeenSet() const;

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
                     * 获取组件类型编码

注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingItemCode 组件类型编码

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBillingItemCode() const;

                    /**
                     * 设置组件类型编码

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billingItemCode 组件类型编码

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBillingItemCode(const std::string& _billingItemCode);

                    /**
                     * 判断参数 BillingItemCode 是否已赋值
                     * @return BillingItemCode 是否已赋值
                     * 
                     */
                    bool BillingItemCodeHasBeenSet() const;

                    /**
                     * 获取组件编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubBillingItemCode 组件编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubBillingItemCode() const;

                    /**
                     * 设置组件编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subBillingItemCode 组件编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubBillingItemCode(const std::string& _subBillingItemCode);

                    /**
                     * 判断参数 SubBillingItemCode 是否已赋值
                     * @return SubBillingItemCode 是否已赋值
                     * 
                     */
                    bool SubBillingItemCodeHasBeenSet() const;

                    /**
                     * 获取产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductCodeName 产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductCodeName() const;

                    /**
                     * 设置产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productCodeName 产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductCodeName(const std::string& _productCodeName);

                    /**
                     * 判断参数 ProductCodeName 是否已赋值
                     * @return ProductCodeName 是否已赋值
                     * 
                     */
                    bool ProductCodeNameHasBeenSet() const;

                    /**
                     * 获取子产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubProductCodeName 子产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubProductCodeName() const;

                    /**
                     * 设置子产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subProductCodeName 子产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubProductCodeName(const std::string& _subProductCodeName);

                    /**
                     * 判断参数 SubProductCodeName 是否已赋值
                     * @return SubProductCodeName 是否已赋值
                     * 
                     */
                    bool SubProductCodeNameHasBeenSet() const;

                    /**
                     * 获取组件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingItemCodeName 组件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBillingItemCodeName() const;

                    /**
                     * 设置组件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billingItemCodeName 组件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBillingItemCodeName(const std::string& _billingItemCodeName);

                    /**
                     * 判断参数 BillingItemCodeName 是否已赋值
                     * @return BillingItemCodeName 是否已赋值
                     * 
                     */
                    bool BillingItemCodeNameHasBeenSet() const;

                    /**
                     * 获取组件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubBillingItemCodeName 组件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubBillingItemCodeName() const;

                    /**
                     * 设置组件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subBillingItemCodeName 组件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubBillingItemCodeName(const std::string& _subBillingItemCodeName);

                    /**
                     * 判断参数 SubBillingItemCodeName 是否已赋值
                     * @return SubBillingItemCodeName 是否已赋值
                     * 
                     */
                    bool SubBillingItemCodeNameHasBeenSet() const;

                    /**
                     * 获取用量单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DosageUnit 用量单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDosageUnit() const;

                    /**
                     * 设置用量单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dosageUnit 用量单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDosageUnit(const std::string& _dosageUnit);

                    /**
                     * 判断参数 DosageUnit 是否已赋值
                     * @return DosageUnit 是否已赋值
                     * 
                     */
                    bool DosageUnitHasBeenSet() const;

                    /**
                     * 获取用量起始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DosageBeginTime 用量起始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDosageBeginTime() const;

                    /**
                     * 设置用量起始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dosageBeginTime 用量起始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDosageBeginTime(const std::string& _dosageBeginTime);

                    /**
                     * 判断参数 DosageBeginTime 是否已赋值
                     * @return DosageBeginTime 是否已赋值
                     * 
                     */
                    bool DosageBeginTimeHasBeenSet() const;

                    /**
                     * 获取用量截止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DosageEndTime 用量截止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDosageEndTime() const;

                    /**
                     * 设置用量截止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dosageEndTime 用量截止时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDosageEndTime(const std::string& _dosageEndTime);

                    /**
                     * 判断参数 DosageEndTime 是否已赋值
                     * @return DosageEndTime 是否已赋值
                     * 
                     */
                    bool DosageEndTimeHasBeenSet() const;

                    /**
                     * 获取标准用量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DosageValue 标准用量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDosageValue() const;

                    /**
                     * 设置标准用量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dosageValue 标准用量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDosageValue(const double& _dosageValue);

                    /**
                     * 判断参数 DosageValue 是否已赋值
                     * @return DosageValue 是否已赋值
                     * 
                     */
                    bool DosageValueHasBeenSet() const;

                    /**
                     * 获取抵扣用量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeductValue 抵扣用量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDeductValue() const;

                    /**
                     * 设置抵扣用量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deductValue 抵扣用量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeductValue(const double& _deductValue);

                    /**
                     * 判断参数 DeductValue 是否已赋值
                     * @return DeductValue 是否已赋值
                     * 
                     */
                    bool DeductValueHasBeenSet() const;

                    /**
                     * 获取抵扣余量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemainValue 抵扣余量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRemainValue() const;

                    /**
                     * 设置抵扣余量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remainValue 抵扣余量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemainValue(const double& _remainValue);

                    /**
                     * 判断参数 RemainValue 是否已赋值
                     * @return RemainValue 是否已赋值
                     * 
                     */
                    bool RemainValueHasBeenSet() const;

                    /**
                     * 获取sdkAppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SdkAppId sdkAppId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 设置sdkAppId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sdkAppId sdkAppId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSdkAppId(const std::string& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取其他信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttrStr 其他信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<JsonObject> GetAttrStr() const;

                    /**
                     * 设置其他信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attrStr 其他信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttrStr(const std::vector<JsonObject>& _attrStr);

                    /**
                     * 判断参数 AttrStr 是否已赋值
                     * @return AttrStr 是否已赋值
                     * 
                     */
                    bool AttrStrHasBeenSet() const;

                    /**
                     * 获取用量模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SheetName 用量模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSheetName() const;

                    /**
                     * 设置用量模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sheetName 用量模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSheetName(const std::vector<std::string>& _sheetName);

                    /**
                     * 判断参数 SheetName 是否已赋值
                     * @return SheetName 是否已赋值
                     * 
                     */
                    bool SheetNameHasBeenSet() const;

                private:

                    /**
                     * 日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 账号 ID 是用户在腾讯云的唯一账号标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 用量统计类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dosageType;
                    bool m_dosageTypeHasBeenSet;

                    /**
                     * 产品编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 子产品编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * 组件类型编码

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_billingItemCode;
                    bool m_billingItemCodeHasBeenSet;

                    /**
                     * 组件编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subBillingItemCode;
                    bool m_subBillingItemCodeHasBeenSet;

                    /**
                     * 产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productCodeName;
                    bool m_productCodeNameHasBeenSet;

                    /**
                     * 子产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subProductCodeName;
                    bool m_subProductCodeNameHasBeenSet;

                    /**
                     * 组件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_billingItemCodeName;
                    bool m_billingItemCodeNameHasBeenSet;

                    /**
                     * 组件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subBillingItemCodeName;
                    bool m_subBillingItemCodeNameHasBeenSet;

                    /**
                     * 用量单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dosageUnit;
                    bool m_dosageUnitHasBeenSet;

                    /**
                     * 用量起始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dosageBeginTime;
                    bool m_dosageBeginTimeHasBeenSet;

                    /**
                     * 用量截止时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dosageEndTime;
                    bool m_dosageEndTimeHasBeenSet;

                    /**
                     * 标准用量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_dosageValue;
                    bool m_dosageValueHasBeenSet;

                    /**
                     * 抵扣用量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_deductValue;
                    bool m_deductValueHasBeenSet;

                    /**
                     * 抵扣余量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_remainValue;
                    bool m_remainValueHasBeenSet;

                    /**
                     * sdkAppId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 其他信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<JsonObject> m_attrStr;
                    bool m_attrStrHasBeenSet;

                    /**
                     * 用量模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_sheetName;
                    bool m_sheetNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDOSAGEDETAIL_H_
