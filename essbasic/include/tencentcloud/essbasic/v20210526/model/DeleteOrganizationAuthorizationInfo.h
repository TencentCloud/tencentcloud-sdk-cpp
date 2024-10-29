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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DELETEORGANIZATIONAUTHORIZATIONINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DELETEORGANIZATIONAUTHORIZATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 清理的企业认证流信息
                */
                class DeleteOrganizationAuthorizationInfo : public AbstractModel
                {
                public:
                    DeleteOrganizationAuthorizationInfo();
                    ~DeleteOrganizationAuthorizationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取认证流 Id 是指在企业认证过程中，当前操作人的认证流程的唯一标识。每个企业在认证过程中只能有一条认证流认证成功。这意味着在同一认证过程内，一个企业只能有一个认证流程处于成功状态，以确保认证的唯一性和有效性。	
                     * @return AuthorizationId 认证流 Id 是指在企业认证过程中，当前操作人的认证流程的唯一标识。每个企业在认证过程中只能有一条认证流认证成功。这意味着在同一认证过程内，一个企业只能有一个认证流程处于成功状态，以确保认证的唯一性和有效性。	
                     * 
                     */
                    std::string GetAuthorizationId() const;

                    /**
                     * 设置认证流 Id 是指在企业认证过程中，当前操作人的认证流程的唯一标识。每个企业在认证过程中只能有一条认证流认证成功。这意味着在同一认证过程内，一个企业只能有一个认证流程处于成功状态，以确保认证的唯一性和有效性。	
                     * @param _authorizationId 认证流 Id 是指在企业认证过程中，当前操作人的认证流程的唯一标识。每个企业在认证过程中只能有一条认证流认证成功。这意味着在同一认证过程内，一个企业只能有一个认证流程处于成功状态，以确保认证的唯一性和有效性。	
                     * 
                     */
                    void SetAuthorizationId(const std::string& _authorizationId);

                    /**
                     * 判断参数 AuthorizationId 是否已赋值
                     * @return AuthorizationId 是否已赋值
                     * 
                     */
                    bool AuthorizationIdHasBeenSet() const;

                    /**
                     * 获取认证的企业名称	
                     * @return OrganizationName 认证的企业名称	
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置认证的企业名称	
                     * @param _organizationName 认证的企业名称	
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
                     * 获取第三方平台子客企业的唯一标识，定义Agent中的ProxyOrganizationOpenId一样, 可以参考<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#agent" target="_blank">Agent结构体</a>
                     * @return OrganizationOpenId 第三方平台子客企业的唯一标识，定义Agent中的ProxyOrganizationOpenId一样, 可以参考<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#agent" target="_blank">Agent结构体</a>
                     * 
                     */
                    std::string GetOrganizationOpenId() const;

                    /**
                     * 设置第三方平台子客企业的唯一标识，定义Agent中的ProxyOrganizationOpenId一样, 可以参考<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#agent" target="_blank">Agent结构体</a>
                     * @param _organizationOpenId 第三方平台子客企业的唯一标识，定义Agent中的ProxyOrganizationOpenId一样, 可以参考<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#agent" target="_blank">Agent结构体</a>
                     * 
                     */
                    void SetOrganizationOpenId(const std::string& _organizationOpenId);

                    /**
                     * 判断参数 OrganizationOpenId 是否已赋值
                     * @return OrganizationOpenId 是否已赋值
                     * 
                     */
                    bool OrganizationOpenIdHasBeenSet() const;

                    /**
                     * 获取清除认证流产生的错误信息
                     * @return Errormessage 清除认证流产生的错误信息
                     * 
                     */
                    std::string GetErrormessage() const;

                    /**
                     * 设置清除认证流产生的错误信息
                     * @param _errormessage 清除认证流产生的错误信息
                     * 
                     */
                    void SetErrormessage(const std::string& _errormessage);

                    /**
                     * 判断参数 Errormessage 是否已赋值
                     * @return Errormessage 是否已赋值
                     * 
                     */
                    bool ErrormessageHasBeenSet() const;

                private:

                    /**
                     * 认证流 Id 是指在企业认证过程中，当前操作人的认证流程的唯一标识。每个企业在认证过程中只能有一条认证流认证成功。这意味着在同一认证过程内，一个企业只能有一个认证流程处于成功状态，以确保认证的唯一性和有效性。	
                     */
                    std::string m_authorizationId;
                    bool m_authorizationIdHasBeenSet;

                    /**
                     * 认证的企业名称	
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 第三方平台子客企业的唯一标识，定义Agent中的ProxyOrganizationOpenId一样, 可以参考<a href="https://qian.tencent.com/developers/partnerApis/dataTypes/#agent" target="_blank">Agent结构体</a>
                     */
                    std::string m_organizationOpenId;
                    bool m_organizationOpenIdHasBeenSet;

                    /**
                     * 清除认证流产生的错误信息
                     */
                    std::string m_errormessage;
                    bool m_errormessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DELETEORGANIZATIONAUTHORIZATIONINFO_H_
