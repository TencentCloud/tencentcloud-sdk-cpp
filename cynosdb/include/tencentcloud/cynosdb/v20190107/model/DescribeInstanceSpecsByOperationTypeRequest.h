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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESPECSBYOPERATIONTYPEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESPECSBYOPERATIONTYPEREQUEST_H_

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
                * DescribeInstanceSpecsByOperationType请求参数结构体
                */
                class DescribeInstanceSpecsByOperationTypeRequest : public AbstractModel
                {
                public:
                    DescribeInstanceSpecsByOperationTypeRequest();
                    ~DescribeInstanceSpecsByOperationTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取操作类型
addROInstance：新增RO实例
modifyInstance：变配
                     * @return OperationType 操作类型
addROInstance：新增RO实例
modifyInstance：变配
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置操作类型
addROInstance：新增RO实例
modifyInstance：变配
                     * @param _operationType 操作类型
addROInstance：新增RO实例
modifyInstance：变配
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取实例ID，查询变配规格时必传
                     * @return InstanceId 实例ID，查询变配规格时必传
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，查询变配规格时必传
                     * @param _instanceId 实例ID，查询变配规格时必传
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例机器类型
                     * @return DeviceType 实例机器类型
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置实例机器类型
                     * @param _deviceType 实例机器类型
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 操作类型
addROInstance：新增RO实例
modifyInstance：变配
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * 实例ID，查询变配规格时必传
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例机器类型
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESPECSBYOPERATIONTYPEREQUEST_H_
