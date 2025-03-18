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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBESUBSCRIBECONFRESPONSE_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBESUBSCRIBECONFRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/SubscribeObject.h>
#include <tencentcloud/dts/v20180330/model/TagItem.h>
#include <tencentcloud/dts/v20180330/model/SubsErr.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * DescribeSubscribeConf返回参数结构体
                */
                class DescribeSubscribeConfResponse : public AbstractModel
                {
                public:
                    DescribeSubscribeConfResponse();
                    ~DescribeSubscribeConfResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取订阅实例ID
                     * @return SubscribeId 订阅实例ID
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
                     * 获取订阅实例名称
                     * @return SubscribeName 订阅实例名称
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
                     * 获取订阅通道
                     * @return ChannelId 订阅通道
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取订阅数据库类型
                     * @return Product 订阅数据库类型
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
                     * 获取被订阅的实例
                     * @return InstanceId 被订阅的实例
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
                     * 获取被订阅的实例的状态，可能的值有running,offline,isolate
                     * @return InstanceStatus 被订阅的实例的状态，可能的值有running,offline,isolate
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
                     * 获取订阅实例状态，可能的值有unconfigure-未配置，configuring-配置中，configured-已配置
                     * @return SubsStatus 订阅实例状态，可能的值有unconfigure-未配置，configuring-配置中，configured-已配置
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
                     * 获取订阅实例生命周期状态，可能的值有：normal-正常，isolating-隔离中，isolated-已隔离，offlining-下线中
                     * @return Status 订阅实例生命周期状态，可能的值有：normal-正常，isolating-隔离中，isolated-已隔离，offlining-下线中
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
                     * 获取订阅实例创建时间
                     * @return CreateTime 订阅实例创建时间
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
                     * 获取订阅实例被隔离时间
                     * @return IsolateTime 订阅实例被隔离时间
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
                     * 获取订阅实例到期时间
                     * @return ExpireTime 订阅实例到期时间
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
                     * 获取订阅实例下线时间
                     * @return OfflineTime 订阅实例下线时间
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
                     * 获取订阅实例消费时间起点。
                     * @return ConsumeStartTime 订阅实例消费时间起点。
                     * 
                     */
                    std::string GetConsumeStartTime() const;

                    /**
                     * 判断参数 ConsumeStartTime 是否已赋值
                     * @return ConsumeStartTime 是否已赋值
                     * 
                     */
                    bool ConsumeStartTimeHasBeenSet() const;

                    /**
                     * 获取订阅实例计费类型，1-小时计费，0-包年包月
                     * @return PayType 订阅实例计费类型，1-小时计费，0-包年包月
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
                     * 获取订阅通道Vip
                     * @return Vip 订阅通道Vip
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取订阅通道Port
                     * @return Vport 订阅通道Port
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取订阅通道所在VpcId
                     * @return UniqVpcId 订阅通道所在VpcId
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取订阅通道所在SubnetId
                     * @return UniqSubnetId 订阅通道所在SubnetId
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取当前SDK消费时间位点
                     * @return SdkConsumedTime 当前SDK消费时间位点
                     * 
                     */
                    std::string GetSdkConsumedTime() const;

                    /**
                     * 判断参数 SdkConsumedTime 是否已赋值
                     * @return SdkConsumedTime 是否已赋值
                     * 
                     */
                    bool SdkConsumedTimeHasBeenSet() const;

                    /**
                     * 获取订阅SDK IP地址
                     * @return SdkHost 订阅SDK IP地址
                     * 
                     */
                    std::string GetSdkHost() const;

                    /**
                     * 判断参数 SdkHost 是否已赋值
                     * @return SdkHost 是否已赋值
                     * 
                     */
                    bool SdkHostHasBeenSet() const;

                    /**
                     * 获取订阅对象类型0-全实例订阅，1-DDL数据订阅，2-DML结构订阅，3-DDL数据订阅+DML结构订阅
                     * @return SubscribeObjectType 订阅对象类型0-全实例订阅，1-DDL数据订阅，2-DML结构订阅，3-DDL数据订阅+DML结构订阅
                     * 
                     */
                    int64_t GetSubscribeObjectType() const;

                    /**
                     * 判断参数 SubscribeObjectType 是否已赋值
                     * @return SubscribeObjectType 是否已赋值
                     * 
                     */
                    bool SubscribeObjectTypeHasBeenSet() const;

                    /**
                     * 获取订阅对象，当SubscribeObjectType 为0时，此字段为空数组
                     * @return SubscribeObjects 订阅对象，当SubscribeObjectType 为0时，此字段为空数组
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
                     * 获取修改时间
                     * @return ModifyTime 修改时间
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
                     * 获取地域
                     * @return Region 地域
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
                     * 获取订阅实例的标签
                     * @return Tags 订阅实例的标签
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
                     * 获取自动续费标识,0-不自动续费，1-自动续费
                     * @return AutoRenewFlag 自动续费标识,0-不自动续费，1-自动续费
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
                     * 获取数据订阅版本。老版订阅填txdts，kafka版填kafka
                     * @return SubscribeVersion 数据订阅版本。老版订阅填txdts，kafka版填kafka
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
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Errors 错误信息
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

                private:

                    /**
                     * 订阅实例ID
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * 订阅实例名称
                     */
                    std::string m_subscribeName;
                    bool m_subscribeNameHasBeenSet;

                    /**
                     * 订阅通道
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 订阅数据库类型
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 被订阅的实例
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 被订阅的实例的状态，可能的值有running,offline,isolate
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 订阅实例状态，可能的值有unconfigure-未配置，configuring-配置中，configured-已配置
                     */
                    std::string m_subsStatus;
                    bool m_subsStatusHasBeenSet;

                    /**
                     * 订阅实例生命周期状态，可能的值有：normal-正常，isolating-隔离中，isolated-已隔离，offlining-下线中
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 订阅实例创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 订阅实例被隔离时间
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * 订阅实例到期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 订阅实例下线时间
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * 订阅实例消费时间起点。
                     */
                    std::string m_consumeStartTime;
                    bool m_consumeStartTimeHasBeenSet;

                    /**
                     * 订阅实例计费类型，1-小时计费，0-包年包月
                     */
                    int64_t m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * 订阅通道Vip
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 订阅通道Port
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 订阅通道所在VpcId
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 订阅通道所在SubnetId
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * 当前SDK消费时间位点
                     */
                    std::string m_sdkConsumedTime;
                    bool m_sdkConsumedTimeHasBeenSet;

                    /**
                     * 订阅SDK IP地址
                     */
                    std::string m_sdkHost;
                    bool m_sdkHostHasBeenSet;

                    /**
                     * 订阅对象类型0-全实例订阅，1-DDL数据订阅，2-DML结构订阅，3-DDL数据订阅+DML结构订阅
                     */
                    int64_t m_subscribeObjectType;
                    bool m_subscribeObjectTypeHasBeenSet;

                    /**
                     * 订阅对象，当SubscribeObjectType 为0时，此字段为空数组
                     */
                    std::vector<SubscribeObject> m_subscribeObjects;
                    bool m_subscribeObjectsHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 订阅实例的标签
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 自动续费标识,0-不自动续费，1-自动续费
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 数据订阅版本。老版订阅填txdts，kafka版填kafka
                     */
                    std::string m_subscribeVersion;
                    bool m_subscribeVersionHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SubsErr> m_errors;
                    bool m_errorsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBESUBSCRIBECONFRESPONSE_H_
