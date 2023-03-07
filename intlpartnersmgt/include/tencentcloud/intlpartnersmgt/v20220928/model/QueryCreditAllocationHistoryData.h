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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCREDITALLOCATIONHISTORYDATA_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCREDITALLOCATIONHISTORYDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * 查询子客授信历史记录返回信息
                */
                class QueryCreditAllocationHistoryData : public AbstractModel
                {
                public:
                    QueryCreditAllocationHistoryData();
                    ~QueryCreditAllocationHistoryData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分配时间
                     * @return AllocatedTime 分配时间
                     */
                    std::string GetAllocatedTime() const;

                    /**
                     * 设置分配时间
                     * @param AllocatedTime 分配时间
                     */
                    void SetAllocatedTime(const std::string& _allocatedTime);

                    /**
                     * 判断参数 AllocatedTime 是否已赋值
                     * @return AllocatedTime 是否已赋值
                     */
                    bool AllocatedTimeHasBeenSet() const;

                    /**
                     * 获取操作员
                     * @return Operator 操作员
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作员
                     * @param Operator 操作员
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取分配的信用值
                     * @return Credit 分配的信用值
                     */
                    double GetCredit() const;

                    /**
                     * 设置分配的信用值
                     * @param Credit 分配的信用值
                     */
                    void SetCredit(const double& _credit);

                    /**
                     * 判断参数 Credit 是否已赋值
                     * @return Credit 是否已赋值
                     */
                    bool CreditHasBeenSet() const;

                    /**
                     * 获取分配的总金额
                     * @return AllocatedCredit 分配的总金额
                     */
                    double GetAllocatedCredit() const;

                    /**
                     * 设置分配的总金额
                     * @param AllocatedCredit 分配的总金额
                     */
                    void SetAllocatedCredit(const double& _allocatedCredit);

                    /**
                     * 判断参数 AllocatedCredit 是否已赋值
                     * @return AllocatedCredit 是否已赋值
                     */
                    bool AllocatedCreditHasBeenSet() const;

                private:

                    /**
                     * 分配时间
                     */
                    std::string m_allocatedTime;
                    bool m_allocatedTimeHasBeenSet;

                    /**
                     * 操作员
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 分配的信用值
                     */
                    double m_credit;
                    bool m_creditHasBeenSet;

                    /**
                     * 分配的总金额
                     */
                    double m_allocatedCredit;
                    bool m_allocatedCreditHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCREDITALLOCATIONHISTORYDATA_H_
