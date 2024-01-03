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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_OPERATECHANNELTEMPLATEREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_OPERATECHANNELTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
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
                * OperateChannelTemplate请求参数结构体
                */
                class OperateChannelTemplateRequest : public AbstractModel
                {
                public:
                    OperateChannelTemplateRequest();
                    ~OperateChannelTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识: Agent.AppId</li>
</ul>
                     * @return Agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识: Agent.AppId</li>
</ul>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识: Agent.AppId</li>
</ul>
                     * @param _agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识: Agent.AppId</li>
</ul>
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
                     * 获取操作类型，可取值如下:
<ul>
<li>SELECT:  查询</li>
<li>DELETE:  删除</li>
<li>UPDATE: 更新</li>
</ul>
                     * @return OperateType 操作类型，可取值如下:
<ul>
<li>SELECT:  查询</li>
<li>DELETE:  删除</li>
<li>UPDATE: 更新</li>
</ul>
                     * 
                     */
                    std::string GetOperateType() const;

                    /**
                     * 设置操作类型，可取值如下:
<ul>
<li>SELECT:  查询</li>
<li>DELETE:  删除</li>
<li>UPDATE: 更新</li>
</ul>
                     * @param _operateType 操作类型，可取值如下:
<ul>
<li>SELECT:  查询</li>
<li>DELETE:  删除</li>
<li>UPDATE: 更新</li>
</ul>
                     * 
                     */
                    void SetOperateType(const std::string& _operateType);

                    /**
                     * 判断参数 OperateType 是否已赋值
                     * @return OperateType 是否已赋值
                     * 
                     */
                    bool OperateTypeHasBeenSet() const;

                    /**
                     * 获取合同模板ID，为32位字符串。
注: ` 此处为第三方应用平台模板库模板ID，非子客模板ID`
                     * @return TemplateId 合同模板ID，为32位字符串。
注: ` 此处为第三方应用平台模板库模板ID，非子客模板ID`
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置合同模板ID，为32位字符串。
注: ` 此处为第三方应用平台模板库模板ID，非子客模板ID`
                     * @param _templateId 合同模板ID，为32位字符串。
注: ` 此处为第三方应用平台模板库模板ID，非子客模板ID`
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
                     * 获取第三方平台子客企业的唯一标识，支持批量(用,分割)，
                     * @return ProxyOrganizationOpenIds 第三方平台子客企业的唯一标识，支持批量(用,分割)，
                     * 
                     */
                    std::string GetProxyOrganizationOpenIds() const;

                    /**
                     * 设置第三方平台子客企业的唯一标识，支持批量(用,分割)，
                     * @param _proxyOrganizationOpenIds 第三方平台子客企业的唯一标识，支持批量(用,分割)，
                     * 
                     */
                    void SetProxyOrganizationOpenIds(const std::string& _proxyOrganizationOpenIds);

                    /**
                     * 判断参数 ProxyOrganizationOpenIds 是否已赋值
                     * @return ProxyOrganizationOpenIds 是否已赋值
                     * 
                     */
                    bool ProxyOrganizationOpenIdsHasBeenSet() const;

                    /**
                     * 获取模板可见范围, 可以设置的值如下:

**all**: 所有本第三方应用合作企业可见
**part**: 指定的本第三方应用合作企业

对应控制台的位置
![image](https://qcloudimg.tencent-cloud.cn/raw/68b97812c68d6af77a5991e3bff5c790.png)

                     * @return AuthTag 模板可见范围, 可以设置的值如下:

**all**: 所有本第三方应用合作企业可见
**part**: 指定的本第三方应用合作企业

对应控制台的位置
![image](https://qcloudimg.tencent-cloud.cn/raw/68b97812c68d6af77a5991e3bff5c790.png)

                     * 
                     */
                    std::string GetAuthTag() const;

                    /**
                     * 设置模板可见范围, 可以设置的值如下:

**all**: 所有本第三方应用合作企业可见
**part**: 指定的本第三方应用合作企业

对应控制台的位置
![image](https://qcloudimg.tencent-cloud.cn/raw/68b97812c68d6af77a5991e3bff5c790.png)

                     * @param _authTag 模板可见范围, 可以设置的值如下:

**all**: 所有本第三方应用合作企业可见
**part**: 指定的本第三方应用合作企业

对应控制台的位置
![image](https://qcloudimg.tencent-cloud.cn/raw/68b97812c68d6af77a5991e3bff5c790.png)

                     * 
                     */
                    void SetAuthTag(const std::string& _authTag);

                    /**
                     * 判断参数 AuthTag 是否已赋值
                     * @return AuthTag 是否已赋值
                     * 
                     */
                    bool AuthTagHasBeenSet() const;

                    /**
                     * 获取当OperateType=UPDATE时，可以通过设置此字段对模板启停用状态进行操作。
<ul>
<li>0: 不修改模板可用状态</li>
<li>1:  启用模板</li>
<li>2: 停用模板</li>
</ul>
启用后模板可以正常领取。

停用后，推送方式为【自动推送】的模板则无法被子客使用，推送方式为【手动领取】的模板则无法出现被模板库被子客领用。
如果Available更新失败，会直接返回错误。
                     * @return Available 当OperateType=UPDATE时，可以通过设置此字段对模板启停用状态进行操作。
<ul>
<li>0: 不修改模板可用状态</li>
<li>1:  启用模板</li>
<li>2: 停用模板</li>
</ul>
启用后模板可以正常领取。

停用后，推送方式为【自动推送】的模板则无法被子客使用，推送方式为【手动领取】的模板则无法出现被模板库被子客领用。
如果Available更新失败，会直接返回错误。
                     * 
                     */
                    int64_t GetAvailable() const;

                    /**
                     * 设置当OperateType=UPDATE时，可以通过设置此字段对模板启停用状态进行操作。
<ul>
<li>0: 不修改模板可用状态</li>
<li>1:  启用模板</li>
<li>2: 停用模板</li>
</ul>
启用后模板可以正常领取。

停用后，推送方式为【自动推送】的模板则无法被子客使用，推送方式为【手动领取】的模板则无法出现被模板库被子客领用。
如果Available更新失败，会直接返回错误。
                     * @param _available 当OperateType=UPDATE时，可以通过设置此字段对模板启停用状态进行操作。
<ul>
<li>0: 不修改模板可用状态</li>
<li>1:  启用模板</li>
<li>2: 停用模板</li>
</ul>
启用后模板可以正常领取。

停用后，推送方式为【自动推送】的模板则无法被子客使用，推送方式为【手动领取】的模板则无法出现被模板库被子客领用。
如果Available更新失败，会直接返回错误。
                     * 
                     */
                    void SetAvailable(const int64_t& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                    /**
                     * 获取暂未开放
                     * @return Operator 暂未开放
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置暂未开放
                     * @param _operator 暂未开放
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
                     * 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。

此接口下面信息必填。
<ul>
<li>渠道应用标识: Agent.AppId</li>
</ul>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 操作类型，可取值如下:
<ul>
<li>SELECT:  查询</li>
<li>DELETE:  删除</li>
<li>UPDATE: 更新</li>
</ul>
                     */
                    std::string m_operateType;
                    bool m_operateTypeHasBeenSet;

                    /**
                     * 合同模板ID，为32位字符串。
注: ` 此处为第三方应用平台模板库模板ID，非子客模板ID`
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 第三方平台子客企业的唯一标识，支持批量(用,分割)，
                     */
                    std::string m_proxyOrganizationOpenIds;
                    bool m_proxyOrganizationOpenIdsHasBeenSet;

                    /**
                     * 模板可见范围, 可以设置的值如下:

**all**: 所有本第三方应用合作企业可见
**part**: 指定的本第三方应用合作企业

对应控制台的位置
![image](https://qcloudimg.tencent-cloud.cn/raw/68b97812c68d6af77a5991e3bff5c790.png)

                     */
                    std::string m_authTag;
                    bool m_authTagHasBeenSet;

                    /**
                     * 当OperateType=UPDATE时，可以通过设置此字段对模板启停用状态进行操作。
<ul>
<li>0: 不修改模板可用状态</li>
<li>1:  启用模板</li>
<li>2: 停用模板</li>
</ul>
启用后模板可以正常领取。

停用后，推送方式为【自动推送】的模板则无法被子客使用，推送方式为【手动领取】的模板则无法出现被模板库被子客领用。
如果Available更新失败，会直接返回错误。
                     */
                    int64_t m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * 暂未开放
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_OPERATECHANNELTEMPLATEREQUEST_H_
