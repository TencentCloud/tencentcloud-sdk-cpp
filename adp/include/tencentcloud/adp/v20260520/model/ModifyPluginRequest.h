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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYPLUGINREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYPLUGINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/PluginProfile.h>
#include <tencentcloud/adp/v20260520/model/PluginConfig.h>
#include <tencentcloud/adp/v20260520/model/FieldMask.h>
#include <tencentcloud/adp/v20260520/model/Tool.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ModifyPlugin请求参数结构体
                */
                class ModifyPluginRequest : public AbstractModel
                {
                public:
                    ModifyPluginRequest();
                    ~ModifyPluginRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>插件id</p>
                     * @return PluginId <p>插件id</p>
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置<p>插件id</p>
                     * @param _pluginId <p>插件id</p>
                     * 
                     */
                    void SetPluginId(const std::string& _pluginId);

                    /**
                     * 判断参数 PluginId 是否已赋值
                     * @return PluginId 是否已赋值
                     * 
                     */
                    bool PluginIdHasBeenSet() const;

                    /**
                     * 获取<p>插件版本号</p>
                     * @return PluginVersion <p>插件版本号</p>
                     * 
                     */
                    int64_t GetPluginVersion() const;

                    /**
                     * 设置<p>插件版本号</p>
                     * @param _pluginVersion <p>插件版本号</p>
                     * 
                     */
                    void SetPluginVersion(const int64_t& _pluginVersion);

                    /**
                     * 判断参数 PluginVersion 是否已赋值
                     * @return PluginVersion 是否已赋值
                     * 
                     */
                    bool PluginVersionHasBeenSet() const;

                    /**
                     * 获取<p>插件基础资料</p>
                     * @return Profile <p>插件基础资料</p>
                     * 
                     */
                    PluginProfile GetProfile() const;

                    /**
                     * 设置<p>插件基础资料</p>
                     * @param _profile <p>插件基础资料</p>
                     * 
                     */
                    void SetProfile(const PluginProfile& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取<p>插件类型配置</p>
                     * @return Config <p>插件类型配置</p>
                     * 
                     */
                    PluginConfig GetConfig() const;

                    /**
                     * 设置<p>插件类型配置</p>
                     * @param _config <p>插件类型配置</p>
                     * 
                     */
                    void SetConfig(const PluginConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取<p>指定需要更新的字段，避免全量覆盖</p>
                     * @return UpdateMask <p>指定需要更新的字段，避免全量覆盖</p>
                     * 
                     */
                    FieldMask GetUpdateMask() const;

                    /**
                     * 设置<p>指定需要更新的字段，避免全量覆盖</p>
                     * @param _updateMask <p>指定需要更新的字段，避免全量覆盖</p>
                     * 
                     */
                    void SetUpdateMask(const FieldMask& _updateMask);

                    /**
                     * 判断参数 UpdateMask 是否已赋值
                     * @return UpdateMask 是否已赋值
                     * 
                     */
                    bool UpdateMaskHasBeenSet() const;

                    /**
                     * 获取<p>插件的工具列表，mcp插件不传</p>
                     * @return ToolList <p>插件的工具列表，mcp插件不传</p>
                     * 
                     */
                    std::vector<Tool> GetToolList() const;

                    /**
                     * 设置<p>插件的工具列表，mcp插件不传</p>
                     * @param _toolList <p>插件的工具列表，mcp插件不传</p>
                     * 
                     */
                    void SetToolList(const std::vector<Tool>& _toolList);

                    /**
                     * 判断参数 ToolList 是否已赋值
                     * @return ToolList 是否已赋值
                     * 
                     */
                    bool ToolListHasBeenSet() const;

                private:

                    /**
                     * <p>插件id</p>
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * <p>插件版本号</p>
                     */
                    int64_t m_pluginVersion;
                    bool m_pluginVersionHasBeenSet;

                    /**
                     * <p>插件基础资料</p>
                     */
                    PluginProfile m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * <p>插件类型配置</p>
                     */
                    PluginConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>指定需要更新的字段，避免全量覆盖</p>
                     */
                    FieldMask m_updateMask;
                    bool m_updateMaskHasBeenSet;

                    /**
                     * <p>插件的工具列表，mcp插件不传</p>
                     */
                    std::vector<Tool> m_toolList;
                    bool m_toolListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYPLUGINREQUEST_H_
