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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_INSURANCERESULT_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_INSURANCERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cii/v20210408/model/MachinePredict.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * 包含险种的各个核保结论
                */
                class InsuranceResult : public AbstractModel
                {
                public:
                    InsuranceResult();
                    ~InsuranceResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取险种:CriticalDiseaseInsurance(重疾险);LifeInsurance(寿险);AccidentInsurance(意外险);MedicalInsurance(医疗险)
                     * @return InsuranceType 险种:CriticalDiseaseInsurance(重疾险);LifeInsurance(寿险);AccidentInsurance(意外险);MedicalInsurance(医疗险)
                     * 
                     */
                    std::string GetInsuranceType() const;

                    /**
                     * 设置险种:CriticalDiseaseInsurance(重疾险);LifeInsurance(寿险);AccidentInsurance(意外险);MedicalInsurance(医疗险)
                     * @param _insuranceType 险种:CriticalDiseaseInsurance(重疾险);LifeInsurance(寿险);AccidentInsurance(意外险);MedicalInsurance(医疗险)
                     * 
                     */
                    void SetInsuranceType(const std::string& _insuranceType);

                    /**
                     * 判断参数 InsuranceType 是否已赋值
                     * @return InsuranceType 是否已赋值
                     * 
                     */
                    bool InsuranceTypeHasBeenSet() const;

                    /**
                     * 获取对应险种的机器核保结果
                     * @return Result 对应险种的机器核保结果
                     * 
                     */
                    std::vector<MachinePredict> GetResult() const;

                    /**
                     * 设置对应险种的机器核保结果
                     * @param _result 对应险种的机器核保结果
                     * 
                     */
                    void SetResult(const std::vector<MachinePredict>& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 险种:CriticalDiseaseInsurance(重疾险);LifeInsurance(寿险);AccidentInsurance(意外险);MedicalInsurance(医疗险)
                     */
                    std::string m_insuranceType;
                    bool m_insuranceTypeHasBeenSet;

                    /**
                     * 对应险种的机器核保结果
                     */
                    std::vector<MachinePredict> m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_INSURANCERESULT_H_
