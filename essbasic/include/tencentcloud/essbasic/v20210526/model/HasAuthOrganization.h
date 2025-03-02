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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_HASAUTHORGANIZATION_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_HASAUTHORGANIZATION_H_

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
                * 授权企业列表（目前仅用于“企业自动签 -> 合作企业授权”）
                */
                class HasAuthOrganization : public AbstractModel
                {
                public:
                    HasAuthOrganization();
                    ~HasAuthOrganization() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取授权企业openid，
                     * @return OrganizationOpenId 授权企业openid，
                     * 
                     */
                    std::string GetOrganizationOpenId() const;

                    /**
                     * 设置授权企业openid，
                     * @param _organizationOpenId 授权企业openid，
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
                     * 获取授权企业名称	
                     * @return OrganizationName 授权企业名称	
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置授权企业名称	
                     * @param _organizationName 授权企业名称	
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
                     * 获取被授权企业openid，
                     * @return AuthorizedOrganizationOpenId 被授权企业openid，
                     * 
                     */
                    std::string GetAuthorizedOrganizationOpenId() const;

                    /**
                     * 设置被授权企业openid，
                     * @param _authorizedOrganizationOpenId 被授权企业openid，
                     * 
                     */
                    void SetAuthorizedOrganizationOpenId(const std::string& _authorizedOrganizationOpenId);

                    /**
                     * 判断参数 AuthorizedOrganizationOpenId 是否已赋值
                     * @return AuthorizedOrganizationOpenId 是否已赋值
                     * 
                     */
                    bool AuthorizedOrganizationOpenIdHasBeenSet() const;

                    /**
                     * 获取被授权企业名称	
                     * @return AuthorizedOrganizationName 被授权企业名称	
                     * 
                     */
                    std::string GetAuthorizedOrganizationName() const;

                    /**
                     * 设置被授权企业名称	
                     * @param _authorizedOrganizationName 被授权企业名称	
                     * 
                     */
                    void SetAuthorizedOrganizationName(const std::string& _authorizedOrganizationName);

                    /**
                     * 判断参数 AuthorizedOrganizationName 是否已赋值
                     * @return AuthorizedOrganizationName 是否已赋值
                     * 
                     */
                    bool AuthorizedOrganizationNameHasBeenSet() const;

                    /**
                     * 获取授权时间，格式为时间戳，单位s	
                     * @return AuthorizeTime 授权时间，格式为时间戳，单位s	
                     * 
                     */
                    int64_t GetAuthorizeTime() const;

                    /**
                     * 设置授权时间，格式为时间戳，单位s	
                     * @param _authorizeTime 授权时间，格式为时间戳，单位s	
                     * 
                     */
                    void SetAuthorizeTime(const int64_t& _authorizeTime);

                    /**
                     * 判断参数 AuthorizeTime 是否已赋值
                     * @return AuthorizeTime 是否已赋值
                     * 
                     */
                    bool AuthorizeTimeHasBeenSet() const;

                private:

                    /**
                     * 授权企业openid，
                     */
                    std::string m_organizationOpenId;
                    bool m_organizationOpenIdHasBeenSet;

                    /**
                     * 授权企业名称	
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 被授权企业openid，
                     */
                    std::string m_authorizedOrganizationOpenId;
                    bool m_authorizedOrganizationOpenIdHasBeenSet;

                    /**
                     * 被授权企业名称	
                     */
                    std::string m_authorizedOrganizationName;
                    bool m_authorizedOrganizationNameHasBeenSet;

                    /**
                     * 授权时间，格式为时间戳，单位s	
                     */
                    int64_t m_authorizeTime;
                    bool m_authorizeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_HASAUTHORGANIZATION_H_
