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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_UPDATEPLUGINSREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_UPDATEPLUGINSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * UpdatePlugins请求参数结构体
                */
                class UpdatePluginsRequest : public AbstractModel
                {
                public:
                    UpdatePluginsRequest();
                    ~UpdatePluginsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取需要安装的插件名列表
                     * @return InstallPluginList 需要安装的插件名列表
                     * 
                     */
                    std::vector<std::string> GetInstallPluginList() const;

                    /**
                     * 设置需要安装的插件名列表
                     * @param _installPluginList 需要安装的插件名列表
                     * 
                     */
                    void SetInstallPluginList(const std::vector<std::string>& _installPluginList);

                    /**
                     * 判断参数 InstallPluginList 是否已赋值
                     * @return InstallPluginList 是否已赋值
                     * 
                     */
                    bool InstallPluginListHasBeenSet() const;

                    /**
                     * 获取需要卸载的插件名列表
                     * @return RemovePluginList 需要卸载的插件名列表
                     * 
                     */
                    std::vector<std::string> GetRemovePluginList() const;

                    /**
                     * 设置需要卸载的插件名列表
                     * @param _removePluginList 需要卸载的插件名列表
                     * 
                     */
                    void SetRemovePluginList(const std::vector<std::string>& _removePluginList);

                    /**
                     * 判断参数 RemovePluginList 是否已赋值
                     * @return RemovePluginList 是否已赋值
                     * 
                     */
                    bool RemovePluginListHasBeenSet() const;

                    /**
                     * 获取是否强制重启，默认值false
                     * @return ForceRestart 是否强制重启，默认值false
                     * 
                     */
                    bool GetForceRestart() const;

                    /**
                     * 设置是否强制重启，默认值false
                     * @param _forceRestart 是否强制重启，默认值false
                     * 
                     */
                    void SetForceRestart(const bool& _forceRestart);

                    /**
                     * 判断参数 ForceRestart 是否已赋值
                     * @return ForceRestart 是否已赋值
                     * 
                     */
                    bool ForceRestartHasBeenSet() const;

                    /**
                     * 获取是否重新安装，默认值false
                     * @return ForceUpdate 是否重新安装，默认值false
                     * 
                     */
                    bool GetForceUpdate() const;

                    /**
                     * 设置是否重新安装，默认值false
                     * @param _forceUpdate 是否重新安装，默认值false
                     * 
                     */
                    void SetForceUpdate(const bool& _forceUpdate);

                    /**
                     * 判断参数 ForceUpdate 是否已赋值
                     * @return ForceUpdate 是否已赋值
                     * 
                     */
                    bool ForceUpdateHasBeenSet() const;

                    /**
                     * 获取0：系统插件
                     * @return PluginType 0：系统插件
                     * 
                     */
                    uint64_t GetPluginType() const;

                    /**
                     * 设置0：系统插件
                     * @param _pluginType 0：系统插件
                     * 
                     */
                    void SetPluginType(const uint64_t& _pluginType);

                    /**
                     * 判断参数 PluginType 是否已赋值
                     * @return PluginType 是否已赋值
                     * 
                     */
                    bool PluginTypeHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 需要安装的插件名列表
                     */
                    std::vector<std::string> m_installPluginList;
                    bool m_installPluginListHasBeenSet;

                    /**
                     * 需要卸载的插件名列表
                     */
                    std::vector<std::string> m_removePluginList;
                    bool m_removePluginListHasBeenSet;

                    /**
                     * 是否强制重启，默认值false
                     */
                    bool m_forceRestart;
                    bool m_forceRestartHasBeenSet;

                    /**
                     * 是否重新安装，默认值false
                     */
                    bool m_forceUpdate;
                    bool m_forceUpdateHasBeenSet;

                    /**
                     * 0：系统插件
                     */
                    uint64_t m_pluginType;
                    bool m_pluginTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_UPDATEPLUGINSREQUEST_H_
