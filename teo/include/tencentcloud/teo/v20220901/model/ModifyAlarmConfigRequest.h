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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYALARMCONFIGREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYALARMCONFIGREQUEST_H_

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
                * ModifyAlarmConfig请求参数结构体
                */
                class ModifyAlarmConfigRequest : public AbstractModel
                {
                public:
                    ModifyAlarmConfigRequest();
                    ~ModifyAlarmConfigRequest() = default;
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
                     * 获取告警维度值列表。
                     * @return EntityList 告警维度值列表。
                     */
                    std::vector<std::string> GetEntityList() const;

                    /**
                     * 设置告警维度值列表。
                     * @param EntityList 告警维度值列表。
                     */
                    void SetEntityList(const std::vector<std::string>& _entityList);

                    /**
                     * 判断参数 EntityList 是否已赋值
                     * @return EntityList 是否已赋值
                     */
                    bool EntityListHasBeenSet() const;

                    /**
                     * 获取告警阈值，不传或者传0表示不修改阈值。
                     * @return Threshold 告警阈值，不传或者传0表示不修改阈值。
                     */
                    int64_t GetThreshold() const;

                    /**
                     * 设置告警阈值，不传或者传0表示不修改阈值。
                     * @param Threshold 告警阈值，不传或者传0表示不修改阈值。
                     */
                    void SetThreshold(const int64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取是否使用默认值，只有在不传Threshold或者Threshold=0时该参数有效。
                     * @return IsDefault 是否使用默认值，只有在不传Threshold或者Threshold=0时该参数有效。
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置是否使用默认值，只有在不传Threshold或者Threshold=0时该参数有效。
                     * @param IsDefault 是否使用默认值，只有在不传Threshold或者Threshold=0时该参数有效。
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     */
                    bool IsDefaultHasBeenSet() const;

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
                     * 告警维度值列表。
                     */
                    std::vector<std::string> m_entityList;
                    bool m_entityListHasBeenSet;

                    /**
                     * 告警阈值，不传或者传0表示不修改阈值。
                     */
                    int64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * 是否使用默认值，只有在不传Threshold或者Threshold=0时该参数有效。
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYALARMCONFIGREQUEST_H_
