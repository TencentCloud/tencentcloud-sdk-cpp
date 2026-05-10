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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEEMBEDWEBURLREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEEMBEDWEBURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>
#include <tencentcloud/essbasic/v20210526/model/EmbedUrlOption.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelCreateEmbedWebUrl请求参数结构体
                */
                class ChannelCreateEmbedWebUrlRequest : public AbstractModel
                {
                public:
                    ChannelCreateEmbedWebUrlRequest();
                    ~ChannelCreateEmbedWebUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     * @return Agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     * @param _agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
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
                     * 获取<p>要生成WEB嵌入界面的类型, 可以选择的值如下: </p><ul><li>CREATE_SEAL: 生成创建印章的嵌入页面</li><li>CREATE_TEMPLATE：生成创建模板的嵌入页面</li><li>MODIFY_TEMPLATE：生成修改模板的嵌入页面</li><li>PREVIEW_TEMPLATE：生成预览模板的嵌入页面</li><li>PREVIEW_FLOW：生成预览合同文档的嵌入页面（H5链接，支持移动端的浏览器中打开）</li><li>PREVIEW_FLOW_DETAIL：生成预览合同详情的嵌入页面（仅支持PC的浏览器中打开）</li><li>PREVIEW_SEAL_LIST：生成预览印章列表的嵌入页面</li><li>PREVIEW_SEAL_DETAIL：生成预览印章详情的嵌入页面</li><li>EXTEND_SERVICE：生成扩展服务的嵌入页面</li></ul>
                     * @return EmbedType <p>要生成WEB嵌入界面的类型, 可以选择的值如下: </p><ul><li>CREATE_SEAL: 生成创建印章的嵌入页面</li><li>CREATE_TEMPLATE：生成创建模板的嵌入页面</li><li>MODIFY_TEMPLATE：生成修改模板的嵌入页面</li><li>PREVIEW_TEMPLATE：生成预览模板的嵌入页面</li><li>PREVIEW_FLOW：生成预览合同文档的嵌入页面（H5链接，支持移动端的浏览器中打开）</li><li>PREVIEW_FLOW_DETAIL：生成预览合同详情的嵌入页面（仅支持PC的浏览器中打开）</li><li>PREVIEW_SEAL_LIST：生成预览印章列表的嵌入页面</li><li>PREVIEW_SEAL_DETAIL：生成预览印章详情的嵌入页面</li><li>EXTEND_SERVICE：生成扩展服务的嵌入页面</li></ul>
                     * 
                     */
                    std::string GetEmbedType() const;

                    /**
                     * 设置<p>要生成WEB嵌入界面的类型, 可以选择的值如下: </p><ul><li>CREATE_SEAL: 生成创建印章的嵌入页面</li><li>CREATE_TEMPLATE：生成创建模板的嵌入页面</li><li>MODIFY_TEMPLATE：生成修改模板的嵌入页面</li><li>PREVIEW_TEMPLATE：生成预览模板的嵌入页面</li><li>PREVIEW_FLOW：生成预览合同文档的嵌入页面（H5链接，支持移动端的浏览器中打开）</li><li>PREVIEW_FLOW_DETAIL：生成预览合同详情的嵌入页面（仅支持PC的浏览器中打开）</li><li>PREVIEW_SEAL_LIST：生成预览印章列表的嵌入页面</li><li>PREVIEW_SEAL_DETAIL：生成预览印章详情的嵌入页面</li><li>EXTEND_SERVICE：生成扩展服务的嵌入页面</li></ul>
                     * @param _embedType <p>要生成WEB嵌入界面的类型, 可以选择的值如下: </p><ul><li>CREATE_SEAL: 生成创建印章的嵌入页面</li><li>CREATE_TEMPLATE：生成创建模板的嵌入页面</li><li>MODIFY_TEMPLATE：生成修改模板的嵌入页面</li><li>PREVIEW_TEMPLATE：生成预览模板的嵌入页面</li><li>PREVIEW_FLOW：生成预览合同文档的嵌入页面（H5链接，支持移动端的浏览器中打开）</li><li>PREVIEW_FLOW_DETAIL：生成预览合同详情的嵌入页面（仅支持PC的浏览器中打开）</li><li>PREVIEW_SEAL_LIST：生成预览印章列表的嵌入页面</li><li>PREVIEW_SEAL_DETAIL：生成预览印章详情的嵌入页面</li><li>EXTEND_SERVICE：生成扩展服务的嵌入页面</li></ul>
                     * 
                     */
                    void SetEmbedType(const std::string& _embedType);

                    /**
                     * 判断参数 EmbedType 是否已赋值
                     * @return EmbedType 是否已赋值
                     * 
                     */
                    bool EmbedTypeHasBeenSet() const;

                    /**
                     * 获取<p>WEB嵌入的业务资源ID</p><p>当EmbedType取值</p><ul><li>为MODIFY_TEMPLATE，PREVIEW_TEMPLATE必填，取值为模板id</li><li>为CREATE_TEMPLATE，非必填，取值为资源id。*资源Id获取可使用接口[上传文件](https://qian.tencent.com/developers/partnerApis/files/UploadFiles)*</li><li>为PREVIEW_FLOW，PREVIEW_FLOW_DETAIL必填，取值为合同id</li><li>为PREVIEW_SEAL_DETAIL必填，取值为印章id</li></ul><p>注意：</p><ol><li>CREATE_TEMPLATE中的BusinessId仅支持PDF文件类型， 如果您的文件不是PDF， 请使用接口<a href="https://qian.tencent.com/developers/partnerApis/files/ChannelCreateConvertTaskApi">创建文件转换任务</a> 和<a href="https://qian.tencent.com/developers/partnerApis/files/ChannelGetTaskResultApi">查询转换任务状态</a> 来进行转换成PDF资源。</li></ol>
                     * @return BusinessId <p>WEB嵌入的业务资源ID</p><p>当EmbedType取值</p><ul><li>为MODIFY_TEMPLATE，PREVIEW_TEMPLATE必填，取值为模板id</li><li>为CREATE_TEMPLATE，非必填，取值为资源id。*资源Id获取可使用接口[上传文件](https://qian.tencent.com/developers/partnerApis/files/UploadFiles)*</li><li>为PREVIEW_FLOW，PREVIEW_FLOW_DETAIL必填，取值为合同id</li><li>为PREVIEW_SEAL_DETAIL必填，取值为印章id</li></ul><p>注意：</p><ol><li>CREATE_TEMPLATE中的BusinessId仅支持PDF文件类型， 如果您的文件不是PDF， 请使用接口<a href="https://qian.tencent.com/developers/partnerApis/files/ChannelCreateConvertTaskApi">创建文件转换任务</a> 和<a href="https://qian.tencent.com/developers/partnerApis/files/ChannelGetTaskResultApi">查询转换任务状态</a> 来进行转换成PDF资源。</li></ol>
                     * 
                     */
                    std::string GetBusinessId() const;

                    /**
                     * 设置<p>WEB嵌入的业务资源ID</p><p>当EmbedType取值</p><ul><li>为MODIFY_TEMPLATE，PREVIEW_TEMPLATE必填，取值为模板id</li><li>为CREATE_TEMPLATE，非必填，取值为资源id。*资源Id获取可使用接口[上传文件](https://qian.tencent.com/developers/partnerApis/files/UploadFiles)*</li><li>为PREVIEW_FLOW，PREVIEW_FLOW_DETAIL必填，取值为合同id</li><li>为PREVIEW_SEAL_DETAIL必填，取值为印章id</li></ul><p>注意：</p><ol><li>CREATE_TEMPLATE中的BusinessId仅支持PDF文件类型， 如果您的文件不是PDF， 请使用接口<a href="https://qian.tencent.com/developers/partnerApis/files/ChannelCreateConvertTaskApi">创建文件转换任务</a> 和<a href="https://qian.tencent.com/developers/partnerApis/files/ChannelGetTaskResultApi">查询转换任务状态</a> 来进行转换成PDF资源。</li></ol>
                     * @param _businessId <p>WEB嵌入的业务资源ID</p><p>当EmbedType取值</p><ul><li>为MODIFY_TEMPLATE，PREVIEW_TEMPLATE必填，取值为模板id</li><li>为CREATE_TEMPLATE，非必填，取值为资源id。*资源Id获取可使用接口[上传文件](https://qian.tencent.com/developers/partnerApis/files/UploadFiles)*</li><li>为PREVIEW_FLOW，PREVIEW_FLOW_DETAIL必填，取值为合同id</li><li>为PREVIEW_SEAL_DETAIL必填，取值为印章id</li></ul><p>注意：</p><ol><li>CREATE_TEMPLATE中的BusinessId仅支持PDF文件类型， 如果您的文件不是PDF， 请使用接口<a href="https://qian.tencent.com/developers/partnerApis/files/ChannelCreateConvertTaskApi">创建文件转换任务</a> 和<a href="https://qian.tencent.com/developers/partnerApis/files/ChannelGetTaskResultApi">查询转换任务状态</a> 来进行转换成PDF资源。</li></ol>
                     * 
                     */
                    void SetBusinessId(const std::string& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     * 
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取<p>是否隐藏控件，只有预览模板时生效，目前字段已废弃，请使用<a href="https://qian.tencent.com/developers/partnerApis/dataTypes#embedurloption">嵌入式页面url个性化参数Option</a> 的ShowTemplateComponent来指定是否展示or隐藏控件</p>
                     * @return HiddenComponents <p>是否隐藏控件，只有预览模板时生效，目前字段已废弃，请使用<a href="https://qian.tencent.com/developers/partnerApis/dataTypes#embedurloption">嵌入式页面url个性化参数Option</a> 的ShowTemplateComponent来指定是否展示or隐藏控件</p>
                     * @deprecated
                     */
                    bool GetHiddenComponents() const;

                    /**
                     * 设置<p>是否隐藏控件，只有预览模板时生效，目前字段已废弃，请使用<a href="https://qian.tencent.com/developers/partnerApis/dataTypes#embedurloption">嵌入式页面url个性化参数Option</a> 的ShowTemplateComponent来指定是否展示or隐藏控件</p>
                     * @param _hiddenComponents <p>是否隐藏控件，只有预览模板时生效，目前字段已废弃，请使用<a href="https://qian.tencent.com/developers/partnerApis/dataTypes#embedurloption">嵌入式页面url个性化参数Option</a> 的ShowTemplateComponent来指定是否展示or隐藏控件</p>
                     * @deprecated
                     */
                    void SetHiddenComponents(const bool& _hiddenComponents);

                    /**
                     * 判断参数 HiddenComponents 是否已赋值
                     * @return HiddenComponents 是否已赋值
                     * @deprecated
                     */
                    bool HiddenComponentsHasBeenSet() const;

                    /**
                     * 获取<p>渠道操作者信息</p>
                     * @return Operator <p>渠道操作者信息</p>
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>渠道操作者信息</p>
                     * @param _operator <p>渠道操作者信息</p>
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
                     * 获取<p>用户自定义参数</p><ul><li>目前仅支持EmbedType=CREATE_TEMPLATE时传入</li><li>指定后，创建，编辑，删除模板时，回调都会携带该userData</li><li>支持的格式：json字符串的BASE64编码字符串</li><li>示例：<ul>                 <li>json字符串：{"ComeFrom":"xxx"}，BASE64编码：eyJDb21lRnJvbSI6Inh4eCJ9</li>                 <li>eyJDb21lRnJvbSI6Inh4eCJ9，为符合要求的userData数据格式</li></ul></li></ul>
                     * @return UserData <p>用户自定义参数</p><ul><li>目前仅支持EmbedType=CREATE_TEMPLATE时传入</li><li>指定后，创建，编辑，删除模板时，回调都会携带该userData</li><li>支持的格式：json字符串的BASE64编码字符串</li><li>示例：<ul>                 <li>json字符串：{"ComeFrom":"xxx"}，BASE64编码：eyJDb21lRnJvbSI6Inh4eCJ9</li>                 <li>eyJDb21lRnJvbSI6Inh4eCJ9，为符合要求的userData数据格式</li></ul></li></ul>
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置<p>用户自定义参数</p><ul><li>目前仅支持EmbedType=CREATE_TEMPLATE时传入</li><li>指定后，创建，编辑，删除模板时，回调都会携带该userData</li><li>支持的格式：json字符串的BASE64编码字符串</li><li>示例：<ul>                 <li>json字符串：{"ComeFrom":"xxx"}，BASE64编码：eyJDb21lRnJvbSI6Inh4eCJ9</li>                 <li>eyJDb21lRnJvbSI6Inh4eCJ9，为符合要求的userData数据格式</li></ul></li></ul>
                     * @param _userData <p>用户自定义参数</p><ul><li>目前仅支持EmbedType=CREATE_TEMPLATE时传入</li><li>指定后，创建，编辑，删除模板时，回调都会携带该userData</li><li>支持的格式：json字符串的BASE64编码字符串</li><li>示例：<ul>                 <li>json字符串：{"ComeFrom":"xxx"}，BASE64编码：eyJDb21lRnJvbSI6Inh4eCJ9</li>                 <li>eyJDb21lRnJvbSI6Inh4eCJ9，为符合要求的userData数据格式</li></ul></li></ul>
                     * 
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     * 
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取<p>个性化参数，用于控制页面展示内容</p>
                     * @return Option <p>个性化参数，用于控制页面展示内容</p>
                     * 
                     */
                    EmbedUrlOption GetOption() const;

                    /**
                     * 设置<p>个性化参数，用于控制页面展示内容</p>
                     * @param _option <p>个性化参数，用于控制页面展示内容</p>
                     * 
                     */
                    void SetOption(const EmbedUrlOption& _option);

                    /**
                     * 判断参数 Option 是否已赋值
                     * @return Option 是否已赋值
                     * 
                     */
                    bool OptionHasBeenSet() const;

                private:

                    /**
                     * <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>要生成WEB嵌入界面的类型, 可以选择的值如下: </p><ul><li>CREATE_SEAL: 生成创建印章的嵌入页面</li><li>CREATE_TEMPLATE：生成创建模板的嵌入页面</li><li>MODIFY_TEMPLATE：生成修改模板的嵌入页面</li><li>PREVIEW_TEMPLATE：生成预览模板的嵌入页面</li><li>PREVIEW_FLOW：生成预览合同文档的嵌入页面（H5链接，支持移动端的浏览器中打开）</li><li>PREVIEW_FLOW_DETAIL：生成预览合同详情的嵌入页面（仅支持PC的浏览器中打开）</li><li>PREVIEW_SEAL_LIST：生成预览印章列表的嵌入页面</li><li>PREVIEW_SEAL_DETAIL：生成预览印章详情的嵌入页面</li><li>EXTEND_SERVICE：生成扩展服务的嵌入页面</li></ul>
                     */
                    std::string m_embedType;
                    bool m_embedTypeHasBeenSet;

                    /**
                     * <p>WEB嵌入的业务资源ID</p><p>当EmbedType取值</p><ul><li>为MODIFY_TEMPLATE，PREVIEW_TEMPLATE必填，取值为模板id</li><li>为CREATE_TEMPLATE，非必填，取值为资源id。*资源Id获取可使用接口[上传文件](https://qian.tencent.com/developers/partnerApis/files/UploadFiles)*</li><li>为PREVIEW_FLOW，PREVIEW_FLOW_DETAIL必填，取值为合同id</li><li>为PREVIEW_SEAL_DETAIL必填，取值为印章id</li></ul><p>注意：</p><ol><li>CREATE_TEMPLATE中的BusinessId仅支持PDF文件类型， 如果您的文件不是PDF， 请使用接口<a href="https://qian.tencent.com/developers/partnerApis/files/ChannelCreateConvertTaskApi">创建文件转换任务</a> 和<a href="https://qian.tencent.com/developers/partnerApis/files/ChannelGetTaskResultApi">查询转换任务状态</a> 来进行转换成PDF资源。</li></ol>
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * <p>是否隐藏控件，只有预览模板时生效，目前字段已废弃，请使用<a href="https://qian.tencent.com/developers/partnerApis/dataTypes#embedurloption">嵌入式页面url个性化参数Option</a> 的ShowTemplateComponent来指定是否展示or隐藏控件</p>
                     */
                    bool m_hiddenComponents;
                    bool m_hiddenComponentsHasBeenSet;

                    /**
                     * <p>渠道操作者信息</p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>用户自定义参数</p><ul><li>目前仅支持EmbedType=CREATE_TEMPLATE时传入</li><li>指定后，创建，编辑，删除模板时，回调都会携带该userData</li><li>支持的格式：json字符串的BASE64编码字符串</li><li>示例：<ul>                 <li>json字符串：{"ComeFrom":"xxx"}，BASE64编码：eyJDb21lRnJvbSI6Inh4eCJ9</li>                 <li>eyJDb21lRnJvbSI6Inh4eCJ9，为符合要求的userData数据格式</li></ul></li></ul>
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * <p>个性化参数，用于控制页面展示内容</p>
                     */
                    EmbedUrlOption m_option;
                    bool m_optionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEEMBEDWEBURLREQUEST_H_
