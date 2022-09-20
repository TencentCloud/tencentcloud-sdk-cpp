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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYALARMDEFAULTTHRESHOLDREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYALARMDEFAULTTHRESHOLDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyAlarmDefaultThreshold请求参数结构体
                */
                class ModifyAlarmDefaultThresholdRequest : public AbstractModel
                {
                public:
                    ModifyAlarmDefaultThresholdRequest();
                    ~ModifyAlarmDefaultThresholdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取告警服务类型，取值有：
<li>ddos：ddos告警服务。</li>
                     * @return ServiceType 告警服务类型，取值有：
<li>ddos：ddos告警服务。</li>
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置告警服务类型，取值有：
<li>ddos：ddos告警服务。</li>
                     * @param ServiceType 告警服务类型，取值有：
<li>ddos：ddos告警服务。</li>
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取站点ID。
                     * @return ZoneId 站点ID。
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID。
                     * @param ZoneId 站点ID。
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取新的阈值，单位为Mbps，最小阈值为10。
                     * @return Threshold 新的阈值，单位为Mbps，最小阈值为10。
                     */
                    int64_t GetThreshold() const;

                    /**
                     * 设置新的阈值，单位为Mbps，最小阈值为10。
                     * @param Threshold 新的阈值，单位为Mbps，最小阈值为10。
                     */
                    void SetThreshold(const int64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取防护实体，如果是四层防护，防护实体为通道ID。如果是七层防护，防护实体为站点名称。
                     * @return Entity 防护实体，如果是四层防护，防护实体为通道ID。如果是七层防护，防护实体为站点名称。
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置防护实体，如果是四层防护，防护实体为通道ID。如果是七层防护，防护实体为站点名称。
                     * @param Entity 防护实体，如果是四层防护，防护实体为通道ID。如果是七层防护，防护实体为站点名称。
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     */
                    bool EntityHasBeenSet() const;

                private:

                    /**
                     * 告警服务类型，取值有：
<li>ddos：ddos告警服务。</li>
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 站点ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 新的阈值，单位为Mbps，最小阈值为10。
                     */
                    int64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * 防护实体，如果是四层防护，防护实体为通道ID。如果是七层防护，防护实体为站点名称。
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYALARMDEFAULTTHRESHOLDREQUEST_H_
