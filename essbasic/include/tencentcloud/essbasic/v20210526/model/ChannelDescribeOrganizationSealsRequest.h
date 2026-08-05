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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDESCRIBEORGANIZATIONSEALSREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDESCRIBEORGANIZATIONSEALSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelDescribeOrganizationSeals请求参数结构体
                */
                class ChannelDescribeOrganizationSealsRequest : public AbstractModel
                {
                public:
                    ChannelDescribeOrganizationSealsRequest();
                    ~ChannelDescribeOrganizationSealsRequest() = default;
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
                     * 获取<p>指定分页每页返回的数据条数，单页最大支持 100。默认值为20</p>
                     * @return Limit <p>指定分页每页返回的数据条数，单页最大支持 100。默认值为20</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>指定分页每页返回的数据条数，单页最大支持 100。默认值为20</p>
                     * @param _limit <p>指定分页每页返回的数据条数，单页最大支持 100。默认值为20</p>
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
                     * 获取<p>分页查询偏移量，默认为0，最大为20000</p>
                     * @return Offset <p>分页查询偏移量，默认为0，最大为20000</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页查询偏移量，默认为0，最大为20000</p>
                     * @param _offset <p>分页查询偏移量，默认为0，最大为20000</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>查询授权用户信息类型，取值如下：</p><ul> <li><b>0</b>：（默认）不返回授权用户信息</li> <li><b>1</b>：返回授权用户的信息</li> </ul>
                     * @return InfoType <p>查询授权用户信息类型，取值如下：</p><ul> <li><b>0</b>：（默认）不返回授权用户信息</li> <li><b>1</b>：返回授权用户的信息</li> </ul>
                     * 
                     */
                    int64_t GetInfoType() const;

                    /**
                     * 设置<p>查询授权用户信息类型，取值如下：</p><ul> <li><b>0</b>：（默认）不返回授权用户信息</li> <li><b>1</b>：返回授权用户的信息</li> </ul>
                     * @param _infoType <p>查询授权用户信息类型，取值如下：</p><ul> <li><b>0</b>：（默认）不返回授权用户信息</li> <li><b>1</b>：返回授权用户的信息</li> </ul>
                     * 
                     */
                    void SetInfoType(const int64_t& _infoType);

                    /**
                     * 判断参数 InfoType 是否已赋值
                     * @return InfoType 是否已赋值
                     * 
                     */
                    bool InfoTypeHasBeenSet() const;

                    /**
                     * 获取<p>印章id，是否查询特定的印章（没有输入返回所有）</p><p>注:  <code>没有输入返回所有记录，最大返回100条。</code></p>
                     * @return SealId <p>印章id，是否查询特定的印章（没有输入返回所有）</p><p>注:  <code>没有输入返回所有记录，最大返回100条。</code></p>
                     * 
                     */
                    std::string GetSealId() const;

                    /**
                     * 设置<p>印章id，是否查询特定的印章（没有输入返回所有）</p><p>注:  <code>没有输入返回所有记录，最大返回100条。</code></p>
                     * @param _sealId <p>印章id，是否查询特定的印章（没有输入返回所有）</p><p>注:  <code>没有输入返回所有记录，最大返回100条。</code></p>
                     * 
                     */
                    void SetSealId(const std::string& _sealId);

                    /**
                     * 判断参数 SealId 是否已赋值
                     * @return SealId 是否已赋值
                     * 
                     */
                    bool SealIdHasBeenSet() const;

                    /**
                     * 获取<p>电子印章类型 , 可选类型如下: <ul><li><strong>OFFICIAL</strong>: 公章</li><li><strong>CONTRACT</strong>: 合同专用章;</li><li><strong>FINANCE</strong>: 财务专用章;</li><li><strong>PERSONNEL</strong>: 人事专用章</li><li><strong>INVOICE</strong>: 发票专用章</li><li><strong>LEGAL_PERSON_SEAL</strong>: 法定代表人章;</li><li><strong>EMPLOYEE_QUALIFICATION_SEAL</strong>: 员工执业章</li><li><strong>OTHER</strong>: 其他类型印章</li><li><strong>OTHER_XX</strong>: 其他印章子类型</li></ul>注:  <code>1.为空时查询所有类型的印章。</code><br>注:  <code>2.OTHER_XX该类型为其他印章子类型，如需使用，请联系对接客服申请开通。具体可传入的子类型值，需在申请开通后由客服提供。</code></p>
                     * @return SealTypes <p>电子印章类型 , 可选类型如下: <ul><li><strong>OFFICIAL</strong>: 公章</li><li><strong>CONTRACT</strong>: 合同专用章;</li><li><strong>FINANCE</strong>: 财务专用章;</li><li><strong>PERSONNEL</strong>: 人事专用章</li><li><strong>INVOICE</strong>: 发票专用章</li><li><strong>LEGAL_PERSON_SEAL</strong>: 法定代表人章;</li><li><strong>EMPLOYEE_QUALIFICATION_SEAL</strong>: 员工执业章</li><li><strong>OTHER</strong>: 其他类型印章</li><li><strong>OTHER_XX</strong>: 其他印章子类型</li></ul>注:  <code>1.为空时查询所有类型的印章。</code><br>注:  <code>2.OTHER_XX该类型为其他印章子类型，如需使用，请联系对接客服申请开通。具体可传入的子类型值，需在申请开通后由客服提供。</code></p>
                     * 
                     */
                    std::vector<std::string> GetSealTypes() const;

                    /**
                     * 设置<p>电子印章类型 , 可选类型如下: <ul><li><strong>OFFICIAL</strong>: 公章</li><li><strong>CONTRACT</strong>: 合同专用章;</li><li><strong>FINANCE</strong>: 财务专用章;</li><li><strong>PERSONNEL</strong>: 人事专用章</li><li><strong>INVOICE</strong>: 发票专用章</li><li><strong>LEGAL_PERSON_SEAL</strong>: 法定代表人章;</li><li><strong>EMPLOYEE_QUALIFICATION_SEAL</strong>: 员工执业章</li><li><strong>OTHER</strong>: 其他类型印章</li><li><strong>OTHER_XX</strong>: 其他印章子类型</li></ul>注:  <code>1.为空时查询所有类型的印章。</code><br>注:  <code>2.OTHER_XX该类型为其他印章子类型，如需使用，请联系对接客服申请开通。具体可传入的子类型值，需在申请开通后由客服提供。</code></p>
                     * @param _sealTypes <p>电子印章类型 , 可选类型如下: <ul><li><strong>OFFICIAL</strong>: 公章</li><li><strong>CONTRACT</strong>: 合同专用章;</li><li><strong>FINANCE</strong>: 财务专用章;</li><li><strong>PERSONNEL</strong>: 人事专用章</li><li><strong>INVOICE</strong>: 发票专用章</li><li><strong>LEGAL_PERSON_SEAL</strong>: 法定代表人章;</li><li><strong>EMPLOYEE_QUALIFICATION_SEAL</strong>: 员工执业章</li><li><strong>OTHER</strong>: 其他类型印章</li><li><strong>OTHER_XX</strong>: 其他印章子类型</li></ul>注:  <code>1.为空时查询所有类型的印章。</code><br>注:  <code>2.OTHER_XX该类型为其他印章子类型，如需使用，请联系对接客服申请开通。具体可传入的子类型值，需在申请开通后由客服提供。</code></p>
                     * 
                     */
                    void SetSealTypes(const std::vector<std::string>& _sealTypes);

                    /**
                     * 判断参数 SealTypes 是否已赋值
                     * @return SealTypes 是否已赋值
                     * 
                     */
                    bool SealTypesHasBeenSet() const;

                    /**
                     * 获取<p>需查询的印章状态列表。</p><ul> <li>空，()仅查询启用状态的印章；</li> <li><strong>ALL</strong>，查询所有状态的印章；</li> <li><strong>CHECKING</strong>，查询待审核的印章；</li> <li><strong>SUCCESS</strong>，查询启用状态的印章；</li> <li><strong>FAIL</strong>，查询印章审核拒绝的印章；</li> <li><strong>DISABLE</strong>，查询已停用的印章；</li> <li><strong>STOPPED</strong>，查询已终止的印章；</li> <li><strong>VOID</strong>，查询已作废的印章；</li> <li><strong>INVALID</strong>，查询已失效的印章。</li> </ul>
                     * @return SealStatuses <p>需查询的印章状态列表。</p><ul> <li>空，()仅查询启用状态的印章；</li> <li><strong>ALL</strong>，查询所有状态的印章；</li> <li><strong>CHECKING</strong>，查询待审核的印章；</li> <li><strong>SUCCESS</strong>，查询启用状态的印章；</li> <li><strong>FAIL</strong>，查询印章审核拒绝的印章；</li> <li><strong>DISABLE</strong>，查询已停用的印章；</li> <li><strong>STOPPED</strong>，查询已终止的印章；</li> <li><strong>VOID</strong>，查询已作废的印章；</li> <li><strong>INVALID</strong>，查询已失效的印章。</li> </ul>
                     * 
                     */
                    std::vector<std::string> GetSealStatuses() const;

                    /**
                     * 设置<p>需查询的印章状态列表。</p><ul> <li>空，()仅查询启用状态的印章；</li> <li><strong>ALL</strong>，查询所有状态的印章；</li> <li><strong>CHECKING</strong>，查询待审核的印章；</li> <li><strong>SUCCESS</strong>，查询启用状态的印章；</li> <li><strong>FAIL</strong>，查询印章审核拒绝的印章；</li> <li><strong>DISABLE</strong>，查询已停用的印章；</li> <li><strong>STOPPED</strong>，查询已终止的印章；</li> <li><strong>VOID</strong>，查询已作废的印章；</li> <li><strong>INVALID</strong>，查询已失效的印章。</li> </ul>
                     * @param _sealStatuses <p>需查询的印章状态列表。</p><ul> <li>空，()仅查询启用状态的印章；</li> <li><strong>ALL</strong>，查询所有状态的印章；</li> <li><strong>CHECKING</strong>，查询待审核的印章；</li> <li><strong>SUCCESS</strong>，查询启用状态的印章；</li> <li><strong>FAIL</strong>，查询印章审核拒绝的印章；</li> <li><strong>DISABLE</strong>，查询已停用的印章；</li> <li><strong>STOPPED</strong>，查询已终止的印章；</li> <li><strong>VOID</strong>，查询已作废的印章；</li> <li><strong>INVALID</strong>，查询已失效的印章。</li> </ul>
                     * 
                     */
                    void SetSealStatuses(const std::vector<std::string>& _sealStatuses);

                    /**
                     * 判断参数 SealStatuses 是否已赋值
                     * @return SealStatuses 是否已赋值
                     * 
                     */
                    bool SealStatusesHasBeenSet() const;

                private:

                    /**
                     * <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>指定分页每页返回的数据条数，单页最大支持 100。默认值为20</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页查询偏移量，默认为0，最大为20000</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>查询授权用户信息类型，取值如下：</p><ul> <li><b>0</b>：（默认）不返回授权用户信息</li> <li><b>1</b>：返回授权用户的信息</li> </ul>
                     */
                    int64_t m_infoType;
                    bool m_infoTypeHasBeenSet;

                    /**
                     * <p>印章id，是否查询特定的印章（没有输入返回所有）</p><p>注:  <code>没有输入返回所有记录，最大返回100条。</code></p>
                     */
                    std::string m_sealId;
                    bool m_sealIdHasBeenSet;

                    /**
                     * <p>电子印章类型 , 可选类型如下: <ul><li><strong>OFFICIAL</strong>: 公章</li><li><strong>CONTRACT</strong>: 合同专用章;</li><li><strong>FINANCE</strong>: 财务专用章;</li><li><strong>PERSONNEL</strong>: 人事专用章</li><li><strong>INVOICE</strong>: 发票专用章</li><li><strong>LEGAL_PERSON_SEAL</strong>: 法定代表人章;</li><li><strong>EMPLOYEE_QUALIFICATION_SEAL</strong>: 员工执业章</li><li><strong>OTHER</strong>: 其他类型印章</li><li><strong>OTHER_XX</strong>: 其他印章子类型</li></ul>注:  <code>1.为空时查询所有类型的印章。</code><br>注:  <code>2.OTHER_XX该类型为其他印章子类型，如需使用，请联系对接客服申请开通。具体可传入的子类型值，需在申请开通后由客服提供。</code></p>
                     */
                    std::vector<std::string> m_sealTypes;
                    bool m_sealTypesHasBeenSet;

                    /**
                     * <p>需查询的印章状态列表。</p><ul> <li>空，()仅查询启用状态的印章；</li> <li><strong>ALL</strong>，查询所有状态的印章；</li> <li><strong>CHECKING</strong>，查询待审核的印章；</li> <li><strong>SUCCESS</strong>，查询启用状态的印章；</li> <li><strong>FAIL</strong>，查询印章审核拒绝的印章；</li> <li><strong>DISABLE</strong>，查询已停用的印章；</li> <li><strong>STOPPED</strong>，查询已终止的印章；</li> <li><strong>VOID</strong>，查询已作废的印章；</li> <li><strong>INVALID</strong>，查询已失效的印章。</li> </ul>
                     */
                    std::vector<std::string> m_sealStatuses;
                    bool m_sealStatusesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDESCRIBEORGANIZATIONSEALSREQUEST_H_
