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
#include <tencentcloud/essbasic/v20210526/model/FlowOperateLimit.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 此结构体 (FlowInfo) 用于描述签署流程信息。
                */
                class FlowInfo : public AbstractModel
                {
                public:
                    FlowInfo();
                    ~FlowInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的365天时截止。<br>如果在签署截止时间前未完成签署，则合同状态会变为已过期，导致合同作废。<br>示例值：1604912664</p>
                     * @return Deadline <p>合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的365天时截止。<br>如果在签署截止时间前未完成签署，则合同状态会变为已过期，导致合同作废。<br>示例值：1604912664</p>
                     * 
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置<p>合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的365天时截止。<br>如果在签署截止时间前未完成签署，则合同状态会变为已过期，导致合同作废。<br>示例值：1604912664</p>
                     * @param _deadline <p>合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的365天时截止。<br>如果在签署截止时间前未完成签署，则合同状态会变为已过期，导致合同作废。<br>示例值：1604912664</p>
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
                     * 获取<p>用户配置的合同模板ID，会基于此模板创建合同文档，为32位字符串。<br>如果使用模板发起接口，此参数为必填。</p><p>可以通过<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateConsoleLoginUrl" target="_blank">生成子客登录链接</a>登录企业控制台, 在<strong>企业模板</strong>中得到合同模板ID。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e988be12bf28a89b4716aed4502c2e02.png">点击产看模板Id在控制台上的位置</a></p>
                     * @return TemplateId <p>用户配置的合同模板ID，会基于此模板创建合同文档，为32位字符串。<br>如果使用模板发起接口，此参数为必填。</p><p>可以通过<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateConsoleLoginUrl" target="_blank">生成子客登录链接</a>登录企业控制台, 在<strong>企业模板</strong>中得到合同模板ID。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e988be12bf28a89b4716aed4502c2e02.png">点击产看模板Id在控制台上的位置</a></p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>用户配置的合同模板ID，会基于此模板创建合同文档，为32位字符串。<br>如果使用模板发起接口，此参数为必填。</p><p>可以通过<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateConsoleLoginUrl" target="_blank">生成子客登录链接</a>登录企业控制台, 在<strong>企业模板</strong>中得到合同模板ID。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e988be12bf28a89b4716aed4502c2e02.png">点击产看模板Id在控制台上的位置</a></p>
                     * @param _templateId <p>用户配置的合同模板ID，会基于此模板创建合同文档，为32位字符串。<br>如果使用模板发起接口，此参数为必填。</p><p>可以通过<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateConsoleLoginUrl" target="_blank">生成子客登录链接</a>登录企业控制台, 在<strong>企业模板</strong>中得到合同模板ID。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e988be12bf28a89b4716aed4502c2e02.png">点击产看模板Id在控制台上的位置</a></p>
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>合同流程的参与方列表，最多可支持50个参与方。对应不同签署人的传参方式可以参考文档 <a href="https://qian.tencent.com/developers/partner/flow_approver">签署方入参指引</a></p><p>注:<br><font color="red"> <b> 在发起流程时，需要保证 FlowApprovers中的顺序与模板定义顺序一致，否则会发起失败。<br>例如，如果模板中定义的第一个参与人是个人用户，第二个参与人是企业员工，则在 approver 中传参时，第一个也必须是个人用户，第二个参与人必须是企业员工。</b></font></p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/c50e0a204fc5c66aaa2ca70e451ef2d6.png">点击查看模板参与人顺序定义位置</a></p>
                     * @return FlowApprovers <p>合同流程的参与方列表，最多可支持50个参与方。对应不同签署人的传参方式可以参考文档 <a href="https://qian.tencent.com/developers/partner/flow_approver">签署方入参指引</a></p><p>注:<br><font color="red"> <b> 在发起流程时，需要保证 FlowApprovers中的顺序与模板定义顺序一致，否则会发起失败。<br>例如，如果模板中定义的第一个参与人是个人用户，第二个参与人是企业员工，则在 approver 中传参时，第一个也必须是个人用户，第二个参与人必须是企业员工。</b></font></p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/c50e0a204fc5c66aaa2ca70e451ef2d6.png">点击查看模板参与人顺序定义位置</a></p>
                     * 
                     */
                    std::vector<FlowApproverInfo> GetFlowApprovers() const;

                    /**
                     * 设置<p>合同流程的参与方列表，最多可支持50个参与方。对应不同签署人的传参方式可以参考文档 <a href="https://qian.tencent.com/developers/partner/flow_approver">签署方入参指引</a></p><p>注:<br><font color="red"> <b> 在发起流程时，需要保证 FlowApprovers中的顺序与模板定义顺序一致，否则会发起失败。<br>例如，如果模板中定义的第一个参与人是个人用户，第二个参与人是企业员工，则在 approver 中传参时，第一个也必须是个人用户，第二个参与人必须是企业员工。</b></font></p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/c50e0a204fc5c66aaa2ca70e451ef2d6.png">点击查看模板参与人顺序定义位置</a></p>
                     * @param _flowApprovers <p>合同流程的参与方列表，最多可支持50个参与方。对应不同签署人的传参方式可以参考文档 <a href="https://qian.tencent.com/developers/partner/flow_approver">签署方入参指引</a></p><p>注:<br><font color="red"> <b> 在发起流程时，需要保证 FlowApprovers中的顺序与模板定义顺序一致，否则会发起失败。<br>例如，如果模板中定义的第一个参与人是个人用户，第二个参与人是企业员工，则在 approver 中传参时，第一个也必须是个人用户，第二个参与人必须是企业员工。</b></font></p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/c50e0a204fc5c66aaa2ca70e451ef2d6.png">点击查看模板参与人顺序定义位置</a></p>
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
                     * 获取<p>发起方角色的填写控件的填充内容。</p><p>注：只有在控制台编辑模板时，<font color="red">归属给发起方</font>的填写控件（如下图）才能在创建文档的时候进行内容填充。(<font color="red">白名单功能需要联系对接经理开通，否则模板编辑时无法将填写控件分配给发起方</font>)。<br><img src="https://qcloudimg.tencent-cloud.cn/raw/b1d3978140ee2b44e2c9fdc96e467a5d.png" alt="image"></p>
                     * @return FormFields <p>发起方角色的填写控件的填充内容。</p><p>注：只有在控制台编辑模板时，<font color="red">归属给发起方</font>的填写控件（如下图）才能在创建文档的时候进行内容填充。(<font color="red">白名单功能需要联系对接经理开通，否则模板编辑时无法将填写控件分配给发起方</font>)。<br><img src="https://qcloudimg.tencent-cloud.cn/raw/b1d3978140ee2b44e2c9fdc96e467a5d.png" alt="image"></p>
                     * 
                     */
                    std::vector<FormField> GetFormFields() const;

                    /**
                     * 设置<p>发起方角色的填写控件的填充内容。</p><p>注：只有在控制台编辑模板时，<font color="red">归属给发起方</font>的填写控件（如下图）才能在创建文档的时候进行内容填充。(<font color="red">白名单功能需要联系对接经理开通，否则模板编辑时无法将填写控件分配给发起方</font>)。<br><img src="https://qcloudimg.tencent-cloud.cn/raw/b1d3978140ee2b44e2c9fdc96e467a5d.png" alt="image"></p>
                     * @param _formFields <p>发起方角色的填写控件的填充内容。</p><p>注：只有在控制台编辑模板时，<font color="red">归属给发起方</font>的填写控件（如下图）才能在创建文档的时候进行内容填充。(<font color="red">白名单功能需要联系对接经理开通，否则模板编辑时无法将填写控件分配给发起方</font>)。<br><img src="https://qcloudimg.tencent-cloud.cn/raw/b1d3978140ee2b44e2c9fdc96e467a5d.png" alt="image"></p>
                     * 
                     */
                    void SetFormFields(const std::vector<FormField>& _formFields);

                    /**
                     * 判断参数 FormFields 是否已赋值
                     * @return FormFields 是否已赋值
                     * 
                     */
                    bool FormFieldsHasBeenSet() const;

                    /**
                     * 获取<p>该字段已废弃，请使用【应用号配置】中的回调地址统一接口消息</p>
                     * @return CallbackUrl <p>该字段已废弃，请使用【应用号配置】中的回调地址统一接口消息</p>
                     * @deprecated
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置<p>该字段已废弃，请使用【应用号配置】中的回调地址统一接口消息</p>
                     * @param _callbackUrl <p>该字段已废弃，请使用【应用号配置】中的回调地址统一接口消息</p>
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
                     * 获取<p>合同流程的类别分类（可自定义名称，如销售合同/入职合同等），最大长度为200个字符，仅限中文、字母、数字和下划线组成。</p>
                     * @return FlowType <p>合同流程的类别分类（可自定义名称，如销售合同/入职合同等），最大长度为200个字符，仅限中文、字母、数字和下划线组成。</p>
                     * 
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置<p>合同流程的类别分类（可自定义名称，如销售合同/入职合同等），最大长度为200个字符，仅限中文、字母、数字和下划线组成。</p>
                     * @param _flowType <p>合同流程的类别分类（可自定义名称，如销售合同/入职合同等），最大长度为200个字符，仅限中文、字母、数字和下划线组成。</p>
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
                     * 获取<p>调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为1000长度。</p><p>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的回调通知模块。</p>
                     * @return CustomerData <p>调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为1000长度。</p><p>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的回调通知模块。</p>
                     * 
                     */
                    std::string GetCustomerData() const;

                    /**
                     * 设置<p>调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为1000长度。</p><p>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的回调通知模块。</p>
                     * @param _customerData <p>调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为1000长度。</p><p>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的回调通知模块。</p>
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
                     * 获取<p>您可以自定义腾讯电子签小程序合同列表页展示的合同内容模板，模板中支持以下变量：</p><ul><li>{合同名称}   </li><li>{发起方企业} </li><li>{发起方姓名} </li><li>{签署方N企业}</li><li>{签署方N姓名}</li></ul>其中，N表示签署方的编号，从1开始，不能超过签署人的数量。<p>例如，如果是腾讯公司张三发给李四名称为“租房合同”的合同，您可以将此字段设置为：<code>合同名称:{合同名称};发起方: {发起方企业}({发起方姓名});签署方:{签署方1姓名}</code>，则小程序中列表页展示此合同为以下样子</p><p>合同名称：租房合同<br>发起方：腾讯公司(张三)<br>签署方：李四</p><p><img src="https://qcloudimg.tencent-cloud.cn/raw/628f0928cac15d2e3bfa6088f53f5998.png" alt="image"></p>
                     * @return CustomShowMap <p>您可以自定义腾讯电子签小程序合同列表页展示的合同内容模板，模板中支持以下变量：</p><ul><li>{合同名称}   </li><li>{发起方企业} </li><li>{发起方姓名} </li><li>{签署方N企业}</li><li>{签署方N姓名}</li></ul>其中，N表示签署方的编号，从1开始，不能超过签署人的数量。<p>例如，如果是腾讯公司张三发给李四名称为“租房合同”的合同，您可以将此字段设置为：<code>合同名称:{合同名称};发起方: {发起方企业}({发起方姓名});签署方:{签署方1姓名}</code>，则小程序中列表页展示此合同为以下样子</p><p>合同名称：租房合同<br>发起方：腾讯公司(张三)<br>签署方：李四</p><p><img src="https://qcloudimg.tencent-cloud.cn/raw/628f0928cac15d2e3bfa6088f53f5998.png" alt="image"></p>
                     * 
                     */
                    std::string GetCustomShowMap() const;

                    /**
                     * 设置<p>您可以自定义腾讯电子签小程序合同列表页展示的合同内容模板，模板中支持以下变量：</p><ul><li>{合同名称}   </li><li>{发起方企业} </li><li>{发起方姓名} </li><li>{签署方N企业}</li><li>{签署方N姓名}</li></ul>其中，N表示签署方的编号，从1开始，不能超过签署人的数量。<p>例如，如果是腾讯公司张三发给李四名称为“租房合同”的合同，您可以将此字段设置为：<code>合同名称:{合同名称};发起方: {发起方企业}({发起方姓名});签署方:{签署方1姓名}</code>，则小程序中列表页展示此合同为以下样子</p><p>合同名称：租房合同<br>发起方：腾讯公司(张三)<br>签署方：李四</p><p><img src="https://qcloudimg.tencent-cloud.cn/raw/628f0928cac15d2e3bfa6088f53f5998.png" alt="image"></p>
                     * @param _customShowMap <p>您可以自定义腾讯电子签小程序合同列表页展示的合同内容模板，模板中支持以下变量：</p><ul><li>{合同名称}   </li><li>{发起方企业} </li><li>{发起方姓名} </li><li>{签署方N企业}</li><li>{签署方N姓名}</li></ul>其中，N表示签署方的编号，从1开始，不能超过签署人的数量。<p>例如，如果是腾讯公司张三发给李四名称为“租房合同”的合同，您可以将此字段设置为：<code>合同名称:{合同名称};发起方: {发起方企业}({发起方姓名});签署方:{签署方1姓名}</code>，则小程序中列表页展示此合同为以下样子</p><p>合同名称：租房合同<br>发起方：腾讯公司(张三)<br>签署方：李四</p><p><img src="https://qcloudimg.tencent-cloud.cn/raw/628f0928cac15d2e3bfa6088f53f5998.png" alt="image"></p>
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
                     * 获取<p>发起方企业的签署人进行签署操作前，是否需要企业内部走审批流程，取值如下：</p><ul><li> **false**：（默认）不需要审批，直接签署。</li><li> **true**：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。</li></ul>企业可以通过CreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果<ul><li> 如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。</li><li> 如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。</li></ul>注：<code>此功能可用于与企业内部的审批流程进行关联，支持手动、静默签署合同</code>
                     * @return NeedSignReview <p>发起方企业的签署人进行签署操作前，是否需要企业内部走审批流程，取值如下：</p><ul><li> **false**：（默认）不需要审批，直接签署。</li><li> **true**：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。</li></ul>企业可以通过CreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果<ul><li> 如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。</li><li> 如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。</li></ul>注：<code>此功能可用于与企业内部的审批流程进行关联，支持手动、静默签署合同</code>
                     * 
                     */
                    bool GetNeedSignReview() const;

                    /**
                     * 设置<p>发起方企业的签署人进行签署操作前，是否需要企业内部走审批流程，取值如下：</p><ul><li> **false**：（默认）不需要审批，直接签署。</li><li> **true**：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。</li></ul>企业可以通过CreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果<ul><li> 如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。</li><li> 如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。</li></ul>注：<code>此功能可用于与企业内部的审批流程进行关联，支持手动、静默签署合同</code>
                     * @param _needSignReview <p>发起方企业的签署人进行签署操作前，是否需要企业内部走审批流程，取值如下：</p><ul><li> **false**：（默认）不需要审批，直接签署。</li><li> **true**：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。</li></ul>企业可以通过CreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果<ul><li> 如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。</li><li> 如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。</li></ul>注：<code>此功能可用于与企业内部的审批流程进行关联，支持手动、静默签署合同</code>
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
                     * 获取<p>若在创建签署流程时指定了关注人CcInfos，此参数可设定向关注人发送短信通知的类型：</p><ul><li> **0** :合同发起时通知通知对方来查看合同（默认）</li><li> **1** : 签署完成后通知对方来查看合同</li></ul>
                     * @return CcNotifyType <p>若在创建签署流程时指定了关注人CcInfos，此参数可设定向关注人发送短信通知的类型：</p><ul><li> **0** :合同发起时通知通知对方来查看合同（默认）</li><li> **1** : 签署完成后通知对方来查看合同</li></ul>
                     * 
                     */
                    int64_t GetCcNotifyType() const;

                    /**
                     * 设置<p>若在创建签署流程时指定了关注人CcInfos，此参数可设定向关注人发送短信通知的类型：</p><ul><li> **0** :合同发起时通知通知对方来查看合同（默认）</li><li> **1** : 签署完成后通知对方来查看合同</li></ul>
                     * @param _ccNotifyType <p>若在创建签署流程时指定了关注人CcInfos，此参数可设定向关注人发送短信通知的类型：</p><ul><li> **0** :合同发起时通知通知对方来查看合同（默认）</li><li> **1** : 签署完成后通知对方来查看合同</li></ul>
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
                     * 获取<p>发起合同流程时对合同流程的部分操作加以限制的配置。</p><p> 注：此参数目前<strong>只支持 CreateFlowsByTemplates接口</strong> 。</p>
                     * @return FlowOperateLimit <p>发起合同流程时对合同流程的部分操作加以限制的配置。</p><p> 注：此参数目前<strong>只支持 CreateFlowsByTemplates接口</strong> 。</p>
                     * 
                     */
                    FlowOperateLimit GetFlowOperateLimit() const;

                    /**
                     * 设置<p>发起合同流程时对合同流程的部分操作加以限制的配置。</p><p> 注：此参数目前<strong>只支持 CreateFlowsByTemplates接口</strong> 。</p>
                     * @param _flowOperateLimit <p>发起合同流程时对合同流程的部分操作加以限制的配置。</p><p> 注：此参数目前<strong>只支持 CreateFlowsByTemplates接口</strong> 。</p>
                     * 
                     */
                    void SetFlowOperateLimit(const FlowOperateLimit& _flowOperateLimit);

                    /**
                     * 判断参数 FlowOperateLimit 是否已赋值
                     * @return FlowOperateLimit 是否已赋值
                     * 
                     */
                    bool FlowOperateLimitHasBeenSet() const;

                private:

                    /**
                     * <p>合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * <p>合同流程的签署截止时间，格式为Unix标准时间戳（秒），如果未设置签署截止时间，则默认为合同流程创建后的365天时截止。<br>如果在签署截止时间前未完成签署，则合同状态会变为已过期，导致合同作废。<br>示例值：1604912664</p>
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * <p>用户配置的合同模板ID，会基于此模板创建合同文档，为32位字符串。<br>如果使用模板发起接口，此参数为必填。</p><p>可以通过<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateConsoleLoginUrl" target="_blank">生成子客登录链接</a>登录企业控制台, 在<strong>企业模板</strong>中得到合同模板ID。</p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/e988be12bf28a89b4716aed4502c2e02.png">点击产看模板Id在控制台上的位置</a></p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>合同流程的参与方列表，最多可支持50个参与方。对应不同签署人的传参方式可以参考文档 <a href="https://qian.tencent.com/developers/partner/flow_approver">签署方入参指引</a></p><p>注:<br><font color="red"> <b> 在发起流程时，需要保证 FlowApprovers中的顺序与模板定义顺序一致，否则会发起失败。<br>例如，如果模板中定义的第一个参与人是个人用户，第二个参与人是企业员工，则在 approver 中传参时，第一个也必须是个人用户，第二个参与人必须是企业员工。</b></font></p><p><a href="https://qcloudimg.tencent-cloud.cn/raw/c50e0a204fc5c66aaa2ca70e451ef2d6.png">点击查看模板参与人顺序定义位置</a></p>
                     */
                    std::vector<FlowApproverInfo> m_flowApprovers;
                    bool m_flowApproversHasBeenSet;

                    /**
                     * <p>发起方角色的填写控件的填充内容。</p><p>注：只有在控制台编辑模板时，<font color="red">归属给发起方</font>的填写控件（如下图）才能在创建文档的时候进行内容填充。(<font color="red">白名单功能需要联系对接经理开通，否则模板编辑时无法将填写控件分配给发起方</font>)。<br><img src="https://qcloudimg.tencent-cloud.cn/raw/b1d3978140ee2b44e2c9fdc96e467a5d.png" alt="image"></p>
                     */
                    std::vector<FormField> m_formFields;
                    bool m_formFieldsHasBeenSet;

                    /**
                     * <p>该字段已废弃，请使用【应用号配置】中的回调地址统一接口消息</p>
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * <p>合同流程的类别分类（可自定义名称，如销售合同/入职合同等），最大长度为200个字符，仅限中文、字母、数字和下划线组成。</p>
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * <p>合同流程描述信息(可自定义此描述)，最大长度1000个字符。</p>
                     */
                    std::string m_flowDescription;
                    bool m_flowDescriptionHasBeenSet;

                    /**
                     * <p>调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为1000长度。</p><p>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的回调通知模块。</p>
                     */
                    std::string m_customerData;
                    bool m_customerDataHasBeenSet;

                    /**
                     * <p>您可以自定义腾讯电子签小程序合同列表页展示的合同内容模板，模板中支持以下变量：</p><ul><li>{合同名称}   </li><li>{发起方企业} </li><li>{发起方姓名} </li><li>{签署方N企业}</li><li>{签署方N姓名}</li></ul>其中，N表示签署方的编号，从1开始，不能超过签署人的数量。<p>例如，如果是腾讯公司张三发给李四名称为“租房合同”的合同，您可以将此字段设置为：<code>合同名称:{合同名称};发起方: {发起方企业}({发起方姓名});签署方:{签署方1姓名}</code>，则小程序中列表页展示此合同为以下样子</p><p>合同名称：租房合同<br>发起方：腾讯公司(张三)<br>签署方：李四</p><p><img src="https://qcloudimg.tencent-cloud.cn/raw/628f0928cac15d2e3bfa6088f53f5998.png" alt="image"></p>
                     */
                    std::string m_customShowMap;
                    bool m_customShowMapHasBeenSet;

                    /**
                     * <p>合同流程的抄送人列表，最多可支持50个抄送人，抄送人可查看合同内容及签署进度，但无需参与合同签署。</p><p><b>注</b></p><ol><li>抄送人名单中可以包括自然人以及本企业的员工（本企业员工必须已经完成认证并加入企业）。</li><li>请确保抄送人列表中的成员不与任何签署人重复。</li></ol>
                     */
                    std::vector<CcInfo> m_ccInfos;
                    bool m_ccInfosHasBeenSet;

                    /**
                     * <p>发起方企业的签署人进行签署操作前，是否需要企业内部走审批流程，取值如下：</p><ul><li> **false**：（默认）不需要审批，直接签署。</li><li> **true**：需要走审批流程。当到对应参与人签署时，会阻塞其签署操作，等待企业内部审批完成。</li></ul>企业可以通过CreateFlowSignReview审批接口通知腾讯电子签平台企业内部审批结果<ul><li> 如果企业通知腾讯电子签平台审核通过，签署方可继续签署动作。</li><li> 如果企业通知腾讯电子签平台审核未通过，平台将继续阻塞签署方的签署动作，直到企业通知平台审核通过。</li></ul>注：<code>此功能可用于与企业内部的审批流程进行关联，支持手动、静默签署合同</code>
                     */
                    bool m_needSignReview;
                    bool m_needSignReviewHasBeenSet;

                    /**
                     * <p>若在创建签署流程时指定了关注人CcInfos，此参数可设定向关注人发送短信通知的类型：</p><ul><li> **0** :合同发起时通知通知对方来查看合同（默认）</li><li> **1** : 签署完成后通知对方来查看合同</li></ul>
                     */
                    int64_t m_ccNotifyType;
                    bool m_ccNotifyTypeHasBeenSet;

                    /**
                     * <p>个人自动签名的使用场景包括以下, 个人自动签署(即ApproverType设置成个人自动签署时)业务此值必传：</p><ul><li> **E_PRESCRIPTION_AUTO_SIGN**：电子处方单（医疗自动签）  </li><li> **OTHER** :  通用场景</li></ul>注: <code>个人自动签名场景是白名单功能，使用前请与对接的客户经理联系沟通。</code>
                     */
                    std::string m_autoSignScene;
                    bool m_autoSignSceneHasBeenSet;

                    /**
                     * <p>在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:<img src="https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png" alt="FlowDisplayType"></p>
                     */
                    int64_t m_flowDisplayType;
                    bool m_flowDisplayTypeHasBeenSet;

                    /**
                     * <p>发起合同流程时对合同流程的部分操作加以限制的配置。</p><p> 注：此参数目前<strong>只支持 CreateFlowsByTemplates接口</strong> 。</p>
                     */
                    FlowOperateLimit m_flowOperateLimit;
                    bool m_flowOperateLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWINFO_H_
