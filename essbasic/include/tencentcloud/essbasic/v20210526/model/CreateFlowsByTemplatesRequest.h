/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取<p>合同的发起企业和发起人信息，<a href="https://qcloudimg.tencent-cloud.cn/raw/b69f8aad306c40b7b78d096e39b2edbb.png" target="_blank">点击查看合同发起企业和人展示的位置</a></p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  <a href="https://qcloudimg.tencent-cloud.cn/raw/a71872de3d540d55451e3e73a2ad1a6e.png" target="_blank">Agent.AppId</a></li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId（合同的发起企业）</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId （合同的发起人）</li></ul>
                     * @return Agent <p>合同的发起企业和发起人信息，<a href="https://qcloudimg.tencent-cloud.cn/raw/b69f8aad306c40b7b78d096e39b2edbb.png" target="_blank">点击查看合同发起企业和人展示的位置</a></p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  <a href="https://qcloudimg.tencent-cloud.cn/raw/a71872de3d540d55451e3e73a2ad1a6e.png" target="_blank">Agent.AppId</a></li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId（合同的发起企业）</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId （合同的发起人）</li></ul>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>合同的发起企业和发起人信息，<a href="https://qcloudimg.tencent-cloud.cn/raw/b69f8aad306c40b7b78d096e39b2edbb.png" target="_blank">点击查看合同发起企业和人展示的位置</a></p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  <a href="https://qcloudimg.tencent-cloud.cn/raw/a71872de3d540d55451e3e73a2ad1a6e.png" target="_blank">Agent.AppId</a></li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId（合同的发起企业）</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId （合同的发起人）</li></ul>
                     * @param _agent <p>合同的发起企业和发起人信息，<a href="https://qcloudimg.tencent-cloud.cn/raw/b69f8aad306c40b7b78d096e39b2edbb.png" target="_blank">点击查看合同发起企业和人展示的位置</a></p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  <a href="https://qcloudimg.tencent-cloud.cn/raw/a71872de3d540d55451e3e73a2ad1a6e.png" target="_blank">Agent.AppId</a></li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId（合同的发起企业）</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId （合同的发起人）</li></ul>
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
                     * 获取<p>要创建的合同信息列表，最多支持一次创建20个合同</p>
                     * @return FlowInfos <p>要创建的合同信息列表，最多支持一次创建20个合同</p>
                     * 
                     */
                    std::vector<FlowInfo> GetFlowInfos() const;

                    /**
                     * 设置<p>要创建的合同信息列表，最多支持一次创建20个合同</p>
                     * @param _flowInfos <p>要创建的合同信息列表，最多支持一次创建20个合同</p>
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
                     * 获取<p>是否为预览模式，取值如下：</p><ul><li> **false**：非预览模式（默认），会产生合同流程并返回合同流程编号FlowId。</li><li> **true**：预览模式，不产生合同流程，不返回合同流程编号FlowId，而是返回预览链接PreviewUrl，有效期为300秒，用于查看真实发起后合同的样子。 <font color="red">注意： 以预览模式创建的合同仅供查看，因此参与方无法进行签署操作</font></li></ul><p><strong>注1</strong>: 如果预览的文件中指定了动态表格控件，此时此接口返回的是合成前的文档预览链接，合成完成后的文档预览链接需要通过回调通知的方式或使用返回的TaskInfo中的TaskId通过ChannelGetTaskResultApi接口查询得到</p><p><strong>注2</strong>: 预览服务按照合同份额 1:2的比例赠送预览次数。例如：购买 100 份合同，将赠送 200 次合同预览额度。当赠送的预览额度使用完后，如需继续使用预览服务，则需要单独购买预览服务额度。</p>
                     * @return NeedPreview <p>是否为预览模式，取值如下：</p><ul><li> **false**：非预览模式（默认），会产生合同流程并返回合同流程编号FlowId。</li><li> **true**：预览模式，不产生合同流程，不返回合同流程编号FlowId，而是返回预览链接PreviewUrl，有效期为300秒，用于查看真实发起后合同的样子。 <font color="red">注意： 以预览模式创建的合同仅供查看，因此参与方无法进行签署操作</font></li></ul><p><strong>注1</strong>: 如果预览的文件中指定了动态表格控件，此时此接口返回的是合成前的文档预览链接，合成完成后的文档预览链接需要通过回调通知的方式或使用返回的TaskInfo中的TaskId通过ChannelGetTaskResultApi接口查询得到</p><p><strong>注2</strong>: 预览服务按照合同份额 1:2的比例赠送预览次数。例如：购买 100 份合同，将赠送 200 次合同预览额度。当赠送的预览额度使用完后，如需继续使用预览服务，则需要单独购买预览服务额度。</p>
                     * 
                     */
                    bool GetNeedPreview() const;

                    /**
                     * 设置<p>是否为预览模式，取值如下：</p><ul><li> **false**：非预览模式（默认），会产生合同流程并返回合同流程编号FlowId。</li><li> **true**：预览模式，不产生合同流程，不返回合同流程编号FlowId，而是返回预览链接PreviewUrl，有效期为300秒，用于查看真实发起后合同的样子。 <font color="red">注意： 以预览模式创建的合同仅供查看，因此参与方无法进行签署操作</font></li></ul><p><strong>注1</strong>: 如果预览的文件中指定了动态表格控件，此时此接口返回的是合成前的文档预览链接，合成完成后的文档预览链接需要通过回调通知的方式或使用返回的TaskInfo中的TaskId通过ChannelGetTaskResultApi接口查询得到</p><p><strong>注2</strong>: 预览服务按照合同份额 1:2的比例赠送预览次数。例如：购买 100 份合同，将赠送 200 次合同预览额度。当赠送的预览额度使用完后，如需继续使用预览服务，则需要单独购买预览服务额度。</p>
                     * @param _needPreview <p>是否为预览模式，取值如下：</p><ul><li> **false**：非预览模式（默认），会产生合同流程并返回合同流程编号FlowId。</li><li> **true**：预览模式，不产生合同流程，不返回合同流程编号FlowId，而是返回预览链接PreviewUrl，有效期为300秒，用于查看真实发起后合同的样子。 <font color="red">注意： 以预览模式创建的合同仅供查看，因此参与方无法进行签署操作</font></li></ul><p><strong>注1</strong>: 如果预览的文件中指定了动态表格控件，此时此接口返回的是合成前的文档预览链接，合成完成后的文档预览链接需要通过回调通知的方式或使用返回的TaskInfo中的TaskId通过ChannelGetTaskResultApi接口查询得到</p><p><strong>注2</strong>: 预览服务按照合同份额 1:2的比例赠送预览次数。例如：购买 100 份合同，将赠送 200 次合同预览额度。当赠送的预览额度使用完后，如需继续使用预览服务，则需要单独购买预览服务额度。</p>
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
                     * 获取<p>预览模式下产生的预览链接类型 </p><ul><li> **0** :(默认) 文件流 ,点开后下载预览的合同PDF文件 </li><li> **1** :H5链接 ,点开后在浏览器中展示合同的样子</li></ul>注: <code>此参数在NeedPreview 为true时有效</code>
                     * @return PreviewType <p>预览模式下产生的预览链接类型 </p><ul><li> **0** :(默认) 文件流 ,点开后下载预览的合同PDF文件 </li><li> **1** :H5链接 ,点开后在浏览器中展示合同的样子</li></ul>注: <code>此参数在NeedPreview 为true时有效</code>
                     * 
                     */
                    int64_t GetPreviewType() const;

                    /**
                     * 设置<p>预览模式下产生的预览链接类型 </p><ul><li> **0** :(默认) 文件流 ,点开后下载预览的合同PDF文件 </li><li> **1** :H5链接 ,点开后在浏览器中展示合同的样子</li></ul>注: <code>此参数在NeedPreview 为true时有效</code>
                     * @param _previewType <p>预览模式下产生的预览链接类型 </p><ul><li> **0** :(默认) 文件流 ,点开后下载预览的合同PDF文件 </li><li> **1** :H5链接 ,点开后在浏览器中展示合同的样子</li></ul>注: <code>此参数在NeedPreview 为true时有效</code>
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
                     * 获取<p>操作者的信息，不用传</p>
                     * @return Operator <p>操作者的信息，不用传</p>
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>操作者的信息，不用传</p>
                     * @param _operator <p>操作者的信息，不用传</p>
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
                     * <p>合同的发起企业和发起人信息，<a href="https://qcloudimg.tencent-cloud.cn/raw/b69f8aad306c40b7b78d096e39b2edbb.png" target="_blank">点击查看合同发起企业和人展示的位置</a></p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  <a href="https://qcloudimg.tencent-cloud.cn/raw/a71872de3d540d55451e3e73a2ad1a6e.png" target="_blank">Agent.AppId</a></li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId（合同的发起企业）</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId （合同的发起人）</li></ul>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>要创建的合同信息列表，最多支持一次创建20个合同</p>
                     */
                    std::vector<FlowInfo> m_flowInfos;
                    bool m_flowInfosHasBeenSet;

                    /**
                     * <p>是否为预览模式，取值如下：</p><ul><li> **false**：非预览模式（默认），会产生合同流程并返回合同流程编号FlowId。</li><li> **true**：预览模式，不产生合同流程，不返回合同流程编号FlowId，而是返回预览链接PreviewUrl，有效期为300秒，用于查看真实发起后合同的样子。 <font color="red">注意： 以预览模式创建的合同仅供查看，因此参与方无法进行签署操作</font></li></ul><p><strong>注1</strong>: 如果预览的文件中指定了动态表格控件，此时此接口返回的是合成前的文档预览链接，合成完成后的文档预览链接需要通过回调通知的方式或使用返回的TaskInfo中的TaskId通过ChannelGetTaskResultApi接口查询得到</p><p><strong>注2</strong>: 预览服务按照合同份额 1:2的比例赠送预览次数。例如：购买 100 份合同，将赠送 200 次合同预览额度。当赠送的预览额度使用完后，如需继续使用预览服务，则需要单独购买预览服务额度。</p>
                     */
                    bool m_needPreview;
                    bool m_needPreviewHasBeenSet;

                    /**
                     * <p>预览模式下产生的预览链接类型 </p><ul><li> **0** :(默认) 文件流 ,点开后下载预览的合同PDF文件 </li><li> **1** :H5链接 ,点开后在浏览器中展示合同的样子</li></ul>注: <code>此参数在NeedPreview 为true时有效</code>
                     */
                    int64_t m_previewType;
                    bool m_previewTypeHasBeenSet;

                    /**
                     * <p>操作者的信息，不用传</p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEFLOWSBYTEMPLATESREQUEST_H_
