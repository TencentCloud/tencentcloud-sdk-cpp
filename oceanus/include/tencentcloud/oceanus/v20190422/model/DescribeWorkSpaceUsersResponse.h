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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEWORKSPACEUSERSRESPONSE_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEWORKSPACEUSERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/RoleAuth.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * DescribeWorkSpaceUsers返回参数结构体
                */
                class DescribeWorkSpaceUsersResponse : public AbstractModel
                {
                public:
                    DescribeWorkSpaceUsersResponse();
                    ~DescribeWorkSpaceUsersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取空间用户列表
                     * @return RoleAuths 空间用户列表
                     * 
                     */
                    std::vector<RoleAuth> GetRoleAuths() const;

                    /**
                     * 判断参数 RoleAuths 是否已赋值
                     * @return RoleAuths 是否已赋值
                     * 
                     */
                    bool RoleAuthsHasBeenSet() const;

                private:

                    /**
                     * 空间用户列表
                     */
                    std::vector<RoleAuth> m_roleAuths;
                    bool m_roleAuthsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEWORKSPACEUSERSRESPONSE_H_
