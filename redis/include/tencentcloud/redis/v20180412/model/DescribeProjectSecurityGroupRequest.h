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
                     * 获取指定查询的项目 ID。
- 0：默认项目。
- -1：所有项目。
- 大于0：特定项目。请登录[Redis控制台的项目管理](https://console.cloud.tencent.com/project)页面，在**项目名称**中复制项目 ID。
                     * @return ProjectId 指定查询的项目 ID。
- 0：默认项目。
- -1：所有项目。
- 大于0：特定项目。请登录[Redis控制台的项目管理](https://console.cloud.tencent.com/project)页面，在**项目名称**中复制项目 ID。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置指定查询的项目 ID。
- 0：默认项目。
- -1：所有项目。
- 大于0：特定项目。请登录[Redis控制台的项目管理](https://console.cloud.tencent.com/project)页面，在**项目名称**中复制项目 ID。
                     * @param _projectId 指定查询的项目 ID。
- 0：默认项目。
- -1：所有项目。
- 大于0：特定项目。请登录[Redis控制台的项目管理](https://console.cloud.tencent.com/project)页面，在**项目名称**中复制项目 ID。
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取安全组 ID，通过接口[DescribeInstanceSecurityGroup](https://cloud.tencent.com/document/product/239/34447)的返回参数 **InstanceSecurityGroupsDetail** 的子参数 **SecurityGroupId** 获取。
                     * @return SecurityGroupId 安全组 ID，通过接口[DescribeInstanceSecurityGroup](https://cloud.tencent.com/document/product/239/34447)的返回参数 **InstanceSecurityGroupsDetail** 的子参数 **SecurityGroupId** 获取。
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置安全组 ID，通过接口[DescribeInstanceSecurityGroup](https://cloud.tencent.com/document/product/239/34447)的返回参数 **InstanceSecurityGroupsDetail** 的子参数 **SecurityGroupId** 获取。
                     * @param _securityGroupId 安全组 ID，通过接口[DescribeInstanceSecurityGroup](https://cloud.tencent.com/document/product/239/34447)的返回参数 **InstanceSecurityGroupsDetail** 的子参数 **SecurityGroupId** 获取。
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                private:

                    /**
                     * 指定查询的项目 ID。
- 0：默认项目。
- -1：所有项目。
- 大于0：特定项目。请登录[Redis控制台的项目管理](https://console.cloud.tencent.com/project)页面，在**项目名称**中复制项目 ID。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 安全组 ID，通过接口[DescribeInstanceSecurityGroup](https://cloud.tencent.com/document/product/239/34447)的返回参数 **InstanceSecurityGroupsDetail** 的子参数 **SecurityGroupId** 获取。
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPROJECTSECURITYGROUPREQUEST_H_
