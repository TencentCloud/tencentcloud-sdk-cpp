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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_SUBSCRIBEINFO_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_SUBSCRIBEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/TagItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
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
                     * 获取数据订阅的实例ID
                     * @return SubscribeId 数据订阅的实例ID
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置数据订阅的实例ID
                     * @param _subscribeId 数据订阅的实例ID
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
                     * 获取数据订阅实例的名称
                     * @return SubscribeName 数据订阅实例的名称
                     * 
                     */
                    std::string GetSubscribeName() const;

                    /**
                     * 设置数据订阅实例的名称
                     * @param _subscribeName 数据订阅实例的名称
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
                     * 获取数据订阅实例绑定的通道ID。kafka版订阅就是kafka topic
                     * @return ChannelId 数据订阅实例绑定的通道ID。kafka版订阅就是kafka topic
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置数据订阅实例绑定的通道ID。kafka版订阅就是kafka topic
                     * @param _channelId 数据订阅实例绑定的通道ID。kafka版订阅就是kafka topic
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取订阅实例的类型，目前支持 cynosdbmysql,mariadb,mongodb,mysql,percona,tdpg,tdsqlpercona(tdsqlmysql)
                     * @return Product 订阅实例的类型，目前支持 cynosdbmysql,mariadb,mongodb,mysql,percona,tdpg,tdsqlpercona(tdsqlmysql)
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置订阅实例的类型，目前支持 cynosdbmysql,mariadb,mongodb,mysql,percona,tdpg,tdsqlpercona(tdsqlmysql)
                     * @param _product 订阅实例的类型，目前支持 cynosdbmysql,mariadb,mongodb,mysql,percona,tdpg,tdsqlpercona(tdsqlmysql)
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
                     * 获取数据订阅实例绑定的数据库实例ID
                     * @return InstanceId 数据订阅实例绑定的数据库实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置数据订阅实例绑定的数据库实例ID
                     * @param _instanceId 数据订阅实例绑定的数据库实例ID
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
                     * 获取云数据库状态：running 运行中，isolated 已隔离，offline 已下线。如果不是云上，此值为空
                     * @return InstanceStatus 云数据库状态：running 运行中，isolated 已隔离，offline 已下线。如果不是云上，此值为空
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置云数据库状态：running 运行中，isolated 已隔离，offline 已下线。如果不是云上，此值为空
                     * @param _instanceStatus 云数据库状态：running 运行中，isolated 已隔离，offline 已下线。如果不是云上，此值为空
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
                     * 获取数据订阅状态，可能的值为：未启动 notStarted, 校验中 checking, 校验不通过 checkNotPass, 校验通过 checkPass, 启动中 starting, 运行中 running, 异常出错 error
                     * @return SubsStatus 数据订阅状态，可能的值为：未启动 notStarted, 校验中 checking, 校验不通过 checkNotPass, 校验通过 checkPass, 启动中 starting, 运行中 running, 异常出错 error
                     * 
                     */
                    std::string GetSubsStatus() const;

                    /**
                     * 设置数据订阅状态，可能的值为：未启动 notStarted, 校验中 checking, 校验不通过 checkNotPass, 校验通过 checkPass, 启动中 starting, 运行中 running, 异常出错 error
                     * @param _subsStatus 数据订阅状态，可能的值为：未启动 notStarted, 校验中 checking, 校验不通过 checkNotPass, 校验通过 checkPass, 启动中 starting, 运行中 running, 异常出错 error
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
                     * 获取上次修改时间，时间格式如：Y-m-d h:m:s
                     * @return ModifyTime 上次修改时间，时间格式如：Y-m-d h:m:s
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置上次修改时间，时间格式如：Y-m-d h:m:s
                     * @param _modifyTime 上次修改时间，时间格式如：Y-m-d h:m:s
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取隔离时间，时间格式如：Y-m-d h:m:s
                     * @return IsolateTime 隔离时间，时间格式如：Y-m-d h:m:s
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置隔离时间，时间格式如：Y-m-d h:m:s
                     * @param _isolateTime 隔离时间，时间格式如：Y-m-d h:m:s
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
                     * 获取包年包月任务的到期时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00
                     * @return ExpireTime 包年包月任务的到期时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置包年包月任务的到期时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00
                     * @param _expireTime 包年包月任务的到期时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00
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
                     * 获取下线时间
                     * @return OfflineTime 下线时间
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置下线时间
                     * @param _offlineTime 下线时间
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
                     * 获取最近一次修改的消费时间起点，如果从未修改则为零值
                     * @return ConsumeStartTime 最近一次修改的消费时间起点，如果从未修改则为零值
                     * 
                     */
                    std::string GetConsumeStartTime() const;

                    /**
                     * 设置最近一次修改的消费时间起点，如果从未修改则为零值
                     * @param _consumeStartTime 最近一次修改的消费时间起点，如果从未修改则为零值
                     * 
                     */
                    void SetConsumeStartTime(const std::string& _consumeStartTime);

                    /**
                     * 判断参数 ConsumeStartTime 是否已赋值
                     * @return ConsumeStartTime 是否已赋值
                     * 
                     */
                    bool ConsumeStartTimeHasBeenSet() const;

                    /**
                     * 获取自动续费标识。只有当 PayType=0，该值才有意义。枚举值：0-不自动续费，1-自动续费
                     * @return AutoRenewFlag 自动续费标识。只有当 PayType=0，该值才有意义。枚举值：0-不自动续费，1-自动续费
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标识。只有当 PayType=0，该值才有意义。枚举值：0-不自动续费，1-自动续费
                     * @param _autoRenewFlag 自动续费标识。只有当 PayType=0，该值才有意义。枚举值：0-不自动续费，1-自动续费
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
                     * 获取数据订阅实例所属地域
                     * @return Region 数据订阅实例所属地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置数据订阅实例所属地域
                     * @param _region 数据订阅实例所属地域
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
                     * 获取计费方式，0 - 包年包月，1 - 按量计费
                     * @return PayType 计费方式，0 - 包年包月，1 - 按量计费
                     * 
                     */
                    int64_t GetPayType() const;

                    /**
                     * 设置计费方式，0 - 包年包月，1 - 按量计费
                     * @param _payType 计费方式，0 - 包年包月，1 - 按量计费
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
                     * 获取旧版订阅通道的vip
                     * @return Vip 旧版订阅通道的vip
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置旧版订阅通道的vip
                     * @param _vip 旧版订阅通道的vip
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取数据订阅实例的Vport
                     * @return Vport 数据订阅实例的Vport
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置数据订阅实例的Vport
                     * @param _vport 数据订阅实例的Vport
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取数据订阅实例Vip所在VPC的唯一ID
                     * @return UniqVpcId 数据订阅实例Vip所在VPC的唯一ID
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置数据订阅实例Vip所在VPC的唯一ID
                     * @param _uniqVpcId 数据订阅实例Vip所在VPC的唯一ID
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取数据订阅实例Vip所在子网的唯一ID
                     * @return UniqSubnetId 数据订阅实例Vip所在子网的唯一ID
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置数据订阅实例Vip所在子网的唯一ID
                     * @param _uniqSubnetId 数据订阅实例Vip所在子网的唯一ID
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取数据订阅生命周期状态，可能的值为：正常 normal, 隔离中 isolating, 已隔离 isolated, 下线中 offlining, 按量转包年包月中 post2PrePayIng
                     * @return Status 数据订阅生命周期状态，可能的值为：正常 normal, 隔离中 isolating, 已隔离 isolated, 下线中 offlining, 按量转包年包月中 post2PrePayIng
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置数据订阅生命周期状态，可能的值为：正常 normal, 隔离中 isolating, 已隔离 isolated, 下线中 offlining, 按量转包年包月中 post2PrePayIng
                     * @param _status 数据订阅生命周期状态，可能的值为：正常 normal, 隔离中 isolating, 已隔离 isolated, 下线中 offlining, 按量转包年包月中 post2PrePayIng
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
                     * 获取SDK最后一条确认消息的时间戳，如果SDK一直消费，也可以作为SDK当前消费时间点
                     * @return SdkConsumedTime SDK最后一条确认消息的时间戳，如果SDK一直消费，也可以作为SDK当前消费时间点
                     * 
                     */
                    std::string GetSdkConsumedTime() const;

                    /**
                     * 设置SDK最后一条确认消息的时间戳，如果SDK一直消费，也可以作为SDK当前消费时间点
                     * @param _sdkConsumedTime SDK最后一条确认消息的时间戳，如果SDK一直消费，也可以作为SDK当前消费时间点
                     * 
                     */
                    void SetSdkConsumedTime(const std::string& _sdkConsumedTime);

                    /**
                     * 判断参数 SdkConsumedTime 是否已赋值
                     * @return SdkConsumedTime 是否已赋值
                     * 
                     */
                    bool SdkConsumedTimeHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签
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
                     * 获取订阅实例版本；txdts-旧版数据订阅,kafka-kafka版本数据订阅
                     * @return SubscribeVersion 订阅实例版本；txdts-旧版数据订阅,kafka-kafka版本数据订阅
                     * 
                     */
                    std::string GetSubscribeVersion() const;

                    /**
                     * 设置订阅实例版本；txdts-旧版数据订阅,kafka-kafka版本数据订阅
                     * @param _subscribeVersion 订阅实例版本；txdts-旧版数据订阅,kafka-kafka版本数据订阅
                     * 
                     */
                    void SetSubscribeVersion(const std::string& _subscribeVersion);

                    /**
                     * 判断参数 SubscribeVersion 是否已赋值
                     * @return SubscribeVersion 是否已赋值
                     * 
                     */
                    bool SubscribeVersionHasBeenSet() const;

                private:

                    /**
                     * 数据订阅的实例ID
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * 数据订阅实例的名称
                     */
                    std::string m_subscribeName;
                    bool m_subscribeNameHasBeenSet;

                    /**
                     * 数据订阅实例绑定的通道ID。kafka版订阅就是kafka topic
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 订阅实例的类型，目前支持 cynosdbmysql,mariadb,mongodb,mysql,percona,tdpg,tdsqlpercona(tdsqlmysql)
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 数据订阅实例绑定的数据库实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 云数据库状态：running 运行中，isolated 已隔离，offline 已下线。如果不是云上，此值为空
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 数据订阅状态，可能的值为：未启动 notStarted, 校验中 checking, 校验不通过 checkNotPass, 校验通过 checkPass, 启动中 starting, 运行中 running, 异常出错 error
                     */
                    std::string m_subsStatus;
                    bool m_subsStatusHasBeenSet;

                    /**
                     * 上次修改时间，时间格式如：Y-m-d h:m:s
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 隔离时间，时间格式如：Y-m-d h:m:s
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * 包年包月任务的到期时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 下线时间
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * 最近一次修改的消费时间起点，如果从未修改则为零值
                     */
                    std::string m_consumeStartTime;
                    bool m_consumeStartTimeHasBeenSet;

                    /**
                     * 自动续费标识。只有当 PayType=0，该值才有意义。枚举值：0-不自动续费，1-自动续费
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 数据订阅实例所属地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 计费方式，0 - 包年包月，1 - 按量计费
                     */
                    int64_t m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * 旧版订阅通道的vip
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 数据订阅实例的Vport
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 数据订阅实例Vip所在VPC的唯一ID
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 数据订阅实例Vip所在子网的唯一ID
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * 数据订阅生命周期状态，可能的值为：正常 normal, 隔离中 isolating, 已隔离 isolated, 下线中 offlining, 按量转包年包月中 post2PrePayIng
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * SDK最后一条确认消息的时间戳，如果SDK一直消费，也可以作为SDK当前消费时间点
                     */
                    std::string m_sdkConsumedTime;
                    bool m_sdkConsumedTimeHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 订阅实例版本；txdts-旧版数据订阅,kafka-kafka版本数据订阅
                     */
                    std::string m_subscribeVersion;
                    bool m_subscribeVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_SUBSCRIBEINFO_H_
