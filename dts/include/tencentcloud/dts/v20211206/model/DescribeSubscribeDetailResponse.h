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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESUBSCRIBEDETAILRESPONSE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESUBSCRIBEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/SubscribeObject.h>
#include <tencentcloud/dts/v20211206/model/SubscribeKafkaConfig.h>
#include <tencentcloud/dts/v20211206/model/EndpointItem.h>
#include <tencentcloud/dts/v20211206/model/PipelineInfo.h>
#include <tencentcloud/dts/v20211206/model/TagItem.h>
#include <tencentcloud/dts/v20211206/model/SubsErr.h>
#include <tencentcloud/dts/v20211206/model/KeyValuePairOption.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeSubscribeDetail返回参数结构体
                */
                class DescribeSubscribeDetailResponse : public AbstractModel
                {
                public:
                    DescribeSubscribeDetailResponse();
                    ~DescribeSubscribeDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据订阅的ID，形如subs-b6x64o31tm
                     * @return SubscribeId 数据订阅的ID，形如subs-b6x64o31tm
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     * 
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取数据订阅实例的名称
                     * @return SubscribeName 数据订阅实例的名称
                     * 
                     */
                    std::string GetSubscribeName() const;

                    /**
                     * 判断参数 SubscribeName 是否已赋值
                     * @return SubscribeName 是否已赋值
                     * 
                     */
                    bool SubscribeNameHasBeenSet() const;

                    /**
                     * 获取订阅的数据库类型，目前支持 cynosdbmysql(tdsql-c mysql版),mariadb,mongodb,mysql,percona,tdpg(tdsql postgresql版),tdsqlpercona(tdsql mysql版)
                     * @return Product 订阅的数据库类型，目前支持 cynosdbmysql(tdsql-c mysql版),mariadb,mongodb,mysql,percona,tdpg(tdsql postgresql版),tdsqlpercona(tdsql mysql版)
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取订阅的云数据库实例ID，只有订阅云数据库该值才有意义
                     * @return InstanceId 订阅的云数据库实例ID，只有订阅云数据库该值才有意义
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取订阅的云数据库实例状态，只有订阅云数据库该值才有意义。可能值为：running, isolated, offline
                     * @return InstanceStatus 订阅的云数据库实例状态，只有订阅云数据库该值才有意义。可能值为：running, isolated, offline
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取订阅任务计费状态，可能值为：正常normal, 隔离中isolating, 已隔离isolated, 下线中offlining, 按量转包年包月中 post2PrePayIng
                     * @return Status 订阅任务计费状态，可能值为：正常normal, 隔离中isolating, 已隔离isolated, 下线中offlining, 按量转包年包月中 post2PrePayIng
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取订阅任务状态，可能值为：未启动notStarted, 校验中checking, 校验不通过checkNotPass, 校验通过checkPass, 启动中starting, 运行中running, 异常出错error
                     * @return SubsStatus 订阅任务状态，可能值为：未启动notStarted, 校验中checking, 校验不通过checkNotPass, 校验通过checkPass, 启动中starting, 运行中running, 异常出错error
                     * 
                     */
                    std::string GetSubsStatus() const;

                    /**
                     * 判断参数 SubsStatus 是否已赋值
                     * @return SubsStatus 是否已赋值
                     * 
                     */
                    bool SubsStatusHasBeenSet() const;

                    /**
                     * 获取修改时间，时间格式如：Y-m-d h:m:s
                     * @return ModifyTime 修改时间，时间格式如：Y-m-d h:m:s
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取创建时间，时间格式如：Y-m-d h:m:s
                     * @return CreateTime 创建时间，时间格式如：Y-m-d h:m:s
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取隔离时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00
                     * @return IsolateTime 隔离时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     * 
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取包年包月任务的到期时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00
                     * @return ExpireTime 包年包月任务的到期时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取下线时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00
                     * @return OfflineTime 下线时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     * 
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取付费方式，可能值为：0-包年包月，1-按量计费
                     * @return PayType 付费方式，可能值为：0-包年包月，1-按量计费
                     * 
                     */
                    int64_t GetPayType() const;

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取自动续费标识。只有当 PayType=0，该值才有意义。枚举值：0-不自动续费，1-自动续费
                     * @return AutoRenewFlag 自动续费标识。只有当 PayType=0，该值才有意义。枚举值：0-不自动续费，1-自动续费
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取任务所在地域
                     * @return Region 任务所在地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Kafka topic
                     * @return Topic Kafka topic
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取Kafka服务Broker地址
                     * @return Broker Kafka服务Broker地址
                     * 
                     */
                    std::string GetBroker() const;

                    /**
                     * 判断参数 Broker 是否已赋值
                     * @return Broker 是否已赋值
                     * 
                     */
                    bool BrokerHasBeenSet() const;

                    /**
                     * 获取数据订阅的类型，当 Product 不为 mongodb 时，可能值为：all-全实例更新；dml-数据更新；ddl-结构更新；dmlAndDdl-数据更新+结构更新。当 Product 为 mongodb 时，可能值为 all-全实例更新；database-订阅单库；collection-订阅单集合
                     * @return SubscribeMode 数据订阅的类型，当 Product 不为 mongodb 时，可能值为：all-全实例更新；dml-数据更新；ddl-结构更新；dmlAndDdl-数据更新+结构更新。当 Product 为 mongodb 时，可能值为 all-全实例更新；database-订阅单库；collection-订阅单集合
                     * 
                     */
                    std::string GetSubscribeMode() const;

                    /**
                     * 判断参数 SubscribeMode 是否已赋值
                     * @return SubscribeMode 是否已赋值
                     * 
                     */
                    bool SubscribeModeHasBeenSet() const;

                    /**
                     * 获取订阅数据格式。如果为空则用的默认格式: mysql\cynosdbmysql\mariadb\percona\tdsqlpercona\tdpg是protobuf，mongo是json。当 DatabaseType 为 mysql和cynosdbmysql 时有三种可选协议：protobuf\avro\json。数据格式详情参考官网的消费demo文档
                     * @return Protocol 订阅数据格式。如果为空则用的默认格式: mysql\cynosdbmysql\mariadb\percona\tdsqlpercona\tdpg是protobuf，mongo是json。当 DatabaseType 为 mysql和cynosdbmysql 时有三种可选协议：protobuf\avro\json。数据格式详情参考官网的消费demo文档
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取订阅的数据库表信息
                     * @return SubscribeObjects 订阅的数据库表信息
                     * 
                     */
                    std::vector<SubscribeObject> GetSubscribeObjects() const;

                    /**
                     * 判断参数 SubscribeObjects 是否已赋值
                     * @return SubscribeObjects 是否已赋值
                     * 
                     */
                    bool SubscribeObjectsHasBeenSet() const;

                    /**
                     * 获取kafka配置信息
                     * @return KafkaConfig kafka配置信息
                     * 
                     */
                    SubscribeKafkaConfig GetKafkaConfig() const;

                    /**
                     * 判断参数 KafkaConfig 是否已赋值
                     * @return KafkaConfig 是否已赋值
                     * 
                     */
                    bool KafkaConfigHasBeenSet() const;

                    /**
                     * 获取订阅内置kafka的版本信息
                     * @return KafkaVersion 订阅内置kafka的版本信息
                     * 
                     */
                    std::string GetKafkaVersion() const;

                    /**
                     * 判断参数 KafkaVersion 是否已赋值
                     * @return KafkaVersion 是否已赋值
                     * 
                     */
                    bool KafkaVersionHasBeenSet() const;

                    /**
                     * 获取源数据库接入类型，如：extranet(公网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、cdb(云数据库)、cvm(云服务器自建)、intranet(自研上云)、vpc(私有网络vpc)。注意具体可选值依赖当前链路支持能力
                     * @return AccessType 源数据库接入类型，如：extranet(公网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、cdb(云数据库)、cvm(云服务器自建)、intranet(自研上云)、vpc(私有网络vpc)。注意具体可选值依赖当前链路支持能力
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取接入类型信息
                     * @return Endpoints 接入类型信息
                     * 
                     */
                    std::vector<EndpointItem> GetEndpoints() const;

                    /**
                     * 判断参数 Endpoints 是否已赋值
                     * @return Endpoints 是否已赋值
                     * 
                     */
                    bool EndpointsHasBeenSet() const;

                    /**
                     * 获取mongo输出聚合设置
                     * @return PipelineInfo mongo输出聚合设置
                     * 
                     */
                    std::vector<PipelineInfo> GetPipelineInfo() const;

                    /**
                     * 判断参数 PipelineInfo 是否已赋值
                     * @return PipelineInfo 是否已赋值
                     * 
                     */
                    bool PipelineInfoHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取订阅任务报错信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Errors 订阅任务报错信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SubsErr> GetErrors() const;

                    /**
                     * 判断参数 Errors 是否已赋值
                     * @return Errors 是否已赋值
                     * 
                     */
                    bool ErrorsHasBeenSet() const;

                    /**
                     * 获取为业务添加的额外信息。参数名作key，参数值作value。
mysql选填参数：ProcessXA-是否处理XA事务，为true处理，其他不处理。
mongo选填参数：SubscribeType-订阅类型，目前只支持changeStream。
                     * @return ExtraAttr 为业务添加的额外信息。参数名作key，参数值作value。
mysql选填参数：ProcessXA-是否处理XA事务，为true处理，其他不处理。
mongo选填参数：SubscribeType-订阅类型，目前只支持changeStream。
                     * 
                     */
                    std::vector<KeyValuePairOption> GetExtraAttr() const;

                    /**
                     * 判断参数 ExtraAttr 是否已赋值
                     * @return ExtraAttr 是否已赋值
                     * 
                     */
                    bool ExtraAttrHasBeenSet() const;

                private:

                    /**
                     * 数据订阅的ID，形如subs-b6x64o31tm
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * 数据订阅实例的名称
                     */
                    std::string m_subscribeName;
                    bool m_subscribeNameHasBeenSet;

                    /**
                     * 订阅的数据库类型，目前支持 cynosdbmysql(tdsql-c mysql版),mariadb,mongodb,mysql,percona,tdpg(tdsql postgresql版),tdsqlpercona(tdsql mysql版)
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 订阅的云数据库实例ID，只有订阅云数据库该值才有意义
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 订阅的云数据库实例状态，只有订阅云数据库该值才有意义。可能值为：running, isolated, offline
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 订阅任务计费状态，可能值为：正常normal, 隔离中isolating, 已隔离isolated, 下线中offlining, 按量转包年包月中 post2PrePayIng
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 订阅任务状态，可能值为：未启动notStarted, 校验中checking, 校验不通过checkNotPass, 校验通过checkPass, 启动中starting, 运行中running, 异常出错error
                     */
                    std::string m_subsStatus;
                    bool m_subsStatusHasBeenSet;

                    /**
                     * 修改时间，时间格式如：Y-m-d h:m:s
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 创建时间，时间格式如：Y-m-d h:m:s
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 隔离时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * 包年包月任务的到期时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 下线时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * 付费方式，可能值为：0-包年包月，1-按量计费
                     */
                    int64_t m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * 自动续费标识。只有当 PayType=0，该值才有意义。枚举值：0-不自动续费，1-自动续费
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 任务所在地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Kafka topic
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Kafka服务Broker地址
                     */
                    std::string m_broker;
                    bool m_brokerHasBeenSet;

                    /**
                     * 数据订阅的类型，当 Product 不为 mongodb 时，可能值为：all-全实例更新；dml-数据更新；ddl-结构更新；dmlAndDdl-数据更新+结构更新。当 Product 为 mongodb 时，可能值为 all-全实例更新；database-订阅单库；collection-订阅单集合
                     */
                    std::string m_subscribeMode;
                    bool m_subscribeModeHasBeenSet;

                    /**
                     * 订阅数据格式。如果为空则用的默认格式: mysql\cynosdbmysql\mariadb\percona\tdsqlpercona\tdpg是protobuf，mongo是json。当 DatabaseType 为 mysql和cynosdbmysql 时有三种可选协议：protobuf\avro\json。数据格式详情参考官网的消费demo文档
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 订阅的数据库表信息
                     */
                    std::vector<SubscribeObject> m_subscribeObjects;
                    bool m_subscribeObjectsHasBeenSet;

                    /**
                     * kafka配置信息
                     */
                    SubscribeKafkaConfig m_kafkaConfig;
                    bool m_kafkaConfigHasBeenSet;

                    /**
                     * 订阅内置kafka的版本信息
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                    /**
                     * 源数据库接入类型，如：extranet(公网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、cdb(云数据库)、cvm(云服务器自建)、intranet(自研上云)、vpc(私有网络vpc)。注意具体可选值依赖当前链路支持能力
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 接入类型信息
                     */
                    std::vector<EndpointItem> m_endpoints;
                    bool m_endpointsHasBeenSet;

                    /**
                     * mongo输出聚合设置
                     */
                    std::vector<PipelineInfo> m_pipelineInfo;
                    bool m_pipelineInfoHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 订阅任务报错信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SubsErr> m_errors;
                    bool m_errorsHasBeenSet;

                    /**
                     * 为业务添加的额外信息。参数名作key，参数值作value。
mysql选填参数：ProcessXA-是否处理XA事务，为true处理，其他不处理。
mongo选填参数：SubscribeType-订阅类型，目前只支持changeStream。
                     */
                    std::vector<KeyValuePairOption> m_extraAttr;
                    bool m_extraAttrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESUBSCRIBEDETAILRESPONSE_H_
