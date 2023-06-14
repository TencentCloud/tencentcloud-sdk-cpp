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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DEVICEPOSITIONINFO_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DEVICEPOSITIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * 物理机机架信息
                */
                class DevicePositionInfo : public AbstractModel
                {
                public:
                    DevicePositionInfo();
                    ~DevicePositionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备ID
                     * @return InstanceId 设备ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置设备ID
                     * @param _instanceId 设备ID
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
                     * 获取所在可用区
                     * @return Zone 所在可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置所在可用区
                     * @param _zone 所在可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取私有网络ID
                     * @return VpcId 私有网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param _vpcId 私有网络ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取业务IP
                     * @return LanIp 业务IP
                     * 
                     */
                    std::string GetLanIp() const;

                    /**
                     * 设置业务IP
                     * @param _lanIp 业务IP
                     * 
                     */
                    void SetLanIp(const std::string& _lanIp);

                    /**
                     * 判断参数 LanIp 是否已赋值
                     * @return LanIp 是否已赋值
                     * 
                     */
                    bool LanIpHasBeenSet() const;

                    /**
                     * 获取实例别名
                     * @return Alias 实例别名
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置实例别名
                     * @param _alias 实例别名
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取机架名称
                     * @return RckName 机架名称
                     * 
                     */
                    std::string GetRckName() const;

                    /**
                     * 设置机架名称
                     * @param _rckName 机架名称
                     * 
                     */
                    void SetRckName(const std::string& _rckName);

                    /**
                     * 判断参数 RckName 是否已赋值
                     * @return RckName 是否已赋值
                     * 
                     */
                    bool RckNameHasBeenSet() const;

                    /**
                     * 获取机位
                     * @return PosCode 机位
                     * 
                     */
                    uint64_t GetPosCode() const;

                    /**
                     * 设置机位
                     * @param _posCode 机位
                     * 
                     */
                    void SetPosCode(const uint64_t& _posCode);

                    /**
                     * 判断参数 PosCode 是否已赋值
                     * @return PosCode 是否已赋值
                     * 
                     */
                    bool PosCodeHasBeenSet() const;

                    /**
                     * 获取交换机名称
                     * @return SwitchName 交换机名称
                     * 
                     */
                    std::string GetSwitchName() const;

                    /**
                     * 设置交换机名称
                     * @param _switchName 交换机名称
                     * 
                     */
                    void SetSwitchName(const std::string& _switchName);

                    /**
                     * 判断参数 SwitchName 是否已赋值
                     * @return SwitchName 是否已赋值
                     * 
                     */
                    bool SwitchNameHasBeenSet() const;

                    /**
                     * 获取设备交付时间
                     * @return DeliverTime 设备交付时间
                     * 
                     */
                    std::string GetDeliverTime() const;

                    /**
                     * 设置设备交付时间
                     * @param _deliverTime 设备交付时间
                     * 
                     */
                    void SetDeliverTime(const std::string& _deliverTime);

                    /**
                     * 判断参数 DeliverTime 是否已赋值
                     * @return DeliverTime 是否已赋值
                     * 
                     */
                    bool DeliverTimeHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return Deadline 过期时间
                     * 
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置过期时间
                     * @param _deadline 过期时间
                     * 
                     */
                    void SetDeadline(const std::string& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                private:

                    /**
                     * 设备ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 所在可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 业务IP
                     */
                    std::string m_lanIp;
                    bool m_lanIpHasBeenSet;

                    /**
                     * 实例别名
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 机架名称
                     */
                    std::string m_rckName;
                    bool m_rckNameHasBeenSet;

                    /**
                     * 机位
                     */
                    uint64_t m_posCode;
                    bool m_posCodeHasBeenSet;

                    /**
                     * 交换机名称
                     */
                    std::string m_switchName;
                    bool m_switchNameHasBeenSet;

                    /**
                     * 设备交付时间
                     */
                    std::string m_deliverTime;
                    bool m_deliverTimeHasBeenSet;

                    /**
                     * 过期时间
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DEVICEPOSITIONINFO_H_
