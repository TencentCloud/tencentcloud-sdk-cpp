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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINSUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/PluginOperation.h>
#include <tencentcloud/adp/v20260520/model/PluginProfile.h>
#include <tencentcloud/adp/v20260520/model/PluginStatistics.h>
#include <tencentcloud/adp/v20260520/model/PluginUserState.h>
#include <tencentcloud/adp/v20260520/model/PluginConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 插件概要信息（用于插件列表）
                */
                class PluginSummary : public AbstractModel
                {
                public:
                    PluginSummary();
                    ~PluginSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>插件运营管理信息</p>
                     * @return Operation <p>插件运营管理信息</p>
                     * 
                     */
                    PluginOperation GetOperation() const;

                    /**
                     * 设置<p>插件运营管理信息</p>
                     * @param _operation <p>插件运营管理信息</p>
                     * 
                     */
                    void SetOperation(const PluginOperation& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

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
                     * 获取<p>插件基础信息</p>
                     * @return Profile <p>插件基础信息</p>
                     * 
                     */
                    PluginProfile GetProfile() const;

                    /**
                     * 设置<p>插件基础信息</p>
                     * @param _profile <p>插件基础信息</p>
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
                     * 获取<p>插件统计信息</p>
                     * @return Statistics <p>插件统计信息</p>
                     * 
                     */
                    PluginStatistics GetStatistics() const;

                    /**
                     * 设置<p>插件统计信息</p>
                     * @param _statistics <p>插件统计信息</p>
                     * 
                     */
                    void SetStatistics(const PluginStatistics& _statistics);

                    /**
                     * 判断参数 Statistics 是否已赋值
                     * @return Statistics 是否已赋值
                     * 
                     */
                    bool StatisticsHasBeenSet() const;

                    /**
                     * 获取<p>插件状态，1:可用，2:不可用 </p><p>枚举值：</p><ul><li>1： 可用</li><li>2： 不可用</li></ul>
                     * @return Status <p>插件状态，1:可用，2:不可用 </p><p>枚举值：</p><ul><li>1： 可用</li><li>2： 不可用</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>插件状态，1:可用，2:不可用 </p><p>枚举值：</p><ul><li>1： 可用</li><li>2： 不可用</li></ul>
                     * @param _status <p>插件状态，1:可用，2:不可用 </p><p>枚举值：</p><ul><li>1： 可用</li><li>2： 不可用</li></ul>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>用户维度的插件状态信息</p>
                     * @return UserState <p>用户维度的插件状态信息</p>
                     * 
                     */
                    PluginUserState GetUserState() const;

                    /**
                     * 设置<p>用户维度的插件状态信息</p>
                     * @param _userState <p>用户维度的插件状态信息</p>
                     * 
                     */
                    void SetUserState(const PluginUserState& _userState);

                    /**
                     * 判断参数 UserState 是否已赋值
                     * @return UserState 是否已赋值
                     * 
                     */
                    bool UserStateHasBeenSet() const;

                    /**
                     * 获取<p>插件配置信息</p>
                     * @return Config <p>插件配置信息</p>
                     * 
                     */
                    PluginConfig GetConfig() const;

                    /**
                     * 设置<p>插件配置信息</p>
                     * @param _config <p>插件配置信息</p>
                     * 
                     */
                    void SetConfig(const PluginConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * <p>插件运营管理信息</p>
                     */
                    PluginOperation m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * <p>插件id</p>
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * <p>插件基础信息</p>
                     */
                    PluginProfile m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * <p>插件统计信息</p>
                     */
                    PluginStatistics m_statistics;
                    bool m_statisticsHasBeenSet;

                    /**
                     * <p>插件状态，1:可用，2:不可用 </p><p>枚举值：</p><ul><li>1： 可用</li><li>2： 不可用</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>用户维度的插件状态信息</p>
                     */
                    PluginUserState m_userState;
                    bool m_userStateHasBeenSet;

                    /**
                     * <p>插件配置信息</p>
                     */
                    PluginConfig m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINSUMMARY_H_
