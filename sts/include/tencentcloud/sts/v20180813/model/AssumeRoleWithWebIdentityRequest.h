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

#ifndef TENCENTCLOUD_STS_V20180813_MODEL_ASSUMEROLEWITHWEBIDENTITYREQUEST_H_
#define TENCENTCLOUD_STS_V20180813_MODEL_ASSUMEROLEWITHWEBIDENTITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sts
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * AssumeRoleWithWebIdentity请求参数结构体
                */
                class AssumeRoleWithWebIdentityRequest : public AbstractModel
                {
                public:
                    AssumeRoleWithWebIdentityRequest();
                    ~AssumeRoleWithWebIdentityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取身份提供商名称
                     * @return ProviderId 身份提供商名称
                     * 
                     */
                    std::string GetProviderId() const;

                    /**
                     * 设置身份提供商名称
                     * @param _providerId 身份提供商名称
                     * 
                     */
                    void SetProviderId(const std::string& _providerId);

                    /**
                     * 判断参数 ProviderId 是否已赋值
                     * @return ProviderId 是否已赋值
                     * 
                     */
                    bool ProviderIdHasBeenSet() const;

                    /**
                     * 获取IdP签发的OIDC令牌
                     * @return WebIdentityToken IdP签发的OIDC令牌
                     * 
                     */
                    std::string GetWebIdentityToken() const;

                    /**
                     * 设置IdP签发的OIDC令牌
                     * @param _webIdentityToken IdP签发的OIDC令牌
                     * 
                     */
                    void SetWebIdentityToken(const std::string& _webIdentityToken);

                    /**
                     * 判断参数 WebIdentityToken 是否已赋值
                     * @return WebIdentityToken 是否已赋值
                     * 
                     */
                    bool WebIdentityTokenHasBeenSet() const;

                    /**
                     * 获取角色访问描述名
                     * @return RoleArn 角色访问描述名
                     * 
                     */
                    std::string GetRoleArn() const;

                    /**
                     * 设置角色访问描述名
                     * @param _roleArn 角色访问描述名
                     * 
                     */
                    void SetRoleArn(const std::string& _roleArn);

                    /**
                     * 判断参数 RoleArn 是否已赋值
                     * @return RoleArn 是否已赋值
                     * 
                     */
                    bool RoleArnHasBeenSet() const;

                    /**
                     * 获取会话名称
                     * @return RoleSessionName 会话名称
                     * 
                     */
                    std::string GetRoleSessionName() const;

                    /**
                     * 设置会话名称
                     * @param _roleSessionName 会话名称
                     * 
                     */
                    void SetRoleSessionName(const std::string& _roleSessionName);

                    /**
                     * 判断参数 RoleSessionName 是否已赋值
                     * @return RoleSessionName 是否已赋值
                     * 
                     */
                    bool RoleSessionNameHasBeenSet() const;

                    /**
                     * 获取指定临时访问凭证的有效期，单位：秒，默认 7200 秒，最长可设定有效期为 43200 秒
                     * @return DurationSeconds 指定临时访问凭证的有效期，单位：秒，默认 7200 秒，最长可设定有效期为 43200 秒
                     * 
                     */
                    int64_t GetDurationSeconds() const;

                    /**
                     * 设置指定临时访问凭证的有效期，单位：秒，默认 7200 秒，最长可设定有效期为 43200 秒
                     * @param _durationSeconds 指定临时访问凭证的有效期，单位：秒，默认 7200 秒，最长可设定有效期为 43200 秒
                     * 
                     */
                    void SetDurationSeconds(const int64_t& _durationSeconds);

                    /**
                     * 判断参数 DurationSeconds 是否已赋值
                     * @return DurationSeconds 是否已赋值
                     * 
                     */
                    bool DurationSecondsHasBeenSet() const;

                private:

                    /**
                     * 身份提供商名称
                     */
                    std::string m_providerId;
                    bool m_providerIdHasBeenSet;

                    /**
                     * IdP签发的OIDC令牌
                     */
                    std::string m_webIdentityToken;
                    bool m_webIdentityTokenHasBeenSet;

                    /**
                     * 角色访问描述名
                     */
                    std::string m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * 会话名称
                     */
                    std::string m_roleSessionName;
                    bool m_roleSessionNameHasBeenSet;

                    /**
                     * 指定临时访问凭证的有效期，单位：秒，默认 7200 秒，最长可设定有效期为 43200 秒
                     */
                    int64_t m_durationSeconds;
                    bool m_durationSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_STS_V20180813_MODEL_ASSUMEROLEWITHWEBIDENTITYREQUEST_H_
