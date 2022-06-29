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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWBYFILESREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWBYFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/ApproverInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>
#include <tencentcloud/ess/v20201111/model/Component.h>
#include <tencentcloud/ess/v20201111/model/CcInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateFlowByFiles请求参数结构体
                */
                class CreateFlowByFilesRequest : public AbstractModel
                {
                public:
                    CreateFlowByFilesRequest();
                    ~CreateFlowByFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方用户信息
                     * @return Operator 调用方用户信息
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置调用方用户信息
                     * @param Operator 调用方用户信息
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取流程名称
                     * @return FlowName 流程名称
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置流程名称
                     * @param FlowName 流程名称
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取签署pdf文件的资源编号列表
                     * @return FileIds 签署pdf文件的资源编号列表
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 设置签署pdf文件的资源编号列表
                     * @param FileIds 签署pdf文件的资源编号列表
                     */
                    void SetFileIds(const std::vector<std::string>& _fileIds);

                    /**
                     * 判断参数 FileIds 是否已赋值
                     * @return FileIds 是否已赋值
                     */
                    bool FileIdsHasBeenSet() const;

                    /**
                     * 获取签署参与者信息
                     * @return Approvers 签署参与者信息
                     */
                    std::vector<ApproverInfo> GetApprovers() const;

                    /**
                     * 设置签署参与者信息
                     * @param Approvers 签署参与者信息
                     */
                    void SetApprovers(const std::vector<ApproverInfo>& _approvers);

                    /**
                     * 判断参数 Approvers 是否已赋值
                     * @return Approvers 是否已赋值
                     */
                    bool ApproversHasBeenSet() const;

                    /**
                     * 获取流程描述
                     * @return FlowDescription 流程描述
                     */
                    std::string GetFlowDescription() const;

                    /**
                     * 设置流程描述
                     * @param FlowDescription 流程描述
                     */
                    void SetFlowDescription(const std::string& _flowDescription);

                    /**
                     * 判断参数 FlowDescription 是否已赋值
                     * @return FlowDescription 是否已赋值
                     */
                    bool FlowDescriptionHasBeenSet() const;

                    /**
                     * 获取发送类型：
true：无序签
false：有序签
注：默认为false（有序签）
                     * @return Unordered 发送类型：
true：无序签
false：有序签
注：默认为false（有序签）
                     */
                    bool GetUnordered() const;

                    /**
                     * 设置发送类型：
true：无序签
false：有序签
注：默认为false（有序签）
                     * @param Unordered 发送类型：
true：无序签
false：有序签
注：默认为false（有序签）
                     */
                    void SetUnordered(const bool& _unordered);

                    /**
                     * 判断参数 Unordered 是否已赋值
                     * @return Unordered 是否已赋值
                     */
                    bool UnorderedHasBeenSet() const;

                    /**
                     * 获取流程的类型
                     * @return FlowType 流程的类型
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置流程的类型
                     * @param FlowType 流程的类型
                     */
                    void SetFlowType(const std::string& _flowType);

                    /**
                     * 判断参数 FlowType 是否已赋值
                     * @return FlowType 是否已赋值
                     */
                    bool FlowTypeHasBeenSet() const;

                    /**
                     * 获取流程的签署截止时间
                     * @return Deadline 流程的签署截止时间
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置流程的签署截止时间
                     * @param Deadline 流程的签署截止时间
                     */
                    void SetDeadline(const int64_t& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取应用号信息
                     * @return Agent 应用号信息
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用号信息
                     * @param Agent 应用号信息
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取经办人内容控件配置。可选类型为：
TEXT - 内容文本控件
MULTI_LINE_TEXT - 多行文本控件
注：默认字体大小为 字号12
                     * @return Components 经办人内容控件配置。可选类型为：
TEXT - 内容文本控件
MULTI_LINE_TEXT - 多行文本控件
注：默认字体大小为 字号12
                     */
                    std::vector<Component> GetComponents() const;

                    /**
                     * 设置经办人内容控件配置。可选类型为：
TEXT - 内容文本控件
MULTI_LINE_TEXT - 多行文本控件
注：默认字体大小为 字号12
                     * @param Components 经办人内容控件配置。可选类型为：
TEXT - 内容文本控件
MULTI_LINE_TEXT - 多行文本控件
注：默认字体大小为 字号12
                     */
                    void SetComponents(const std::vector<Component>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取被抄送人的信息列表
                     * @return CcInfos 被抄送人的信息列表
                     */
                    std::vector<CcInfo> GetCcInfos() const;

                    /**
                     * 设置被抄送人的信息列表
                     * @param CcInfos 被抄送人的信息列表
                     */
                    void SetCcInfos(const std::vector<CcInfo>& _ccInfos);

                    /**
                     * 判断参数 CcInfos 是否已赋值
                     * @return CcInfos 是否已赋值
                     */
                    bool CcInfosHasBeenSet() const;

                    /**
                     * 获取是否需要预览，true：预览模式，false：非预览（默认）
                     * @return NeedPreview 是否需要预览，true：预览模式，false：非预览（默认）
                     */
                    bool GetNeedPreview() const;

                    /**
                     * 设置是否需要预览，true：预览模式，false：非预览（默认）
                     * @param NeedPreview 是否需要预览，true：预览模式，false：非预览（默认）
                     */
                    void SetNeedPreview(const bool& _needPreview);

                    /**
                     * 判断参数 NeedPreview 是否已赋值
                     * @return NeedPreview 是否已赋值
                     */
                    bool NeedPreviewHasBeenSet() const;

                private:

                    /**
                     * 调用方用户信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 流程名称
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 签署pdf文件的资源编号列表
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * 签署参与者信息
                     */
                    std::vector<ApproverInfo> m_approvers;
                    bool m_approversHasBeenSet;

                    /**
                     * 流程描述
                     */
                    std::string m_flowDescription;
                    bool m_flowDescriptionHasBeenSet;

                    /**
                     * 发送类型：
true：无序签
false：有序签
注：默认为false（有序签）
                     */
                    bool m_unordered;
                    bool m_unorderedHasBeenSet;

                    /**
                     * 流程的类型
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * 流程的签署截止时间
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 应用号信息
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 经办人内容控件配置。可选类型为：
TEXT - 内容文本控件
MULTI_LINE_TEXT - 多行文本控件
注：默认字体大小为 字号12
                     */
                    std::vector<Component> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * 被抄送人的信息列表
                     */
                    std::vector<CcInfo> m_ccInfos;
                    bool m_ccInfosHasBeenSet;

                    /**
                     * 是否需要预览，true：预览模式，false：非预览（默认）
                     */
                    bool m_needPreview;
                    bool m_needPreviewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWBYFILESREQUEST_H_
