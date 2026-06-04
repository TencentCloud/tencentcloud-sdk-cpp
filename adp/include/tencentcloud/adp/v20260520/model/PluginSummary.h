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
                     * 获取插件运营管理信息
                     * @return Operation 插件运营管理信息
                     * 
                     */
                    PluginOperation GetOperation() const;

                    /**
                     * 设置插件运营管理信息
                     * @param _operation 插件运营管理信息
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
                     * 获取插件id
                     * @return PluginId 插件id
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置插件id
                     * @param _pluginId 插件id
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
                     * 获取插件基础信息
                     * @return Profile 插件基础信息
                     * 
                     */
                    PluginProfile GetProfile() const;

                    /**
                     * 设置插件基础信息
                     * @param _profile 插件基础信息
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
                     * 获取插件统计信息
                     * @return Statistics 插件统计信息
                     * 
                     */
                    PluginStatistics GetStatistics() const;

                    /**
                     * 设置插件统计信息
                     * @param _statistics 插件统计信息
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
                     * 获取用户维度的插件状态信息
                     * @return UserState 用户维度的插件状态信息
                     * 
                     */
                    PluginUserState GetUserState() const;

                    /**
                     * 设置用户维度的插件状态信息
                     * @param _userState 用户维度的插件状态信息
                     * 
                     */
                    void SetUserState(const PluginUserState& _userState);

                    /**
                     * 判断参数 UserState 是否已赋值
                     * @return UserState 是否已赋值
                     * 
                     */
                    bool UserStateHasBeenSet() const;

                private:

                    /**
                     * 插件运营管理信息
                     */
                    PluginOperation m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 插件id
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * 插件基础信息
                     */
                    PluginProfile m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * 插件统计信息
                     */
                    PluginStatistics m_statistics;
                    bool m_statisticsHasBeenSet;

                    /**
                     * <p>插件状态，1:可用，2:不可用 </p><p>枚举值：</p><ul><li>1： 可用</li><li>2： 不可用</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 用户维度的插件状态信息
                     */
                    PluginUserState m_userState;
                    bool m_userStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINSUMMARY_H_
