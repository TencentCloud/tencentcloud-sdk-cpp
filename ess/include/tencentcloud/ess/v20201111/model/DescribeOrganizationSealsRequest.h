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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEORGANIZATIONSEALSREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEORGANIZATIONSEALSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeOrganizationSeals请求参数结构体
                */
                class DescribeOrganizationSealsRequest : public AbstractModel
                {
                public:
                    DescribeOrganizationSealsRequest();
                    ~DescribeOrganizationSealsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @return Operator 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @param _operator 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取指定分页每页返回的数据条数，如果不传默认为 20，单页最大支持 200。
                     * @return Limit 指定分页每页返回的数据条数，如果不传默认为 20，单页最大支持 200。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置指定分页每页返回的数据条数，如果不传默认为 20，单页最大支持 200。
                     * @param _limit 指定分页每页返回的数据条数，如果不传默认为 20，单页最大支持 200。
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
                     * 获取指定分页返回第几页的数据，如果不传默认返回第一页，页码从 0 开始，即首页为 0，最大 20000。
                     * @return Offset 指定分页返回第几页的数据，如果不传默认返回第一页，页码从 0 开始，即首页为 0，最大 20000。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置指定分页返回第几页的数据，如果不传默认返回第一页，页码从 0 开始，即首页为 0，最大 20000。
                     * @param _offset 指定分页返回第几页的数据，如果不传默认返回第一页，页码从 0 开始，即首页为 0，最大 20000。
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
                     * 获取查询授权用户信息类型，取值如下：

<ul> <li><b>0</b>：（默认）不返回授权用户信息</li> <li><b>1</b>：返回授权用户的信息</li> </ul>
                     * @return InfoType 查询授权用户信息类型，取值如下：

<ul> <li><b>0</b>：（默认）不返回授权用户信息</li> <li><b>1</b>：返回授权用户的信息</li> </ul>
                     * 
                     */
                    int64_t GetInfoType() const;

                    /**
                     * 设置查询授权用户信息类型，取值如下：

<ul> <li><b>0</b>：（默认）不返回授权用户信息</li> <li><b>1</b>：返回授权用户的信息</li> </ul>
                     * @param _infoType 查询授权用户信息类型，取值如下：

<ul> <li><b>0</b>：（默认）不返回授权用户信息</li> <li><b>1</b>：返回授权用户的信息</li> </ul>
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
                     * 获取印章id，是否查询特定的印章（没有输入返回所有）
                     * @return SealId 印章id，是否查询特定的印章（没有输入返回所有）
                     * 
                     */
                    std::string GetSealId() const;

                    /**
                     * 设置印章id，是否查询特定的印章（没有输入返回所有）
                     * @param _sealId 印章id，是否查询特定的印章（没有输入返回所有）
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
                     * 获取印章种类列表（均为组织机构印章）。 若无特定需求，将展示所有类型的印章。 目前支持以下几种：<ul> <li><strong>OFFICIAL</strong>：企业公章；</li> <li><strong>CONTRACT</strong>：合同专用章；</li> <li><strong>ORGANIZATION_SEAL</strong>：企业印章（通过图片上传创建）；</li> <li><strong>LEGAL_PERSON_SEAL</strong>：法定代表人章。</li> <li><strong>EMPLOYEE_QUALIFICATION_SEAL</strong>：员工执业章。</li> </ul>
                     * @return SealTypes 印章种类列表（均为组织机构印章）。 若无特定需求，将展示所有类型的印章。 目前支持以下几种：<ul> <li><strong>OFFICIAL</strong>：企业公章；</li> <li><strong>CONTRACT</strong>：合同专用章；</li> <li><strong>ORGANIZATION_SEAL</strong>：企业印章（通过图片上传创建）；</li> <li><strong>LEGAL_PERSON_SEAL</strong>：法定代表人章。</li> <li><strong>EMPLOYEE_QUALIFICATION_SEAL</strong>：员工执业章。</li> </ul>
                     * 
                     */
                    std::vector<std::string> GetSealTypes() const;

                    /**
                     * 设置印章种类列表（均为组织机构印章）。 若无特定需求，将展示所有类型的印章。 目前支持以下几种：<ul> <li><strong>OFFICIAL</strong>：企业公章；</li> <li><strong>CONTRACT</strong>：合同专用章；</li> <li><strong>ORGANIZATION_SEAL</strong>：企业印章（通过图片上传创建）；</li> <li><strong>LEGAL_PERSON_SEAL</strong>：法定代表人章。</li> <li><strong>EMPLOYEE_QUALIFICATION_SEAL</strong>：员工执业章。</li> </ul>
                     * @param _sealTypes 印章种类列表（均为组织机构印章）。 若无特定需求，将展示所有类型的印章。 目前支持以下几种：<ul> <li><strong>OFFICIAL</strong>：企业公章；</li> <li><strong>CONTRACT</strong>：合同专用章；</li> <li><strong>ORGANIZATION_SEAL</strong>：企业印章（通过图片上传创建）；</li> <li><strong>LEGAL_PERSON_SEAL</strong>：法定代表人章。</li> <li><strong>EMPLOYEE_QUALIFICATION_SEAL</strong>：员工执业章。</li> </ul>
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
                     * 获取代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @return Agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @param _agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
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
                     * 获取需查询的印章状态列表。
<ul>
<li>空：（默认）仅查询启用状态的印章；</li>
<li><strong>ALL</strong>：查询所有状态的印章；</li>
<li><strong>CHECKING</strong>：查询待审核的印章；</li>
<li><strong>SUCCESS</strong>：查询启用状态的印章；</li>
<li><strong>FAIL</strong>：查询印章审核拒绝的印章；</li>
<li><strong>DISABLE</strong>：查询已停用的印章；</li>
<li><strong>STOPPED</strong>：查询已终止的印章；</li>
<li><strong>VOID</strong>：查询已作废的印章；</li>
<li><strong>INVALID</strong>：查询已失效的印章。</li>
</ul>
                     * @return SealStatuses 需查询的印章状态列表。
<ul>
<li>空：（默认）仅查询启用状态的印章；</li>
<li><strong>ALL</strong>：查询所有状态的印章；</li>
<li><strong>CHECKING</strong>：查询待审核的印章；</li>
<li><strong>SUCCESS</strong>：查询启用状态的印章；</li>
<li><strong>FAIL</strong>：查询印章审核拒绝的印章；</li>
<li><strong>DISABLE</strong>：查询已停用的印章；</li>
<li><strong>STOPPED</strong>：查询已终止的印章；</li>
<li><strong>VOID</strong>：查询已作废的印章；</li>
<li><strong>INVALID</strong>：查询已失效的印章。</li>
</ul>
                     * 
                     */
                    std::vector<std::string> GetSealStatuses() const;

                    /**
                     * 设置需查询的印章状态列表。
<ul>
<li>空：（默认）仅查询启用状态的印章；</li>
<li><strong>ALL</strong>：查询所有状态的印章；</li>
<li><strong>CHECKING</strong>：查询待审核的印章；</li>
<li><strong>SUCCESS</strong>：查询启用状态的印章；</li>
<li><strong>FAIL</strong>：查询印章审核拒绝的印章；</li>
<li><strong>DISABLE</strong>：查询已停用的印章；</li>
<li><strong>STOPPED</strong>：查询已终止的印章；</li>
<li><strong>VOID</strong>：查询已作废的印章；</li>
<li><strong>INVALID</strong>：查询已失效的印章。</li>
</ul>
                     * @param _sealStatuses 需查询的印章状态列表。
<ul>
<li>空：（默认）仅查询启用状态的印章；</li>
<li><strong>ALL</strong>：查询所有状态的印章；</li>
<li><strong>CHECKING</strong>：查询待审核的印章；</li>
<li><strong>SUCCESS</strong>：查询启用状态的印章；</li>
<li><strong>FAIL</strong>：查询印章审核拒绝的印章；</li>
<li><strong>DISABLE</strong>：查询已停用的印章；</li>
<li><strong>STOPPED</strong>：查询已终止的印章；</li>
<li><strong>VOID</strong>：查询已作废的印章；</li>
<li><strong>INVALID</strong>：查询已失效的印章。</li>
</ul>
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
                     * 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 指定分页每页返回的数据条数，如果不传默认为 20，单页最大支持 200。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 指定分页返回第几页的数据，如果不传默认返回第一页，页码从 0 开始，即首页为 0，最大 20000。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询授权用户信息类型，取值如下：

<ul> <li><b>0</b>：（默认）不返回授权用户信息</li> <li><b>1</b>：返回授权用户的信息</li> </ul>
                     */
                    int64_t m_infoType;
                    bool m_infoTypeHasBeenSet;

                    /**
                     * 印章id，是否查询特定的印章（没有输入返回所有）
                     */
                    std::string m_sealId;
                    bool m_sealIdHasBeenSet;

                    /**
                     * 印章种类列表（均为组织机构印章）。 若无特定需求，将展示所有类型的印章。 目前支持以下几种：<ul> <li><strong>OFFICIAL</strong>：企业公章；</li> <li><strong>CONTRACT</strong>：合同专用章；</li> <li><strong>ORGANIZATION_SEAL</strong>：企业印章（通过图片上传创建）；</li> <li><strong>LEGAL_PERSON_SEAL</strong>：法定代表人章。</li> <li><strong>EMPLOYEE_QUALIFICATION_SEAL</strong>：员工执业章。</li> </ul>
                     */
                    std::vector<std::string> m_sealTypes;
                    bool m_sealTypesHasBeenSet;

                    /**
                     * 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 需查询的印章状态列表。
<ul>
<li>空：（默认）仅查询启用状态的印章；</li>
<li><strong>ALL</strong>：查询所有状态的印章；</li>
<li><strong>CHECKING</strong>：查询待审核的印章；</li>
<li><strong>SUCCESS</strong>：查询启用状态的印章；</li>
<li><strong>FAIL</strong>：查询印章审核拒绝的印章；</li>
<li><strong>DISABLE</strong>：查询已停用的印章；</li>
<li><strong>STOPPED</strong>：查询已终止的印章；</li>
<li><strong>VOID</strong>：查询已作废的印章；</li>
<li><strong>INVALID</strong>：查询已失效的印章。</li>
</ul>
                     */
                    std::vector<std::string> m_sealStatuses;
                    bool m_sealStatusesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEORGANIZATIONSEALSREQUEST_H_
