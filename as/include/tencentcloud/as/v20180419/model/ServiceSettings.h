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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_SERVICESETTINGS_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_SERVICESETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 服务设置
                */
                class ServiceSettings : public AbstractModel
                {
                public:
                    ServiceSettings();
                    ~ServiceSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开启监控不健康替换服务。若开启则对于云监控标记为不健康的实例，弹性伸缩服务会进行替换。若不指定该参数，则默认为 False。
                     * @return ReplaceMonitorUnhealthy 开启监控不健康替换服务。若开启则对于云监控标记为不健康的实例，弹性伸缩服务会进行替换。若不指定该参数，则默认为 False。
                     * 
                     */
                    bool GetReplaceMonitorUnhealthy() const;

                    /**
                     * 设置开启监控不健康替换服务。若开启则对于云监控标记为不健康的实例，弹性伸缩服务会进行替换。若不指定该参数，则默认为 False。
                     * @param _replaceMonitorUnhealthy 开启监控不健康替换服务。若开启则对于云监控标记为不健康的实例，弹性伸缩服务会进行替换。若不指定该参数，则默认为 False。
                     * 
                     */
                    void SetReplaceMonitorUnhealthy(const bool& _replaceMonitorUnhealthy);

                    /**
                     * 判断参数 ReplaceMonitorUnhealthy 是否已赋值
                     * @return ReplaceMonitorUnhealthy 是否已赋值
                     * 
                     */
                    bool ReplaceMonitorUnhealthyHasBeenSet() const;

                    /**
                     * 获取取值范围： 
CLASSIC_SCALING：经典方式，使用创建、销毁实例来实现扩缩容； 
WAKE_UP_STOPPED_SCALING：扩容优先开机。扩容时优先对已关机的实例执行开机操作，若开机后实例数仍低于期望实例数，则创建实例，缩容仍采用销毁实例的方式。用户可以使用StopAutoScalingInstances接口来关闭伸缩组内的实例。监控告警触发的扩容仍将创建实例
默认取值：CLASSIC_SCALING
                     * @return ScalingMode 取值范围： 
CLASSIC_SCALING：经典方式，使用创建、销毁实例来实现扩缩容； 
WAKE_UP_STOPPED_SCALING：扩容优先开机。扩容时优先对已关机的实例执行开机操作，若开机后实例数仍低于期望实例数，则创建实例，缩容仍采用销毁实例的方式。用户可以使用StopAutoScalingInstances接口来关闭伸缩组内的实例。监控告警触发的扩容仍将创建实例
默认取值：CLASSIC_SCALING
                     * 
                     */
                    std::string GetScalingMode() const;

                    /**
                     * 设置取值范围： 
CLASSIC_SCALING：经典方式，使用创建、销毁实例来实现扩缩容； 
WAKE_UP_STOPPED_SCALING：扩容优先开机。扩容时优先对已关机的实例执行开机操作，若开机后实例数仍低于期望实例数，则创建实例，缩容仍采用销毁实例的方式。用户可以使用StopAutoScalingInstances接口来关闭伸缩组内的实例。监控告警触发的扩容仍将创建实例
默认取值：CLASSIC_SCALING
                     * @param _scalingMode 取值范围： 
CLASSIC_SCALING：经典方式，使用创建、销毁实例来实现扩缩容； 
WAKE_UP_STOPPED_SCALING：扩容优先开机。扩容时优先对已关机的实例执行开机操作，若开机后实例数仍低于期望实例数，则创建实例，缩容仍采用销毁实例的方式。用户可以使用StopAutoScalingInstances接口来关闭伸缩组内的实例。监控告警触发的扩容仍将创建实例
默认取值：CLASSIC_SCALING
                     * 
                     */
                    void SetScalingMode(const std::string& _scalingMode);

                    /**
                     * 判断参数 ScalingMode 是否已赋值
                     * @return ScalingMode 是否已赋值
                     * 
                     */
                    bool ScalingModeHasBeenSet() const;

                    /**
                     * 获取开启负载均衡不健康替换服务。若开启则对于负载均衡健康检查判断不健康的实例，弹性伸缩服务会进行替换。若不指定该参数，则默认为 False。
                     * @return ReplaceLoadBalancerUnhealthy 开启负载均衡不健康替换服务。若开启则对于负载均衡健康检查判断不健康的实例，弹性伸缩服务会进行替换。若不指定该参数，则默认为 False。
                     * 
                     */
                    bool GetReplaceLoadBalancerUnhealthy() const;

                    /**
                     * 设置开启负载均衡不健康替换服务。若开启则对于负载均衡健康检查判断不健康的实例，弹性伸缩服务会进行替换。若不指定该参数，则默认为 False。
                     * @param _replaceLoadBalancerUnhealthy 开启负载均衡不健康替换服务。若开启则对于负载均衡健康检查判断不健康的实例，弹性伸缩服务会进行替换。若不指定该参数，则默认为 False。
                     * 
                     */
                    void SetReplaceLoadBalancerUnhealthy(const bool& _replaceLoadBalancerUnhealthy);

                    /**
                     * 判断参数 ReplaceLoadBalancerUnhealthy 是否已赋值
                     * @return ReplaceLoadBalancerUnhealthy 是否已赋值
                     * 
                     */
                    bool ReplaceLoadBalancerUnhealthyHasBeenSet() const;

                    /**
                     * 获取不健康替换服务的替换模式。取值范围：
RECREATE：重建实例替代原有不健康实例；
RESET：对原有不健康实例进行重装系统操作，可保持数据盘、内网IP、实例id等信息不发生变化，实例登录设置、主机名、增强服务和 UserData 与当前启动配置保持一致。
默认取值：RECREATE
                     * @return ReplaceMode 不健康替换服务的替换模式。取值范围：
RECREATE：重建实例替代原有不健康实例；
RESET：对原有不健康实例进行重装系统操作，可保持数据盘、内网IP、实例id等信息不发生变化，实例登录设置、主机名、增强服务和 UserData 与当前启动配置保持一致。
默认取值：RECREATE
                     * 
                     */
                    std::string GetReplaceMode() const;

                    /**
                     * 设置不健康替换服务的替换模式。取值范围：
RECREATE：重建实例替代原有不健康实例；
RESET：对原有不健康实例进行重装系统操作，可保持数据盘、内网IP、实例id等信息不发生变化，实例登录设置、主机名、增强服务和 UserData 与当前启动配置保持一致。
默认取值：RECREATE
                     * @param _replaceMode 不健康替换服务的替换模式。取值范围：
RECREATE：重建实例替代原有不健康实例；
RESET：对原有不健康实例进行重装系统操作，可保持数据盘、内网IP、实例id等信息不发生变化，实例登录设置、主机名、增强服务和 UserData 与当前启动配置保持一致。
默认取值：RECREATE
                     * 
                     */
                    void SetReplaceMode(const std::string& _replaceMode);

                    /**
                     * 判断参数 ReplaceMode 是否已赋值
                     * @return ReplaceMode 是否已赋值
                     * 
                     */
                    bool ReplaceModeHasBeenSet() const;

                    /**
                     * 获取自动更新实例标签。默认取值为 False，配置后如伸缩组标签发生更新，会同步更新（同步更新仅支持新增、修改标签，暂不支持删除标签）伸缩组内运行中状态实例的标签，同步更新非立即生效，存在一定延迟。
                     * @return AutoUpdateInstanceTags 自动更新实例标签。默认取值为 False，配置后如伸缩组标签发生更新，会同步更新（同步更新仅支持新增、修改标签，暂不支持删除标签）伸缩组内运行中状态实例的标签，同步更新非立即生效，存在一定延迟。
                     * 
                     */
                    bool GetAutoUpdateInstanceTags() const;

                    /**
                     * 设置自动更新实例标签。默认取值为 False，配置后如伸缩组标签发生更新，会同步更新（同步更新仅支持新增、修改标签，暂不支持删除标签）伸缩组内运行中状态实例的标签，同步更新非立即生效，存在一定延迟。
                     * @param _autoUpdateInstanceTags 自动更新实例标签。默认取值为 False，配置后如伸缩组标签发生更新，会同步更新（同步更新仅支持新增、修改标签，暂不支持删除标签）伸缩组内运行中状态实例的标签，同步更新非立即生效，存在一定延迟。
                     * 
                     */
                    void SetAutoUpdateInstanceTags(const bool& _autoUpdateInstanceTags);

                    /**
                     * 判断参数 AutoUpdateInstanceTags 是否已赋值
                     * @return AutoUpdateInstanceTags 是否已赋值
                     * 
                     */
                    bool AutoUpdateInstanceTagsHasBeenSet() const;

                    /**
                     * 获取期望实例数同步最大最小值。默认值为 False。该参数仅对修改伸缩组接口未传入期望数的场景生效。
<li>True: 修改最大值或最小值时，如与当前期望数存在冲突，则同步调整期望数。例如修改时传入最小值 2，当前期望数为 1，则同步调整期望数为 2。</li>
<li>False: 修改最大值或最小值时，如与当前期望数存在冲突，报错提示不允许修改。</li>
                     * @return DesiredCapacitySyncWithMaxMinSize 期望实例数同步最大最小值。默认值为 False。该参数仅对修改伸缩组接口未传入期望数的场景生效。
<li>True: 修改最大值或最小值时，如与当前期望数存在冲突，则同步调整期望数。例如修改时传入最小值 2，当前期望数为 1，则同步调整期望数为 2。</li>
<li>False: 修改最大值或最小值时，如与当前期望数存在冲突，报错提示不允许修改。</li>
                     * 
                     */
                    bool GetDesiredCapacitySyncWithMaxMinSize() const;

                    /**
                     * 设置期望实例数同步最大最小值。默认值为 False。该参数仅对修改伸缩组接口未传入期望数的场景生效。
<li>True: 修改最大值或最小值时，如与当前期望数存在冲突，则同步调整期望数。例如修改时传入最小值 2，当前期望数为 1，则同步调整期望数为 2。</li>
<li>False: 修改最大值或最小值时，如与当前期望数存在冲突，报错提示不允许修改。</li>
                     * @param _desiredCapacitySyncWithMaxMinSize 期望实例数同步最大最小值。默认值为 False。该参数仅对修改伸缩组接口未传入期望数的场景生效。
<li>True: 修改最大值或最小值时，如与当前期望数存在冲突，则同步调整期望数。例如修改时传入最小值 2，当前期望数为 1，则同步调整期望数为 2。</li>
<li>False: 修改最大值或最小值时，如与当前期望数存在冲突，报错提示不允许修改。</li>
                     * 
                     */
                    void SetDesiredCapacitySyncWithMaxMinSize(const bool& _desiredCapacitySyncWithMaxMinSize);

                    /**
                     * 判断参数 DesiredCapacitySyncWithMaxMinSize 是否已赋值
                     * @return DesiredCapacitySyncWithMaxMinSize 是否已赋值
                     * 
                     */
                    bool DesiredCapacitySyncWithMaxMinSizeHasBeenSet() const;

                private:

                    /**
                     * 开启监控不健康替换服务。若开启则对于云监控标记为不健康的实例，弹性伸缩服务会进行替换。若不指定该参数，则默认为 False。
                     */
                    bool m_replaceMonitorUnhealthy;
                    bool m_replaceMonitorUnhealthyHasBeenSet;

                    /**
                     * 取值范围： 
CLASSIC_SCALING：经典方式，使用创建、销毁实例来实现扩缩容； 
WAKE_UP_STOPPED_SCALING：扩容优先开机。扩容时优先对已关机的实例执行开机操作，若开机后实例数仍低于期望实例数，则创建实例，缩容仍采用销毁实例的方式。用户可以使用StopAutoScalingInstances接口来关闭伸缩组内的实例。监控告警触发的扩容仍将创建实例
默认取值：CLASSIC_SCALING
                     */
                    std::string m_scalingMode;
                    bool m_scalingModeHasBeenSet;

                    /**
                     * 开启负载均衡不健康替换服务。若开启则对于负载均衡健康检查判断不健康的实例，弹性伸缩服务会进行替换。若不指定该参数，则默认为 False。
                     */
                    bool m_replaceLoadBalancerUnhealthy;
                    bool m_replaceLoadBalancerUnhealthyHasBeenSet;

                    /**
                     * 不健康替换服务的替换模式。取值范围：
RECREATE：重建实例替代原有不健康实例；
RESET：对原有不健康实例进行重装系统操作，可保持数据盘、内网IP、实例id等信息不发生变化，实例登录设置、主机名、增强服务和 UserData 与当前启动配置保持一致。
默认取值：RECREATE
                     */
                    std::string m_replaceMode;
                    bool m_replaceModeHasBeenSet;

                    /**
                     * 自动更新实例标签。默认取值为 False，配置后如伸缩组标签发生更新，会同步更新（同步更新仅支持新增、修改标签，暂不支持删除标签）伸缩组内运行中状态实例的标签，同步更新非立即生效，存在一定延迟。
                     */
                    bool m_autoUpdateInstanceTags;
                    bool m_autoUpdateInstanceTagsHasBeenSet;

                    /**
                     * 期望实例数同步最大最小值。默认值为 False。该参数仅对修改伸缩组接口未传入期望数的场景生效。
<li>True: 修改最大值或最小值时，如与当前期望数存在冲突，则同步调整期望数。例如修改时传入最小值 2，当前期望数为 1，则同步调整期望数为 2。</li>
<li>False: 修改最大值或最小值时，如与当前期望数存在冲突，报错提示不允许修改。</li>
                     */
                    bool m_desiredCapacitySyncWithMaxMinSize;
                    bool m_desiredCapacitySyncWithMaxMinSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_SERVICESETTINGS_H_
