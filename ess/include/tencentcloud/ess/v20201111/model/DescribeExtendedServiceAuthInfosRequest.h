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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEEXTENDEDSERVICEAUTHINFOSREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEEXTENDEDSERVICEAUTHINFOSREQUEST_H_

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
                * DescribeExtendedServiceAuthInfos请求参数结构体
                */
                class DescribeExtendedServiceAuthInfosRequest : public AbstractModel
                {
                public:
                    DescribeExtendedServiceAuthInfosRequest();
                    ~DescribeExtendedServiceAuthInfosRequest() = default;
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
                     * 获取要查询的扩展服务类型。
默认为空，即查询当前支持的所有扩展服务信息。
若需查询单个扩展服务的开通情况，请传递相应的值，如下所示：
<ul><li>OPEN_SERVER_SIGN：企业自动签署</li>
<li>AUTO_SIGN_CAN_FILL_IN：本企业自动签合同支持签前内容补充</li>
<li>BATCH_SIGN：批量签署</li>
<li>OVERSEA_SIGN：企业与港澳台居民签署合同</li>
<li>AGE_LIMIT_EXPANSION：拓宽签署方年龄限制</li>
<li>MOBILE_CHECK_APPROVER：个人签署方仅校验手机号</li>
<li>HIDE_OPERATOR_DISPLAY：隐藏合同经办人姓名</li>
<li>ORGANIZATION_OCR_FALLBACK：正楷临摹签名失败后更换其他签名类型</li>
<li>ORGANIZATION_FLOW_NOTIFY_TYPE：短信通知签署方</li>
<li>ORGANIZATION_FLOW_EMAIL_NOTIFY：邮件通知签署方</li>
<li>FLOW_APPROVAL：合同审批强制开启</li>
<li>ORGANIZATION_FLOW_PASSWD_NOTIFY：签署密码开通引导</li>
<li>HIDE_ONE_KEY_SIGN：个人签署方手写签名时需逐个手写</li>
<li>SIGN_SIGNATURE_DEFAULT_SET_HANDWRITE：个人签署方手动签名</li>
<li>APP_LOGIN：限制企业员工小程序端登录</li>
<li>PC_LOGIN：限制企业员工网页端登录</li>
</ul>
                     * @return ExtendServiceType 要查询的扩展服务类型。
默认为空，即查询当前支持的所有扩展服务信息。
若需查询单个扩展服务的开通情况，请传递相应的值，如下所示：
<ul><li>OPEN_SERVER_SIGN：企业自动签署</li>
<li>AUTO_SIGN_CAN_FILL_IN：本企业自动签合同支持签前内容补充</li>
<li>BATCH_SIGN：批量签署</li>
<li>OVERSEA_SIGN：企业与港澳台居民签署合同</li>
<li>AGE_LIMIT_EXPANSION：拓宽签署方年龄限制</li>
<li>MOBILE_CHECK_APPROVER：个人签署方仅校验手机号</li>
<li>HIDE_OPERATOR_DISPLAY：隐藏合同经办人姓名</li>
<li>ORGANIZATION_OCR_FALLBACK：正楷临摹签名失败后更换其他签名类型</li>
<li>ORGANIZATION_FLOW_NOTIFY_TYPE：短信通知签署方</li>
<li>ORGANIZATION_FLOW_EMAIL_NOTIFY：邮件通知签署方</li>
<li>FLOW_APPROVAL：合同审批强制开启</li>
<li>ORGANIZATION_FLOW_PASSWD_NOTIFY：签署密码开通引导</li>
<li>HIDE_ONE_KEY_SIGN：个人签署方手写签名时需逐个手写</li>
<li>SIGN_SIGNATURE_DEFAULT_SET_HANDWRITE：个人签署方手动签名</li>
<li>APP_LOGIN：限制企业员工小程序端登录</li>
<li>PC_LOGIN：限制企业员工网页端登录</li>
</ul>
                     * 
                     */
                    std::string GetExtendServiceType() const;

                    /**
                     * 设置要查询的扩展服务类型。
默认为空，即查询当前支持的所有扩展服务信息。
若需查询单个扩展服务的开通情况，请传递相应的值，如下所示：
<ul><li>OPEN_SERVER_SIGN：企业自动签署</li>
<li>AUTO_SIGN_CAN_FILL_IN：本企业自动签合同支持签前内容补充</li>
<li>BATCH_SIGN：批量签署</li>
<li>OVERSEA_SIGN：企业与港澳台居民签署合同</li>
<li>AGE_LIMIT_EXPANSION：拓宽签署方年龄限制</li>
<li>MOBILE_CHECK_APPROVER：个人签署方仅校验手机号</li>
<li>HIDE_OPERATOR_DISPLAY：隐藏合同经办人姓名</li>
<li>ORGANIZATION_OCR_FALLBACK：正楷临摹签名失败后更换其他签名类型</li>
<li>ORGANIZATION_FLOW_NOTIFY_TYPE：短信通知签署方</li>
<li>ORGANIZATION_FLOW_EMAIL_NOTIFY：邮件通知签署方</li>
<li>FLOW_APPROVAL：合同审批强制开启</li>
<li>ORGANIZATION_FLOW_PASSWD_NOTIFY：签署密码开通引导</li>
<li>HIDE_ONE_KEY_SIGN：个人签署方手写签名时需逐个手写</li>
<li>SIGN_SIGNATURE_DEFAULT_SET_HANDWRITE：个人签署方手动签名</li>
<li>APP_LOGIN：限制企业员工小程序端登录</li>
<li>PC_LOGIN：限制企业员工网页端登录</li>
</ul>
                     * @param _extendServiceType 要查询的扩展服务类型。
默认为空，即查询当前支持的所有扩展服务信息。
若需查询单个扩展服务的开通情况，请传递相应的值，如下所示：
<ul><li>OPEN_SERVER_SIGN：企业自动签署</li>
<li>AUTO_SIGN_CAN_FILL_IN：本企业自动签合同支持签前内容补充</li>
<li>BATCH_SIGN：批量签署</li>
<li>OVERSEA_SIGN：企业与港澳台居民签署合同</li>
<li>AGE_LIMIT_EXPANSION：拓宽签署方年龄限制</li>
<li>MOBILE_CHECK_APPROVER：个人签署方仅校验手机号</li>
<li>HIDE_OPERATOR_DISPLAY：隐藏合同经办人姓名</li>
<li>ORGANIZATION_OCR_FALLBACK：正楷临摹签名失败后更换其他签名类型</li>
<li>ORGANIZATION_FLOW_NOTIFY_TYPE：短信通知签署方</li>
<li>ORGANIZATION_FLOW_EMAIL_NOTIFY：邮件通知签署方</li>
<li>FLOW_APPROVAL：合同审批强制开启</li>
<li>ORGANIZATION_FLOW_PASSWD_NOTIFY：签署密码开通引导</li>
<li>HIDE_ONE_KEY_SIGN：个人签署方手写签名时需逐个手写</li>
<li>SIGN_SIGNATURE_DEFAULT_SET_HANDWRITE：个人签署方手动签名</li>
<li>APP_LOGIN：限制企业员工小程序端登录</li>
<li>PC_LOGIN：限制企业员工网页端登录</li>
</ul>
                     * 
                     */
                    void SetExtendServiceType(const std::string& _extendServiceType);

                    /**
                     * 判断参数 ExtendServiceType 是否已赋值
                     * @return ExtendServiceType 是否已赋值
                     * 
                     */
                    bool ExtendServiceTypeHasBeenSet() const;

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

                private:

                    /**
                     * 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 要查询的扩展服务类型。
默认为空，即查询当前支持的所有扩展服务信息。
若需查询单个扩展服务的开通情况，请传递相应的值，如下所示：
<ul><li>OPEN_SERVER_SIGN：企业自动签署</li>
<li>AUTO_SIGN_CAN_FILL_IN：本企业自动签合同支持签前内容补充</li>
<li>BATCH_SIGN：批量签署</li>
<li>OVERSEA_SIGN：企业与港澳台居民签署合同</li>
<li>AGE_LIMIT_EXPANSION：拓宽签署方年龄限制</li>
<li>MOBILE_CHECK_APPROVER：个人签署方仅校验手机号</li>
<li>HIDE_OPERATOR_DISPLAY：隐藏合同经办人姓名</li>
<li>ORGANIZATION_OCR_FALLBACK：正楷临摹签名失败后更换其他签名类型</li>
<li>ORGANIZATION_FLOW_NOTIFY_TYPE：短信通知签署方</li>
<li>ORGANIZATION_FLOW_EMAIL_NOTIFY：邮件通知签署方</li>
<li>FLOW_APPROVAL：合同审批强制开启</li>
<li>ORGANIZATION_FLOW_PASSWD_NOTIFY：签署密码开通引导</li>
<li>HIDE_ONE_KEY_SIGN：个人签署方手写签名时需逐个手写</li>
<li>SIGN_SIGNATURE_DEFAULT_SET_HANDWRITE：个人签署方手动签名</li>
<li>APP_LOGIN：限制企业员工小程序端登录</li>
<li>PC_LOGIN：限制企业员工网页端登录</li>
</ul>
                     */
                    std::string m_extendServiceType;
                    bool m_extendServiceTypeHasBeenSet;

                    /**
                     * 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEEXTENDEDSERVICEAUTHINFOSREQUEST_H_
