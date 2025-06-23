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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ROGROUP_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ROGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RoInstanceInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 只读组参数
                */
                class RoGroup : public AbstractModel
                {
                public:
                    RoGroup();
                    ~RoGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取只读组模式，可选值为：alone-系统自动分配只读组；allinone-新建只读组；join-使用现有只读组。
                     * @return RoGroupMode 只读组模式，可选值为：alone-系统自动分配只读组；allinone-新建只读组；join-使用现有只读组。
                     * 
                     */
                    std::string GetRoGroupMode() const;

                    /**
                     * 设置只读组模式，可选值为：alone-系统自动分配只读组；allinone-新建只读组；join-使用现有只读组。
                     * @param _roGroupMode 只读组模式，可选值为：alone-系统自动分配只读组；allinone-新建只读组；join-使用现有只读组。
                     * 
                     */
                    void SetRoGroupMode(const std::string& _roGroupMode);

                    /**
                     * 判断参数 RoGroupMode 是否已赋值
                     * @return RoGroupMode 是否已赋值
                     * 
                     */
                    bool RoGroupModeHasBeenSet() const;

                    /**
                     * 获取只读组 ID。
说明：若此数据结构在购买实例操作中被使用，则当只读组模式选择 join 时，此项为必填。
                     * @return RoGroupId 只读组 ID。
说明：若此数据结构在购买实例操作中被使用，则当只读组模式选择 join 时，此项为必填。
                     * 
                     */
                    std::string GetRoGroupId() const;

                    /**
                     * 设置只读组 ID。
说明：若此数据结构在购买实例操作中被使用，则当只读组模式选择 join 时，此项为必填。
                     * @param _roGroupId 只读组 ID。
说明：若此数据结构在购买实例操作中被使用，则当只读组模式选择 join 时，此项为必填。
                     * 
                     */
                    void SetRoGroupId(const std::string& _roGroupId);

                    /**
                     * 判断参数 RoGroupId 是否已赋值
                     * @return RoGroupId 是否已赋值
                     * 
                     */
                    bool RoGroupIdHasBeenSet() const;

                    /**
                     * 获取只读组名称。
                     * @return RoGroupName 只读组名称。
                     * 
                     */
                    std::string GetRoGroupName() const;

                    /**
                     * 设置只读组名称。
                     * @param _roGroupName 只读组名称。
                     * 
                     */
                    void SetRoGroupName(const std::string& _roGroupName);

                    /**
                     * 判断参数 RoGroupName 是否已赋值
                     * @return RoGroupName 是否已赋值
                     * 
                     */
                    bool RoGroupNameHasBeenSet() const;

                    /**
                     * 获取是否启用延迟超限剔除功能，启用该功能后，只读实例与主实例的延迟超过延迟阈值，只读实例将被隔离。可选值：1-启用；0-不启用。
                     * @return RoOfflineDelay 是否启用延迟超限剔除功能，启用该功能后，只读实例与主实例的延迟超过延迟阈值，只读实例将被隔离。可选值：1-启用；0-不启用。
                     * 
                     */
                    int64_t GetRoOfflineDelay() const;

                    /**
                     * 设置是否启用延迟超限剔除功能，启用该功能后，只读实例与主实例的延迟超过延迟阈值，只读实例将被隔离。可选值：1-启用；0-不启用。
                     * @param _roOfflineDelay 是否启用延迟超限剔除功能，启用该功能后，只读实例与主实例的延迟超过延迟阈值，只读实例将被隔离。可选值：1-启用；0-不启用。
                     * 
                     */
                    void SetRoOfflineDelay(const int64_t& _roOfflineDelay);

                    /**
                     * 判断参数 RoOfflineDelay 是否已赋值
                     * @return RoOfflineDelay 是否已赋值
                     * 
                     */
                    bool RoOfflineDelayHasBeenSet() const;

                    /**
                     * 获取延迟阈值。单位：秒。值范围：1-10000，整数。
                     * @return RoMaxDelayTime 延迟阈值。单位：秒。值范围：1-10000，整数。
                     * 
                     */
                    int64_t GetRoMaxDelayTime() const;

                    /**
                     * 设置延迟阈值。单位：秒。值范围：1-10000，整数。
                     * @param _roMaxDelayTime 延迟阈值。单位：秒。值范围：1-10000，整数。
                     * 
                     */
                    void SetRoMaxDelayTime(const int64_t& _roMaxDelayTime);

                    /**
                     * 判断参数 RoMaxDelayTime 是否已赋值
                     * @return RoMaxDelayTime 是否已赋值
                     * 
                     */
                    bool RoMaxDelayTimeHasBeenSet() const;

                    /**
                     * 获取最少实例保留个数，若购买只读实例数量小于设置数量将不做剔除。
                     * @return MinRoInGroup 最少实例保留个数，若购买只读实例数量小于设置数量将不做剔除。
                     * 
                     */
                    int64_t GetMinRoInGroup() const;

                    /**
                     * 设置最少实例保留个数，若购买只读实例数量小于设置数量将不做剔除。
                     * @param _minRoInGroup 最少实例保留个数，若购买只读实例数量小于设置数量将不做剔除。
                     * 
                     */
                    void SetMinRoInGroup(const int64_t& _minRoInGroup);

                    /**
                     * 判断参数 MinRoInGroup 是否已赋值
                     * @return MinRoInGroup 是否已赋值
                     * 
                     */
                    bool MinRoInGroupHasBeenSet() const;

                    /**
                     * 获取读写权重分配模式，可选值：system-系统自动分配；custom-自定义。
                     * @return WeightMode 读写权重分配模式，可选值：system-系统自动分配；custom-自定义。
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置读写权重分配模式，可选值：system-系统自动分配；custom-自定义。
                     * @param _weightMode 读写权重分配模式，可选值：system-系统自动分配；custom-自定义。
                     * 
                     */
                    void SetWeightMode(const std::string& _weightMode);

                    /**
                     * 判断参数 WeightMode 是否已赋值
                     * @return WeightMode 是否已赋值
                     * 
                     */
                    bool WeightModeHasBeenSet() const;

                    /**
                     * 获取该字段已经废弃，无意义。查看只读实例的权重，请查看 RoInstances 字段里的 Weight 值。
                     * @return Weight 该字段已经废弃，无意义。查看只读实例的权重，请查看 RoInstances 字段里的 Weight 值。
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置该字段已经废弃，无意义。查看只读实例的权重，请查看 RoInstances 字段里的 Weight 值。
                     * @param _weight 该字段已经废弃，无意义。查看只读实例的权重，请查看 RoInstances 字段里的 Weight 值。
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取只读组中的只读实例详情。
                     * @return RoInstances 只读组中的只读实例详情。
                     * 
                     */
                    std::vector<RoInstanceInfo> GetRoInstances() const;

                    /**
                     * 设置只读组中的只读实例详情。
                     * @param _roInstances 只读组中的只读实例详情。
                     * 
                     */
                    void SetRoInstances(const std::vector<RoInstanceInfo>& _roInstances);

                    /**
                     * 判断参数 RoInstances 是否已赋值
                     * @return RoInstances 是否已赋值
                     * 
                     */
                    bool RoInstancesHasBeenSet() const;

                    /**
                     * 获取只读组的内网 IP。
                     * @return Vip 只读组的内网 IP。
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置只读组的内网 IP。
                     * @param _vip 只读组的内网 IP。
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
                     * 获取只读组的内网端口号。
                     * @return Vport 只读组的内网端口号。
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置只读组的内网端口号。
                     * @param _vport 只读组的内网端口号。
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
                     * 获取私有网络 ID。
                     * @return UniqVpcId 私有网络 ID。
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置私有网络 ID。
                     * @param _uniqVpcId 私有网络 ID。
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
                     * 获取子网 ID。
                     * @return UniqSubnetId 子网 ID。
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置子网 ID。
                     * @param _uniqSubnetId 子网 ID。
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
                     * 获取只读组所在的地域。
                     * @return RoGroupRegion 只读组所在的地域。
                     * 
                     */
                    std::string GetRoGroupRegion() const;

                    /**
                     * 设置只读组所在的地域。
                     * @param _roGroupRegion 只读组所在的地域。
                     * 
                     */
                    void SetRoGroupRegion(const std::string& _roGroupRegion);

                    /**
                     * 判断参数 RoGroupRegion 是否已赋值
                     * @return RoGroupRegion 是否已赋值
                     * 
                     */
                    bool RoGroupRegionHasBeenSet() const;

                    /**
                     * 获取只读组所在的可用区。
                     * @return RoGroupZone 只读组所在的可用区。
                     * 
                     */
                    std::string GetRoGroupZone() const;

                    /**
                     * 设置只读组所在的可用区。
                     * @param _roGroupZone 只读组所在的可用区。
                     * 
                     */
                    void SetRoGroupZone(const std::string& _roGroupZone);

                    /**
                     * 判断参数 RoGroupZone 是否已赋值
                     * @return RoGroupZone 是否已赋值
                     * 
                     */
                    bool RoGroupZoneHasBeenSet() const;

                    /**
                     * 获取延迟复制时间。单位：秒。值范围：1-259200，整数。
                     * @return DelayReplicationTime 延迟复制时间。单位：秒。值范围：1-259200，整数。
                     * 
                     */
                    int64_t GetDelayReplicationTime() const;

                    /**
                     * 设置延迟复制时间。单位：秒。值范围：1-259200，整数。
                     * @param _delayReplicationTime 延迟复制时间。单位：秒。值范围：1-259200，整数。
                     * 
                     */
                    void SetDelayReplicationTime(const int64_t& _delayReplicationTime);

                    /**
                     * 判断参数 DelayReplicationTime 是否已赋值
                     * @return DelayReplicationTime 是否已赋值
                     * 
                     */
                    bool DelayReplicationTimeHasBeenSet() const;

                private:

                    /**
                     * 只读组模式，可选值为：alone-系统自动分配只读组；allinone-新建只读组；join-使用现有只读组。
                     */
                    std::string m_roGroupMode;
                    bool m_roGroupModeHasBeenSet;

                    /**
                     * 只读组 ID。
说明：若此数据结构在购买实例操作中被使用，则当只读组模式选择 join 时，此项为必填。
                     */
                    std::string m_roGroupId;
                    bool m_roGroupIdHasBeenSet;

                    /**
                     * 只读组名称。
                     */
                    std::string m_roGroupName;
                    bool m_roGroupNameHasBeenSet;

                    /**
                     * 是否启用延迟超限剔除功能，启用该功能后，只读实例与主实例的延迟超过延迟阈值，只读实例将被隔离。可选值：1-启用；0-不启用。
                     */
                    int64_t m_roOfflineDelay;
                    bool m_roOfflineDelayHasBeenSet;

                    /**
                     * 延迟阈值。单位：秒。值范围：1-10000，整数。
                     */
                    int64_t m_roMaxDelayTime;
                    bool m_roMaxDelayTimeHasBeenSet;

                    /**
                     * 最少实例保留个数，若购买只读实例数量小于设置数量将不做剔除。
                     */
                    int64_t m_minRoInGroup;
                    bool m_minRoInGroupHasBeenSet;

                    /**
                     * 读写权重分配模式，可选值：system-系统自动分配；custom-自定义。
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * 该字段已经废弃，无意义。查看只读实例的权重，请查看 RoInstances 字段里的 Weight 值。
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 只读组中的只读实例详情。
                     */
                    std::vector<RoInstanceInfo> m_roInstances;
                    bool m_roInstancesHasBeenSet;

                    /**
                     * 只读组的内网 IP。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 只读组的内网端口号。
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 私有网络 ID。
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 子网 ID。
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * 只读组所在的地域。
                     */
                    std::string m_roGroupRegion;
                    bool m_roGroupRegionHasBeenSet;

                    /**
                     * 只读组所在的可用区。
                     */
                    std::string m_roGroupZone;
                    bool m_roGroupZoneHasBeenSet;

                    /**
                     * 延迟复制时间。单位：秒。值范围：1-259200，整数。
                     */
                    int64_t m_delayReplicationTime;
                    bool m_delayReplicationTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ROGROUP_H_
