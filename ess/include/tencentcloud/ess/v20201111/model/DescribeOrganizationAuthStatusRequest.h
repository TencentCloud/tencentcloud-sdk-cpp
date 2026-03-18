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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEORGANIZATIONAUTHSTATUSREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEORGANIZATIONAUTHSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeOrganizationAuthStatus请求参数结构体
                */
                class DescribeOrganizationAuthStatusRequest : public AbstractModel
                {
                public:
                    DescribeOrganizationAuthStatusRequest();
                    ~DescribeOrganizationAuthStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行本接口操作的员工信息。使用此接口时，必须填写userId。 支持填入集团子公司经办人 userId 代发合同。  注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @return Operator 执行本接口操作的员工信息。使用此接口时，必须填写userId。 支持填入集团子公司经办人 userId 代发合同。  注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息。使用此接口时，必须填写userId。 支持填入集团子公司经办人 userId 代发合同。  注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @param _operator 执行本接口操作的员工信息。使用此接口时，必须填写userId。 支持填入集团子公司经办人 userId 代发合同。  注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
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
                     * 获取组织机构名称。 请确认该名称与企业营业执照中注册的名称一致。 如果名称中包含英文括号()，请使用中文括号（）代替。
                     * @return OrganizationName 组织机构名称。 请确认该名称与企业营业执照中注册的名称一致。 如果名称中包含英文括号()，请使用中文括号（）代替。
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置组织机构名称。 请确认该名称与企业营业执照中注册的名称一致。 如果名称中包含英文括号()，请使用中文括号（）代替。
                     * @param _organizationName 组织机构名称。 请确认该名称与企业营业执照中注册的名称一致。 如果名称中包含英文括号()，请使用中文括号（）代替。
                     * 
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     * 
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取企业统一社会信用代码
注意：OrganizationName和UniformSocialCreditCode不能同时为空
                     * @return UniformSocialCreditCode 企业统一社会信用代码
注意：OrganizationName和UniformSocialCreditCode不能同时为空
                     * 
                     */
                    std::string GetUniformSocialCreditCode() const;

                    /**
                     * 设置企业统一社会信用代码
注意：OrganizationName和UniformSocialCreditCode不能同时为空
                     * @param _uniformSocialCreditCode 企业统一社会信用代码
注意：OrganizationName和UniformSocialCreditCode不能同时为空
                     * 
                     */
                    void SetUniformSocialCreditCode(const std::string& _uniformSocialCreditCode);

                    /**
                     * 判断参数 UniformSocialCreditCode 是否已赋值
                     * @return UniformSocialCreditCode 是否已赋值
                     * 
                     */
                    bool UniformSocialCreditCodeHasBeenSet() const;

                    /**
                     * 获取法人姓名
                     * @return LegalName 法人姓名
                     * 
                     */
                    std::string GetLegalName() const;

                    /**
                     * 设置法人姓名
                     * @param _legalName 法人姓名
                     * 
                     */
                    void SetLegalName(const std::string& _legalName);

                    /**
                     * 判断参数 LegalName 是否已赋值
                     * @return LegalName 是否已赋值
                     * 
                     */
                    bool LegalNameHasBeenSet() const;

                    /**
                     * 获取认证流 Id 是指在企业认证过程中，当前操作人的认证流程的唯一标识。每个企业在认证过程中只能有一条认证流认证成功。这意味着在同一认证过程内，一个企业只能有一个认证流程处于成功状态，以确保认证的唯一性和有效性。


认证流 Id可以通过回调[授权书认证审核结果回调](https://qian.tencent.com/developers/company/callback_types_staffs/#%E5%8D%81%E5%85%AD-%E6%8E%88%E6%9D%83%E4%B9%A6%E8%AE%A4%E8%AF%81%E5%AE%A1%E6%A0%B8%E7%BB%93%E6%9E%9C%E5%9B%9E%E8%B0%83)获取

注意：
如果传递了认证流Id，则下面的参数 超管二要素不会生效
示例值：yDCHHUUckpbdaiqbUxJVsHWy99WG6kTY
                     * @return AuthorizationInfoId 认证流 Id 是指在企业认证过程中，当前操作人的认证流程的唯一标识。每个企业在认证过程中只能有一条认证流认证成功。这意味着在同一认证过程内，一个企业只能有一个认证流程处于成功状态，以确保认证的唯一性和有效性。


认证流 Id可以通过回调[授权书认证审核结果回调](https://qian.tencent.com/developers/company/callback_types_staffs/#%E5%8D%81%E5%85%AD-%E6%8E%88%E6%9D%83%E4%B9%A6%E8%AE%A4%E8%AF%81%E5%AE%A1%E6%A0%B8%E7%BB%93%E6%9E%9C%E5%9B%9E%E8%B0%83)获取

注意：
如果传递了认证流Id，则下面的参数 超管二要素不会生效
示例值：yDCHHUUckpbdaiqbUxJVsHWy99WG6kTY
                     * 
                     */
                    std::string GetAuthorizationInfoId() const;

                    /**
                     * 设置认证流 Id 是指在企业认证过程中，当前操作人的认证流程的唯一标识。每个企业在认证过程中只能有一条认证流认证成功。这意味着在同一认证过程内，一个企业只能有一个认证流程处于成功状态，以确保认证的唯一性和有效性。


认证流 Id可以通过回调[授权书认证审核结果回调](https://qian.tencent.com/developers/company/callback_types_staffs/#%E5%8D%81%E5%85%AD-%E6%8E%88%E6%9D%83%E4%B9%A6%E8%AE%A4%E8%AF%81%E5%AE%A1%E6%A0%B8%E7%BB%93%E6%9E%9C%E5%9B%9E%E8%B0%83)获取

注意：
如果传递了认证流Id，则下面的参数 超管二要素不会生效
示例值：yDCHHUUckpbdaiqbUxJVsHWy99WG6kTY
                     * @param _authorizationInfoId 认证流 Id 是指在企业认证过程中，当前操作人的认证流程的唯一标识。每个企业在认证过程中只能有一条认证流认证成功。这意味着在同一认证过程内，一个企业只能有一个认证流程处于成功状态，以确保认证的唯一性和有效性。


认证流 Id可以通过回调[授权书认证审核结果回调](https://qian.tencent.com/developers/company/callback_types_staffs/#%E5%8D%81%E5%85%AD-%E6%8E%88%E6%9D%83%E4%B9%A6%E8%AE%A4%E8%AF%81%E5%AE%A1%E6%A0%B8%E7%BB%93%E6%9E%9C%E5%9B%9E%E8%B0%83)获取

注意：
如果传递了认证流Id，则下面的参数 超管二要素不会生效
示例值：yDCHHUUckpbdaiqbUxJVsHWy99WG6kTY
                     * 
                     */
                    void SetAuthorizationInfoId(const std::string& _authorizationInfoId);

                    /**
                     * 判断参数 AuthorizationInfoId 是否已赋值
                     * @return AuthorizationInfoId 是否已赋值
                     * 
                     */
                    bool AuthorizationInfoIdHasBeenSet() const;

                private:

                    /**
                     * 执行本接口操作的员工信息。使用此接口时，必须填写userId。 支持填入集团子公司经办人 userId 代发合同。  注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 组织机构名称。 请确认该名称与企业营业执照中注册的名称一致。 如果名称中包含英文括号()，请使用中文括号（）代替。
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 企业统一社会信用代码
注意：OrganizationName和UniformSocialCreditCode不能同时为空
                     */
                    std::string m_uniformSocialCreditCode;
                    bool m_uniformSocialCreditCodeHasBeenSet;

                    /**
                     * 法人姓名
                     */
                    std::string m_legalName;
                    bool m_legalNameHasBeenSet;

                    /**
                     * 认证流 Id 是指在企业认证过程中，当前操作人的认证流程的唯一标识。每个企业在认证过程中只能有一条认证流认证成功。这意味着在同一认证过程内，一个企业只能有一个认证流程处于成功状态，以确保认证的唯一性和有效性。


认证流 Id可以通过回调[授权书认证审核结果回调](https://qian.tencent.com/developers/company/callback_types_staffs/#%E5%8D%81%E5%85%AD-%E6%8E%88%E6%9D%83%E4%B9%A6%E8%AE%A4%E8%AF%81%E5%AE%A1%E6%A0%B8%E7%BB%93%E6%9E%9C%E5%9B%9E%E8%B0%83)获取

注意：
如果传递了认证流Id，则下面的参数 超管二要素不会生效
示例值：yDCHHUUckpbdaiqbUxJVsHWy99WG6kTY
                     */
                    std::string m_authorizationInfoId;
                    bool m_authorizationInfoIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEORGANIZATIONAUTHSTATUSREQUEST_H_
