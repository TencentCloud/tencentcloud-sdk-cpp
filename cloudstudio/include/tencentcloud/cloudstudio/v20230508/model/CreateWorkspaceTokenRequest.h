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
                     * 获取工作空间 SpaceKey
                     * @return SpaceKey 工作空间 SpaceKey
                     * 
                     */
                    std::string GetSpaceKey() const;

                    /**
                     * 设置工作空间 SpaceKey
                     * @param _spaceKey 工作空间 SpaceKey
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
                     * 获取token过期时间，单位是秒，默认 3600
                     * @return TokenExpiredLimitSec token过期时间，单位是秒，默认 3600
                     * 
                     */
                    uint64_t GetTokenExpiredLimitSec() const;

                    /**
                     * 设置token过期时间，单位是秒，默认 3600
                     * @param _tokenExpiredLimitSec token过期时间，单位是秒，默认 3600
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
                     * 获取token 授权策略，可选值为 workspace-run-only, all。默认为 workspace-run-only
                     * @return Policies token 授权策略，可选值为 workspace-run-only, all。默认为 workspace-run-only
                     * 
                     */
                    std::vector<std::string> GetPolicies() const;

                    /**
                     * 设置token 授权策略，可选值为 workspace-run-only, all。默认为 workspace-run-only
                     * @param _policies token 授权策略，可选值为 workspace-run-only, all。默认为 workspace-run-only
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
                     * 工作空间 SpaceKey
                     */
                    std::string m_spaceKey;
                    bool m_spaceKeyHasBeenSet;

                    /**
                     * token过期时间，单位是秒，默认 3600
                     */
                    uint64_t m_tokenExpiredLimitSec;
                    bool m_tokenExpiredLimitSecHasBeenSet;

                    /**
                     * token 授权策略，可选值为 workspace-run-only, all。默认为 workspace-run-only
                     */
                    std::vector<std::string> m_policies;
                    bool m_policiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20230508_MODEL_CREATEWORKSPACETOKENREQUEST_H_
