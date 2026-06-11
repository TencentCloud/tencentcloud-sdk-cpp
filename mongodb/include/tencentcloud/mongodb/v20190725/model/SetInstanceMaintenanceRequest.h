/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_SETINSTANCEMAINTENANCEREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_SETINSTANCEMAINTENANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * SetInstanceMaintenance请求参数结构体
                */
                class SetInstanceMaintenanceRequest : public AbstractModel
                {
                public:
                    SetInstanceMaintenanceRequest();
                    ~SetInstanceMaintenanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>指定实例ID。例如：cmgo-p8vn****。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>指定实例ID。例如：cmgo-p8vn****。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>指定实例ID。例如：cmgo-p8vn****。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>指定实例ID。例如：cmgo-p8vn****。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
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
                     * 获取<p>维护时间窗开始时间。取值范围为&quot;00:00-23:00&quot;的任意整点或半点，如00:00或00:30。</p>
                     * @return MaintenanceStart <p>维护时间窗开始时间。取值范围为&quot;00:00-23:00&quot;的任意整点或半点，如00:00或00:30。</p>
                     * 
                     */
                    std::string GetMaintenanceStart() const;

                    /**
                     * 设置<p>维护时间窗开始时间。取值范围为&quot;00:00-23:00&quot;的任意整点或半点，如00:00或00:30。</p>
                     * @param _maintenanceStart <p>维护时间窗开始时间。取值范围为&quot;00:00-23:00&quot;的任意整点或半点，如00:00或00:30。</p>
                     * 
                     */
                    void SetMaintenanceStart(const std::string& _maintenanceStart);

                    /**
                     * 判断参数 MaintenanceStart 是否已赋值
                     * @return MaintenanceStart 是否已赋值
                     * 
                     */
                    bool MaintenanceStartHasBeenSet() const;

                    /**
                     * 获取<p>维护时间窗结束时间。</p><ul><li>取值范围为&quot;00:00-23:00&quot;的任意整点或半点，维护时间持续时长最小为30分钟，最大为3小时。</li><li>结束时间务必是基于开始时间向后的时间。</li></ul>
                     * @return MaintenanceEnd <p>维护时间窗结束时间。</p><ul><li>取值范围为&quot;00:00-23:00&quot;的任意整点或半点，维护时间持续时长最小为30分钟，最大为3小时。</li><li>结束时间务必是基于开始时间向后的时间。</li></ul>
                     * 
                     */
                    std::string GetMaintenanceEnd() const;

                    /**
                     * 设置<p>维护时间窗结束时间。</p><ul><li>取值范围为&quot;00:00-23:00&quot;的任意整点或半点，维护时间持续时长最小为30分钟，最大为3小时。</li><li>结束时间务必是基于开始时间向后的时间。</li></ul>
                     * @param _maintenanceEnd <p>维护时间窗结束时间。</p><ul><li>取值范围为&quot;00:00-23:00&quot;的任意整点或半点，维护时间持续时长最小为30分钟，最大为3小时。</li><li>结束时间务必是基于开始时间向后的时间。</li></ul>
                     * 
                     */
                    void SetMaintenanceEnd(const std::string& _maintenanceEnd);

                    /**
                     * 判断参数 MaintenanceEnd 是否已赋值
                     * @return MaintenanceEnd 是否已赋值
                     * 
                     */
                    bool MaintenanceEndHasBeenSet() const;

                    /**
                     * 获取<p>指定每周内维护时间窗口的具体日期。  格式：请输入 1-7 之间的数字代表周一到周日（例如：1 代表周一），多个日期请用英文逗号 , 分隔。 示例：输入 1,3,5 表示维护窗口周期在每周的周一、周三、周五。 默认值：不设置，则默认为全周期 (1,2,3,4,5,6,7)。</p>
                     * @return MaintenanceDays <p>指定每周内维护时间窗口的具体日期。  格式：请输入 1-7 之间的数字代表周一到周日（例如：1 代表周一），多个日期请用英文逗号 , 分隔。 示例：输入 1,3,5 表示维护窗口周期在每周的周一、周三、周五。 默认值：不设置，则默认为全周期 (1,2,3,4,5,6,7)。</p>
                     * 
                     */
                    std::string GetMaintenanceDays() const;

                    /**
                     * 设置<p>指定每周内维护时间窗口的具体日期。  格式：请输入 1-7 之间的数字代表周一到周日（例如：1 代表周一），多个日期请用英文逗号 , 分隔。 示例：输入 1,3,5 表示维护窗口周期在每周的周一、周三、周五。 默认值：不设置，则默认为全周期 (1,2,3,4,5,6,7)。</p>
                     * @param _maintenanceDays <p>指定每周内维护时间窗口的具体日期。  格式：请输入 1-7 之间的数字代表周一到周日（例如：1 代表周一），多个日期请用英文逗号 , 分隔。 示例：输入 1,3,5 表示维护窗口周期在每周的周一、周三、周五。 默认值：不设置，则默认为全周期 (1,2,3,4,5,6,7)。</p>
                     * 
                     */
                    void SetMaintenanceDays(const std::string& _maintenanceDays);

                    /**
                     * 判断参数 MaintenanceDays 是否已赋值
                     * @return MaintenanceDays 是否已赋值
                     * 
                     */
                    bool MaintenanceDaysHasBeenSet() const;

                private:

                    /**
                     * <p>指定实例ID。例如：cmgo-p8vn****。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>维护时间窗开始时间。取值范围为&quot;00:00-23:00&quot;的任意整点或半点，如00:00或00:30。</p>
                     */
                    std::string m_maintenanceStart;
                    bool m_maintenanceStartHasBeenSet;

                    /**
                     * <p>维护时间窗结束时间。</p><ul><li>取值范围为&quot;00:00-23:00&quot;的任意整点或半点，维护时间持续时长最小为30分钟，最大为3小时。</li><li>结束时间务必是基于开始时间向后的时间。</li></ul>
                     */
                    std::string m_maintenanceEnd;
                    bool m_maintenanceEndHasBeenSet;

                    /**
                     * <p>指定每周内维护时间窗口的具体日期。  格式：请输入 1-7 之间的数字代表周一到周日（例如：1 代表周一），多个日期请用英文逗号 , 分隔。 示例：输入 1,3,5 表示维护窗口周期在每周的周一、周三、周五。 默认值：不设置，则默认为全周期 (1,2,3,4,5,6,7)。</p>
                     */
                    std::string m_maintenanceDays;
                    bool m_maintenanceDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_SETINSTANCEMAINTENANCEREQUEST_H_
