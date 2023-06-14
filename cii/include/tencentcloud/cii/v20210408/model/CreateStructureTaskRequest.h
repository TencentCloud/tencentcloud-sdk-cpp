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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_CREATESTRUCTURETASKREQUEST_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_CREATESTRUCTURETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cii/v20210408/model/CreateStructureTaskInfo.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * CreateStructureTask请求参数结构体
                */
                class CreateStructureTaskRequest : public AbstractModel
                {
                public:
                    CreateStructureTaskRequest();
                    ~CreateStructureTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务类型
Structured 仅结构化
Underwrite 结构化+核保
                     * @return ServiceType 服务类型
Structured 仅结构化
Underwrite 结构化+核保
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置服务类型
Structured 仅结构化
Underwrite 结构化+核保
                     * @param _serviceType 服务类型
Structured 仅结构化
Underwrite 结构化+核保
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取创建任务时可以上传多个报告，后台生成多个识别子任务，子任务的详细信息
                     * @return TaskInfos 创建任务时可以上传多个报告，后台生成多个识别子任务，子任务的详细信息
                     * 
                     */
                    std::vector<CreateStructureTaskInfo> GetTaskInfos() const;

                    /**
                     * 设置创建任务时可以上传多个报告，后台生成多个识别子任务，子任务的详细信息
                     * @param _taskInfos 创建任务时可以上传多个报告，后台生成多个识别子任务，子任务的详细信息
                     * 
                     */
                    void SetTaskInfos(const std::vector<CreateStructureTaskInfo>& _taskInfos);

                    /**
                     * 判断参数 TaskInfos 是否已赋值
                     * @return TaskInfos 是否已赋值
                     * 
                     */
                    bool TaskInfosHasBeenSet() const;

                    /**
                     * 获取保单号
                     * @return PolicyId 保单号
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置保单号
                     * @param _policyId 保单号
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取核保触发方式
Auto 自动
Manual 手动
                     * @return TriggerType 核保触发方式
Auto 自动
Manual 手动
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置核保触发方式
Auto 自动
Manual 手动
                     * @param _triggerType 核保触发方式
Auto 自动
Manual 手动
                     * 
                     */
                    void SetTriggerType(const std::string& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取险种，如果是体检报告类型，此参数是必填，类型说明如下：
CriticalDiseaseInsurance:重疾险
LifeInsurance：寿险
AccidentInsurance：意外险
                     * @return InsuranceTypes 险种，如果是体检报告类型，此参数是必填，类型说明如下：
CriticalDiseaseInsurance:重疾险
LifeInsurance：寿险
AccidentInsurance：意外险
                     * 
                     */
                    std::vector<std::string> GetInsuranceTypes() const;

                    /**
                     * 设置险种，如果是体检报告类型，此参数是必填，类型说明如下：
CriticalDiseaseInsurance:重疾险
LifeInsurance：寿险
AccidentInsurance：意外险
                     * @param _insuranceTypes 险种，如果是体检报告类型，此参数是必填，类型说明如下：
CriticalDiseaseInsurance:重疾险
LifeInsurance：寿险
AccidentInsurance：意外险
                     * 
                     */
                    void SetInsuranceTypes(const std::vector<std::string>& _insuranceTypes);

                    /**
                     * 判断参数 InsuranceTypes 是否已赋值
                     * @return InsuranceTypes 是否已赋值
                     * 
                     */
                    bool InsuranceTypesHasBeenSet() const;

                    /**
                     * 获取回调地址，接收Post请求传送结果
                     * @return CallbackUrl 回调地址，接收Post请求传送结果
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调地址，接收Post请求传送结果
                     * @param _callbackUrl 回调地址，接收Post请求传送结果
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                private:

                    /**
                     * 服务类型
Structured 仅结构化
Underwrite 结构化+核保
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 创建任务时可以上传多个报告，后台生成多个识别子任务，子任务的详细信息
                     */
                    std::vector<CreateStructureTaskInfo> m_taskInfos;
                    bool m_taskInfosHasBeenSet;

                    /**
                     * 保单号
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 核保触发方式
Auto 自动
Manual 手动
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * 险种，如果是体检报告类型，此参数是必填，类型说明如下：
CriticalDiseaseInsurance:重疾险
LifeInsurance：寿险
AccidentInsurance：意外险
                     */
                    std::vector<std::string> m_insuranceTypes;
                    bool m_insuranceTypesHasBeenSet;

                    /**
                     * 回调地址，接收Post请求传送结果
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_CREATESTRUCTURETASKREQUEST_H_
