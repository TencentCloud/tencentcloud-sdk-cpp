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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEPROJECTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeProject请求参数结构体
                */
                class DescribeProjectRequest : public AbstractModel
                {
                public:
                    DescribeProjectRequest();
                    ~DescribeProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id。一般使用项目Id来查询，与projectName必须存在一个。
                     * @return ProjectId 项目id。一般使用项目Id来查询，与projectName必须存在一个。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id。一般使用项目Id来查询，与projectName必须存在一个。
                     * @param _projectId 项目id。一般使用项目Id来查询，与projectName必须存在一个。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取是否展示关联集群信息
                     * @return DescribeClusters 是否展示关联集群信息
                     * 
                     */
                    bool GetDescribeClusters() const;

                    /**
                     * 设置是否展示关联集群信息
                     * @param _describeClusters 是否展示关联集群信息
                     * 
                     */
                    void SetDescribeClusters(const bool& _describeClusters);

                    /**
                     * 判断参数 DescribeClusters 是否已赋值
                     * @return DescribeClusters 是否已赋值
                     * 
                     */
                    bool DescribeClustersHasBeenSet() const;

                    /**
                     * 获取是否展示关联执行组的信息，仅部分信息。
                     * @return DescribeExecutors 是否展示关联执行组的信息，仅部分信息。
                     * 
                     */
                    bool GetDescribeExecutors() const;

                    /**
                     * 设置是否展示关联执行组的信息，仅部分信息。
                     * @param _describeExecutors 是否展示关联执行组的信息，仅部分信息。
                     * 
                     */
                    void SetDescribeExecutors(const bool& _describeExecutors);

                    /**
                     * 判断参数 DescribeExecutors 是否已赋值
                     * @return DescribeExecutors 是否已赋值
                     * 
                     */
                    bool DescribeExecutorsHasBeenSet() const;

                    /**
                     * 获取默认不展示项目管理员信息
                     * @return DescribeAdminUsers 默认不展示项目管理员信息
                     * 
                     */
                    bool GetDescribeAdminUsers() const;

                    /**
                     * 设置默认不展示项目管理员信息
                     * @param _describeAdminUsers 默认不展示项目管理员信息
                     * 
                     */
                    void SetDescribeAdminUsers(const bool& _describeAdminUsers);

                    /**
                     * 判断参数 DescribeAdminUsers 是否已赋值
                     * @return DescribeAdminUsers 是否已赋值
                     * 
                     */
                    bool DescribeAdminUsersHasBeenSet() const;

                    /**
                     * 获取默认不统计项目人员数量
                     * @return DescribeMemberCount 默认不统计项目人员数量
                     * 
                     */
                    bool GetDescribeMemberCount() const;

                    /**
                     * 设置默认不统计项目人员数量
                     * @param _describeMemberCount 默认不统计项目人员数量
                     * 
                     */
                    void SetDescribeMemberCount(const bool& _describeMemberCount);

                    /**
                     * 判断参数 DescribeMemberCount 是否已赋值
                     * @return DescribeMemberCount 是否已赋值
                     * 
                     */
                    bool DescribeMemberCountHasBeenSet() const;

                    /**
                     * 获取默认不查询创建者的信息
                     * @return DescribeCreator 默认不查询创建者的信息
                     * 
                     */
                    bool GetDescribeCreator() const;

                    /**
                     * 设置默认不查询创建者的信息
                     * @param _describeCreator 默认不查询创建者的信息
                     * 
                     */
                    void SetDescribeCreator(const bool& _describeCreator);

                    /**
                     * 判断参数 DescribeCreator 是否已赋值
                     * @return DescribeCreator 是否已赋值
                     * 
                     */
                    bool DescribeCreatorHasBeenSet() const;

                    /**
                     * 获取项目名只在租户内唯一，一般用来转化为项目ID。
                     * @return ProjectName 项目名只在租户内唯一，一般用来转化为项目ID。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名只在租户内唯一，一般用来转化为项目ID。
                     * @param _projectName 项目名只在租户内唯一，一般用来转化为项目ID。
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                private:

                    /**
                     * 项目id。一般使用项目Id来查询，与projectName必须存在一个。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 是否展示关联集群信息
                     */
                    bool m_describeClusters;
                    bool m_describeClustersHasBeenSet;

                    /**
                     * 是否展示关联执行组的信息，仅部分信息。
                     */
                    bool m_describeExecutors;
                    bool m_describeExecutorsHasBeenSet;

                    /**
                     * 默认不展示项目管理员信息
                     */
                    bool m_describeAdminUsers;
                    bool m_describeAdminUsersHasBeenSet;

                    /**
                     * 默认不统计项目人员数量
                     */
                    bool m_describeMemberCount;
                    bool m_describeMemberCountHasBeenSet;

                    /**
                     * 默认不查询创建者的信息
                     */
                    bool m_describeCreator;
                    bool m_describeCreatorHasBeenSet;

                    /**
                     * 项目名只在租户内唯一，一般用来转化为项目ID。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEPROJECTREQUEST_H_
