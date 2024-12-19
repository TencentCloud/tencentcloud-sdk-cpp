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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPCONFIG_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/TaskGroupActionConfig.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 动作组的配置项
                */
                class TaskGroupConfig : public AbstractModel
                {
                public:
                    TaskGroupConfig();
                    ~TaskGroupConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取动作组所关联的实例对象
CVM ins-xxx
MySQL cdb-xxx
CLB lb-xxx
Redis crs-xxx
NAT网关 nat-xxx
专线-独享专用通道 dcx-xxx
标准集群普通节点 {"ClusterId":"cls-xxx","InstanceId":"ins-xxx","LanIP":"1.1.1.1"}
标准集群Pod {"ClusterId":"cls-xxx","PodName":"podname","NodeName":"1.1.1.1","NameSpace":"ns","Workload":"workload"}
TDSQL-MySQL(InnoDB) tdsqlshard-xxx
TDSQL-C cynosdbmysql-xxx
VPC子网 subnet-xxxx
CKafka ckafka-xxx
MariaDB tdsql-xxxx
PostgreSQL postgres-xxx
云原生网关 gateway-xxx
标准集群超级节点 {"ClusterId":"cls-xxx","InstanceId":"eklet-xxx","LanIP":"1.1.1.1,"NodePoolId":"np-xxx"}
Serverless集群超级节点 {"ClusterId":"cls-xxxx","InstanceId":"eklet-xxxx","LanIP":"1.1.1.1"}
Elasticsearch集群 es-xxxx
RabbitMQ amqp-xxxx
                     * @return TaskGroupInstances 动作组所关联的实例对象
CVM ins-xxx
MySQL cdb-xxx
CLB lb-xxx
Redis crs-xxx
NAT网关 nat-xxx
专线-独享专用通道 dcx-xxx
标准集群普通节点 {"ClusterId":"cls-xxx","InstanceId":"ins-xxx","LanIP":"1.1.1.1"}
标准集群Pod {"ClusterId":"cls-xxx","PodName":"podname","NodeName":"1.1.1.1","NameSpace":"ns","Workload":"workload"}
TDSQL-MySQL(InnoDB) tdsqlshard-xxx
TDSQL-C cynosdbmysql-xxx
VPC子网 subnet-xxxx
CKafka ckafka-xxx
MariaDB tdsql-xxxx
PostgreSQL postgres-xxx
云原生网关 gateway-xxx
标准集群超级节点 {"ClusterId":"cls-xxx","InstanceId":"eklet-xxx","LanIP":"1.1.1.1,"NodePoolId":"np-xxx"}
Serverless集群超级节点 {"ClusterId":"cls-xxxx","InstanceId":"eklet-xxxx","LanIP":"1.1.1.1"}
Elasticsearch集群 es-xxxx
RabbitMQ amqp-xxxx
                     * 
                     */
                    std::vector<std::string> GetTaskGroupInstances() const;

                    /**
                     * 设置动作组所关联的实例对象
CVM ins-xxx
MySQL cdb-xxx
CLB lb-xxx
Redis crs-xxx
NAT网关 nat-xxx
专线-独享专用通道 dcx-xxx
标准集群普通节点 {"ClusterId":"cls-xxx","InstanceId":"ins-xxx","LanIP":"1.1.1.1"}
标准集群Pod {"ClusterId":"cls-xxx","PodName":"podname","NodeName":"1.1.1.1","NameSpace":"ns","Workload":"workload"}
TDSQL-MySQL(InnoDB) tdsqlshard-xxx
TDSQL-C cynosdbmysql-xxx
VPC子网 subnet-xxxx
CKafka ckafka-xxx
MariaDB tdsql-xxxx
PostgreSQL postgres-xxx
云原生网关 gateway-xxx
标准集群超级节点 {"ClusterId":"cls-xxx","InstanceId":"eklet-xxx","LanIP":"1.1.1.1,"NodePoolId":"np-xxx"}
Serverless集群超级节点 {"ClusterId":"cls-xxxx","InstanceId":"eklet-xxxx","LanIP":"1.1.1.1"}
Elasticsearch集群 es-xxxx
RabbitMQ amqp-xxxx
                     * @param _taskGroupInstances 动作组所关联的实例对象
CVM ins-xxx
MySQL cdb-xxx
CLB lb-xxx
Redis crs-xxx
NAT网关 nat-xxx
专线-独享专用通道 dcx-xxx
标准集群普通节点 {"ClusterId":"cls-xxx","InstanceId":"ins-xxx","LanIP":"1.1.1.1"}
标准集群Pod {"ClusterId":"cls-xxx","PodName":"podname","NodeName":"1.1.1.1","NameSpace":"ns","Workload":"workload"}
TDSQL-MySQL(InnoDB) tdsqlshard-xxx
TDSQL-C cynosdbmysql-xxx
VPC子网 subnet-xxxx
CKafka ckafka-xxx
MariaDB tdsql-xxxx
PostgreSQL postgres-xxx
云原生网关 gateway-xxx
标准集群超级节点 {"ClusterId":"cls-xxx","InstanceId":"eklet-xxx","LanIP":"1.1.1.1,"NodePoolId":"np-xxx"}
Serverless集群超级节点 {"ClusterId":"cls-xxxx","InstanceId":"eklet-xxxx","LanIP":"1.1.1.1"}
Elasticsearch集群 es-xxxx
RabbitMQ amqp-xxxx
                     * 
                     */
                    void SetTaskGroupInstances(const std::vector<std::string>& _taskGroupInstances);

                    /**
                     * 判断参数 TaskGroupInstances 是否已赋值
                     * @return TaskGroupInstances 是否已赋值
                     * 
                     */
                    bool TaskGroupInstancesHasBeenSet() const;

                    /**
                     * 获取动作组标题，不填默认取经验中的动作组名称
                     * @return TaskGroupTitle 动作组标题，不填默认取经验中的动作组名称
                     * 
                     */
                    std::string GetTaskGroupTitle() const;

                    /**
                     * 设置动作组标题，不填默认取经验中的动作组名称
                     * @param _taskGroupTitle 动作组标题，不填默认取经验中的动作组名称
                     * 
                     */
                    void SetTaskGroupTitle(const std::string& _taskGroupTitle);

                    /**
                     * 判断参数 TaskGroupTitle 是否已赋值
                     * @return TaskGroupTitle 是否已赋值
                     * 
                     */
                    bool TaskGroupTitleHasBeenSet() const;

                    /**
                     * 获取动作组描述，不填默认取经验中的动作组描述
                     * @return TaskGroupDescription 动作组描述，不填默认取经验中的动作组描述
                     * 
                     */
                    std::string GetTaskGroupDescription() const;

                    /**
                     * 设置动作组描述，不填默认取经验中的动作组描述
                     * @param _taskGroupDescription 动作组描述，不填默认取经验中的动作组描述
                     * 
                     */
                    void SetTaskGroupDescription(const std::string& _taskGroupDescription);

                    /**
                     * 判断参数 TaskGroupDescription 是否已赋值
                     * @return TaskGroupDescription 是否已赋值
                     * 
                     */
                    bool TaskGroupDescriptionHasBeenSet() const;

                    /**
                     * 获取动作执行模式。1 --- 顺序执行，2 --- 阶段执行, 不填默认取经验中的动作组执行模式
                     * @return TaskGroupMode 动作执行模式。1 --- 顺序执行，2 --- 阶段执行, 不填默认取经验中的动作组执行模式
                     * 
                     */
                    uint64_t GetTaskGroupMode() const;

                    /**
                     * 设置动作执行模式。1 --- 顺序执行，2 --- 阶段执行, 不填默认取经验中的动作组执行模式
                     * @param _taskGroupMode 动作执行模式。1 --- 顺序执行，2 --- 阶段执行, 不填默认取经验中的动作组执行模式
                     * 
                     */
                    void SetTaskGroupMode(const uint64_t& _taskGroupMode);

                    /**
                     * 判断参数 TaskGroupMode 是否已赋值
                     * @return TaskGroupMode 是否已赋值
                     * 
                     */
                    bool TaskGroupModeHasBeenSet() const;

                    /**
                     * 获取动作组中的动作参数，不填默认使用经验中的动作参数，配置时可以只指定想要修改参数的动作
                     * @return TaskGroupActionsConfig 动作组中的动作参数，不填默认使用经验中的动作参数，配置时可以只指定想要修改参数的动作
                     * 
                     */
                    std::vector<TaskGroupActionConfig> GetTaskGroupActionsConfig() const;

                    /**
                     * 设置动作组中的动作参数，不填默认使用经验中的动作参数，配置时可以只指定想要修改参数的动作
                     * @param _taskGroupActionsConfig 动作组中的动作参数，不填默认使用经验中的动作参数，配置时可以只指定想要修改参数的动作
                     * 
                     */
                    void SetTaskGroupActionsConfig(const std::vector<TaskGroupActionConfig>& _taskGroupActionsConfig);

                    /**
                     * 判断参数 TaskGroupActionsConfig 是否已赋值
                     * @return TaskGroupActionsConfig 是否已赋值
                     * 
                     */
                    bool TaskGroupActionsConfigHasBeenSet() const;

                private:

                    /**
                     * 动作组所关联的实例对象
CVM ins-xxx
MySQL cdb-xxx
CLB lb-xxx
Redis crs-xxx
NAT网关 nat-xxx
专线-独享专用通道 dcx-xxx
标准集群普通节点 {"ClusterId":"cls-xxx","InstanceId":"ins-xxx","LanIP":"1.1.1.1"}
标准集群Pod {"ClusterId":"cls-xxx","PodName":"podname","NodeName":"1.1.1.1","NameSpace":"ns","Workload":"workload"}
TDSQL-MySQL(InnoDB) tdsqlshard-xxx
TDSQL-C cynosdbmysql-xxx
VPC子网 subnet-xxxx
CKafka ckafka-xxx
MariaDB tdsql-xxxx
PostgreSQL postgres-xxx
云原生网关 gateway-xxx
标准集群超级节点 {"ClusterId":"cls-xxx","InstanceId":"eklet-xxx","LanIP":"1.1.1.1,"NodePoolId":"np-xxx"}
Serverless集群超级节点 {"ClusterId":"cls-xxxx","InstanceId":"eklet-xxxx","LanIP":"1.1.1.1"}
Elasticsearch集群 es-xxxx
RabbitMQ amqp-xxxx
                     */
                    std::vector<std::string> m_taskGroupInstances;
                    bool m_taskGroupInstancesHasBeenSet;

                    /**
                     * 动作组标题，不填默认取经验中的动作组名称
                     */
                    std::string m_taskGroupTitle;
                    bool m_taskGroupTitleHasBeenSet;

                    /**
                     * 动作组描述，不填默认取经验中的动作组描述
                     */
                    std::string m_taskGroupDescription;
                    bool m_taskGroupDescriptionHasBeenSet;

                    /**
                     * 动作执行模式。1 --- 顺序执行，2 --- 阶段执行, 不填默认取经验中的动作组执行模式
                     */
                    uint64_t m_taskGroupMode;
                    bool m_taskGroupModeHasBeenSet;

                    /**
                     * 动作组中的动作参数，不填默认使用经验中的动作参数，配置时可以只指定想要修改参数的动作
                     */
                    std::vector<TaskGroupActionConfig> m_taskGroupActionsConfig;
                    bool m_taskGroupActionsConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TASKGROUPCONFIG_H_
