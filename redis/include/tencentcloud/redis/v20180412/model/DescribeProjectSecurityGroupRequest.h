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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPROJECTSECURITYGROUPREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPROJECTSECURITYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeProjectSecurityGroup请求参数结构体
                */
                class DescribeProjectSecurityGroupRequest : public AbstractModel
                {
                public:
                    DescribeProjectSecurityGroupRequest();
                    ~DescribeProjectSecurityGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取0:默认项目；-1 所有项目; >0: 特定项目
                     * @return ProjectId 0:默认项目；-1 所有项目; >0: 特定项目
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置0:默认项目；-1 所有项目; >0: 特定项目
                     * @param ProjectId 0:默认项目；-1 所有项目; >0: 特定项目
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取安全组Id
                     * @return SecurityGroupId 安全组Id
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置安全组Id
                     * @param SecurityGroupId 安全组Id
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                private:

                    /**
                     * 0:默认项目；-1 所有项目; >0: 特定项目
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 安全组Id
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPROJECTSECURITYGROUPREQUEST_H_
