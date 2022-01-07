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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/FlowApproverInfo.h>
#include <tencentcloud/essbasic/v20210526/model/FormField.h>
#include <tencentcloud/essbasic/v20210526/model/CcInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 此结构体 (FlowInfo) 用于描述流程信息。
                */
                class FlowInfo : public AbstractModel
                {
                public:
                    FlowInfo();
                    ~FlowInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合同名字
                     * @return FlowName 合同名字
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置合同名字
                     * @param FlowName 合同名字
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取签署截止时间戳，超过有效签署时间则该签署流程失败
                     * @return Deadline 签署截止时间戳，超过有效签署时间则该签署流程失败
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置签署截止时间戳，超过有效签署时间则该签署流程失败
                     * @param Deadline 签署截止时间戳，超过有效签署时间则该签署流程失败
                     */
                    void SetDeadline(const int64_t& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取模版ID
                     * @return TemplateId 模版ID
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模版ID
                     * @param TemplateId 模版ID
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取合同类型：
1. “劳务”
2. “销售”
3. “租赁”
4. “其他”
                     * @return FlowType 合同类型：
1. “劳务”
2. “销售”
3. “租赁”
4. “其他”
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置合同类型：
1. “劳务”
2. “销售”
3. “租赁”
4. “其他”
                     * @param FlowType 合同类型：
1. “劳务”
2. “销售”
3. “租赁”
4. “其他”
                     */
                    void SetFlowType(const std::string& _flowType);

                    /**
                     * 判断参数 FlowType 是否已赋值
                     * @return FlowType 是否已赋值
                     */
                    bool FlowTypeHasBeenSet() const;

                    /**
                     * 获取回调地址
                     * @return CallbackUrl 回调地址
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调地址
                     * @param CallbackUrl 回调地址
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取多个签署人信息
                     * @return FlowApprovers 多个签署人信息
                     */
                    std::vector<FlowApproverInfo> GetFlowApprovers() const;

                    /**
                     * 设置多个签署人信息
                     * @param FlowApprovers 多个签署人信息
                     */
                    void SetFlowApprovers(const std::vector<FlowApproverInfo>& _flowApprovers);

                    /**
                     * 判断参数 FlowApprovers 是否已赋值
                     * @return FlowApprovers 是否已赋值
                     */
                    bool FlowApproversHasBeenSet() const;

                    /**
                     * 获取表单K-V对列表
                     * @return FormFields 表单K-V对列表
                     */
                    std::vector<FormField> GetFormFields() const;

                    /**
                     * 设置表单K-V对列表
                     * @param FormFields 表单K-V对列表
                     */
                    void SetFormFields(const std::vector<FormField>& _formFields);

                    /**
                     * 判断参数 FormFields 是否已赋值
                     * @return FormFields 是否已赋值
                     */
                    bool FormFieldsHasBeenSet() const;

                    /**
                     * 获取合同描述
                     * @return FlowDescription 合同描述
                     */
                    std::string GetFlowDescription() const;

                    /**
                     * 设置合同描述
                     * @param FlowDescription 合同描述
                     */
                    void SetFlowDescription(const std::string& _flowDescription);

                    /**
                     * 判断参数 FlowDescription 是否已赋值
                     * @return FlowDescription 是否已赋值
                     */
                    bool FlowDescriptionHasBeenSet() const;

                    /**
                     * 获取渠道的业务信息，限制1024字符
                     * @return CustomerData 渠道的业务信息，限制1024字符
                     */
                    std::string GetCustomerData() const;

                    /**
                     * 设置渠道的业务信息，限制1024字符
                     * @param CustomerData 渠道的业务信息，限制1024字符
                     */
                    void SetCustomerData(const std::string& _customerData);

                    /**
                     * 判断参数 CustomerData 是否已赋值
                     * @return CustomerData 是否已赋值
                     */
                    bool CustomerDataHasBeenSet() const;

                    /**
                     * 获取被抄送人的信息列表，抄送功能暂不开放
                     * @return CcInfos 被抄送人的信息列表，抄送功能暂不开放
                     */
                    std::vector<CcInfo> GetCcInfos() const;

                    /**
                     * 设置被抄送人的信息列表，抄送功能暂不开放
                     * @param CcInfos 被抄送人的信息列表，抄送功能暂不开放
                     */
                    void SetCcInfos(const std::vector<CcInfo>& _ccInfos);

                    /**
                     * 判断参数 CcInfos 是否已赋值
                     * @return CcInfos 是否已赋值
                     */
                    bool CcInfosHasBeenSet() const;

                private:

                    /**
                     * 合同名字
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 签署截止时间戳，超过有效签署时间则该签署流程失败
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 模版ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 合同类型：
1. “劳务”
2. “销售”
3. “租赁”
4. “其他”
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * 回调地址
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 多个签署人信息
                     */
                    std::vector<FlowApproverInfo> m_flowApprovers;
                    bool m_flowApproversHasBeenSet;

                    /**
                     * 表单K-V对列表
                     */
                    std::vector<FormField> m_formFields;
                    bool m_formFieldsHasBeenSet;

                    /**
                     * 合同描述
                     */
                    std::string m_flowDescription;
                    bool m_flowDescriptionHasBeenSet;

                    /**
                     * 渠道的业务信息，限制1024字符
                     */
                    std::string m_customerData;
                    bool m_customerDataHasBeenSet;

                    /**
                     * 被抄送人的信息列表，抄送功能暂不开放
                     */
                    std::vector<CcInfo> m_ccInfos;
                    bool m_ccInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWINFO_H_
