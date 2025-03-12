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
                     * 获取订阅实例发送数据的kafka topic
                     * @return Topic 订阅实例发送数据的kafka topic
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置订阅实例发送数据的kafka topic
                     * @param _topic 订阅实例发送数据的kafka topic
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
                     * 获取订阅的数据库实例ID（如果订阅的是云数据库）如果实例不是腾讯云上的，此值为空。
                     * @return InstanceId 订阅的数据库实例ID（如果订阅的是云数据库）如果实例不是腾讯云上的，此值为空。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置订阅的数据库实例ID（如果订阅的是云数据库）如果实例不是腾讯云上的，此值为空。
                     * @param _instanceId 订阅的数据库实例ID（如果订阅的是云数据库）如果实例不是腾讯云上的，此值为空。
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
                     * 获取创建时间，时间格式如：Y-m-d h:m:s
                     * @return CreateTime 创建时间，时间格式如：Y-m-d h:m:s
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间，时间格式如：Y-m-d h:m:s
                     * @param _createTime 创建时间，时间格式如：Y-m-d h:m:s
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
                     * 获取隔离时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00
                     * @return IsolateTime 隔离时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置隔离时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00
                     * @param _isolateTime 隔离时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00
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
                     * 获取下线时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00
                     * @return OfflineTime 下线时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置下线时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00
                     * @param _offlineTime 下线时间，时间格式如：Y-m-d h:m:s。默认：0000-00-00 00:00:00
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
                     * 获取接入方式。枚举值：extranet(公网) vpncloud(vpn接入) dcg(专线接入) ccn(云联网) cdb(云数据库) cvm(云主机自建) intranet(自研上云) vpc(私有网络vpc)
                     * @return AccessType 接入方式。枚举值：extranet(公网) vpncloud(vpn接入) dcg(专线接入) ccn(云联网) cdb(云数据库) cvm(云主机自建) intranet(自研上云) vpc(私有网络vpc)
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置接入方式。枚举值：extranet(公网) vpncloud(vpn接入) dcg(专线接入) ccn(云联网) cdb(云数据库) cvm(云主机自建) intranet(自研上云) vpc(私有网络vpc)
                     * @param _accessType 接入方式。枚举值：extranet(公网) vpncloud(vpn接入) dcg(专线接入) ccn(云联网) cdb(云数据库) cvm(云主机自建) intranet(自研上云) vpc(私有网络vpc)
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
                     * 获取数据库节点信息
                     * @return Endpoints 数据库节点信息
                     * 
                     */
                    std::vector<EndpointItem> GetEndpoints() const;

                    /**
                     * 设置数据库节点信息
                     * @param _endpoints 数据库节点信息
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
                     * 获取数据订阅版本, 当前只支持 kafka 版本。
                     * @return SubscribeVersion 数据订阅版本, 当前只支持 kafka 版本。
                     * 
                     */
                    std::string GetSubscribeVersion() const;

                    /**
                     * 设置数据订阅版本, 当前只支持 kafka 版本。
                     * @param _subscribeVersion 数据订阅版本, 当前只支持 kafka 版本。
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
                     * 获取任务报错信息，如果有的话。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Errors 任务报错信息，如果有的话。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SubsErr> GetErrors() const;

                    /**
                     * 设置任务报错信息，如果有的话。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errors 任务报错信息，如果有的话。
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
                     * 订阅实例发送数据的kafka topic
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 订阅实例的类型，目前支持 cynosdbmysql,mariadb,mongodb,mysql,percona,tdpg,tdsqlpercona(tdsqlmysql)
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 订阅的数据库实例ID（如果订阅的是云数据库）如果实例不是腾讯云上的，此值为空。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 云数据库状态：running 运行中，isolated 已隔离，offline 已下线。如果不是云上，此值为空
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 数据订阅生命周期状态，可能的值为：正常 normal, 隔离中 isolating, 已隔离 isolated, 下线中 offlining, 按量转包年包月中 post2PrePayIng
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

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
                     * 计费方式，0 - 包年包月，1 - 按量计费
                     */
                    int64_t m_payType;
                    bool m_payTypeHasBeenSet;

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
                     * 接入方式。枚举值：extranet(公网) vpncloud(vpn接入) dcg(专线接入) ccn(云联网) cdb(云数据库) cvm(云主机自建) intranet(自研上云) vpc(私有网络vpc)
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 数据库节点信息
                     */
                    std::vector<EndpointItem> m_endpoints;
                    bool m_endpointsHasBeenSet;

                    /**
                     * 数据订阅版本, 当前只支持 kafka 版本。
                     */
                    std::string m_subscribeVersion;
                    bool m_subscribeVersionHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 任务报错信息，如果有的话。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SubsErr> m_errors;
                    bool m_errorsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_SUBSCRIBEINFO_H_
