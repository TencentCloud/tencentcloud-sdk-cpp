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
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置数据订阅的实例ID
                     * @param SubscribeId 数据订阅的实例ID
                     */
                    void SetSubscribeId(const std::string& _subscribeId);

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取数据订阅实例的名称
                     * @return SubscribeName 数据订阅实例的名称
                     */
                    std::string GetSubscribeName() const;

                    /**
                     * 设置数据订阅实例的名称
                     * @param SubscribeName 数据订阅实例的名称
                     */
                    void SetSubscribeName(const std::string& _subscribeName);

                    /**
                     * 判断参数 SubscribeName 是否已赋值
                     * @return SubscribeName 是否已赋值
                     */
                    bool SubscribeNameHasBeenSet() const;

                    /**
                     * 获取数据订阅实例绑定的通道ID
                     * @return ChannelId 数据订阅实例绑定的通道ID
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置数据订阅实例绑定的通道ID
                     * @param ChannelId 数据订阅实例绑定的通道ID
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取数据订阅绑定实例对应的产品名称
                     * @return Product 数据订阅绑定实例对应的产品名称
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置数据订阅绑定实例对应的产品名称
                     * @param Product 数据订阅绑定实例对应的产品名称
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取数据订阅实例绑定的数据库实例ID
                     * @return InstanceId 数据订阅实例绑定的数据库实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置数据订阅实例绑定的数据库实例ID
                     * @param InstanceId 数据订阅实例绑定的数据库实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取数据订阅实例绑定的数据库实例状态
                     * @return InstanceStatus 数据订阅实例绑定的数据库实例状态
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置数据订阅实例绑定的数据库实例状态
                     * @param InstanceStatus 数据订阅实例绑定的数据库实例状态
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取数据订阅实例的配置状态，unconfigure - 未配置， configuring - 配置中，configured - 已配置
                     * @return SubsStatus 数据订阅实例的配置状态，unconfigure - 未配置， configuring - 配置中，configured - 已配置
                     */
                    std::string GetSubsStatus() const;

                    /**
                     * 设置数据订阅实例的配置状态，unconfigure - 未配置， configuring - 配置中，configured - 已配置
                     * @param SubsStatus 数据订阅实例的配置状态，unconfigure - 未配置， configuring - 配置中，configured - 已配置
                     */
                    void SetSubsStatus(const std::string& _subsStatus);

                    /**
                     * 判断参数 SubsStatus 是否已赋值
                     * @return SubsStatus 是否已赋值
                     */
                    bool SubsStatusHasBeenSet() const;

                    /**
                     * 获取上次修改时间
                     * @return ModifyTime 上次修改时间
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置上次修改时间
                     * @param ModifyTime 上次修改时间
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取隔离时间
                     * @return IsolateTime 隔离时间
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置隔离时间
                     * @param IsolateTime 隔离时间
                     */
                    void SetIsolateTime(const std::string& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取到期时间
                     * @return ExpireTime 到期时间
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置到期时间
                     * @param ExpireTime 到期时间
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取下线时间
                     * @return OfflineTime 下线时间
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置下线时间
                     * @param OfflineTime 下线时间
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取最近一次修改的消费时间起点，如果从未修改则为零值
                     * @return ConsumeStartTime 最近一次修改的消费时间起点，如果从未修改则为零值
                     */
                    std::string GetConsumeStartTime() const;

                    /**
                     * 设置最近一次修改的消费时间起点，如果从未修改则为零值
                     * @param ConsumeStartTime 最近一次修改的消费时间起点，如果从未修改则为零值
                     */
                    void SetConsumeStartTime(const std::string& _consumeStartTime);

                    /**
                     * 判断参数 ConsumeStartTime 是否已赋值
                     * @return ConsumeStartTime 是否已赋值
                     */
                    bool ConsumeStartTimeHasBeenSet() const;

                    /**
                     * 获取数据订阅实例所属地域
                     * @return Region 数据订阅实例所属地域
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置数据订阅实例所属地域
                     * @param Region 数据订阅实例所属地域
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取计费方式，0 - 包年包月，1 - 按量计费
                     * @return PayType 计费方式，0 - 包年包月，1 - 按量计费
                     */
                    int64_t GetPayType() const;

                    /**
                     * 设置计费方式，0 - 包年包月，1 - 按量计费
                     * @param PayType 计费方式，0 - 包年包月，1 - 按量计费
                     */
                    void SetPayType(const int64_t& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取数据订阅实例的Vip
                     * @return Vip 数据订阅实例的Vip
                     */
                    std::string GetVip() const;

                    /**
                     * 设置数据订阅实例的Vip
                     * @param Vip 数据订阅实例的Vip
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取数据订阅实例的Vport
                     * @return Vport 数据订阅实例的Vport
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置数据订阅实例的Vport
                     * @param Vport 数据订阅实例的Vport
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取数据订阅实例Vip所在VPC的唯一ID
                     * @return UniqVpcId 数据订阅实例Vip所在VPC的唯一ID
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置数据订阅实例Vip所在VPC的唯一ID
                     * @param UniqVpcId 数据订阅实例Vip所在VPC的唯一ID
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取数据订阅实例Vip所在子网的唯一ID
                     * @return UniqSubnetId 数据订阅实例Vip所在子网的唯一ID
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置数据订阅实例Vip所在子网的唯一ID
                     * @param UniqSubnetId 数据订阅实例Vip所在子网的唯一ID
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取数据订阅实例的状态，creating - 创建中，normal - 正常运行，isolating - 隔离中，isolated - 已隔离，offlining - 下线中，offline - 已下线
                     * @return Status 数据订阅实例的状态，creating - 创建中，normal - 正常运行，isolating - 隔离中，isolated - 已隔离，offlining - 下线中，offline - 已下线
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置数据订阅实例的状态，creating - 创建中，normal - 正常运行，isolating - 隔离中，isolated - 已隔离，offlining - 下线中，offline - 已下线
                     * @param Status 数据订阅实例的状态，creating - 创建中，normal - 正常运行，isolating - 隔离中，isolated - 已隔离，offlining - 下线中，offline - 已下线
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取SDK最后一条确认消息的时间戳，如果SDK一直消费，也可以作为SDK当前消费时间点
                     * @return SdkConsumedTime SDK最后一条确认消息的时间戳，如果SDK一直消费，也可以作为SDK当前消费时间点
                     */
                    std::string GetSdkConsumedTime() const;

                    /**
                     * 设置SDK最后一条确认消息的时间戳，如果SDK一直消费，也可以作为SDK当前消费时间点
                     * @param SdkConsumedTime SDK最后一条确认消息的时间戳，如果SDK一直消费，也可以作为SDK当前消费时间点
                     */
                    void SetSdkConsumedTime(const std::string& _sdkConsumedTime);

                    /**
                     * 判断参数 SdkConsumedTime 是否已赋值
                     * @return SdkConsumedTime 是否已赋值
                     */
                    bool SdkConsumedTimeHasBeenSet() const;

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
                     * 数据订阅实例绑定的通道ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 数据订阅绑定实例对应的产品名称
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 数据订阅实例绑定的数据库实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据订阅实例绑定的数据库实例状态
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 数据订阅实例的配置状态，unconfigure - 未配置， configuring - 配置中，configured - 已配置
                     */
                    std::string m_subsStatus;
                    bool m_subsStatusHasBeenSet;

                    /**
                     * 上次修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 隔离时间
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * 到期时间
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
                     * 数据订阅实例的Vip
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
                     * 数据订阅实例的状态，creating - 创建中，normal - 正常运行，isolating - 隔离中，isolated - 已隔离，offlining - 下线中，offline - 已下线
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * SDK最后一条确认消息的时间戳，如果SDK一直消费，也可以作为SDK当前消费时间点
                     */
                    std::string m_sdkConsumedTime;
                    bool m_sdkConsumedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_SUBSCRIBEINFO_H_
