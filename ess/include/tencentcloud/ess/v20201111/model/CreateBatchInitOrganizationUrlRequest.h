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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEBATCHINITORGANIZATIONURLREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEBATCHINITORGANIZATIONURLREQUEST_H_

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
                * CreateBatchInitOrganizationUrl请求参数结构体
                */
                class CreateBatchInitOrganizationUrlRequest : public AbstractModel
                {
                public:
                    CreateBatchInitOrganizationUrlRequest();
                    ~CreateBatchInitOrganizationUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @return Operator <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @param _operator <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
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
                     * 获取<p>初始化操作类型<ul><li>CREATE_SEAL : 创建印章</li><li>AUTH_JOIN_ORGANIZATION_GROUP : 加入集团企业</li><li>OPEN_AUTO_SIGN :开通企业“授权签”</li><li>PARTNER_AUTO_SIGN_AUTH :合作方企业授权“授权签”</li><li>CHANGE_SUB_ORGANIZATION_ADMIN_AUTH :变更子企业超管授权(<strong>授权后，主企业可变更子企业超管，此功能需联系客户经理开通白名单使用</strong>)</li></ul></p>
                     * @return OperateTypes <p>初始化操作类型<ul><li>CREATE_SEAL : 创建印章</li><li>AUTH_JOIN_ORGANIZATION_GROUP : 加入集团企业</li><li>OPEN_AUTO_SIGN :开通企业“授权签”</li><li>PARTNER_AUTO_SIGN_AUTH :合作方企业授权“授权签”</li><li>CHANGE_SUB_ORGANIZATION_ADMIN_AUTH :变更子企业超管授权(<strong>授权后，主企业可变更子企业超管，此功能需联系客户经理开通白名单使用</strong>)</li></ul></p>
                     * 
                     */
                    std::vector<std::string> GetOperateTypes() const;

                    /**
                     * 设置<p>初始化操作类型<ul><li>CREATE_SEAL : 创建印章</li><li>AUTH_JOIN_ORGANIZATION_GROUP : 加入集团企业</li><li>OPEN_AUTO_SIGN :开通企业“授权签”</li><li>PARTNER_AUTO_SIGN_AUTH :合作方企业授权“授权签”</li><li>CHANGE_SUB_ORGANIZATION_ADMIN_AUTH :变更子企业超管授权(<strong>授权后，主企业可变更子企业超管，此功能需联系客户经理开通白名单使用</strong>)</li></ul></p>
                     * @param _operateTypes <p>初始化操作类型<ul><li>CREATE_SEAL : 创建印章</li><li>AUTH_JOIN_ORGANIZATION_GROUP : 加入集团企业</li><li>OPEN_AUTO_SIGN :开通企业“授权签”</li><li>PARTNER_AUTO_SIGN_AUTH :合作方企业授权“授权签”</li><li>CHANGE_SUB_ORGANIZATION_ADMIN_AUTH :变更子企业超管授权(<strong>授权后，主企业可变更子企业超管，此功能需联系客户经理开通白名单使用</strong>)</li></ul></p>
                     * 
                     */
                    void SetOperateTypes(const std::vector<std::string>& _operateTypes);

                    /**
                     * 判断参数 OperateTypes 是否已赋值
                     * @return OperateTypes 是否已赋值
                     * 
                     */
                    bool OperateTypesHasBeenSet() const;

                    /**
                     * 获取<p>批量操作的企业Id列表，最大支持50个</p>
                     * @return OrganizationIds <p>批量操作的企业Id列表，最大支持50个</p>
                     * 
                     */
                    std::vector<std::string> GetOrganizationIds() const;

                    /**
                     * 设置<p>批量操作的企业Id列表，最大支持50个</p>
                     * @param _organizationIds <p>批量操作的企业Id列表，最大支持50个</p>
                     * 
                     */
                    void SetOrganizationIds(const std::vector<std::string>& _organizationIds);

                    /**
                     * 判断参数 OrganizationIds 是否已赋值
                     * @return OrganizationIds 是否已赋值
                     * 
                     */
                    bool OrganizationIdsHasBeenSet() const;

                    /**
                     * 获取<p>代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填</p>
                     * @return Agent <p>代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填</p>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填</p>
                     * @param _agent <p>代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填</p>
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
                     * 获取<p>被授权的合作方企业在电子签的企业电子签账号，当操作类型包含 PARTNER_AUTO_SIGN_AUTH （合作方企业授权“授权签”）时必传。企业电子签账号可在<a href="https://qian.tencent.com/console/company-settings/company-center">电子签的网页端</a> ，于企业设置-企业信息菜单栏下复制获取。<img src="https://qcloudimg.tencent-cloud.cn/raw/4e6b30ee92f00671f7f1c5bd127c27db.png" alt="企业电子签账号"></p>
                     * @return AuthorizedOrganizationId <p>被授权的合作方企业在电子签的企业电子签账号，当操作类型包含 PARTNER_AUTO_SIGN_AUTH （合作方企业授权“授权签”）时必传。企业电子签账号可在<a href="https://qian.tencent.com/console/company-settings/company-center">电子签的网页端</a> ，于企业设置-企业信息菜单栏下复制获取。<img src="https://qcloudimg.tencent-cloud.cn/raw/4e6b30ee92f00671f7f1c5bd127c27db.png" alt="企业电子签账号"></p>
                     * 
                     */
                    std::string GetAuthorizedOrganizationId() const;

                    /**
                     * 设置<p>被授权的合作方企业在电子签的企业电子签账号，当操作类型包含 PARTNER_AUTO_SIGN_AUTH （合作方企业授权“授权签”）时必传。企业电子签账号可在<a href="https://qian.tencent.com/console/company-settings/company-center">电子签的网页端</a> ，于企业设置-企业信息菜单栏下复制获取。<img src="https://qcloudimg.tencent-cloud.cn/raw/4e6b30ee92f00671f7f1c5bd127c27db.png" alt="企业电子签账号"></p>
                     * @param _authorizedOrganizationId <p>被授权的合作方企业在电子签的企业电子签账号，当操作类型包含 PARTNER_AUTO_SIGN_AUTH （合作方企业授权“授权签”）时必传。企业电子签账号可在<a href="https://qian.tencent.com/console/company-settings/company-center">电子签的网页端</a> ，于企业设置-企业信息菜单栏下复制获取。<img src="https://qcloudimg.tencent-cloud.cn/raw/4e6b30ee92f00671f7f1c5bd127c27db.png" alt="企业电子签账号"></p>
                     * 
                     */
                    void SetAuthorizedOrganizationId(const std::string& _authorizedOrganizationId);

                    /**
                     * 判断参数 AuthorizedOrganizationId 是否已赋值
                     * @return AuthorizedOrganizationId 是否已赋值
                     * 
                     */
                    bool AuthorizedOrganizationIdHasBeenSet() const;

                    /**
                     * 获取<p>初始化操作类型里含有CHANGE_SUB_ORGANIZATION_ADMIN_AUTH（变更子企业超管授权）操作类型时，授权协议中主企业的签署方是否使用“授权签”（需操作人有“授权签”授权）</p>
                     * @return ChangeAdminAuthAutoSign <p>初始化操作类型里含有CHANGE_SUB_ORGANIZATION_ADMIN_AUTH（变更子企业超管授权）操作类型时，授权协议中主企业的签署方是否使用“授权签”（需操作人有“授权签”授权）</p>
                     * 
                     */
                    bool GetChangeAdminAuthAutoSign() const;

                    /**
                     * 设置<p>初始化操作类型里含有CHANGE_SUB_ORGANIZATION_ADMIN_AUTH（变更子企业超管授权）操作类型时，授权协议中主企业的签署方是否使用“授权签”（需操作人有“授权签”授权）</p>
                     * @param _changeAdminAuthAutoSign <p>初始化操作类型里含有CHANGE_SUB_ORGANIZATION_ADMIN_AUTH（变更子企业超管授权）操作类型时，授权协议中主企业的签署方是否使用“授权签”（需操作人有“授权签”授权）</p>
                     * 
                     */
                    void SetChangeAdminAuthAutoSign(const bool& _changeAdminAuthAutoSign);

                    /**
                     * 判断参数 ChangeAdminAuthAutoSign 是否已赋值
                     * @return ChangeAdminAuthAutoSign 是否已赋值
                     * 
                     */
                    bool ChangeAdminAuthAutoSignHasBeenSet() const;

                private:

                    /**
                     * <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>初始化操作类型<ul><li>CREATE_SEAL : 创建印章</li><li>AUTH_JOIN_ORGANIZATION_GROUP : 加入集团企业</li><li>OPEN_AUTO_SIGN :开通企业“授权签”</li><li>PARTNER_AUTO_SIGN_AUTH :合作方企业授权“授权签”</li><li>CHANGE_SUB_ORGANIZATION_ADMIN_AUTH :变更子企业超管授权(<strong>授权后，主企业可变更子企业超管，此功能需联系客户经理开通白名单使用</strong>)</li></ul></p>
                     */
                    std::vector<std::string> m_operateTypes;
                    bool m_operateTypesHasBeenSet;

                    /**
                     * <p>批量操作的企业Id列表，最大支持50个</p>
                     */
                    std::vector<std::string> m_organizationIds;
                    bool m_organizationIdsHasBeenSet;

                    /**
                     * <p>代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填</p>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>被授权的合作方企业在电子签的企业电子签账号，当操作类型包含 PARTNER_AUTO_SIGN_AUTH （合作方企业授权“授权签”）时必传。企业电子签账号可在<a href="https://qian.tencent.com/console/company-settings/company-center">电子签的网页端</a> ，于企业设置-企业信息菜单栏下复制获取。<img src="https://qcloudimg.tencent-cloud.cn/raw/4e6b30ee92f00671f7f1c5bd127c27db.png" alt="企业电子签账号"></p>
                     */
                    std::string m_authorizedOrganizationId;
                    bool m_authorizedOrganizationIdHasBeenSet;

                    /**
                     * <p>初始化操作类型里含有CHANGE_SUB_ORGANIZATION_ADMIN_AUTH（变更子企业超管授权）操作类型时，授权协议中主企业的签署方是否使用“授权签”（需操作人有“授权签”授权）</p>
                     */
                    bool m_changeAdminAuthAutoSign;
                    bool m_changeAdminAuthAutoSignHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEBATCHINITORGANIZATIONURLREQUEST_H_
