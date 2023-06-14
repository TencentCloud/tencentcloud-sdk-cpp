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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_MACHINEUNDERWRITEOUTPUT_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_MACHINEUNDERWRITEOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cii/v20210408/model/InsuranceResult.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * 机器核保输出
                */
                class MachineUnderwriteOutput : public AbstractModel
                {
                public:
                    MachineUnderwriteOutput();
                    ~MachineUnderwriteOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户号
                     * @return CustomerId 客户号
                     * 
                     */
                    std::string GetCustomerId() const;

                    /**
                     * 设置客户号
                     * @param _customerId 客户号
                     * 
                     */
                    void SetCustomerId(const std::string& _customerId);

                    /**
                     * 判断参数 CustomerId 是否已赋值
                     * @return CustomerId 是否已赋值
                     * 
                     */
                    bool CustomerIdHasBeenSet() const;

                    /**
                     * 获取客户姓名
                     * @return CustomerName 客户姓名
                     * 
                     */
                    std::string GetCustomerName() const;

                    /**
                     * 设置客户姓名
                     * @param _customerName 客户姓名
                     * 
                     */
                    void SetCustomerName(const std::string& _customerName);

                    /**
                     * 判断参数 CustomerName 是否已赋值
                     * @return CustomerName 是否已赋值
                     * 
                     */
                    bool CustomerNameHasBeenSet() const;

                    /**
                     * 获取各个险种的结果
                     * @return Results 各个险种的结果
                     * 
                     */
                    std::vector<InsuranceResult> GetResults() const;

                    /**
                     * 设置各个险种的结果
                     * @param _results 各个险种的结果
                     * 
                     */
                    void SetResults(const std::vector<InsuranceResult>& _results);

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * 客户号
                     */
                    std::string m_customerId;
                    bool m_customerIdHasBeenSet;

                    /**
                     * 客户姓名
                     */
                    std::string m_customerName;
                    bool m_customerNameHasBeenSet;

                    /**
                     * 各个险种的结果
                     */
                    std::vector<InsuranceResult> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_MACHINEUNDERWRITEOUTPUT_H_
