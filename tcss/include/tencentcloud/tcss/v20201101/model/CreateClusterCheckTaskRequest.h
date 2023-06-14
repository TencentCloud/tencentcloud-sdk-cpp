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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATECLUSTERCHECKTASKREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATECLUSTERCHECKTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ClusterCheckTaskItem.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateClusterCheckTask请求参数结构体
                */
                class CreateClusterCheckTaskRequest : public AbstractModel
                {
                public:
                    CreateClusterCheckTaskRequest();
                    ~CreateClusterCheckTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定要扫描的集群信息
                     * @return ClusterCheckTaskList 指定要扫描的集群信息
                     * 
                     */
                    std::vector<ClusterCheckTaskItem> GetClusterCheckTaskList() const;

                    /**
                     * 设置指定要扫描的集群信息
                     * @param _clusterCheckTaskList 指定要扫描的集群信息
                     * 
                     */
                    void SetClusterCheckTaskList(const std::vector<ClusterCheckTaskItem>& _clusterCheckTaskList);

                    /**
                     * 判断参数 ClusterCheckTaskList 是否已赋值
                     * @return ClusterCheckTaskList 是否已赋值
                     * 
                     */
                    bool ClusterCheckTaskListHasBeenSet() const;

                private:

                    /**
                     * 指定要扫描的集群信息
                     */
                    std::vector<ClusterCheckTaskItem> m_clusterCheckTaskList;
                    bool m_clusterCheckTaskListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATECLUSTERCHECKTASKREQUEST_H_
