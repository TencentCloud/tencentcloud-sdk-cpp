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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_DRUG_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_DRUG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aca/v20210323/model/DurgPropertyInfo.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 药品信息
                */
                class Drug : public AbstractModel
                {
                public:
                    Drug();
                    ~Drug() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取医院药品id
                     * @return DrugOrgId 医院药品id
                     * 
                     */
                    std::string GetDrugOrgId() const;

                    /**
                     * 设置医院药品id
                     * @param _drugOrgId 医院药品id
                     * 
                     */
                    void SetDrugOrgId(const std::string& _drugOrgId);

                    /**
                     * 判断参数 DrugOrgId 是否已赋值
                     * @return DrugOrgId 是否已赋值
                     * 
                     */
                    bool DrugOrgIdHasBeenSet() const;

                    /**
                     * 获取医院药品通用名
                     * @return DrugName 医院药品通用名
                     * 
                     */
                    std::string GetDrugName() const;

                    /**
                     * 设置医院药品通用名
                     * @param _drugName 医院药品通用名
                     * 
                     */
                    void SetDrugName(const std::string& _drugName);

                    /**
                     * 判断参数 DrugName 是否已赋值
                     * @return DrugName 是否已赋值
                     * 
                     */
                    bool DrugNameHasBeenSet() const;

                    /**
                     * 获取医院药品商品名
                     * @return DrugCommodityName 医院药品商品名
                     * 
                     */
                    std::string GetDrugCommodityName() const;

                    /**
                     * 设置医院药品商品名
                     * @param _drugCommodityName 医院药品商品名
                     * 
                     */
                    void SetDrugCommodityName(const std::string& _drugCommodityName);

                    /**
                     * 判断参数 DrugCommodityName 是否已赋值
                     * @return DrugCommodityName 是否已赋值
                     * 
                     */
                    bool DrugCommodityNameHasBeenSet() const;

                    /**
                     * 获取医院药品规格
                     * @return Specifications 医院药品规格
                     * 
                     */
                    std::string GetSpecifications() const;

                    /**
                     * 设置医院药品规格
                     * @param _specifications 医院药品规格
                     * 
                     */
                    void SetSpecifications(const std::string& _specifications);

                    /**
                     * 判断参数 Specifications 是否已赋值
                     * @return Specifications 是否已赋值
                     * 
                     */
                    bool SpecificationsHasBeenSet() const;

                    /**
                     * 获取医院药品批准文号
                     * @return ApprovalNumber 医院药品批准文号
                     * 
                     */
                    std::string GetApprovalNumber() const;

                    /**
                     * 设置医院药品批准文号
                     * @param _approvalNumber 医院药品批准文号
                     * 
                     */
                    void SetApprovalNumber(const std::string& _approvalNumber);

                    /**
                     * 判断参数 ApprovalNumber 是否已赋值
                     * @return ApprovalNumber 是否已赋值
                     * 
                     */
                    bool ApprovalNumberHasBeenSet() const;

                    /**
                     * 获取生产厂商
                     * @return Manufacturer 生产厂商
                     * 
                     */
                    std::string GetManufacturer() const;

                    /**
                     * 设置生产厂商
                     * @param _manufacturer 生产厂商
                     * 
                     */
                    void SetManufacturer(const std::string& _manufacturer);

                    /**
                     * 判断参数 Manufacturer 是否已赋值
                     * @return Manufacturer 是否已赋值
                     * 
                     */
                    bool ManufacturerHasBeenSet() const;

                    /**
                     * 获取剂型
                     * @return DosageForm 剂型
                     * 
                     */
                    std::string GetDosageForm() const;

                    /**
                     * 设置剂型
                     * @param _dosageForm 剂型
                     * 
                     */
                    void SetDosageForm(const std::string& _dosageForm);

                    /**
                     * 判断参数 DosageForm 是否已赋值
                     * @return DosageForm 是否已赋值
                     * 
                     */
                    bool DosageFormHasBeenSet() const;

                    /**
                     * 获取使用状态 0:启用 1:停用
                     * @return Unuse 使用状态 0:启用 1:停用
                     * 
                     */
                    int64_t GetUnuse() const;

                    /**
                     * 设置使用状态 0:启用 1:停用
                     * @param _unuse 使用状态 0:启用 1:停用
                     * 
                     */
                    void SetUnuse(const int64_t& _unuse);

                    /**
                     * 判断参数 Unuse 是否已赋值
                     * @return Unuse 是否已赋值
                     * 
                     */
                    bool UnuseHasBeenSet() const;

                    /**
                     * 获取剂型编码
                     * @return DosageFormCode 剂型编码
                     * 
                     */
                    std::string GetDosageFormCode() const;

                    /**
                     * 设置剂型编码
                     * @param _dosageFormCode 剂型编码
                     * 
                     */
                    void SetDosageFormCode(const std::string& _dosageFormCode);

                    /**
                     * 判断参数 DosageFormCode 是否已赋值
                     * @return DosageFormCode 是否已赋值
                     * 
                     */
                    bool DosageFormCodeHasBeenSet() const;

                    /**
                     * 获取抗菌药DDD值
                     * @return DefinedDailyDose 抗菌药DDD值
                     * 
                     */
                    std::string GetDefinedDailyDose() const;

                    /**
                     * 设置抗菌药DDD值
                     * @param _definedDailyDose 抗菌药DDD值
                     * 
                     */
                    void SetDefinedDailyDose(const std::string& _definedDailyDose);

                    /**
                     * 判断参数 DefinedDailyDose 是否已赋值
                     * @return DefinedDailyDose 是否已赋值
                     * 
                     */
                    bool DefinedDailyDoseHasBeenSet() const;

                    /**
                     * 获取药品单价
                     * @return Amount 药品单价
                     * 
                     */
                    std::string GetAmount() const;

                    /**
                     * 设置药品单价
                     * @param _amount 药品单价
                     * 
                     */
                    void SetAmount(const std::string& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                    /**
                     * 获取国家医保编码
                     * @return YbCode 国家医保编码
                     * 
                     */
                    std::string GetYbCode() const;

                    /**
                     * 设置国家医保编码
                     * @param _ybCode 国家医保编码
                     * 
                     */
                    void SetYbCode(const std::string& _ybCode);

                    /**
                     * 判断参数 YbCode 是否已赋值
                     * @return YbCode 是否已赋值
                     * 
                     */
                    bool YbCodeHasBeenSet() const;

                    /**
                     * 获取药品本位码
                     * @return DrugBasicCode 药品本位码
                     * 
                     */
                    std::string GetDrugBasicCode() const;

                    /**
                     * 设置药品本位码
                     * @param _drugBasicCode 药品本位码
                     * 
                     */
                    void SetDrugBasicCode(const std::string& _drugBasicCode);

                    /**
                     * 判断参数 DrugBasicCode 是否已赋值
                     * @return DrugBasicCode 是否已赋值
                     * 
                     */
                    bool DrugBasicCodeHasBeenSet() const;

                    /**
                     * 获取药品属性
                     * @return PropertyInfo 药品属性
                     * 
                     */
                    DurgPropertyInfo GetPropertyInfo() const;

                    /**
                     * 设置药品属性
                     * @param _propertyInfo 药品属性
                     * 
                     */
                    void SetPropertyInfo(const DurgPropertyInfo& _propertyInfo);

                    /**
                     * 判断参数 PropertyInfo 是否已赋值
                     * @return PropertyInfo 是否已赋值
                     * 
                     */
                    bool PropertyInfoHasBeenSet() const;

                private:

                    /**
                     * 医院药品id
                     */
                    std::string m_drugOrgId;
                    bool m_drugOrgIdHasBeenSet;

                    /**
                     * 医院药品通用名
                     */
                    std::string m_drugName;
                    bool m_drugNameHasBeenSet;

                    /**
                     * 医院药品商品名
                     */
                    std::string m_drugCommodityName;
                    bool m_drugCommodityNameHasBeenSet;

                    /**
                     * 医院药品规格
                     */
                    std::string m_specifications;
                    bool m_specificationsHasBeenSet;

                    /**
                     * 医院药品批准文号
                     */
                    std::string m_approvalNumber;
                    bool m_approvalNumberHasBeenSet;

                    /**
                     * 生产厂商
                     */
                    std::string m_manufacturer;
                    bool m_manufacturerHasBeenSet;

                    /**
                     * 剂型
                     */
                    std::string m_dosageForm;
                    bool m_dosageFormHasBeenSet;

                    /**
                     * 使用状态 0:启用 1:停用
                     */
                    int64_t m_unuse;
                    bool m_unuseHasBeenSet;

                    /**
                     * 剂型编码
                     */
                    std::string m_dosageFormCode;
                    bool m_dosageFormCodeHasBeenSet;

                    /**
                     * 抗菌药DDD值
                     */
                    std::string m_definedDailyDose;
                    bool m_definedDailyDoseHasBeenSet;

                    /**
                     * 药品单价
                     */
                    std::string m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * 国家医保编码
                     */
                    std::string m_ybCode;
                    bool m_ybCodeHasBeenSet;

                    /**
                     * 药品本位码
                     */
                    std::string m_drugBasicCode;
                    bool m_drugBasicCodeHasBeenSet;

                    /**
                     * 药品属性
                     */
                    DurgPropertyInfo m_propertyInfo;
                    bool m_propertyInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_DRUG_H_
