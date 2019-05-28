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

#ifndef TENCENTCLOUD_CR_V20180321_MODEL_DESCRIBECREDITRESULTREQUEST_H_
#define TENCENTCLOUD_CR_V20180321_MODEL_DESCRIBECREDITRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cr
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * DescribeCreditResult请求参数结构体
                */
                class DescribeCreditResultRequest : public AbstractModel
                {
                public:
                    DescribeCreditResultRequest();
                    ~DescribeCreditResultRequest() = default;
                    std::string ToJsonString();


                    /**
                     * 获取模块
                     * @return Module 模块
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块
                     * @param Module 模块
                     */
                    void SetModule(const std::string& module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取操作
                     * @return Operation 操作
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作
                     * @param Operation 操作
                     */
                    void SetOperation(const std::string& operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstId 实例ID
                     */
                    std::string GetInstId() const;

                    /**
                     * 设置实例ID
                     * @param InstId 实例ID
                     */
                    void SetInstId(const std::string& instId);

                    /**
                     * 判断参数 InstId 是否已赋值
                     * @return InstId 是否已赋值
                     */
                    bool InstIdHasBeenSet() const;

                    /**
                     * 获取产品ID，形如P******。
                     * @return ProductId 产品ID，形如P******。
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID，形如P******。
                     * @param ProductId 产品ID，形如P******。
                     */
                    void SetProductId(const std::string& productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取信审任务ID
                     * @return CaseId 信审任务ID
                     */
                    std::string GetCaseId() const;

                    /**
                     * 设置信审任务ID
                     * @param CaseId 信审任务ID
                     */
                    void SetCaseId(const std::string& caseId);

                    /**
                     * 判断参数 CaseId 是否已赋值
                     * @return CaseId 是否已赋值
                     */
                    bool CaseIdHasBeenSet() const;

                    /**
                     * 获取请求日期
                     * @return RequestDate 请求日期
                     */
                    std::string GetRequestDate() const;

                    /**
                     * 设置请求日期
                     * @param RequestDate 请求日期
                     */
                    void SetRequestDate(const std::string& requestDate);

                    /**
                     * 判断参数 RequestDate 是否已赋值
                     * @return RequestDate 是否已赋值
                     */
                    bool RequestDateHasBeenSet() const;

                private:

                    /**
                     * 模块
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instId;
                    bool m_instIdHasBeenSet;

                    /**
                     * 产品ID，形如P******。
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 信审任务ID
                     */
                    std::string m_caseId;
                    bool m_caseIdHasBeenSet;

                    /**
                     * 请求日期
                     */
                    std::string m_requestDate;
                    bool m_requestDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CR_V20180321_MODEL_DESCRIBECREDITRESULTREQUEST_H_
