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
                     * 获取<p>数据订阅的ID，形如subs-b6x64o31tm</p>
                     * @return SubscribeId <p>数据订阅的ID，形如subs-b6x64o31tm</p>
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
                     * 获取<p>数据订阅实例的名称</p>
                     * @return SubscribeName <p>数据订阅实例的名称</p>
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
                     * 获取<p>订阅的数据库类型，目前支持 cynosdbmysql(tdsql-c mysql版),mariadb,mongodb,mysql,percona,tdpg(tdsql postgresql版),tdsqlpercona(tdsql mysql版)</p>
                     * @return Product <p>订阅的数据库类型，目前支持 cynosdbmysql(tdsql-c mysql版),mariadb,mongodb,mysql,percona,tdpg(tdsql postgresql版),tdsqlpercona(tdsql mysql版)</p>
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
                     * 获取<p>订阅的云数据库实例ID，只有订阅云数据库该值才有意义</p>
                     * @return InstanceId <p>订阅的云数据库实例ID，只有订阅云数据库该值才有意义</p>
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
                     * 获取<p>订阅的云数据库实例状态，只有订阅云数据库该值才有意义。可能值为：running, isolated, offline</p>
                     * @return InstanceStatus <p>订阅的云数据库实例状态，只有订阅云数据库该值才有意义。可能值为：running, isolated, offline</p>
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
                     * 获取<p>订阅任务计费状态，可能值为：正常normal, 隔离中isolating, 已隔离isolated, 下线中offlining, 按量转包年包月中 post2PrePayIng</p>
                     * @return Status <p>订阅任务计费状态，可能值为：正常normal, 隔离中isolating, 已隔离isolated, 下线中offlining, 按量转包年包月中 post2PrePayIng</p>
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
                     * 获取<p>订阅任务状态，可能值为：未启动notStarted, 校验中checking, 校验不通过checkNotPass, 校验通过checkPass, 启动中starting, 运行中running, 异常出错error</p>
                     * @return SubsStatus <p>订阅任务状态，可能值为：未启动notStarted, 校验中checking, 校验不通过checkNotPass, 校验通过checkPass, 启动中starting, 运行中running, 异常出错error</p>
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
                     * 获取<p>修改时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>Y-m-d h:m:s</code>（北京时间）。</p>
                     * @return ModifyTime <p>修改时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>Y-m-d h:m:s</code>（北京时间）。</p>
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
                     * 获取<p>创建时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>Y-m-d h:m:s</code>（北京时间）。</p>
                     * @return CreateTime <p>创建时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>Y-m-d h:m:s</code>（北京时间）。</p>
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
                     * 获取<p>隔离时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>Y-m-d h:m:s</code>（北京时间）。</p>
                     * @return IsolateTime <p>隔离时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>Y-m-d h:m:s</code>（北京时间）。</p>
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
                     * 获取<p>包年包月任务的到期时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>Y-m-d h:m:s</code>（北京时间）。</p>
                     * @return ExpireTime <p>包年包月任务的到期时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>Y-m-d h:m:s</code>（北京时间）。</p>
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
                     * 获取<p>下线时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>Y-m-d h:m:s</code>（北京时间）。</p>
                     * @return OfflineTime <p>下线时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>Y-m-d h:m:s</code>（北京时间）。</p>
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
                     * 获取<p>付费方式，可能值为：0-包年包月，1-按量计费</p>
                     * @return PayType <p>付费方式，可能值为：0-包年包月，1-按量计费</p>
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
                     * 获取<p>自动续费标识。只有当 PayType=0，该值才有意义。枚举值：0-不自动续费，1-自动续费</p>
                     * @return AutoRenewFlag <p>自动续费标识。只有当 PayType=0，该值才有意义。枚举值：0-不自动续费，1-自动续费</p>
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
                     * 获取<p>任务所在地域</p>
                     * @return Region <p>任务所在地域</p>
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
                     * 获取<p>Kafka topic</p>
                     * @return Topic <p>Kafka topic</p>
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
                     * 获取<p>Kafka服务Broker地址</p>
                     * @return Broker <p>Kafka服务Broker地址</p>
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
                     * 获取<p>数据订阅的类型，当 Product 不为 mongodb 时，可能值为：all-全实例更新；dml-数据更新；ddl-结构更新；dmlAndDdl-数据更新+结构更新。当 Product 为 mongodb 时，可能值为 all-全实例更新；database-订阅单库；collection-订阅单集合</p>
                     * @return SubscribeMode <p>数据订阅的类型，当 Product 不为 mongodb 时，可能值为：all-全实例更新；dml-数据更新；ddl-结构更新；dmlAndDdl-数据更新+结构更新。当 Product 为 mongodb 时，可能值为 all-全实例更新；database-订阅单库；collection-订阅单集合</p>
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
                     * 获取<p>订阅数据格式。如果为空则用的默认格式: mysql\cynosdbmysql\mariadb\percona\tdsqlpercona\tdpg是protobuf，mongo是json。当 DatabaseType 为 mysql和cynosdbmysql 时有三种可选协议：protobuf\avro\json。数据格式详情参考官网的消费demo文档</p>
                     * @return Protocol <p>订阅数据格式。如果为空则用的默认格式: mysql\cynosdbmysql\mariadb\percona\tdsqlpercona\tdpg是protobuf，mongo是json。当 DatabaseType 为 mysql和cynosdbmysql 时有三种可选协议：protobuf\avro\json。数据格式详情参考官网的消费demo文档</p>
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
                     * 获取<p>订阅的数据库表信息</p>
                     * @return SubscribeObjects <p>订阅的数据库表信息</p>
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
                     * 获取<p>kafka配置信息</p>
                     * @return KafkaConfig <p>kafka配置信息</p>
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
                     * 获取<p>订阅内置kafka的版本信息</p>
                     * @return KafkaVersion <p>订阅内置kafka的版本信息</p>
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
                     * 获取<p>源数据库接入类型，如：extranet(公网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、cdb(云数据库)、cvm(云服务器自建)、intranet(自研上云)、vpc(私有网络vpc)。注意具体可选值依赖当前链路支持能力</p>
                     * @return AccessType <p>源数据库接入类型，如：extranet(公网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、cdb(云数据库)、cvm(云服务器自建)、intranet(自研上云)、vpc(私有网络vpc)。注意具体可选值依赖当前链路支持能力</p>
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
                     * 获取<p>接入类型信息</p>
                     * @return Endpoints <p>接入类型信息</p>
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
                     * 获取<p>mongo输出聚合设置</p>
                     * @return PipelineInfo <p>mongo输出聚合设置</p>
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
                     * 获取<p>标签</p>
                     * @return Tags <p>标签</p>
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
                     * 获取<p>订阅任务报错信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Errors <p>订阅任务报错信息</p>
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
                     * 获取<p>为业务添加的额外信息。参数名作key，参数值作value。<br>mysql选填参数：ProcessXA-是否处理XA事务，为true处理，其他不处理。<br>mongo选填参数：SubscribeType-订阅类型，目前只支持changeStream。</p>
                     * @return ExtraAttr <p>为业务添加的额外信息。参数名作key，参数值作value。<br>mysql选填参数：ProcessXA-是否处理XA事务，为true处理，其他不处理。<br>mongo选填参数：SubscribeType-订阅类型，目前只支持changeStream。</p>
                     * 
                     */
                    std::vector<KeyValuePairOption> GetExtraAttr() const;

                    /**
                     * 判断参数 ExtraAttr 是否已赋值
                     * @return ExtraAttr 是否已赋值
                     * 
                     */
                    bool ExtraAttrHasBeenSet() const;

                    /**
                     * 获取<p>数据订阅版本, 当前支持kafka和kafkaPro（专业版）</p>
                     * @return SubscribeVersion <p>数据订阅版本, 当前支持kafka和kafkaPro（专业版）</p>
                     * 
                     */
                    std::string GetSubscribeVersion() const;

                    /**
                     * 判断参数 SubscribeVersion 是否已赋值
                     * @return SubscribeVersion 是否已赋值
                     * 
                     */
                    bool SubscribeVersionHasBeenSet() const;

                    /**
                     * 获取<p>消费端地址所在vpc</p>
                     * @return ConsumerVpcId <p>消费端地址所在vpc</p>
                     * 
                     */
                    std::string GetConsumerVpcId() const;

                    /**
                     * 判断参数 ConsumerVpcId 是否已赋值
                     * @return ConsumerVpcId 是否已赋值
                     * 
                     */
                    bool ConsumerVpcIdHasBeenSet() const;

                    /**
                     * 获取<p>消费端地址所在子网</p>
                     * @return ConsumerSubnetId <p>消费端地址所在子网</p>
                     * 
                     */
                    std::string GetConsumerSubnetId() const;

                    /**
                     * 判断参数 ConsumerSubnetId 是否已赋值
                     * @return ConsumerSubnetId 是否已赋值
                     * 
                     */
                    bool ConsumerSubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>订阅实例规格</p>
                     * @return InstanceClass <p>订阅实例规格</p>
                     * 
                     */
                    std::string GetInstanceClass() const;

                    /**
                     * 判断参数 InstanceClass 是否已赋值
                     * @return InstanceClass 是否已赋值
                     * 
                     */
                    bool InstanceClassHasBeenSet() const;

                private:

                    /**
                     * <p>数据订阅的ID，形如subs-b6x64o31tm</p>
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * <p>数据订阅实例的名称</p>
                     */
                    std::string m_subscribeName;
                    bool m_subscribeNameHasBeenSet;

                    /**
                     * <p>订阅的数据库类型，目前支持 cynosdbmysql(tdsql-c mysql版),mariadb,mongodb,mysql,percona,tdpg(tdsql postgresql版),tdsqlpercona(tdsql mysql版)</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>订阅的云数据库实例ID，只有订阅云数据库该值才有意义</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>订阅的云数据库实例状态，只有订阅云数据库该值才有意义。可能值为：running, isolated, offline</p>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>订阅任务计费状态，可能值为：正常normal, 隔离中isolating, 已隔离isolated, 下线中offlining, 按量转包年包月中 post2PrePayIng</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>订阅任务状态，可能值为：未启动notStarted, 校验中checking, 校验不通过checkNotPass, 校验通过checkPass, 启动中starting, 运行中running, 异常出错error</p>
                     */
                    std::string m_subsStatus;
                    bool m_subsStatusHasBeenSet;

                    /**
                     * <p>修改时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>Y-m-d h:m:s</code>（北京时间）。</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>创建时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>Y-m-d h:m:s</code>（北京时间）。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>隔离时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>Y-m-d h:m:s</code>（北京时间）。</p>
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * <p>包年包月任务的到期时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>Y-m-d h:m:s</code>（北京时间）。</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>下线时间。当 <code>DateTimeISOFormat=true</code> 时返回 RFC 3339 格式（如 <code>2026-04-23T20:21:35+08:00</code>），否则返回 <code>Y-m-d h:m:s</code>（北京时间）。</p>
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * <p>付费方式，可能值为：0-包年包月，1-按量计费</p>
                     */
                    int64_t m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * <p>自动续费标识。只有当 PayType=0，该值才有意义。枚举值：0-不自动续费，1-自动续费</p>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>任务所在地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Kafka topic</p>
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * <p>Kafka服务Broker地址</p>
                     */
                    std::string m_broker;
                    bool m_brokerHasBeenSet;

                    /**
                     * <p>数据订阅的类型，当 Product 不为 mongodb 时，可能值为：all-全实例更新；dml-数据更新；ddl-结构更新；dmlAndDdl-数据更新+结构更新。当 Product 为 mongodb 时，可能值为 all-全实例更新；database-订阅单库；collection-订阅单集合</p>
                     */
                    std::string m_subscribeMode;
                    bool m_subscribeModeHasBeenSet;

                    /**
                     * <p>订阅数据格式。如果为空则用的默认格式: mysql\cynosdbmysql\mariadb\percona\tdsqlpercona\tdpg是protobuf，mongo是json。当 DatabaseType 为 mysql和cynosdbmysql 时有三种可选协议：protobuf\avro\json。数据格式详情参考官网的消费demo文档</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>订阅的数据库表信息</p>
                     */
                    std::vector<SubscribeObject> m_subscribeObjects;
                    bool m_subscribeObjectsHasBeenSet;

                    /**
                     * <p>kafka配置信息</p>
                     */
                    SubscribeKafkaConfig m_kafkaConfig;
                    bool m_kafkaConfigHasBeenSet;

                    /**
                     * <p>订阅内置kafka的版本信息</p>
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                    /**
                     * <p>源数据库接入类型，如：extranet(公网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、cdb(云数据库)、cvm(云服务器自建)、intranet(自研上云)、vpc(私有网络vpc)。注意具体可选值依赖当前链路支持能力</p>
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * <p>接入类型信息</p>
                     */
                    std::vector<EndpointItem> m_endpoints;
                    bool m_endpointsHasBeenSet;

                    /**
                     * <p>mongo输出聚合设置</p>
                     */
                    std::vector<PipelineInfo> m_pipelineInfo;
                    bool m_pipelineInfoHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>订阅任务报错信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SubsErr> m_errors;
                    bool m_errorsHasBeenSet;

                    /**
                     * <p>为业务添加的额外信息。参数名作key，参数值作value。<br>mysql选填参数：ProcessXA-是否处理XA事务，为true处理，其他不处理。<br>mongo选填参数：SubscribeType-订阅类型，目前只支持changeStream。</p>
                     */
                    std::vector<KeyValuePairOption> m_extraAttr;
                    bool m_extraAttrHasBeenSet;

                    /**
                     * <p>数据订阅版本, 当前支持kafka和kafkaPro（专业版）</p>
                     */
                    std::string m_subscribeVersion;
                    bool m_subscribeVersionHasBeenSet;

                    /**
                     * <p>消费端地址所在vpc</p>
                     */
                    std::string m_consumerVpcId;
                    bool m_consumerVpcIdHasBeenSet;

                    /**
                     * <p>消费端地址所在子网</p>
                     */
                    std::string m_consumerSubnetId;
                    bool m_consumerSubnetIdHasBeenSet;

                    /**
                     * <p>订阅实例规格</p>
                     */
                    std::string m_instanceClass;
                    bool m_instanceClassHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESUBSCRIBEDETAILRESPONSE_H_
