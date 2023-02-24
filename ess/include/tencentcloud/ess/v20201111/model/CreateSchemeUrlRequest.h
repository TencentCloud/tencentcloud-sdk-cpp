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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATESCHEMEURLREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATESCHEMEURLREQUEST_H_

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
                * CreateSchemeUrl请求参数结构体
                */
                class CreateSchemeUrlRequest : public AbstractModel
                {
                public:
                    CreateSchemeUrlRequest();
                    ~CreateSchemeUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方用户信息，userId 必填
                     * @return Operator 调用方用户信息，userId 必填
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置调用方用户信息，userId 必填
                     * @param Operator 调用方用户信息，userId 必填
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取企业名称
                     * @return OrganizationName 企业名称
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置企业名称
                     * @param OrganizationName 企业名称
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取姓名,最大长度50个字符
                     * @return Name 姓名,最大长度50个字符
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名,最大长度50个字符
                     * @param Name 姓名,最大长度50个字符
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取手机号，大陆手机号11位
                     * @return Mobile 手机号，大陆手机号11位
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置手机号，大陆手机号11位
                     * @param Mobile 手机号，大陆手机号11位
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取链接类型
HTTP：跳转电子签小程序的http_url，
APP：第三方APP或小程序跳转电子签小程序的path。
默认为HTTP类型
                     * @return EndPoint 链接类型
HTTP：跳转电子签小程序的http_url，
APP：第三方APP或小程序跳转电子签小程序的path。
默认为HTTP类型
                     */
                    std::string GetEndPoint() const;

                    /**
                     * 设置链接类型
HTTP：跳转电子签小程序的http_url，
APP：第三方APP或小程序跳转电子签小程序的path。
默认为HTTP类型
                     * @param EndPoint 链接类型
HTTP：跳转电子签小程序的http_url，
APP：第三方APP或小程序跳转电子签小程序的path。
默认为HTTP类型
                     */
                    void SetEndPoint(const std::string& _endPoint);

                    /**
                     * 判断参数 EndPoint 是否已赋值
                     * @return EndPoint 是否已赋值
                     */
                    bool EndPointHasBeenSet() const;

                    /**
                     * 获取签署流程编号 (PathType=1时必传)
                     * @return FlowId 签署流程编号 (PathType=1时必传)
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置签署流程编号 (PathType=1时必传)
                     * @param FlowId 签署流程编号 (PathType=1时必传)
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取跳转页面 1: 小程序合同详情 2: 小程序合同列表页 0: 不传, 默认主页
                     * @return PathType 跳转页面 1: 小程序合同详情 2: 小程序合同列表页 0: 不传, 默认主页
                     */
                    uint64_t GetPathType() const;

                    /**
                     * 设置跳转页面 1: 小程序合同详情 2: 小程序合同列表页 0: 不传, 默认主页
                     * @param PathType 跳转页面 1: 小程序合同详情 2: 小程序合同列表页 0: 不传, 默认主页
                     */
                    void SetPathType(const uint64_t& _pathType);

                    /**
                     * 判断参数 PathType 是否已赋值
                     * @return PathType 是否已赋值
                     */
                    bool PathTypeHasBeenSet() const;

                    /**
                     * 获取是否自动回跳 true：是， false：否。该参数只针对"APP" 类型的签署链接有效
                     * @return AutoJumpBack 是否自动回跳 true：是， false：否。该参数只针对"APP" 类型的签署链接有效
                     */
                    bool GetAutoJumpBack() const;

                    /**
                     * 设置是否自动回跳 true：是， false：否。该参数只针对"APP" 类型的签署链接有效
                     * @param AutoJumpBack 是否自动回跳 true：是， false：否。该参数只针对"APP" 类型的签署链接有效
                     */
                    void SetAutoJumpBack(const bool& _autoJumpBack);

                    /**
                     * 判断参数 AutoJumpBack 是否已赋值
                     * @return AutoJumpBack 是否已赋值
                     */
                    bool AutoJumpBackHasBeenSet() const;

                    /**
                     * 获取代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * @return Agent 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * @param Agent 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                private:

                    /**
                     * 调用方用户信息，userId 必填
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 企业名称
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 姓名,最大长度50个字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 手机号，大陆手机号11位
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 链接类型
HTTP：跳转电子签小程序的http_url，
APP：第三方APP或小程序跳转电子签小程序的path。
默认为HTTP类型
                     */
                    std::string m_endPoint;
                    bool m_endPointHasBeenSet;

                    /**
                     * 签署流程编号 (PathType=1时必传)
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 跳转页面 1: 小程序合同详情 2: 小程序合同列表页 0: 不传, 默认主页
                     */
                    uint64_t m_pathType;
                    bool m_pathTypeHasBeenSet;

                    /**
                     * 是否自动回跳 true：是， false：否。该参数只针对"APP" 类型的签署链接有效
                     */
                    bool m_autoJumpBack;
                    bool m_autoJumpBackHasBeenSet;

                    /**
                     * 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATESCHEMEURLREQUEST_H_
