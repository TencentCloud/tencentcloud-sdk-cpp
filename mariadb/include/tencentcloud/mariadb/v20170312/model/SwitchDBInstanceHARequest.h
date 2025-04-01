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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_SWITCHDBINSTANCEHAREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_SWITCHDBINSTANCEHAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * SwitchDBInstanceHA请求参数结构体
                */
                class SwitchDBInstanceHARequest : public AbstractModel
                {
                public:
                    SwitchDBInstanceHARequest();
                    ~SwitchDBInstanceHARequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id，形如 tdsql-ow728lmc
                     * @return InstanceId 实例Id，形如 tdsql-ow728lmc
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id，形如 tdsql-ow728lmc
                     * @param _instanceId 实例Id，形如 tdsql-ow728lmc
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
                     * 获取指定可用区标识符，具体含义由zoneMode参数决定。 

- 当zoneMode为target时表示目标可用区 

- 当zoneMode为avoid时表示需避开的故障可用区
                     * @return Zone 指定可用区标识符，具体含义由zoneMode参数决定。 

- 当zoneMode为target时表示目标可用区 

- 当zoneMode为avoid时表示需避开的故障可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置指定可用区标识符，具体含义由zoneMode参数决定。 

- 当zoneMode为target时表示目标可用区 

- 当zoneMode为avoid时表示需避开的故障可用区
                     * @param _zone 指定可用区标识符，具体含义由zoneMode参数决定。 

- 当zoneMode为target时表示目标可用区 

- 当zoneMode为avoid时表示需避开的故障可用区
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
                     * 获取可用区模式选择器，定义zone参数的语义类型。 
- 默认值：target

- 可选值：target, avoid
                     * @return ZoneMode 可用区模式选择器，定义zone参数的语义类型。 
- 默认值：target

- 可选值：target, avoid
                     * 
                     */
                    std::string GetZoneMode() const;

                    /**
                     * 设置可用区模式选择器，定义zone参数的语义类型。 
- 默认值：target

- 可选值：target, avoid
                     * @param _zoneMode 可用区模式选择器，定义zone参数的语义类型。 
- 默认值：target

- 可选值：target, avoid
                     * 
                     */
                    void SetZoneMode(const std::string& _zoneMode);

                    /**
                     * 判断参数 ZoneMode 是否已赋值
                     * @return ZoneMode 是否已赋值
                     * 
                     */
                    bool ZoneModeHasBeenSet() const;

                private:

                    /**
                     * 实例Id，形如 tdsql-ow728lmc
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 指定可用区标识符，具体含义由zoneMode参数决定。 

- 当zoneMode为target时表示目标可用区 

- 当zoneMode为avoid时表示需避开的故障可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 可用区模式选择器，定义zone参数的语义类型。 
- 默认值：target

- 可选值：target, avoid
                     */
                    std::string m_zoneMode;
                    bool m_zoneModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_SWITCHDBINSTANCEHAREQUEST_H_
