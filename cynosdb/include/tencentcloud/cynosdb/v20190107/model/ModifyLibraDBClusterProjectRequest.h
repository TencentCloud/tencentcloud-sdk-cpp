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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBCLUSTERPROJECTREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBCLUSTERPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyLibraDBClusterProject请求参数结构体
                */
                class ModifyLibraDBClusterProjectRequest : public AbstractModel
                {
                public:
                    ModifyLibraDBClusterProjectRequest();
                    ~ModifyLibraDBClusterProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分析集群 ID 列表
                     * @return ClusterIdSet 分析集群 ID 列表
                     * 
                     */
                    std::vector<std::string> GetClusterIdSet() const;

                    /**
                     * 设置分析集群 ID 列表
                     * @param _clusterIdSet 分析集群 ID 列表
                     * 
                     */
                    void SetClusterIdSet(const std::vector<std::string>& _clusterIdSet);

                    /**
                     * 判断参数 ClusterIdSet 是否已赋值
                     * @return ClusterIdSet 是否已赋值
                     * 
                     */
                    bool ClusterIdSetHasBeenSet() const;

                    /**
                     * 获取项目 ID
                     * @return ProjectId 项目 ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目 ID
                     * @param _projectId 项目 ID
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
                     * 分析集群 ID 列表
                     */
                    std::vector<std::string> m_clusterIdSet;
                    bool m_clusterIdSetHasBeenSet;

                    /**
                     * 项目 ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBCLUSTERPROJECTREQUEST_H_
