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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_SUBSCRIBEINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_SUBSCRIBEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/EndpointItem.h>
#include <tencentcloud/dts/v20211206/model/TagItem.h>
#include <tencentcloud/dts/v20211206/model/SubsErr.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 订阅实例信息
                */
                class SubscribeInfo : public AbstractModel
                {
                public:
                    SubscribeInfo();
                    ~SubscribeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据订阅的实例ID</p>
                     * @return SubscribeId <p>数据订阅的实例ID</p>
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置<p>数据订阅的实例ID</p>
                     * @param _subscribeId <p>数据订阅的实例ID</p>
                     * 
                     */
                    void SetSubscribeId(const std::string& _subscribeId);

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
                     * 设置<p>数据订阅实例的名称</p>
                     * @param _subscribeName <p>数据订阅实例的名称</p>
                     * 
                     */
                    void SetSubscribeName(const std::string& _subscribeName);

                    /**
                     * 判断参数 SubscribeName 是否已赋值
                     * @return SubscribeName 是否已赋值
                     * 
                     */
                    bool SubscribeNameHasBeenSet() const;

                    /**
                     * 获取<p>订阅实例发送数据的kafka topic</p>
                     * @return Topic <p>订阅实例发送数据的kafka topic</p>
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置<p>订阅实例发送数据的kafka topic</p>
                     * @param _topic <p>订阅实例发送数据的kafka topic</p>
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取<p>订阅实例的类型，目前支持 cynosdbmysql,mariadb,mongodb,mysql,percona,tdpg,tdsqlpercona(tdsqlmysql)</p>
                     * @return Product <p>订阅实例的类型，目前支持 cynosdbmysql,mariadb,mongodb,mysql,percona,tdpg,tdsqlpercona(tdsqlmysql)</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>订阅实例的类型，目前支持 cynosdbmysql,mariadb,mongodb,mysql,percona,tdpg,tdsqlpercona(tdsqlmysql)</p>
                     * @param _product <p>订阅实例的类型，目前支持 cynosdbmysql,mariadb,mongodb,mysql,percona,tdpg,tdsqlpercona(tdsqlmysql)</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取<p>订阅的数据库实例ID（如果订阅的是云数据库）如果实例不是腾讯云上的，此值为空。</p>
                     * @return InstanceId <p>订阅的数据库实例ID（如果订阅的是云数据库）如果实例不是腾讯云上的，此值为空。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>订阅的数据库实例ID（如果订阅的是云数据库）如果实例不是腾讯云上的，此值为空。</p>
                     * @param _instanceId <p>订阅的数据库实例ID（如果订阅的是云数据库）如果实例不是腾讯云上的，此值为空。</p>
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
                     * 获取<p>云数据库状态：running 运行中，isolated 已隔离，offline 已下线。如果不是云上，此值为空</p>
                     * @return InstanceStatus <p>云数据库状态：running 运行中，isolated 已隔离，offline 已下线。如果不是云上，此值为空</p>
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置<p>云数据库状态：running 运行中，isolated 已隔离，offline 已下线。如果不是云上，此值为空</p>
                     * @param _instanceStatus <p>云数据库状态：running 运行中，isolated 已隔离，offline 已下线。如果不是云上，此值为空</p>
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取<p>数据订阅生命周期状态，可能的值为：正常 normal, 隔离中 isolating, 已隔离 isolated, 下线中 offlining, 按量转包年包月中 post2PrePayIng</p>
                     * @return Status <p>数据订阅生命周期状态，可能的值为：正常 normal, 隔离中 isolating, 已隔离 isolated, 下线中 offlining, 按量转包年包月中 post2PrePayIng</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>数据订阅生命周期状态，可能的值为：正常 normal, 隔离中 isolating, 已隔离 isolated, 下线中 offlining, 按量转包年包月中 post2PrePayIng</p>
                     * @param _status <p>数据订阅生命周期状态，可能的值为：正常 normal, 隔离中 isolating, 已隔离 isolated, 下线中 offlining, 按量转包年包月中 post2PrePayIng</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>数据订阅状态，可能的值为：未启动 notStarted, 校验中 checking, 校验不通过 checkNotPass, 校验通过 checkPass, 启动中 starting, 运行中 running, 异常出错 error</p>
                     * @return SubsStatus <p>数据订阅状态，可能的值为：未启动 notStarted, 校验中 checking, 校验不通过 checkNotPass, 校验通过 checkPass, 启动中 starting, 运行中 running, 异常出错 error</p>
                     * 
                     */
                    std::string GetSubsStatus() const;

                    /**
                     * 设置<p>数据订阅状态，可能的值为：未启动 notStarted, 校验中 checking, 校验不通过 checkNotPass, 校验通过 checkPass, 启动中 starting, 运行中 running, 异常出错 error</p>
                     * @param _subsStatus <p>数据订阅状态，可能的值为：未启动 notStarted, 校验中 checking, 校验不通过 checkNotPass, 校验通过 checkPass, 启动中 starting, 运行中 running, 异常出错 error</p>
                     * 
                     */
                    void SetSubsStatus(const std::string& _subsStatus);

                    /**
                     * 判断参数 SubsStatus 是否已赋值
                     * @return SubsStatus 是否已赋值
                     * 
                     */
                    bool SubsStatusHasBeenSet() const;

                    /**
                     * 获取<p>上次修改时间，时间格式如：Y-m-d h:m:s</p>
                     * @return ModifyTime <p>上次修改时间，时间格式如：Y-m-d h:m:s</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>上次修改时间，时间格式如：Y-m-d h:m:s</p>
                     * @param _modifyTime <p>上次修改时间，时间格式如：Y-m-d h:m:s</p>
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取<p>创建时间，时间格式如：Y-m-d h:m:s</p>
                     * @return CreateTime <p>创建时间，时间格式如：Y-m-d h:m:s</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间，时间格式如：Y-m-d h:m:s</p>
                     * @param _createTime <p>创建时间，时间格式如：Y-m-d h:m:s</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>隔离时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00</p>
                     * @return IsolateTime <p>隔离时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00</p>
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置<p>隔离时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00</p>
                     * @param _isolateTime <p>隔离时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00</p>
                     * 
                     */
                    void SetIsolateTime(const std::string& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     * 
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取<p>包年包月任务的到期时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00</p>
                     * @return ExpireTime <p>包年包月任务的到期时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>包年包月任务的到期时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00</p>
                     * @param _expireTime <p>包年包月任务的到期时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>下线时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00</p>
                     * @return OfflineTime <p>下线时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00</p>
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置<p>下线时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00</p>
                     * @param _offlineTime <p>下线时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00</p>
                     * 
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     * 
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取<p>计费方式，0 - 包年包月，1 - 按量计费</p>
                     * @return PayType <p>计费方式，0 - 包年包月，1 - 按量计费</p>
                     * 
                     */
                    int64_t GetPayType() const;

                    /**
                     * 设置<p>计费方式，0 - 包年包月，1 - 按量计费</p>
                     * @param _payType <p>计费方式，0 - 包年包月，1 - 按量计费</p>
                     * 
                     */
                    void SetPayType(const int64_t& _payType);

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
                     * 设置<p>自动续费标识。只有当 PayType=0，该值才有意义。枚举值：0-不自动续费，1-自动续费</p>
                     * @param _autoRenewFlag <p>自动续费标识。只有当 PayType=0，该值才有意义。枚举值：0-不自动续费，1-自动续费</p>
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>数据订阅实例所属地域</p>
                     * @return Region <p>数据订阅实例所属地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>数据订阅实例所属地域</p>
                     * @param _region <p>数据订阅实例所属地域</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>接入方式。枚举值：extranet(公网) vpncloud(vpn接入) dcg(专线接入) ccn(云联网) cdb(云数据库) cvm(云主机自建) intranet(自研上云) vpc(私有网络vpc)</p>
                     * @return AccessType <p>接入方式。枚举值：extranet(公网) vpncloud(vpn接入) dcg(专线接入) ccn(云联网) cdb(云数据库) cvm(云主机自建) intranet(自研上云) vpc(私有网络vpc)</p>
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置<p>接入方式。枚举值：extranet(公网) vpncloud(vpn接入) dcg(专线接入) ccn(云联网) cdb(云数据库) cvm(云主机自建) intranet(自研上云) vpc(私有网络vpc)</p>
                     * @param _accessType <p>接入方式。枚举值：extranet(公网) vpncloud(vpn接入) dcg(专线接入) ccn(云联网) cdb(云数据库) cvm(云主机自建) intranet(自研上云) vpc(私有网络vpc)</p>
                     * 
                     */
                    void SetAccessType(const std::string& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取<p>数据库节点信息</p>
                     * @return Endpoints <p>数据库节点信息</p>
                     * 
                     */
                    std::vector<EndpointItem> GetEndpoints() const;

                    /**
                     * 设置<p>数据库节点信息</p>
                     * @param _endpoints <p>数据库节点信息</p>
                     * 
                     */
                    void SetEndpoints(const std::vector<EndpointItem>& _endpoints);

                    /**
                     * 判断参数 Endpoints 是否已赋值
                     * @return Endpoints 是否已赋值
                     * 
                     */
                    bool EndpointsHasBeenSet() const;

                    /**
                     * 获取<p>数据订阅版本, 当前支持kafka和kafkaPro（专业版）</p>
                     * @return SubscribeVersion <p>数据订阅版本, 当前支持kafka和kafkaPro（专业版）</p>
                     * 
                     */
                    std::string GetSubscribeVersion() const;

                    /**
                     * 设置<p>数据订阅版本, 当前支持kafka和kafkaPro（专业版）</p>
                     * @param _subscribeVersion <p>数据订阅版本, 当前支持kafka和kafkaPro（专业版）</p>
                     * 
                     */
                    void SetSubscribeVersion(const std::string& _subscribeVersion);

                    /**
                     * 判断参数 SubscribeVersion 是否已赋值
                     * @return SubscribeVersion 是否已赋值
                     * 
                     */
                    bool SubscribeVersionHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置<p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<TagItem>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>任务报错信息，如果有的话。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Errors <p>任务报错信息，如果有的话。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SubsErr> GetErrors() const;

                    /**
                     * 设置<p>任务报错信息，如果有的话。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errors <p>任务报错信息，如果有的话。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrors(const std::vector<SubsErr>& _errors);

                    /**
                     * 判断参数 Errors 是否已赋值
                     * @return Errors 是否已赋值
                     * 
                     */
                    bool ErrorsHasBeenSet() const;

                    /**
                     * 获取<p>订阅实例规格</p>
                     * @return InstanceClass <p>订阅实例规格</p>
                     * 
                     */
                    std::string GetInstanceClass() const;

                    /**
                     * 设置<p>订阅实例规格</p>
                     * @param _instanceClass <p>订阅实例规格</p>
                     * 
                     */
                    void SetInstanceClass(const std::string& _instanceClass);

                    /**
                     * 判断参数 InstanceClass 是否已赋值
                     * @return InstanceClass 是否已赋值
                     * 
                     */
                    bool InstanceClassHasBeenSet() const;

                    /**
                     * 获取<p>新版订阅消费端路由阶段</p>
                     * @return ConsumerRoutePhase <p>新版订阅消费端路由阶段</p>
                     * 
                     */
                    std::string GetConsumerRoutePhase() const;

                    /**
                     * 设置<p>新版订阅消费端路由阶段</p>
                     * @param _consumerRoutePhase <p>新版订阅消费端路由阶段</p>
                     * 
                     */
                    void SetConsumerRoutePhase(const std::string& _consumerRoutePhase);

                    /**
                     * 判断参数 ConsumerRoutePhase 是否已赋值
                     * @return ConsumerRoutePhase 是否已赋值
                     * 
                     */
                    bool ConsumerRoutePhaseHasBeenSet() const;

                private:

                    /**
                     * <p>数据订阅的实例ID</p>
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * <p>数据订阅实例的名称</p>
                     */
                    std::string m_subscribeName;
                    bool m_subscribeNameHasBeenSet;

                    /**
                     * <p>订阅实例发送数据的kafka topic</p>
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * <p>订阅实例的类型，目前支持 cynosdbmysql,mariadb,mongodb,mysql,percona,tdpg,tdsqlpercona(tdsqlmysql)</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>订阅的数据库实例ID（如果订阅的是云数据库）如果实例不是腾讯云上的，此值为空。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>云数据库状态：running 运行中，isolated 已隔离，offline 已下线。如果不是云上，此值为空</p>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>数据订阅生命周期状态，可能的值为：正常 normal, 隔离中 isolating, 已隔离 isolated, 下线中 offlining, 按量转包年包月中 post2PrePayIng</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>数据订阅状态，可能的值为：未启动 notStarted, 校验中 checking, 校验不通过 checkNotPass, 校验通过 checkPass, 启动中 starting, 运行中 running, 异常出错 error</p>
                     */
                    std::string m_subsStatus;
                    bool m_subsStatusHasBeenSet;

                    /**
                     * <p>上次修改时间，时间格式如：Y-m-d h:m:s</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>创建时间，时间格式如：Y-m-d h:m:s</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>隔离时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00</p>
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * <p>包年包月任务的到期时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>下线时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00</p>
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * <p>计费方式，0 - 包年包月，1 - 按量计费</p>
                     */
                    int64_t m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * <p>自动续费标识。只有当 PayType=0，该值才有意义。枚举值：0-不自动续费，1-自动续费</p>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>数据订阅实例所属地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>接入方式。枚举值：extranet(公网) vpncloud(vpn接入) dcg(专线接入) ccn(云联网) cdb(云数据库) cvm(云主机自建) intranet(自研上云) vpc(私有网络vpc)</p>
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * <p>数据库节点信息</p>
                     */
                    std::vector<EndpointItem> m_endpoints;
                    bool m_endpointsHasBeenSet;

                    /**
                     * <p>数据订阅版本, 当前支持kafka和kafkaPro（专业版）</p>
                     */
                    std::string m_subscribeVersion;
                    bool m_subscribeVersionHasBeenSet;

                    /**
                     * <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>任务报错信息，如果有的话。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SubsErr> m_errors;
                    bool m_errorsHasBeenSet;

                    /**
                     * <p>订阅实例规格</p>
                     */
                    std::string m_instanceClass;
                    bool m_instanceClassHasBeenSet;

                    /**
                     * <p>新版订阅消费端路由阶段</p>
                     */
                    std::string m_consumerRoutePhase;
                    bool m_consumerRoutePhaseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_SUBSCRIBEINFO_H_
