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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEFLOWSBYTEMPLATESREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEFLOWSBYTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/FlowInfo.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * CreateFlowsByTemplates请求参数结构体
                */
                class CreateFlowsByTemplatesRequest : public AbstractModel
                {
                public:
                    CreateFlowsByTemplatesRequest();
                    ~CreateFlowsByTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     * @return Agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     * @param _agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取多个合同（签署流程）信息，最多支持20个
                     * @return FlowInfos 多个合同（签署流程）信息，最多支持20个
                     * 
                     */
                    std::vector<FlowInfo> GetFlowInfos() const;

                    /**
                     * 设置多个合同（签署流程）信息，最多支持20个
                     * @param _flowInfos 多个合同（签署流程）信息，最多支持20个
                     * 
                     */
                    void SetFlowInfos(const std::vector<FlowInfo>& _flowInfos);

                    /**
                     * 判断参数 FlowInfos 是否已赋值
                     * @return FlowInfos 是否已赋值
                     * 
                     */
                    bool FlowInfosHasBeenSet() const;

                    /**
                     * 获取是否为预览模式；默认为false，即非预览模式，此时发起合同并返回FlowIds；若为预览模式，不会发起合同，会返回PreviewUrls；
预览链接有效期300秒；
同时，如果预览的文件中指定了动态表格控件，需要进行异步合成；此时此接口返回的是合成前的文档预览链接，而合成完成后的文档预览链接会通过：回调通知的方式、或使用返回的TaskInfo中的TaskId通过ChannelGetTaskResultApi接口查询；
                     * @return NeedPreview 是否为预览模式；默认为false，即非预览模式，此时发起合同并返回FlowIds；若为预览模式，不会发起合同，会返回PreviewUrls；
预览链接有效期300秒；
同时，如果预览的文件中指定了动态表格控件，需要进行异步合成；此时此接口返回的是合成前的文档预览链接，而合成完成后的文档预览链接会通过：回调通知的方式、或使用返回的TaskInfo中的TaskId通过ChannelGetTaskResultApi接口查询；
                     * 
                     */
                    bool GetNeedPreview() const;

                    /**
                     * 设置是否为预览模式；默认为false，即非预览模式，此时发起合同并返回FlowIds；若为预览模式，不会发起合同，会返回PreviewUrls；
预览链接有效期300秒；
同时，如果预览的文件中指定了动态表格控件，需要进行异步合成；此时此接口返回的是合成前的文档预览链接，而合成完成后的文档预览链接会通过：回调通知的方式、或使用返回的TaskInfo中的TaskId通过ChannelGetTaskResultApi接口查询；
                     * @param _needPreview 是否为预览模式；默认为false，即非预览模式，此时发起合同并返回FlowIds；若为预览模式，不会发起合同，会返回PreviewUrls；
预览链接有效期300秒；
同时，如果预览的文件中指定了动态表格控件，需要进行异步合成；此时此接口返回的是合成前的文档预览链接，而合成完成后的文档预览链接会通过：回调通知的方式、或使用返回的TaskInfo中的TaskId通过ChannelGetTaskResultApi接口查询；
                     * 
                     */
                    void SetNeedPreview(const bool& _needPreview);

                    /**
                     * 判断参数 NeedPreview 是否已赋值
                     * @return NeedPreview 是否已赋值
                     * 
                     */
                    bool NeedPreviewHasBeenSet() const;

                    /**
                     * 获取预览链接类型 默认:0-文件流, 1- H5链接 注意:此参数在NeedPreview 为true 时有效,
                     * @return PreviewType 预览链接类型 默认:0-文件流, 1- H5链接 注意:此参数在NeedPreview 为true 时有效,
                     * 
                     */
                    int64_t GetPreviewType() const;

                    /**
                     * 设置预览链接类型 默认:0-文件流, 1- H5链接 注意:此参数在NeedPreview 为true 时有效,
                     * @param _previewType 预览链接类型 默认:0-文件流, 1- H5链接 注意:此参数在NeedPreview 为true 时有效,
                     * 
                     */
                    void SetPreviewType(const int64_t& _previewType);

                    /**
                     * 判断参数 PreviewType 是否已赋值
                     * @return PreviewType 是否已赋值
                     * 
                     */
                    bool PreviewTypeHasBeenSet() const;

                    /**
                     * 获取操作者的信息，不用传
                     * @return Operator 操作者的信息，不用传
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作者的信息，不用传
                     * @param _operator 操作者的信息，不用传
                     * @deprecated
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * @deprecated
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 多个合同（签署流程）信息，最多支持20个
                     */
                    std::vector<FlowInfo> m_flowInfos;
                    bool m_flowInfosHasBeenSet;

                    /**
                     * 是否为预览模式；默认为false，即非预览模式，此时发起合同并返回FlowIds；若为预览模式，不会发起合同，会返回PreviewUrls；
预览链接有效期300秒；
同时，如果预览的文件中指定了动态表格控件，需要进行异步合成；此时此接口返回的是合成前的文档预览链接，而合成完成后的文档预览链接会通过：回调通知的方式、或使用返回的TaskInfo中的TaskId通过ChannelGetTaskResultApi接口查询；
                     */
                    bool m_needPreview;
                    bool m_needPreviewHasBeenSet;

                    /**
                     * 预览链接类型 默认:0-文件流, 1- H5链接 注意:此参数在NeedPreview 为true 时有效,
                     */
                    int64_t m_previewType;
                    bool m_previewTypeHasBeenSet;

                    /**
                     * 操作者的信息，不用传
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEFLOWSBYTEMPLATESREQUEST_H_
