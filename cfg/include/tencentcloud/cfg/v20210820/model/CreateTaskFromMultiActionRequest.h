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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_CREATETASKFROMMULTIACTIONREQUEST_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_CREATETASKFROMMULTIACTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/TaskGroupForAction.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateTaskFromMultiAction请求参数结构体
                */
                class CreateTaskFromMultiActionRequest : public AbstractModel
                {
                public:
                    CreateTaskFromMultiActionRequest();
                    ~CreateTaskFromMultiActionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取参与演练的实例ID
CVM ins-xxx
MySQL cdb-xxx
CLB lb-xxx
Redis crs-xxx
NAT网关 nat-xxx
Redis crs-xxx
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
                     * @return TaskInstances 参与演练的实例ID
CVM ins-xxx
MySQL cdb-xxx
CLB lb-xxx
Redis crs-xxx
NAT网关 nat-xxx
Redis crs-xxx
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
                    std::vector<std::string> GetTaskInstances() const;

                    /**
                     * 设置参与演练的实例ID
CVM ins-xxx
MySQL cdb-xxx
CLB lb-xxx
Redis crs-xxx
NAT网关 nat-xxx
Redis crs-xxx
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
                     * @param _taskInstances 参与演练的实例ID
CVM ins-xxx
MySQL cdb-xxx
CLB lb-xxx
Redis crs-xxx
NAT网关 nat-xxx
Redis crs-xxx
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
                    void SetTaskInstances(const std::vector<std::string>& _taskInstances);

                    /**
                     * 判断参数 TaskInstances 是否已赋值
                     * @return TaskInstances 是否已赋值
                     * 
                     */
                    bool TaskInstancesHasBeenSet() const;

                    /**
                     * 获取演练名称，不填则默认取动作名称
                     * @return TaskTitle 演练名称，不填则默认取动作名称
                     * 
                     */
                    std::string GetTaskTitle() const;

                    /**
                     * 设置演练名称，不填则默认取动作名称
                     * @param _taskTitle 演练名称，不填则默认取动作名称
                     * 
                     */
                    void SetTaskTitle(const std::string& _taskTitle);

                    /**
                     * 判断参数 TaskTitle 是否已赋值
                     * @return TaskTitle 是否已赋值
                     * 
                     */
                    bool TaskTitleHasBeenSet() const;

                    /**
                     * 获取演练描述，不填则默认取动作描述
                     * @return TaskDescription 演练描述，不填则默认取动作描述
                     * 
                     */
                    std::string GetTaskDescription() const;

                    /**
                     * 设置演练描述，不填则默认取动作描述
                     * @param _taskDescription 演练描述，不填则默认取动作描述
                     * 
                     */
                    void SetTaskDescription(const std::string& _taskDescription);

                    /**
                     * 判断参数 TaskDescription 是否已赋值
                     * @return TaskDescription 是否已赋值
                     * 
                     */
                    bool TaskDescriptionHasBeenSet() const;

                    /**
                     * 获取演练自动暂停时间，单位分钟, 不填则默认为60
                     * @return TaskPauseDuration 演练自动暂停时间，单位分钟, 不填则默认为60
                     * 
                     */
                    uint64_t GetTaskPauseDuration() const;

                    /**
                     * 设置演练自动暂停时间，单位分钟, 不填则默认为60
                     * @param _taskPauseDuration 演练自动暂停时间，单位分钟, 不填则默认为60
                     * 
                     */
                    void SetTaskPauseDuration(const uint64_t& _taskPauseDuration);

                    /**
                     * 判断参数 TaskPauseDuration 是否已赋值
                     * @return TaskPauseDuration 是否已赋值
                     * 
                     */
                    bool TaskPauseDurationHasBeenSet() const;

                    /**
                     * 获取演练动作组配置
                     * @return TaskAction 演练动作组配置
                     * 
                     */
                    std::vector<TaskGroupForAction> GetTaskAction() const;

                    /**
                     * 设置演练动作组配置
                     * @param _taskAction 演练动作组配置
                     * 
                     */
                    void SetTaskAction(const std::vector<TaskGroupForAction>& _taskAction);

                    /**
                     * 判断参数 TaskAction 是否已赋值
                     * @return TaskAction 是否已赋值
                     * 
                     */
                    bool TaskActionHasBeenSet() const;

                private:

                    /**
                     * 参与演练的实例ID
CVM ins-xxx
MySQL cdb-xxx
CLB lb-xxx
Redis crs-xxx
NAT网关 nat-xxx
Redis crs-xxx
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
                    std::vector<std::string> m_taskInstances;
                    bool m_taskInstancesHasBeenSet;

                    /**
                     * 演练名称，不填则默认取动作名称
                     */
                    std::string m_taskTitle;
                    bool m_taskTitleHasBeenSet;

                    /**
                     * 演练描述，不填则默认取动作描述
                     */
                    std::string m_taskDescription;
                    bool m_taskDescriptionHasBeenSet;

                    /**
                     * 演练自动暂停时间，单位分钟, 不填则默认为60
                     */
                    uint64_t m_taskPauseDuration;
                    bool m_taskPauseDurationHasBeenSet;

                    /**
                     * 演练动作组配置
                     */
                    std::vector<TaskGroupForAction> m_taskAction;
                    bool m_taskActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_CREATETASKFROMMULTIACTIONREQUEST_H_
