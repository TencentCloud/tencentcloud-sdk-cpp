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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYFLEXWECHATPREAUTHREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYFLEXWECHATPREAUTHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * ApplyFlexWechatPreAuth请求参数结构体
                */
                class ApplyFlexWechatPreAuthRequest : public AbstractModel
                {
                public:
                    ApplyFlexWechatPreAuthRequest();
                    ~ApplyFlexWechatPreAuthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取商家核身单号
                     * @return AuthNo 商家核身单号
                     * 
                     */
                    std::string GetAuthNo() const;

                    /**
                     * 设置商家核身单号
                     * @param _authNo 商家核身单号
                     * 
                     */
                    void SetAuthNo(const std::string& _authNo);

                    /**
                     * 判断参数 AuthNo 是否已赋值
                     * @return AuthNo 是否已赋值
                     * 
                     */
                    bool AuthNoHasBeenSet() const;

                    /**
                     * 获取微信用户标识
                     * @return OpenId 微信用户标识
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置微信用户标识
                     * @param _openId 微信用户标识
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
                     * 获取项目名称
                     * @return ProjectName 项目名称
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称
                     * @param _projectName 项目名称
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取用工单位名称
                     * @return EmployerName 用工单位名称
                     * 
                     */
                    std::string GetEmployerName() const;

                    /**
                     * 设置用工单位名称
                     * @param _employerName 用工单位名称
                     * 
                     */
                    void SetEmployerName(const std::string& _employerName);

                    /**
                     * 判断参数 EmployerName 是否已赋值
                     * @return EmployerName 是否已赋值
                     * 
                     */
                    bool EmployerNameHasBeenSet() const;

                    /**
                     * 获取用户姓名
                     * @return UserName 用户姓名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户姓名
                     * @param _userName 用户姓名
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取用户证件号
                     * @return IdNo 用户证件号
                     * 
                     */
                    std::string GetIdNo() const;

                    /**
                     * 设置用户证件号
                     * @param _idNo 用户证件号
                     * 
                     */
                    void SetIdNo(const std::string& _idNo);

                    /**
                     * 判断参数 IdNo 是否已赋值
                     * @return IdNo 是否已赋值
                     * 
                     */
                    bool IdNoHasBeenSet() const;

                    /**
                     * 获取用工类型
LONG_TERM_EMPLOYMENT：长期用工，
SHORT_TERM_EMPLOYMENT： 短期用工，
COOPERATION_EMPLOYMENT：合作关系
                     * @return EmploymentType 用工类型
LONG_TERM_EMPLOYMENT：长期用工，
SHORT_TERM_EMPLOYMENT： 短期用工，
COOPERATION_EMPLOYMENT：合作关系
                     * 
                     */
                    std::string GetEmploymentType() const;

                    /**
                     * 设置用工类型
LONG_TERM_EMPLOYMENT：长期用工，
SHORT_TERM_EMPLOYMENT： 短期用工，
COOPERATION_EMPLOYMENT：合作关系
                     * @param _employmentType 用工类型
LONG_TERM_EMPLOYMENT：长期用工，
SHORT_TERM_EMPLOYMENT： 短期用工，
COOPERATION_EMPLOYMENT：合作关系
                     * 
                     */
                    void SetEmploymentType(const std::string& _employmentType);

                    /**
                     * 判断参数 EmploymentType 是否已赋值
                     * @return EmploymentType 是否已赋值
                     * 
                     */
                    bool EmploymentTypeHasBeenSet() const;

                    /**
                     * 获取核身类型
SIGN_IN：考勤、签到打卡类型
INSURANCE：投保类型
CONTRACT：签约类型
                     * @return AuthType 核身类型
SIGN_IN：考勤、签到打卡类型
INSURANCE：投保类型
CONTRACT：签约类型
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置核身类型
SIGN_IN：考勤、签到打卡类型
INSURANCE：投保类型
CONTRACT：签约类型
                     * @param _authType 核身类型
SIGN_IN：考勤、签到打卡类型
INSURANCE：投保类型
CONTRACT：签约类型
                     * 
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取环境类型
test 测试
release 生产
sandbox 沙箱
                     * @return Environment 环境类型
test 测试
release 生产
sandbox 沙箱
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置环境类型
test 测试
release 生产
sandbox 沙箱
                     * @param _environment 环境类型
test 测试
release 生产
sandbox 沙箱
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                private:

                    /**
                     * 商家核身单号
                     */
                    std::string m_authNo;
                    bool m_authNoHasBeenSet;

                    /**
                     * 微信用户标识
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 项目名称
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 用工单位名称
                     */
                    std::string m_employerName;
                    bool m_employerNameHasBeenSet;

                    /**
                     * 用户姓名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 用户证件号
                     */
                    std::string m_idNo;
                    bool m_idNoHasBeenSet;

                    /**
                     * 用工类型
LONG_TERM_EMPLOYMENT：长期用工，
SHORT_TERM_EMPLOYMENT： 短期用工，
COOPERATION_EMPLOYMENT：合作关系
                     */
                    std::string m_employmentType;
                    bool m_employmentTypeHasBeenSet;

                    /**
                     * 核身类型
SIGN_IN：考勤、签到打卡类型
INSURANCE：投保类型
CONTRACT：签约类型
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 环境类型
test 测试
release 生产
sandbox 沙箱
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYFLEXWECHATPREAUTHREQUEST_H_
