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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_BASEFLOWINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_BASEFLOWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/FormField.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 基础流程信息
                */
                class BaseFlowInfo : public AbstractModel
                {
                public:
                    BaseFlowInfo();
                    ~BaseFlowInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合同流程名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowName 合同流程名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置合同流程名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FlowName 合同流程名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取合同流程类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowType 合同流程类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置合同流程类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FlowType 合同流程类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFlowType(const std::string& _flowType);

                    /**
                     * 判断参数 FlowType 是否已赋值
                     * @return FlowType 是否已赋值
                     */
                    bool FlowTypeHasBeenSet() const;

                    /**
                     * 获取合同流程描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowDescription 合同流程描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFlowDescription() const;

                    /**
                     * 设置合同流程描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FlowDescription 合同流程描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFlowDescription(const std::string& _flowDescription);

                    /**
                     * 判断参数 FlowDescription 是否已赋值
                     * @return FlowDescription 是否已赋值
                     */
                    bool FlowDescriptionHasBeenSet() const;

                    /**
                     * 获取合同流程截止时间，unix时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Deadline 合同流程截止时间，unix时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置合同流程截止时间，unix时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Deadline 合同流程截止时间，unix时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeadline(const int64_t& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取是否顺序签署(true:无序签,false:顺序签)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Unordered 是否顺序签署(true:无序签,false:顺序签)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetUnordered() const;

                    /**
                     * 设置是否顺序签署(true:无序签,false:顺序签)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Unordered 是否顺序签署(true:无序签,false:顺序签)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUnordered(const bool& _unordered);

                    /**
                     * 判断参数 Unordered 是否已赋值
                     * @return Unordered 是否已赋值
                     */
                    bool UnorderedHasBeenSet() const;

                    /**
                     * 获取打开智能添加填写区(默认开启，打开:"OPEN" 关闭："CLOSE")
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntelligentStatus 打开智能添加填写区(默认开启，打开:"OPEN" 关闭："CLOSE")
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIntelligentStatus() const;

                    /**
                     * 设置打开智能添加填写区(默认开启，打开:"OPEN" 关闭："CLOSE")
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IntelligentStatus 打开智能添加填写区(默认开启，打开:"OPEN" 关闭："CLOSE")
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIntelligentStatus(const std::string& _intelligentStatus);

                    /**
                     * 判断参数 IntelligentStatus 是否已赋值
                     * @return IntelligentStatus 是否已赋值
                     */
                    bool IntelligentStatusHasBeenSet() const;

                    /**
                     * 获取填写控件内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FormFields 填写控件内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FormField> GetFormFields() const;

                    /**
                     * 设置填写控件内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FormFields 填写控件内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFormFields(const std::vector<FormField>& _formFields);

                    /**
                     * 判断参数 FormFields 是否已赋值
                     * @return FormFields 是否已赋值
                     */
                    bool FormFieldsHasBeenSet() const;

                    /**
                     * 获取本企业(发起方企业)是否需要签署审批，true：开启本企业签署审批
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NeedSignReview 本企业(发起方企业)是否需要签署审批，true：开启本企业签署审批
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetNeedSignReview() const;

                    /**
                     * 设置本企业(发起方企业)是否需要签署审批，true：开启本企业签署审批
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NeedSignReview 本企业(发起方企业)是否需要签署审批，true：开启本企业签署审批
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNeedSignReview(const bool& _needSignReview);

                    /**
                     * 判断参数 NeedSignReview 是否已赋值
                     * @return NeedSignReview 是否已赋值
                     */
                    bool NeedSignReviewHasBeenSet() const;

                private:

                    /**
                     * 合同流程名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 合同流程类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * 合同流程描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flowDescription;
                    bool m_flowDescriptionHasBeenSet;

                    /**
                     * 合同流程截止时间，unix时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 是否顺序签署(true:无序签,false:顺序签)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_unordered;
                    bool m_unorderedHasBeenSet;

                    /**
                     * 打开智能添加填写区(默认开启，打开:"OPEN" 关闭："CLOSE")
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_intelligentStatus;
                    bool m_intelligentStatusHasBeenSet;

                    /**
                     * 填写控件内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FormField> m_formFields;
                    bool m_formFieldsHasBeenSet;

                    /**
                     * 本企业(发起方企业)是否需要签署审批，true：开启本企业签署审批
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_needSignReview;
                    bool m_needSignReviewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_BASEFLOWINFO_H_
