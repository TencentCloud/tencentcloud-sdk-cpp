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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20230508_MODEL_CREATEWORKSPACETOKENREQUEST_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20230508_MODEL_CREATEWORKSPACETOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20230508
        {
            namespace Model
            {
                /**
                * CreateWorkspaceToken请求参数结构体
                */
                class CreateWorkspaceTokenRequest : public AbstractModel
                {
                public:
                    CreateWorkspaceTokenRequest();
                    ~CreateWorkspaceTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>工作空间 SpaceKey</p>
                     * @return SpaceKey <p>工作空间 SpaceKey</p>
                     * 
                     */
                    std::string GetSpaceKey() const;

                    /**
                     * 设置<p>工作空间 SpaceKey</p>
                     * @param _spaceKey <p>工作空间 SpaceKey</p>
                     * 
                     */
                    void SetSpaceKey(const std::string& _spaceKey);

                    /**
                     * 判断参数 SpaceKey 是否已赋值
                     * @return SpaceKey 是否已赋值
                     * 
                     */
                    bool SpaceKeyHasBeenSet() const;

                    /**
                     * 获取<p>token过期时间，单位是秒，默认 3600</p>
                     * @return TokenExpiredLimitSec <p>token过期时间，单位是秒，默认 3600</p>
                     * 
                     */
                    uint64_t GetTokenExpiredLimitSec() const;

                    /**
                     * 设置<p>token过期时间，单位是秒，默认 3600</p>
                     * @param _tokenExpiredLimitSec <p>token过期时间，单位是秒，默认 3600</p>
                     * 
                     */
                    void SetTokenExpiredLimitSec(const uint64_t& _tokenExpiredLimitSec);

                    /**
                     * 判断参数 TokenExpiredLimitSec 是否已赋值
                     * @return TokenExpiredLimitSec 是否已赋值
                     * 
                     */
                    bool TokenExpiredLimitSecHasBeenSet() const;

                    /**
                     * 获取<p>token 授权策略，可选值为 workspace-run-only, all。默认为 workspace-run-only</p>
                     * @return Policies <p>token 授权策略，可选值为 workspace-run-only, all。默认为 workspace-run-only</p>
                     * 
                     */
                    std::vector<std::string> GetPolicies() const;

                    /**
                     * 设置<p>token 授权策略，可选值为 workspace-run-only, all。默认为 workspace-run-only</p>
                     * @param _policies <p>token 授权策略，可选值为 workspace-run-only, all。默认为 workspace-run-only</p>
                     * 
                     */
                    void SetPolicies(const std::vector<std::string>& _policies);

                    /**
                     * 判断参数 Policies 是否已赋值
                     * @return Policies 是否已赋值
                     * 
                     */
                    bool PoliciesHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间 SpaceKey</p>
                     */
                    std::string m_spaceKey;
                    bool m_spaceKeyHasBeenSet;

                    /**
                     * <p>token过期时间，单位是秒，默认 3600</p>
                     */
                    uint64_t m_tokenExpiredLimitSec;
                    bool m_tokenExpiredLimitSecHasBeenSet;

                    /**
                     * <p>token 授权策略，可选值为 workspace-run-only, all。默认为 workspace-run-only</p>
                     */
                    std::vector<std::string> m_policies;
                    bool m_policiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20230508_MODEL_CREATEWORKSPACETOKENREQUEST_H_
