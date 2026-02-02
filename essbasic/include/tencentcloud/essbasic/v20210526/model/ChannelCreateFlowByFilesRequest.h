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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWBYFILESREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWBYFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/FlowApproverInfo.h>
#include <tencentcloud/essbasic/v20210526/model/Component.h>
#include <tencentcloud/essbasic/v20210526/model/CcInfo.h>
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
                * ChannelCreateFlowByFiles请求参数结构体
                */
                class ChannelCreateFlowByFilesRequest : public AbstractModel
                {
                public:
                    ChannelCreateFlowByFilesRequest();
                    ~ChannelCreateFlowByFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>合同的发起企业和发起人信息，<a href="https://qcloudimg.tencent-cloud.cn/raw/b69f8aad306c40b7b78d096e39b2edbb.png" target="_blank">点击查看合同发起企业和人展示的位置</a></p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId（合同的发起企业）</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId （合同的发起人）</li></ul>
                     * @return Agent <p>合同的发起企业和发起人信息，<a href="https://qcloudimg.tencent-cloud.cn/raw/b69f8aad306c40b7b78d096e39b2edbb.png" target="_blank">点击查看合同发起企业和人展示的位置</a></p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId（合同的发起企业）</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId （合同的发起人）</li></ul>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>合同的发起企业和发起人信息，<a href="https://qcloudimg.tencent-cloud.cn/raw/b69f8aad306c40b7b78d096e39b2edbb.png" target="_blank">点击查看合同发起企业和人展示的位置</a></p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId（合同的发起企业）</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId （合同的发起人）</li></ul>
                     * @param _agent <p>合同的发起企业和发起人信息，<a href="https://qcloudimg.tencent-cloud.cn/raw/b69f8aad306c40b7b78d096e39b2edbb.png" target="_blank">点击查看合同发起企业和人展示的位置</a></p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId（合同的发起企业）</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId （合同的发起人）</li></ul>
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
                     * 获取<p>合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
                     * @return FlowName <p>合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置<p>合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
                     * @param _flowName <p>合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
                     * 
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     * 
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取<p>合同流程描述信息(可自定义此描述)，最大长度1000个字符。</p>
                     * @return FlowDescription <p>合同流程描述信息(可自定义此描述)，最大长度1000个字符。</p>
                     * 
                     */
                    std::string GetFlowDescription() const;

                    /**
                     * 设置<p>合同流程描述信息(可自定义此描述)，最大长度1000个字符。</p>
                     * @param _flowDescription <p>合同流程描述信息(可自定义此描述)，最大长度1000个字符。</p>
                     * 
                     */
                    void SetFlowDescription(const std::string& _flowDescription);

                    /**
                     * 判断参数 FlowDescription 是否已赋值
                     * @return FlowDescription 是否已赋值
                     * 
                     */
                    bool FlowDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>合同流程的参与方列表, 最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息，不同类型的签署方传参方式可以参考文档 <a href="https://qian.tencent.com/developers/partner/flow_approver">签署方入参指引</a>。</p><p>如果合同流程是有序签署，Approvers列表中参与人的顺序就是默认的签署顺序, 请确保列表中参与人的顺序符合实际签署顺序。</p>
                     * @return FlowApprovers <p>合同流程的参与方列表, 最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息，不同类型的签署方传参方式可以参考文档 <a href="https://qian.tencent.com/developers/partner/flow_approver">签署方入参指引</a>。</p><p>如果合同流程是有序签署，Approvers列表中参与人的顺序就是默认的签署顺序, 请确保列表中参与人的顺序符合实际签署顺序。</p>
                     * 
                     */
                    std::vector<FlowApproverInfo> GetFlowApprovers() const;

                    /**
                     * 设置<p>合同流程的参与方列表, 最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息，不同类型的签署方传参方式可以参考文档 <a href="https://qian.tencent.com/developers/partner/flow_approver">签署方入参指引</a>。</p><p>如果合同流程是有序签署，Approvers列表中参与人的顺序就是默认的签署顺序, 请确保列表中参与人的顺序符合实际签署顺序。</p>
                     * @param _flowApprovers <p>合同流程的参与方列表, 最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息，不同类型的签署方传参方式可以参考文档 <a href="https://qian.tencent.com/developers/partner/flow_approver">签署方入参指引</a>。</p><p>如果合同流程是有序签署，Approvers列表中参与人的顺序就是默认的签署顺序, 请确保列表中参与人的顺序符合实际签署顺序。</p>
                     * 
                     */
                    void SetFlowApprovers(const std::vector<FlowApproverInfo>& _flowApprovers);

                    /**
                     * 判断参数 FlowApprovers 是否已赋值
                     * @return FlowApprovers 是否已赋值
                     * 
                     */
                    bool FlowApproversHasBeenSet() const;

                    /**
                     * 获取<p>本合同流程需包含的PDF文件资源编号列表，通过<a href="https://qian.tencent.com/developers/partnerApis/files/UploadFiles" target="_blank">UploadFiles</a>接口获取PDF文件资源编号。</p><p>注: <code>目前，此接口仅支持单个文件发起。</code></p>
                     * @return FileIds <p>本合同流程需包含的PDF文件资源编号列表，通过<a href="https://qian.tencent.com/developers/partnerApis/files/UploadFiles" target="_blank">UploadFiles</a>接口获取PDF文件资源编号。</p><p>注: <code>目前，此接口仅支持单个文件发起。</code></p>
                     * 
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 设置<p>本合同流程需包含的PDF文件资源编号列表，通过<a href="https://qian.tencent.com/developers/partnerApis/files/UploadFiles" target="_blank">UploadFiles</a>接口获取PDF文件资源编号。</p><p>注: <code>目前，此接口仅支持单个文件发起。</code></p>
                     * @param _fileIds <p>本合同流程需包含的PDF文件资源编号列表，通过<a href="https://qian.tencent.com/developers/partnerApis/files/UploadFiles" target="_blank">UploadFiles</a>接口获取PDF文件资源编号。</p><p>注: <code>目前，此接口仅支持单个文件发起。</code></p>
                     * 
                     */
                    void SetFileIds(const std::vector<std::string>& _fileIds);

                    /**
                     * 判断参数 FileIds 是否已赋值
                     * @return FileIds 是否已赋值
                     * 
                     */
                    bool FileIdsHasBeenSet() const;

                    /**
                     * 获取<p>模板或者合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体</p><ul><li>单行文本控件</li><li>多行文本控件</li><li>勾选框控件</li><li>数字控件</li><li>图片控件</li><li>数据表格等填写控件</li></ul><p><img src="https://qcloudimg.tencent-cloud.cn/raw/e004195ee4cb98a7f9bc12eb4a0a0b77.png" alt="image"></p>
                     * @return Components <p>模板或者合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体</p><ul><li>单行文本控件</li><li>多行文本控件</li><li>勾选框控件</li><li>数字控件</li><li>图片控件</li><li>数据表格等填写控件</li></ul><p><img src="https://qcloudimg.tencent-cloud.cn/raw/e004195ee4cb98a7f9bc12eb4a0a0b77.png" alt="image"></p>
                     * 
                     */
                    std::vector<Component> GetComponents() const;

                    /**
                     * 设置<p>模板或者合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体</p><ul><li>单行文本控件</li><li>多行文本控件</li><li>勾选框控件</li><li>数字控件</li><li>图片控件</li><li>数据表格等填写控件</li></ul><p><img src="https://qcloudimg.tencent-cloud.cn/raw/e004195ee4cb98a7f9bc12eb4a0a0b77.png" alt="image"></p>
                     * @param _components <p>模板或者合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体</p><ul><li>单行文本控件</li><li>多行文本控件</li><li>勾选框控件</li><li>数字控件</li><li>图片控件</li><li>数据表格等填写控件</li></ul><p><img src="https://qcloudimg.tencent-cloud.cn/raw/e004195ee4cb98a7f9bc12eb4a0a0b77.png" alt="image"></p>
                     * 
                     */
                    void SetComponents(const std::vector<Component>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取<p>合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的365天时截止。<br>如果在签署截止时间前未完成签署，则合同状态会变为已过期，导致合同作废。</p>
                     * @return Deadline <p>合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的365天时截止。<br>如果在签署截止时间前未完成签署，则合同状态会变为已过期，导致合同作废。</p>
                     * 
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置<p>合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的365天时截止。<br>如果在签署截止时间前未完成签署，则合同状态会变为已过期，导致合同作废。</p>
                     * @param _deadline <p>合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的365天时截止。<br>如果在签署截止时间前未完成签署，则合同状态会变为已过期，导致合同作废。</p>
                     * 
                     */
                    void SetDeadline(const int64_t& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取<p>该字段已废弃，请使用【应用号配置】中的回调地址</p>
                     * @return CallbackUrl <p>该字段已废弃，请使用【应用号配置】中的回调地址</p>
                     * @deprecated
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置<p>该字段已废弃，请使用【应用号配置】中的回调地址</p>
                     * @param _callbackUrl <p>该字段已废弃，请使用【应用号配置】中的回调地址</p>
                     * @deprecated
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * @deprecated
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取<p>合同流程的签署顺序类型：</p><ul><li> **false**：(默认)有序签署, 本合同多个参与人需要依次签署 </li><li> **true**：无序签署, 本合同多个参与人没有先后签署限制</li></ul>**注**: <code>有序签署时以传入FlowApprovers数组的顺序作为签署顺序</code>
                     * @return Unordered <p>合同流程的签署顺序类型：</p><ul><li> **false**：(默认)有序签署, 本合同多个参与人需要依次签署 </li><li> **true**：无序签署, 本合同多个参与人没有先后签署限制</li></ul>**注**: <code>有序签署时以传入FlowApprovers数组的顺序作为签署顺序</code>
                     * 
                     */
                    bool GetUnordered() const;

                    /**
                     * 设置<p>合同流程的签署顺序类型：</p><ul><li> **false**：(默认)有序签署, 本合同多个参与人需要依次签署 </li><li> **true**：无序签署, 本合同多个参与人没有先后签署限制</li></ul>**注**: <code>有序签署时以传入FlowApprovers数组的顺序作为签署顺序</code>
                     * @param _unordered <p>合同流程的签署顺序类型：</p><ul><li> **false**：(默认)有序签署, 本合同多个参与人需要依次签署 </li><li> **true**：无序签署, 本合同多个参与人没有先后签署限制</li></ul>**注**: <code>有序签署时以传入FlowApprovers数组的顺序作为签署顺序</code>
                     * 
                     */
                    void SetUnordered(const bool& _unordered);

                    /**
                     * 判断参数 Unordered 是否已赋值
                     * @return Unordered 是否已赋值
                     * 
                     */
                    bool UnorderedHasBeenSet() const;

                    /**
                     * 获取<p>合同流程的类别分类（可自定义名称，如销售合同/入职合同等），最大长度为255个字符，仅限中文、字母、数字和下划线组成。</p>
                     * @return FlowType <p>合同流程的类别分类（可自定义名称，如销售合同/入职合同等），最大长度为255个字符，仅限中文、字母、数字和下划线组成。</p>
                     * 
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置<p>合同流程的类别分类（可自定义名称，如销售合同/入职合同等），最大长度为255个字符，仅限中文、字母、数字和下划线组成。</p>
                     * @param _flowType <p>合同流程的类别分类（可自定义名称，如销售合同/入职合同等），最大长度为255个字符，仅限中文、字母、数字和下划线组成。</p>
                     * 
                     */
                    void SetFlowType(const std::string& _flowType);

                    /**
                     * 判断参数 FlowType 是否已赋值
                     * @return FlowType 是否已赋值
                     * 
                     */
                    bool FlowTypeHasBeenSet() const;

                    /**
                     * 获取<p>您可以自定义腾讯电子签小程序合同列表页展示的合同内容模板，模板中支持以下变量：</p><ul><li>{合同名称}   </li><li>{发起方企业} </li><li>{发起方姓名} </li><li>{签署方N企业}</li><li>{签署方N姓名}</li></ul>其中，N表示签署方的编号，从1开始，不能超过签署人的数量。<p>例如，如果是腾讯公司张三发给李四名称为“租房合同”的合同，您可以将此字段设置为：<code>合同名称:{合同名称};发起方: {发起方企业}({发起方姓名});签署方:{签署方1姓名}</code>，则小程序中列表页展示此合同为以下样子</p><p>合同名称：租房合同<br>发起方：腾讯公司(张三)<br>签署方：李四</p>
                     * @return CustomShowMap <p>您可以自定义腾讯电子签小程序合同列表页展示的合同内容模板，模板中支持以下变量：</p><ul><li>{合同名称}   </li><li>{发起方企业} </li><li>{发起方姓名} </li><li>{签署方N企业}</li><li>{签署方N姓名}</li></ul>其中，N表示签署方的编号，从1开始，不能超过签署人的数量。<p>例如，如果是腾讯公司张三发给李四名称为“租房合同”的合同，您可以将此字段设置为：<code>合同名称:{合同名称};发起方: {发起方企业}({发起方姓名});签署方:{签署方1姓名}</code>，则小程序中列表页展示此合同为以下样子</p><p>合同名称：租房合同<br>发起方：腾讯公司(张三)<br>签署方：李四</p>
                     * 
                     */
                    std::string GetCustomShowMap() const;

                    /**
                     * 设置<p>您可以自定义腾讯电子签小程序合同列表页展示的合同内容模板，模板中支持以下变量：</p><ul><li>{合同名称}   </li><li>{发起方企业} </li><li>{发起方姓名} </li><li>{签署方N企业}</li><li>{签署方N姓名}</li></ul>其中，N表示签署方的编号，从1开始，不能超过签署人的数量。<p>例如，如果是腾讯公司张三发给李四名称为“租房合同”的合同，您可以将此字段设置为：<code>合同名称:{合同名称};发起方: {发起方企业}({发起方姓名});签署方:{签署方1姓名}</code>，则小程序中列表页展示此合同为以下样子</p><p>合同名称：租房合同<br>发起方：腾讯公司(张三)<br>签署方：李四</p>
                     * @param _customShowMap <p>您可以自定义腾讯电子签小程序合同列表页展示的合同内容模板，模板中支持以下变量：</p><ul><li>{合同名称}   </li><li>{发起方企业} </li><li>{发起方姓名} </li><li>{签署方N企业}</li><li>{签署方N姓名}</li></ul>其中，N表示签署方的编号，从1开始，不能超过签署人的数量。<p>例如，如果是腾讯公司张三发给李四名称为“租房合同”的合同，您可以将此字段设置为：<code>合同名称:{合同名称};发起方: {发起方企业}({发起方姓名});签署方:{签署方1姓名}</code>，则小程序中列表页展示此合同为以下样子</p><p>合同名称：租房合同<br>发起方：腾讯公司(张三)<br>签署方：李四</p>
                     * 
                     */
                    void SetCustomShowMap(const std::string& _customShowMap);

                    /**
                     * 判断参数 CustomShowMap 是否已赋值
                     * @return CustomShowMap 是否已赋值
                     * 
                     */
                    bool CustomShowMapHasBeenSet() const;

                    /**
                     * 获取<p>调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 1000长度。</p><p>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/partner/callback_types_contracts_sign" target="_blank">回调通知</a>模块。</p>
                     * @return CustomerData <p>调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 1000长度。</p><p>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/partner/callback_types_contracts_sign" target="_blank">回调通知</a>模块。</p>
                     * 
                     */
                    std::string GetCustomerData() const;

                    /**
                     * 设置<p>调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 1000长度。</p><p>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/partner/callback_types_contracts_sign" target="_blank">回调通知</a>模块。</p>
                     * @param _customerData <p>调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 1000长度。</p><p>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/partner/callback_types_contracts_sign" target="_blank">回调通知</a>模块。</p>
                     * 
                     */
                    void SetCustomerData(const std::string& _customerData);

                    /**
                     * 判断参数 CustomerData 是否已赋值
                     * @return CustomerData 是否已赋值
                     * 
                     */
                    bool CustomerDataHasBeenSet() const;

                    /**
                     * 获取<p>发起方企业的签署人进行签署操作前，是否需要企业内部走审批流程，取值如下：</p><ul><li> **false**：（默认）不需要审批，直接签署。</li><li> **true**：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。</li></ul>企业可以通过ChannelCreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果<ul><li> 如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。</li><li> 如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。</li></ul>注：<code>此功能可用于与企业内部的审批流程进行关联，支持手动、静默签署合同</code>
                     * @return NeedSignReview <p>发起方企业的签署人进行签署操作前，是否需要企业内部走审批流程，取值如下：</p><ul><li> **false**：（默认）不需要审批，直接签署。</li><li> **true**：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。</li></ul>企业可以通过ChannelCreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果<ul><li> 如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。</li><li> 如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。</li></ul>注：<code>此功能可用于与企业内部的审批流程进行关联，支持手动、静默签署合同</code>
                     * 
                     */
                    bool GetNeedSignReview() const;

                    /**
                     * 设置<p>发起方企业的签署人进行签署操作前，是否需要企业内部走审批流程，取值如下：</p><ul><li> **false**：（默认）不需要审批，直接签署。</li><li> **true**：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。</li></ul>企业可以通过ChannelCreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果<ul><li> 如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。</li><li> 如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。</li></ul>注：<code>此功能可用于与企业内部的审批流程进行关联，支持手动、静默签署合同</code>
                     * @param _needSignReview <p>发起方企业的签署人进行签署操作前，是否需要企业内部走审批流程，取值如下：</p><ul><li> **false**：（默认）不需要审批，直接签署。</li><li> **true**：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。</li></ul>企业可以通过ChannelCreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果<ul><li> 如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。</li><li> 如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。</li></ul>注：<code>此功能可用于与企业内部的审批流程进行关联，支持手动、静默签署合同</code>
                     * 
                     */
                    void SetNeedSignReview(const bool& _needSignReview);

                    /**
                     * 判断参数 NeedSignReview 是否已赋值
                     * @return NeedSignReview 是否已赋值
                     * 
                     */
                    bool NeedSignReviewHasBeenSet() const;

                    /**
                     * 获取<p>签署人校验方式<br>VerifyCheck: 人脸识别（默认）<br>MobileCheck：手机号验证，用户手机号和参与方手机号（ApproverMobile）相同即可查看合同内容（当手写签名方式为OCR_ESIGN时，该校验方式无效，因为这种签名方式依赖实名认证）<br>参数说明：可选人脸识别或手机号验证两种方式，若选择后者，未实名个人签署方在签署合同时，无需经过实名认证和意愿确认两次人脸识别，该能力仅适用于个人签署方。</p>
                     * @return ApproverVerifyType <p>签署人校验方式<br>VerifyCheck: 人脸识别（默认）<br>MobileCheck：手机号验证，用户手机号和参与方手机号（ApproverMobile）相同即可查看合同内容（当手写签名方式为OCR_ESIGN时，该校验方式无效，因为这种签名方式依赖实名认证）<br>参数说明：可选人脸识别或手机号验证两种方式，若选择后者，未实名个人签署方在签署合同时，无需经过实名认证和意愿确认两次人脸识别，该能力仅适用于个人签署方。</p>
                     * 
                     */
                    std::string GetApproverVerifyType() const;

                    /**
                     * 设置<p>签署人校验方式<br>VerifyCheck: 人脸识别（默认）<br>MobileCheck：手机号验证，用户手机号和参与方手机号（ApproverMobile）相同即可查看合同内容（当手写签名方式为OCR_ESIGN时，该校验方式无效，因为这种签名方式依赖实名认证）<br>参数说明：可选人脸识别或手机号验证两种方式，若选择后者，未实名个人签署方在签署合同时，无需经过实名认证和意愿确认两次人脸识别，该能力仅适用于个人签署方。</p>
                     * @param _approverVerifyType <p>签署人校验方式<br>VerifyCheck: 人脸识别（默认）<br>MobileCheck：手机号验证，用户手机号和参与方手机号（ApproverMobile）相同即可查看合同内容（当手写签名方式为OCR_ESIGN时，该校验方式无效，因为这种签名方式依赖实名认证）<br>参数说明：可选人脸识别或手机号验证两种方式，若选择后者，未实名个人签署方在签署合同时，无需经过实名认证和意愿确认两次人脸识别，该能力仅适用于个人签署方。</p>
                     * 
                     */
                    void SetApproverVerifyType(const std::string& _approverVerifyType);

                    /**
                     * 判断参数 ApproverVerifyType 是否已赋值
                     * @return ApproverVerifyType 是否已赋值
                     * 
                     */
                    bool ApproverVerifyTypeHasBeenSet() const;

                    /**
                     * 获取<p>签署方签署控件（印章/签名等）的生成方式：</p><ul><li> **0**：在合同流程发起时，由发起人指定签署方的签署控件的位置和数量。</li><li> **1**：签署方在签署时自行添加签署控件，可以拖动位置和控制数量。</li></ul><p><strong>注</strong>:<br>1.发起后添加控件功能不支持添加签批控件<br>2.签署方在签署时自行添加签署控件仅支持电子签小程序或web控制台签署，不支持H5</p>
                     * @return SignBeanTag <p>签署方签署控件（印章/签名等）的生成方式：</p><ul><li> **0**：在合同流程发起时，由发起人指定签署方的签署控件的位置和数量。</li><li> **1**：签署方在签署时自行添加签署控件，可以拖动位置和控制数量。</li></ul><p><strong>注</strong>:<br>1.发起后添加控件功能不支持添加签批控件<br>2.签署方在签署时自行添加签署控件仅支持电子签小程序或web控制台签署，不支持H5</p>
                     * 
                     */
                    int64_t GetSignBeanTag() const;

                    /**
                     * 设置<p>签署方签署控件（印章/签名等）的生成方式：</p><ul><li> **0**：在合同流程发起时，由发起人指定签署方的签署控件的位置和数量。</li><li> **1**：签署方在签署时自行添加签署控件，可以拖动位置和控制数量。</li></ul><p><strong>注</strong>:<br>1.发起后添加控件功能不支持添加签批控件<br>2.签署方在签署时自行添加签署控件仅支持电子签小程序或web控制台签署，不支持H5</p>
                     * @param _signBeanTag <p>签署方签署控件（印章/签名等）的生成方式：</p><ul><li> **0**：在合同流程发起时，由发起人指定签署方的签署控件的位置和数量。</li><li> **1**：签署方在签署时自行添加签署控件，可以拖动位置和控制数量。</li></ul><p><strong>注</strong>:<br>1.发起后添加控件功能不支持添加签批控件<br>2.签署方在签署时自行添加签署控件仅支持电子签小程序或web控制台签署，不支持H5</p>
                     * 
                     */
                    void SetSignBeanTag(const int64_t& _signBeanTag);

                    /**
                     * 判断参数 SignBeanTag 是否已赋值
                     * @return SignBeanTag 是否已赋值
                     * 
                     */
                    bool SignBeanTagHasBeenSet() const;

                    /**
                     * 获取<p>合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。</p><p><b>注</b></p><ol><li>抄送人名单中可以包括自然人以及本企业的员工（本企业员工必须已经完成认证并加入企业）。</li><li>请确保抄送人列表中的成员不与任何签署人重复。</li></ol>
                     * @return CcInfos <p>合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。</p><p><b>注</b></p><ol><li>抄送人名单中可以包括自然人以及本企业的员工（本企业员工必须已经完成认证并加入企业）。</li><li>请确保抄送人列表中的成员不与任何签署人重复。</li></ol>
                     * 
                     */
                    std::vector<CcInfo> GetCcInfos() const;

                    /**
                     * 设置<p>合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。</p><p><b>注</b></p><ol><li>抄送人名单中可以包括自然人以及本企业的员工（本企业员工必须已经完成认证并加入企业）。</li><li>请确保抄送人列表中的成员不与任何签署人重复。</li></ol>
                     * @param _ccInfos <p>合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。</p><p><b>注</b></p><ol><li>抄送人名单中可以包括自然人以及本企业的员工（本企业员工必须已经完成认证并加入企业）。</li><li>请确保抄送人列表中的成员不与任何签署人重复。</li></ol>
                     * 
                     */
                    void SetCcInfos(const std::vector<CcInfo>& _ccInfos);

                    /**
                     * 判断参数 CcInfos 是否已赋值
                     * @return CcInfos 是否已赋值
                     * 
                     */
                    bool CcInfosHasBeenSet() const;

                    /**
                     * 获取<p>可以设置以下时间节点来给抄送人发送短信通知来查看合同内容：</p><ul><li> **0**：合同发起时通知（默认值）</li><li> **1**：签署完成后通知</li></ul>
                     * @return CcNotifyType <p>可以设置以下时间节点来给抄送人发送短信通知来查看合同内容：</p><ul><li> **0**：合同发起时通知（默认值）</li><li> **1**：签署完成后通知</li></ul>
                     * 
                     */
                    int64_t GetCcNotifyType() const;

                    /**
                     * 设置<p>可以设置以下时间节点来给抄送人发送短信通知来查看合同内容：</p><ul><li> **0**：合同发起时通知（默认值）</li><li> **1**：签署完成后通知</li></ul>
                     * @param _ccNotifyType <p>可以设置以下时间节点来给抄送人发送短信通知来查看合同内容：</p><ul><li> **0**：合同发起时通知（默认值）</li><li> **1**：签署完成后通知</li></ul>
                     * 
                     */
                    void SetCcNotifyType(const int64_t& _ccNotifyType);

                    /**
                     * 判断参数 CcNotifyType 是否已赋值
                     * @return CcNotifyType 是否已赋值
                     * 
                     */
                    bool CcNotifyTypeHasBeenSet() const;

                    /**
                     * 获取<p>个人自动签名的使用场景包括以下, 个人自动签署(即ApproverType设置成个人自动签署时)业务此值必传：</p><ul><li> **E_PRESCRIPTION_AUTO_SIGN**：电子处方单（医疗自动签）  </li><li> **OTHER** :  通用场景</li></ul>注: <code>个人自动签名场景是白名单功能，使用前请与对接的客户经理联系沟通。</code>
                     * @return AutoSignScene <p>个人自动签名的使用场景包括以下, 个人自动签署(即ApproverType设置成个人自动签署时)业务此值必传：</p><ul><li> **E_PRESCRIPTION_AUTO_SIGN**：电子处方单（医疗自动签）  </li><li> **OTHER** :  通用场景</li></ul>注: <code>个人自动签名场景是白名单功能，使用前请与对接的客户经理联系沟通。</code>
                     * 
                     */
                    std::string GetAutoSignScene() const;

                    /**
                     * 设置<p>个人自动签名的使用场景包括以下, 个人自动签署(即ApproverType设置成个人自动签署时)业务此值必传：</p><ul><li> **E_PRESCRIPTION_AUTO_SIGN**：电子处方单（医疗自动签）  </li><li> **OTHER** :  通用场景</li></ul>注: <code>个人自动签名场景是白名单功能，使用前请与对接的客户经理联系沟通。</code>
                     * @param _autoSignScene <p>个人自动签名的使用场景包括以下, 个人自动签署(即ApproverType设置成个人自动签署时)业务此值必传：</p><ul><li> **E_PRESCRIPTION_AUTO_SIGN**：电子处方单（医疗自动签）  </li><li> **OTHER** :  通用场景</li></ul>注: <code>个人自动签名场景是白名单功能，使用前请与对接的客户经理联系沟通。</code>
                     * 
                     */
                    void SetAutoSignScene(const std::string& _autoSignScene);

                    /**
                     * 判断参数 AutoSignScene 是否已赋值
                     * @return AutoSignScene 是否已赋值
                     * 
                     */
                    bool AutoSignSceneHasBeenSet() const;

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

                    /**
                     * 获取<p>在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:<img src="https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png" alt="FlowDisplayType"></p>
                     * @return FlowDisplayType <p>在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:<img src="https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png" alt="FlowDisplayType"></p>
                     * 
                     */
                    int64_t GetFlowDisplayType() const;

                    /**
                     * 设置<p>在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:<img src="https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png" alt="FlowDisplayType"></p>
                     * @param _flowDisplayType <p>在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:<img src="https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png" alt="FlowDisplayType"></p>
                     * 
                     */
                    void SetFlowDisplayType(const int64_t& _flowDisplayType);

                    /**
                     * 判断参数 FlowDisplayType 是否已赋值
                     * @return FlowDisplayType 是否已赋值
                     * 
                     */
                    bool FlowDisplayTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否为预览模式，取值如下： <ul><li> <strong>false</strong>：非预览模式（默认），会产生合同流程并返回合同流程编号FlowId。</li> <li> <strong>true</strong>：预览模式，不产生合同流程，不返回合同流程编号FlowId，而是返回预览链接PreviewUrl，有效期为300秒，用于查看真实发起后合同的样子。</li></ul></p>
                     * @return NeedPreview <p>是否为预览模式，取值如下： <ul><li> <strong>false</strong>：非预览模式（默认），会产生合同流程并返回合同流程编号FlowId。</li> <li> <strong>true</strong>：预览模式，不产生合同流程，不返回合同流程编号FlowId，而是返回预览链接PreviewUrl，有效期为300秒，用于查看真实发起后合同的样子。</li></ul></p>
                     * 
                     */
                    bool GetNeedPreview() const;

                    /**
                     * 设置<p>是否为预览模式，取值如下： <ul><li> <strong>false</strong>：非预览模式（默认），会产生合同流程并返回合同流程编号FlowId。</li> <li> <strong>true</strong>：预览模式，不产生合同流程，不返回合同流程编号FlowId，而是返回预览链接PreviewUrl，有效期为300秒，用于查看真实发起后合同的样子。</li></ul></p>
                     * @param _needPreview <p>是否为预览模式，取值如下： <ul><li> <strong>false</strong>：非预览模式（默认），会产生合同流程并返回合同流程编号FlowId。</li> <li> <strong>true</strong>：预览模式，不产生合同流程，不返回合同流程编号FlowId，而是返回预览链接PreviewUrl，有效期为300秒，用于查看真实发起后合同的样子。</li></ul></p>
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
                     * 获取<p>是否开启动态合同（动态签署人2.0）</p><ul><li> **false** :(默认) 不开启动态合同（动态签署人2.0）</li><li> **true** :开启动态合同（动态签署人2.0）,发起后可继续追加合同签署人</li></ul>
                     * @return OpenDynamicFlow <p>是否开启动态合同（动态签署人2.0）</p><ul><li> **false** :(默认) 不开启动态合同（动态签署人2.0）</li><li> **true** :开启动态合同（动态签署人2.0）,发起后可继续追加合同签署人</li></ul>
                     * @deprecated
                     */
                    bool GetOpenDynamicFlow() const;

                    /**
                     * 设置<p>是否开启动态合同（动态签署人2.0）</p><ul><li> **false** :(默认) 不开启动态合同（动态签署人2.0）</li><li> **true** :开启动态合同（动态签署人2.0）,发起后可继续追加合同签署人</li></ul>
                     * @param _openDynamicFlow <p>是否开启动态合同（动态签署人2.0）</p><ul><li> **false** :(默认) 不开启动态合同（动态签署人2.0）</li><li> **true** :开启动态合同（动态签署人2.0）,发起后可继续追加合同签署人</li></ul>
                     * @deprecated
                     */
                    void SetOpenDynamicFlow(const bool& _openDynamicFlow);

                    /**
                     * 判断参数 OpenDynamicFlow 是否已赋值
                     * @return OpenDynamicFlow 是否已赋值
                     * @deprecated
                     */
                    bool OpenDynamicFlowHasBeenSet() const;

                    /**
                     * 获取<p>是否开启动态合同（动态签署人2.0）<ul><li> <strong>false</strong> :(默认) 不开启动态合同（动态签署人2.0）</li><li> <strong>true</strong> :开启动态合同（动态签署人2.0）,发起时不设置签署方，发起后可继续追加合同签署人</li></ul></p>
                     * @return OpenDynamicSignFlow <p>是否开启动态合同（动态签署人2.0）<ul><li> <strong>false</strong> :(默认) 不开启动态合同（动态签署人2.0）</li><li> <strong>true</strong> :开启动态合同（动态签署人2.0）,发起时不设置签署方，发起后可继续追加合同签署人</li></ul></p>
                     * 
                     */
                    bool GetOpenDynamicSignFlow() const;

                    /**
                     * 设置<p>是否开启动态合同（动态签署人2.0）<ul><li> <strong>false</strong> :(默认) 不开启动态合同（动态签署人2.0）</li><li> <strong>true</strong> :开启动态合同（动态签署人2.0）,发起时不设置签署方，发起后可继续追加合同签署人</li></ul></p>
                     * @param _openDynamicSignFlow <p>是否开启动态合同（动态签署人2.0）<ul><li> <strong>false</strong> :(默认) 不开启动态合同（动态签署人2.0）</li><li> <strong>true</strong> :开启动态合同（动态签署人2.0）,发起时不设置签署方，发起后可继续追加合同签署人</li></ul></p>
                     * 
                     */
                    void SetOpenDynamicSignFlow(const bool& _openDynamicSignFlow);

                    /**
                     * 判断参数 OpenDynamicSignFlow 是否已赋值
                     * @return OpenDynamicSignFlow 是否已赋值
                     * 
                     */
                    bool OpenDynamicSignFlowHasBeenSet() const;

                private:

                    /**
                     * <p>合同的发起企业和发起人信息，<a href="https://qcloudimg.tencent-cloud.cn/raw/b69f8aad306c40b7b78d096e39b2edbb.png" target="_blank">点击查看合同发起企业和人展示的位置</a></p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId（合同的发起企业）</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId （合同的发起人）</li></ul>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * <p>合同流程描述信息(可自定义此描述)，最大长度1000个字符。</p>
                     */
                    std::string m_flowDescription;
                    bool m_flowDescriptionHasBeenSet;

                    /**
                     * <p>合同流程的参与方列表, 最多可支持50个参与方，可在列表中指定企业B端签署方和个人C端签署方的联系和认证方式等信息，不同类型的签署方传参方式可以参考文档 <a href="https://qian.tencent.com/developers/partner/flow_approver">签署方入参指引</a>。</p><p>如果合同流程是有序签署，Approvers列表中参与人的顺序就是默认的签署顺序, 请确保列表中参与人的顺序符合实际签署顺序。</p>
                     */
                    std::vector<FlowApproverInfo> m_flowApprovers;
                    bool m_flowApproversHasBeenSet;

                    /**
                     * <p>本合同流程需包含的PDF文件资源编号列表，通过<a href="https://qian.tencent.com/developers/partnerApis/files/UploadFiles" target="_blank">UploadFiles</a>接口获取PDF文件资源编号。</p><p>注: <code>目前，此接口仅支持单个文件发起。</code></p>
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * <p>模板或者合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体</p><ul><li>单行文本控件</li><li>多行文本控件</li><li>勾选框控件</li><li>数字控件</li><li>图片控件</li><li>数据表格等填写控件</li></ul><p><img src="https://qcloudimg.tencent-cloud.cn/raw/e004195ee4cb98a7f9bc12eb4a0a0b77.png" alt="image"></p>
                     */
                    std::vector<Component> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * <p>合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的365天时截止。<br>如果在签署截止时间前未完成签署，则合同状态会变为已过期，导致合同作废。</p>
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * <p>该字段已废弃，请使用【应用号配置】中的回调地址</p>
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * <p>合同流程的签署顺序类型：</p><ul><li> **false**：(默认)有序签署, 本合同多个参与人需要依次签署 </li><li> **true**：无序签署, 本合同多个参与人没有先后签署限制</li></ul>**注**: <code>有序签署时以传入FlowApprovers数组的顺序作为签署顺序</code>
                     */
                    bool m_unordered;
                    bool m_unorderedHasBeenSet;

                    /**
                     * <p>合同流程的类别分类（可自定义名称，如销售合同/入职合同等），最大长度为255个字符，仅限中文、字母、数字和下划线组成。</p>
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * <p>您可以自定义腾讯电子签小程序合同列表页展示的合同内容模板，模板中支持以下变量：</p><ul><li>{合同名称}   </li><li>{发起方企业} </li><li>{发起方姓名} </li><li>{签署方N企业}</li><li>{签署方N姓名}</li></ul>其中，N表示签署方的编号，从1开始，不能超过签署人的数量。<p>例如，如果是腾讯公司张三发给李四名称为“租房合同”的合同，您可以将此字段设置为：<code>合同名称:{合同名称};发起方: {发起方企业}({发起方姓名});签署方:{签署方1姓名}</code>，则小程序中列表页展示此合同为以下样子</p><p>合同名称：租房合同<br>发起方：腾讯公司(张三)<br>签署方：李四</p>
                     */
                    std::string m_customShowMap;
                    bool m_customShowMapHasBeenSet;

                    /**
                     * <p>调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 1000长度。</p><p>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/partner/callback_types_contracts_sign" target="_blank">回调通知</a>模块。</p>
                     */
                    std::string m_customerData;
                    bool m_customerDataHasBeenSet;

                    /**
                     * <p>发起方企业的签署人进行签署操作前，是否需要企业内部走审批流程，取值如下：</p><ul><li> **false**：（默认）不需要审批，直接签署。</li><li> **true**：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。</li></ul>企业可以通过ChannelCreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果<ul><li> 如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。</li><li> 如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。</li></ul>注：<code>此功能可用于与企业内部的审批流程进行关联，支持手动、静默签署合同</code>
                     */
                    bool m_needSignReview;
                    bool m_needSignReviewHasBeenSet;

                    /**
                     * <p>签署人校验方式<br>VerifyCheck: 人脸识别（默认）<br>MobileCheck：手机号验证，用户手机号和参与方手机号（ApproverMobile）相同即可查看合同内容（当手写签名方式为OCR_ESIGN时，该校验方式无效，因为这种签名方式依赖实名认证）<br>参数说明：可选人脸识别或手机号验证两种方式，若选择后者，未实名个人签署方在签署合同时，无需经过实名认证和意愿确认两次人脸识别，该能力仅适用于个人签署方。</p>
                     */
                    std::string m_approverVerifyType;
                    bool m_approverVerifyTypeHasBeenSet;

                    /**
                     * <p>签署方签署控件（印章/签名等）的生成方式：</p><ul><li> **0**：在合同流程发起时，由发起人指定签署方的签署控件的位置和数量。</li><li> **1**：签署方在签署时自行添加签署控件，可以拖动位置和控制数量。</li></ul><p><strong>注</strong>:<br>1.发起后添加控件功能不支持添加签批控件<br>2.签署方在签署时自行添加签署控件仅支持电子签小程序或web控制台签署，不支持H5</p>
                     */
                    int64_t m_signBeanTag;
                    bool m_signBeanTagHasBeenSet;

                    /**
                     * <p>合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。</p><p><b>注</b></p><ol><li>抄送人名单中可以包括自然人以及本企业的员工（本企业员工必须已经完成认证并加入企业）。</li><li>请确保抄送人列表中的成员不与任何签署人重复。</li></ol>
                     */
                    std::vector<CcInfo> m_ccInfos;
                    bool m_ccInfosHasBeenSet;

                    /**
                     * <p>可以设置以下时间节点来给抄送人发送短信通知来查看合同内容：</p><ul><li> **0**：合同发起时通知（默认值）</li><li> **1**：签署完成后通知</li></ul>
                     */
                    int64_t m_ccNotifyType;
                    bool m_ccNotifyTypeHasBeenSet;

                    /**
                     * <p>个人自动签名的使用场景包括以下, 个人自动签署(即ApproverType设置成个人自动签署时)业务此值必传：</p><ul><li> **E_PRESCRIPTION_AUTO_SIGN**：电子处方单（医疗自动签）  </li><li> **OTHER** :  通用场景</li></ul>注: <code>个人自动签名场景是白名单功能，使用前请与对接的客户经理联系沟通。</code>
                     */
                    std::string m_autoSignScene;
                    bool m_autoSignSceneHasBeenSet;

                    /**
                     * <p>操作者的信息，不用传</p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:<img src="https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png" alt="FlowDisplayType"></p>
                     */
                    int64_t m_flowDisplayType;
                    bool m_flowDisplayTypeHasBeenSet;

                    /**
                     * <p>是否为预览模式，取值如下： <ul><li> <strong>false</strong>：非预览模式（默认），会产生合同流程并返回合同流程编号FlowId。</li> <li> <strong>true</strong>：预览模式，不产生合同流程，不返回合同流程编号FlowId，而是返回预览链接PreviewUrl，有效期为300秒，用于查看真实发起后合同的样子。</li></ul></p>
                     */
                    bool m_needPreview;
                    bool m_needPreviewHasBeenSet;

                    /**
                     * <p>预览模式下产生的预览链接类型 </p><ul><li> **0** :(默认) 文件流 ,点开后下载预览的合同PDF文件 </li><li> **1** :H5链接 ,点开后在浏览器中展示合同的样子</li></ul>注: <code>此参数在NeedPreview 为true时有效</code>
                     */
                    int64_t m_previewType;
                    bool m_previewTypeHasBeenSet;

                    /**
                     * <p>是否开启动态合同（动态签署人2.0）</p><ul><li> **false** :(默认) 不开启动态合同（动态签署人2.0）</li><li> **true** :开启动态合同（动态签署人2.0）,发起后可继续追加合同签署人</li></ul>
                     */
                    bool m_openDynamicFlow;
                    bool m_openDynamicFlowHasBeenSet;

                    /**
                     * <p>是否开启动态合同（动态签署人2.0）<ul><li> <strong>false</strong> :(默认) 不开启动态合同（动态签署人2.0）</li><li> <strong>true</strong> :开启动态合同（动态签署人2.0）,发起时不设置签署方，发起后可继续追加合同签署人</li></ul></p>
                     */
                    bool m_openDynamicSignFlow;
                    bool m_openDynamicSignFlowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWBYFILESREQUEST_H_
