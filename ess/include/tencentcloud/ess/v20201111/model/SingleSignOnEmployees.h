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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_SINGLESIGNONEMPLOYEES_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_SINGLESIGNONEMPLOYEES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 单点登录企业员工信息。
                */
                class SingleSignOnEmployees : public AbstractModel
                {
                public:
                    SingleSignOnEmployees();
                    ~SingleSignOnEmployees() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户在idp分配的唯一值，需要保持跟在电子签应用集成->单点登录配置->端点配置中配置的。
如下图配置![image](https://qcloudimg.tencent-cloud.cn/raw/6ff22248c930b2a7684322cac9401a9c.png)。
                     * @return OpenId 用户在idp分配的唯一值，需要保持跟在电子签应用集成->单点登录配置->端点配置中配置的。
如下图配置![image](https://qcloudimg.tencent-cloud.cn/raw/6ff22248c930b2a7684322cac9401a9c.png)。
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置用户在idp分配的唯一值，需要保持跟在电子签应用集成->单点登录配置->端点配置中配置的。
如下图配置![image](https://qcloudimg.tencent-cloud.cn/raw/6ff22248c930b2a7684322cac9401a9c.png)。
                     * @param _openId 用户在idp分配的唯一值，需要保持跟在电子签应用集成->单点登录配置->端点配置中配置的。
如下图配置![image](https://qcloudimg.tencent-cloud.cn/raw/6ff22248c930b2a7684322cac9401a9c.png)。
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取企业员工姓名。 员工的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。	
                     * @return Name 企业员工姓名。 员工的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。	
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置企业员工姓名。 员工的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。	
                     * @param _name 企业员工姓名。 员工的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。	
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取用户手机号码， 支持中国大陆手机号11位数字(无需加+86前缀或其他字符)。
                     * @return Mobile 用户手机号码， 支持中国大陆手机号11位数字(无需加+86前缀或其他字符)。
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置用户手机号码， 支持中国大陆手机号11位数字(无需加+86前缀或其他字符)。
                     * @param _mobile 用户手机号码， 支持中国大陆手机号11位数字(无需加+86前缀或其他字符)。
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取员工在腾讯电子签平台的唯一身份标识，为32位字符串。
注：`创建和更新场景无需填写。`
                     * @return UserId 员工在腾讯电子签平台的唯一身份标识，为32位字符串。
注：`创建和更新场景无需填写。`
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置员工在腾讯电子签平台的唯一身份标识，为32位字符串。
注：`创建和更新场景无需填写。`
                     * @param _userId 员工在腾讯电子签平台的唯一身份标识，为32位字符串。
注：`创建和更新场景无需填写。`
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取用户邮箱。
                     * @return Email 用户邮箱。
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置用户邮箱。
                     * @param _email 用户邮箱。
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取员工角色信息。
此处roleId为电子签配置的 RoleId，可通过接口[查询企业角色列表](https://qian.tencent.com/developers/companyApis/roles/DescribeIntegrationRoles) 获取
                     * @return RoleIds 员工角色信息。
此处roleId为电子签配置的 RoleId，可通过接口[查询企业角色列表](https://qian.tencent.com/developers/companyApis/roles/DescribeIntegrationRoles) 获取
                     * 
                     */
                    std::vector<std::string> GetRoleIds() const;

                    /**
                     * 设置员工角色信息。
此处roleId为电子签配置的 RoleId，可通过接口[查询企业角色列表](https://qian.tencent.com/developers/companyApis/roles/DescribeIntegrationRoles) 获取
                     * @param _roleIds 员工角色信息。
此处roleId为电子签配置的 RoleId，可通过接口[查询企业角色列表](https://qian.tencent.com/developers/companyApis/roles/DescribeIntegrationRoles) 获取
                     * 
                     */
                    void SetRoleIds(const std::vector<std::string>& _roleIds);

                    /**
                     * 判断参数 RoleIds 是否已赋值
                     * @return RoleIds 是否已赋值
                     * 
                     */
                    bool RoleIdsHasBeenSet() const;

                    /**
                     * 获取员工是否实名。
                     * @return IsVerified 员工是否实名。
                     * 
                     */
                    bool GetIsVerified() const;

                    /**
                     * 设置员工是否实名。
                     * @param _isVerified 员工是否实名。
                     * 
                     */
                    void SetIsVerified(const bool& _isVerified);

                    /**
                     * 判断参数 IsVerified 是否已赋值
                     * @return IsVerified 是否已赋值
                     * 
                     */
                    bool IsVerifiedHasBeenSet() const;

                    /**
                     * 获取员工创建时间戳，单位秒。
                     * @return CreatedOn 员工创建时间戳，单位秒。
                     * 
                     */
                    int64_t GetCreatedOn() const;

                    /**
                     * 设置员工创建时间戳，单位秒。
                     * @param _createdOn 员工创建时间戳，单位秒。
                     * 
                     */
                    void SetCreatedOn(const int64_t& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                private:

                    /**
                     * 用户在idp分配的唯一值，需要保持跟在电子签应用集成->单点登录配置->端点配置中配置的。
如下图配置![image](https://qcloudimg.tencent-cloud.cn/raw/6ff22248c930b2a7684322cac9401a9c.png)。
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 企业员工姓名。 员工的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。	
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 用户手机号码， 支持中国大陆手机号11位数字(无需加+86前缀或其他字符)。
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 员工在腾讯电子签平台的唯一身份标识，为32位字符串。
注：`创建和更新场景无需填写。`
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户邮箱。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 员工角色信息。
此处roleId为电子签配置的 RoleId，可通过接口[查询企业角色列表](https://qian.tencent.com/developers/companyApis/roles/DescribeIntegrationRoles) 获取
                     */
                    std::vector<std::string> m_roleIds;
                    bool m_roleIdsHasBeenSet;

                    /**
                     * 员工是否实名。
                     */
                    bool m_isVerified;
                    bool m_isVerifiedHasBeenSet;

                    /**
                     * 员工创建时间戳，单位秒。
                     */
                    int64_t m_createdOn;
                    bool m_createdOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_SINGLESIGNONEMPLOYEES_H_
