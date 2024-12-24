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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_SMARTDRUGINFODATA_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_SMARTDRUGINFODATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 智能用药请求数据
                */
                class SmartDrugInfoData : public AbstractModel
                {
                public:
                    SmartDrugInfoData();
                    ~SmartDrugInfoData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取药品名称
                     * @return DrugName 药品名称
                     * 
                     */
                    std::string GetDrugName() const;

                    /**
                     * 设置药品名称
                     * @param _drugName 药品名称
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
                     * 获取规格
                     * @return Specifications 规格
                     * 
                     */
                    std::string GetSpecifications() const;

                    /**
                     * 设置规格
                     * @param _specifications 规格
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
                     * 获取批准文号
                     * @return ApprovalNumber 批准文号
                     * 
                     */
                    std::string GetApprovalNumber() const;

                    /**
                     * 设置批准文号
                     * @param _approvalNumber 批准文号
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
                     * 获取生产厂家
                     * @return Manufacturer 生产厂家
                     * 
                     */
                    std::string GetManufacturer() const;

                    /**
                     * 设置生产厂家
                     * @param _manufacturer 生产厂家
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
                     * 获取药品ID
                     * @return DrugId 药品ID
                     * 
                     */
                    std::string GetDrugId() const;

                    /**
                     * 设置药品ID
                     * @param _drugId 药品ID
                     * 
                     */
                    void SetDrugId(const std::string& _drugId);

                    /**
                     * 判断参数 DrugId 是否已赋值
                     * @return DrugId 是否已赋值
                     * 
                     */
                    bool DrugIdHasBeenSet() const;

                    /**
                     * 获取诊断
                     * @return Diagnosis 诊断
                     * 
                     */
                    std::string GetDiagnosis() const;

                    /**
                     * 设置诊断
                     * @param _diagnosis 诊断
                     * 
                     */
                    void SetDiagnosis(const std::string& _diagnosis);

                    /**
                     * 判断参数 Diagnosis 是否已赋值
                     * @return Diagnosis 是否已赋值
                     * 
                     */
                    bool DiagnosisHasBeenSet() const;

                    /**
                     * 获取年龄
                     * @return Age 年龄
                     * 
                     */
                    double GetAge() const;

                    /**
                     * 设置年龄
                     * @param _age 年龄
                     * 
                     */
                    void SetAge(const double& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * 
                     */
                    bool AgeHasBeenSet() const;

                private:

                    /**
                     * 药品名称
                     */
                    std::string m_drugName;
                    bool m_drugNameHasBeenSet;

                    /**
                     * 规格
                     */
                    std::string m_specifications;
                    bool m_specificationsHasBeenSet;

                    /**
                     * 批准文号
                     */
                    std::string m_approvalNumber;
                    bool m_approvalNumberHasBeenSet;

                    /**
                     * 生产厂家
                     */
                    std::string m_manufacturer;
                    bool m_manufacturerHasBeenSet;

                    /**
                     * 药品ID
                     */
                    std::string m_drugId;
                    bool m_drugIdHasBeenSet;

                    /**
                     * 诊断
                     */
                    std::string m_diagnosis;
                    bool m_diagnosisHasBeenSet;

                    /**
                     * 年龄
                     */
                    double m_age;
                    bool m_ageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_SMARTDRUGINFODATA_H_
