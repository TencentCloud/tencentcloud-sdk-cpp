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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBECLUSTERROLETOKENRESPONSE_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBECLUSTERROLETOKENRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/goosefs/v20220519/model/RoleToken.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * DescribeClusterRoleToken返回参数结构体
                */
                class DescribeClusterRoleTokenResponse : public AbstractModel
                {
                public:
                    DescribeClusterRoleTokenResponse();
                    ~DescribeClusterRoleTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取角色凭证
                     * @return RoleTokens 角色凭证
                     * 
                     */
                    std::vector<RoleToken> GetRoleTokens() const;

                    /**
                     * 判断参数 RoleTokens 是否已赋值
                     * @return RoleTokens 是否已赋值
                     * 
                     */
                    bool RoleTokensHasBeenSet() const;

                private:

                    /**
                     * 角色凭证
                     */
                    std::vector<RoleToken> m_roleTokens;
                    bool m_roleTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBECLUSTERROLETOKENRESPONSE_H_
