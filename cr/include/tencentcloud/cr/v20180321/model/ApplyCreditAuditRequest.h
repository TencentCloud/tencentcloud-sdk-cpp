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

#ifndef TENCENTCLOUD_CR_V20180321_MODEL_APPLYCREDITAUDITREQUEST_H_
#define TENCENTCLOUD_CR_V20180321_MODEL_APPLYCREDITAUDITREQUEST_H_

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
                * ApplyCreditAudit请求参数结构体
                */
                class ApplyCreditAuditRequest : public AbstractModel
                {
                public:
                    ApplyCreditAuditRequest();
                    ~ApplyCreditAuditRequest() = default;
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
                     * 获取信审任务ID，同一天内，同一InstId下，同一CaseId只能调用一次。
                     * @return CaseId 信审任务ID，同一天内，同一InstId下，同一CaseId只能调用一次。
                     */
                    std::string GetCaseId() const;

                    /**
                     * 设置信审任务ID，同一天内，同一InstId下，同一CaseId只能调用一次。
                     * @param CaseId 信审任务ID，同一天内，同一InstId下，同一CaseId只能调用一次。
                     */
                    void SetCaseId(const std::string& caseId);

                    /**
                     * 判断参数 CaseId 是否已赋值
                     * @return CaseId 是否已赋值
                     */
                    bool CaseIdHasBeenSet() const;

                    /**
                     * 获取回调地址
                     * @return CallbackUrl 回调地址
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调地址
                     * @param CallbackUrl 回调地址
                     */
                    void SetCallbackUrl(const std::string& callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取JSON格式的业务字段。
                     * @return Data JSON格式的业务字段。
                     */
                    std::string GetData() const;

                    /**
                     * 设置JSON格式的业务字段。
                     * @param Data JSON格式的业务字段。
                     */
                    void SetData(const std::string& data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

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
                     * 信审任务ID，同一天内，同一InstId下，同一CaseId只能调用一次。
                     */
                    std::string m_caseId;
                    bool m_caseIdHasBeenSet;

                    /**
                     * 回调地址
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * JSON格式的业务字段。
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CR_V20180321_MODEL_APPLYCREDITAUDITREQUEST_H_
