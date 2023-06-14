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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCECREATETASKSREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCECREATETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeReplicationInstanceCreateTasks请求参数结构体
                */
                class DescribeReplicationInstanceCreateTasksRequest : public AbstractModel
                {
                public:
                    DescribeReplicationInstanceCreateTasksRequest();
                    ~DescribeReplicationInstanceCreateTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取同步实例Id，见实例返回列表中的同步实例ID
                     * @return ReplicationRegistryId 同步实例Id，见实例返回列表中的同步实例ID
                     * 
                     */
                    std::string GetReplicationRegistryId() const;

                    /**
                     * 设置同步实例Id，见实例返回列表中的同步实例ID
                     * @param _replicationRegistryId 同步实例Id，见实例返回列表中的同步实例ID
                     * 
                     */
                    void SetReplicationRegistryId(const std::string& _replicationRegistryId);

                    /**
                     * 判断参数 ReplicationRegistryId 是否已赋值
                     * @return ReplicationRegistryId 是否已赋值
                     * 
                     */
                    bool ReplicationRegistryIdHasBeenSet() const;

                    /**
                     * 获取同步实例的地域ID，见实例返回列表中地域ID
                     * @return ReplicationRegionId 同步实例的地域ID，见实例返回列表中地域ID
                     * 
                     */
                    uint64_t GetReplicationRegionId() const;

                    /**
                     * 设置同步实例的地域ID，见实例返回列表中地域ID
                     * @param _replicationRegionId 同步实例的地域ID，见实例返回列表中地域ID
                     * 
                     */
                    void SetReplicationRegionId(const uint64_t& _replicationRegionId);

                    /**
                     * 判断参数 ReplicationRegionId 是否已赋值
                     * @return ReplicationRegionId 是否已赋值
                     * 
                     */
                    bool ReplicationRegionIdHasBeenSet() const;

                private:

                    /**
                     * 同步实例Id，见实例返回列表中的同步实例ID
                     */
                    std::string m_replicationRegistryId;
                    bool m_replicationRegistryIdHasBeenSet;

                    /**
                     * 同步实例的地域ID，见实例返回列表中地域ID
                     */
                    uint64_t m_replicationRegionId;
                    bool m_replicationRegionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCECREATETASKSREQUEST_H_
