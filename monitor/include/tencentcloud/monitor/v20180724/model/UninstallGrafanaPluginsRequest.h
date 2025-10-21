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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UNINSTALLGRAFANAPLUGINSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UNINSTALLGRAFANAPLUGINSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * UninstallGrafanaPlugins请求参数结构体
                */
                class UninstallGrafanaPluginsRequest : public AbstractModel
                {
                public:
                    UninstallGrafanaPluginsRequest();
                    ~UninstallGrafanaPluginsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取插件 ID 数组，例如"PluginIds": [ "grafana-clock-panel" ]，可通过 DescribePluginOverviews 获取 PluginId
                     * @return PluginIds 插件 ID 数组，例如"PluginIds": [ "grafana-clock-panel" ]，可通过 DescribePluginOverviews 获取 PluginId
                     * 
                     */
                    std::vector<std::string> GetPluginIds() const;

                    /**
                     * 设置插件 ID 数组，例如"PluginIds": [ "grafana-clock-panel" ]，可通过 DescribePluginOverviews 获取 PluginId
                     * @param _pluginIds 插件 ID 数组，例如"PluginIds": [ "grafana-clock-panel" ]，可通过 DescribePluginOverviews 获取 PluginId
                     * 
                     */
                    void SetPluginIds(const std::vector<std::string>& _pluginIds);

                    /**
                     * 判断参数 PluginIds 是否已赋值
                     * @return PluginIds 是否已赋值
                     * 
                     */
                    bool PluginIdsHasBeenSet() const;

                    /**
                     * 获取Grafana 实例 ID，例如：grafana-abcdefg
                     * @return InstanceId Grafana 实例 ID，例如：grafana-abcdefg
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Grafana 实例 ID，例如：grafana-abcdefg
                     * @param _instanceId Grafana 实例 ID，例如：grafana-abcdefg
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 插件 ID 数组，例如"PluginIds": [ "grafana-clock-panel" ]，可通过 DescribePluginOverviews 获取 PluginId
                     */
                    std::vector<std::string> m_pluginIds;
                    bool m_pluginIdsHasBeenSet;

                    /**
                     * Grafana 实例 ID，例如：grafana-abcdefg
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UNINSTALLGRAFANAPLUGINSREQUEST_H_
