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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYDBINSTANCESPROJECTREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYDBINSTANCESPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * ModifyDBInstancesProject请求参数结构体
                */
                class ModifyDBInstancesProjectRequest : public AbstractModel
                {
                public:
                    ModifyDBInstancesProjectRequest();
                    ~ModifyDBInstancesProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待修改的实例ID列表。实例 ID 形如：dcdbt-ow728lmc。
                     * @return InstanceIds 待修改的实例ID列表。实例 ID 形如：dcdbt-ow728lmc。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置待修改的实例ID列表。实例 ID 形如：dcdbt-ow728lmc。
                     * @param _instanceIds 待修改的实例ID列表。实例 ID 形如：dcdbt-ow728lmc。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取要分配的项目 ID，可以通过 DescribeProjects 查询项目列表接口获取。
                     * @return ProjectId 要分配的项目 ID，可以通过 DescribeProjects 查询项目列表接口获取。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置要分配的项目 ID，可以通过 DescribeProjects 查询项目列表接口获取。
                     * @param _projectId 要分配的项目 ID，可以通过 DescribeProjects 查询项目列表接口获取。
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 待修改的实例ID列表。实例 ID 形如：dcdbt-ow728lmc。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 要分配的项目 ID，可以通过 DescribeProjects 查询项目列表接口获取。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYDBINSTANCESPROJECTREQUEST_H_
