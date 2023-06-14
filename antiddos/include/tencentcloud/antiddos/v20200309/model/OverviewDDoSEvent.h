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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_OVERVIEWDDOSEVENT_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_OVERVIEWDDOSEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * 防护概览DDoS攻击事件
                */
                class OverviewDDoSEvent : public AbstractModel
                {
                public:
                    OverviewDDoSEvent();
                    ~OverviewDDoSEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件Id
                     * @return Id 事件Id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置事件Id
                     * @param _id 事件Id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取ip
                     * @return Vip ip
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置ip
                     * @param _vip ip
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
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取攻击类型
                     * @return AttackType 攻击类型
                     * 
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置攻击类型
                     * @param _attackType 攻击类型
                     * 
                     */
                    void SetAttackType(const std::string& _attackType);

                    /**
                     * 判断参数 AttackType 是否已赋值
                     * @return AttackType 是否已赋值
                     * 
                     */
                    bool AttackTypeHasBeenSet() const;

                    /**
                     * 获取攻击状态，0：攻击中；1：攻击结束
                     * @return AttackStatus 攻击状态，0：攻击中；1：攻击结束
                     * 
                     */
                    uint64_t GetAttackStatus() const;

                    /**
                     * 设置攻击状态，0：攻击中；1：攻击结束
                     * @param _attackStatus 攻击状态，0：攻击中；1：攻击结束
                     * 
                     */
                    void SetAttackStatus(const uint64_t& _attackStatus);

                    /**
                     * 判断参数 AttackStatus 是否已赋值
                     * @return AttackStatus 是否已赋值
                     * 
                     */
                    bool AttackStatusHasBeenSet() const;

                    /**
                     * 获取攻击流量，单位Mbps
                     * @return Mbps 攻击流量，单位Mbps
                     * 
                     */
                    uint64_t GetMbps() const;

                    /**
                     * 设置攻击流量，单位Mbps
                     * @param _mbps 攻击流量，单位Mbps
                     * 
                     */
                    void SetMbps(const uint64_t& _mbps);

                    /**
                     * 判断参数 Mbps 是否已赋值
                     * @return Mbps 是否已赋值
                     * 
                     */
                    bool MbpsHasBeenSet() const;

                    /**
                     * 获取攻击包量，单位pps
                     * @return Pps 攻击包量，单位pps
                     * 
                     */
                    uint64_t GetPps() const;

                    /**
                     * 设置攻击包量，单位pps
                     * @param _pps 攻击包量，单位pps
                     * 
                     */
                    void SetPps(const uint64_t& _pps);

                    /**
                     * 判断参数 Pps 是否已赋值
                     * @return Pps 是否已赋值
                     * 
                     */
                    bool PpsHasBeenSet() const;

                    /**
                     * 获取业务类型，bgp-multip：高防包；bgpip：高防ip；basic：基础防护
                     * @return Business 业务类型，bgp-multip：高防包；bgpip：高防ip；basic：基础防护
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置业务类型，bgp-multip：高防包；bgpip：高防ip；basic：基础防护
                     * @param _business 业务类型，bgp-multip：高防包；bgpip：高防ip；basic：基础防护
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取高防实例Id
                     * @return InstanceId 高防实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置高防实例Id
                     * @param _instanceId 高防实例Id
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
                     * 获取高防实例名称
                     * @return InstanceName 高防实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置高防实例名称
                     * @param _instanceName 高防实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                private:

                    /**
                     * 事件Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * ip
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 攻击类型
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * 攻击状态，0：攻击中；1：攻击结束
                     */
                    uint64_t m_attackStatus;
                    bool m_attackStatusHasBeenSet;

                    /**
                     * 攻击流量，单位Mbps
                     */
                    uint64_t m_mbps;
                    bool m_mbpsHasBeenSet;

                    /**
                     * 攻击包量，单位pps
                     */
                    uint64_t m_pps;
                    bool m_ppsHasBeenSet;

                    /**
                     * 业务类型，bgp-multip：高防包；bgpip：高防ip；basic：基础防护
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 高防实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 高防实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_OVERVIEWDDOSEVENT_H_
