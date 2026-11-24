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
                     * 获取<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识: Agent.AppId</li></ul>
                     * @return Agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识: Agent.AppId</li></ul>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识: Agent.AppId</li></ul>
                     * @param _agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识: Agent.AppId</li></ul>
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
                     * 获取<p>操作类型，可取值如下:</p><ul><li>SELECT:  查询</li><li>DELETE:  删除</li><li>UPDATE: 更新</li><li> DELETETEMPLATE: 删除指定的模板</li></ul>
                     * @return OperateType <p>操作类型，可取值如下:</p><ul><li>SELECT:  查询</li><li>DELETE:  删除</li><li>UPDATE: 更新</li><li> DELETETEMPLATE: 删除指定的模板</li></ul>
                     * 
                     */
                    std::string GetOperateType() const;

                    /**
                     * 设置<p>操作类型，可取值如下:</p><ul><li>SELECT:  查询</li><li>DELETE:  删除</li><li>UPDATE: 更新</li><li> DELETETEMPLATE: 删除指定的模板</li></ul>
                     * @param _operateType <p>操作类型，可取值如下:</p><ul><li>SELECT:  查询</li><li>DELETE:  删除</li><li>UPDATE: 更新</li><li> DELETETEMPLATE: 删除指定的模板</li></ul>
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
                     * 获取<p>合同模板ID，为32位字符串。<br>注: <code>此处为第三方应用平台模板库模板ID，非子客模板ID</code></p>
                     * @return TemplateId <p>合同模板ID，为32位字符串。<br>注: <code>此处为第三方应用平台模板库模板ID，非子客模板ID</code></p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>合同模板ID，为32位字符串。<br>注: <code>此处为第三方应用平台模板库模板ID，非子客模板ID</code></p>
                     * @param _templateId <p>合同模板ID，为32位字符串。<br>注: <code>此处为第三方应用平台模板库模板ID，非子客模板ID</code></p>
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
                     * 获取<p>第三方平台子客企业的唯一标识，支持批量(用,分割)<br>一次批量操作最多支持100个第三方平台子客</p>
                     * @return ProxyOrganizationOpenIds <p>第三方平台子客企业的唯一标识，支持批量(用,分割)<br>一次批量操作最多支持100个第三方平台子客</p>
                     * 
                     */
                    std::string GetProxyOrganizationOpenIds() const;

                    /**
                     * 设置<p>第三方平台子客企业的唯一标识，支持批量(用,分割)<br>一次批量操作最多支持100个第三方平台子客</p>
                     * @param _proxyOrganizationOpenIds <p>第三方平台子客企业的唯一标识，支持批量(用,分割)<br>一次批量操作最多支持100个第三方平台子客</p>
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
                     * 获取<p>模板可见范围, 可以设置的值如下:</p><p><strong>all</strong>: 所有本第三方应用合作企业可见<br><strong>part</strong>: 指定的本第三方应用合作企业</p><p>对应控制台的位置<br><img src="https://qcloudimg.tencent-cloud.cn/raw/68b97812c68d6af77a5991e3bff5c790.png" alt="image"></p>
                     * @return AuthTag <p>模板可见范围, 可以设置的值如下:</p><p><strong>all</strong>: 所有本第三方应用合作企业可见<br><strong>part</strong>: 指定的本第三方应用合作企业</p><p>对应控制台的位置<br><img src="https://qcloudimg.tencent-cloud.cn/raw/68b97812c68d6af77a5991e3bff5c790.png" alt="image"></p>
                     * 
                     */
                    std::string GetAuthTag() const;

                    /**
                     * 设置<p>模板可见范围, 可以设置的值如下:</p><p><strong>all</strong>: 所有本第三方应用合作企业可见<br><strong>part</strong>: 指定的本第三方应用合作企业</p><p>对应控制台的位置<br><img src="https://qcloudimg.tencent-cloud.cn/raw/68b97812c68d6af77a5991e3bff5c790.png" alt="image"></p>
                     * @param _authTag <p>模板可见范围, 可以设置的值如下:</p><p><strong>all</strong>: 所有本第三方应用合作企业可见<br><strong>part</strong>: 指定的本第三方应用合作企业</p><p>对应控制台的位置<br><img src="https://qcloudimg.tencent-cloud.cn/raw/68b97812c68d6af77a5991e3bff5c790.png" alt="image"></p>
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
                     * 获取<p>当OperateType=UPDATE时，可以通过设置此字段对模板启停用状态进行操作。</p><ul><li>0: 不修改模板可用状态</li><li>1:  启用模板</li><li>2: 停用模板</li></ul>启用后模板可以正常领取。<p>停用后，推送方式为【自动推送】的模板则无法被子客使用，推送方式为【手动领取】的模板则无法出现被模板库被子客领用。<br>如果Available更新失败，会直接返回错误。</p>
                     * @return Available <p>当OperateType=UPDATE时，可以通过设置此字段对模板启停用状态进行操作。</p><ul><li>0: 不修改模板可用状态</li><li>1:  启用模板</li><li>2: 停用模板</li></ul>启用后模板可以正常领取。<p>停用后，推送方式为【自动推送】的模板则无法被子客使用，推送方式为【手动领取】的模板则无法出现被模板库被子客领用。<br>如果Available更新失败，会直接返回错误。</p>
                     * 
                     */
                    int64_t GetAvailable() const;

                    /**
                     * 设置<p>当OperateType=UPDATE时，可以通过设置此字段对模板启停用状态进行操作。</p><ul><li>0: 不修改模板可用状态</li><li>1:  启用模板</li><li>2: 停用模板</li></ul>启用后模板可以正常领取。<p>停用后，推送方式为【自动推送】的模板则无法被子客使用，推送方式为【手动领取】的模板则无法出现被模板库被子客领用。<br>如果Available更新失败，会直接返回错误。</p>
                     * @param _available <p>当OperateType=UPDATE时，可以通过设置此字段对模板启停用状态进行操作。</p><ul><li>0: 不修改模板可用状态</li><li>1:  启用模板</li><li>2: 停用模板</li></ul>启用后模板可以正常领取。<p>停用后，推送方式为【自动推送】的模板则无法被子客使用，推送方式为【手动领取】的模板则无法出现被模板库被子客领用。<br>如果Available更新失败，会直接返回错误。</p>
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
                     * 获取<p>暂未开放</p>
                     * @return Operator <p>暂未开放</p>
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>暂未开放</p>
                     * @param _operator <p>暂未开放</p>
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
                     * 获取<p>指定分页每页返回的数据条数，单页最大支持 100。<br>不传默认值为 20</p>
                     * @return Limit <p>指定分页每页返回的数据条数，单页最大支持 100。<br>不传默认值为 20</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>指定分页每页返回的数据条数，单页最大支持 100。<br>不传默认值为 20</p>
                     * @param _limit <p>指定分页每页返回的数据条数，单页最大支持 100。<br>不传默认值为 20</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>分页查询偏移量，默认为0</p>
                     * @return Offset <p>分页查询偏移量，默认为0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页查询偏移量，默认为0</p>
                     * @param _offset <p>分页查询偏移量，默认为0</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识: Agent.AppId</li></ul>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>操作类型，可取值如下:</p><ul><li>SELECT:  查询</li><li>DELETE:  删除</li><li>UPDATE: 更新</li><li> DELETETEMPLATE: 删除指定的模板</li></ul>
                     */
                    std::string m_operateType;
                    bool m_operateTypeHasBeenSet;

                    /**
                     * <p>合同模板ID，为32位字符串。<br>注: <code>此处为第三方应用平台模板库模板ID，非子客模板ID</code></p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>第三方平台子客企业的唯一标识，支持批量(用,分割)<br>一次批量操作最多支持100个第三方平台子客</p>
                     */
                    std::string m_proxyOrganizationOpenIds;
                    bool m_proxyOrganizationOpenIdsHasBeenSet;

                    /**
                     * <p>模板可见范围, 可以设置的值如下:</p><p><strong>all</strong>: 所有本第三方应用合作企业可见<br><strong>part</strong>: 指定的本第三方应用合作企业</p><p>对应控制台的位置<br><img src="https://qcloudimg.tencent-cloud.cn/raw/68b97812c68d6af77a5991e3bff5c790.png" alt="image"></p>
                     */
                    std::string m_authTag;
                    bool m_authTagHasBeenSet;

                    /**
                     * <p>当OperateType=UPDATE时，可以通过设置此字段对模板启停用状态进行操作。</p><ul><li>0: 不修改模板可用状态</li><li>1:  启用模板</li><li>2: 停用模板</li></ul>启用后模板可以正常领取。<p>停用后，推送方式为【自动推送】的模板则无法被子客使用，推送方式为【手动领取】的模板则无法出现被模板库被子客领用。<br>如果Available更新失败，会直接返回错误。</p>
                     */
                    int64_t m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * <p>暂未开放</p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>指定分页每页返回的数据条数，单页最大支持 100。<br>不传默认值为 20</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页查询偏移量，默认为0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_OPERATECHANNELTEMPLATEREQUEST_H_
