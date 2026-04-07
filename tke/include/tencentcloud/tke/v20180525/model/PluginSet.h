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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_PLUGINSET_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_PLUGINSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/SchedulerPolicyPriority.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 管理调度插件(plugins)的启用和禁用
                */
                class PluginSet : public AbstractModel
                {
                public:
                    PluginSet();
                    ~PluginSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指定需要额外启用的插件列表
                     * @return Enabled 指定需要额外启用的插件列表
                     * 
                     */
                    std::vector<SchedulerPolicyPriority> GetEnabled() const;

                    /**
                     * 设置指定需要额外启用的插件列表
                     * @param _enabled 指定需要额外启用的插件列表
                     * 
                     */
                    void SetEnabled(const std::vector<SchedulerPolicyPriority>& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取指定需要禁用的默认插件列表
                     * @return Disabled 指定需要禁用的默认插件列表
                     * 
                     */
                    std::vector<SchedulerPolicyPriority> GetDisabled() const;

                    /**
                     * 设置指定需要禁用的默认插件列表
                     * @param _disabled 指定需要禁用的默认插件列表
                     * 
                     */
                    void SetDisabled(const std::vector<SchedulerPolicyPriority>& _disabled);

                    /**
                     * 判断参数 Disabled 是否已赋值
                     * @return Disabled 是否已赋值
                     * 
                     */
                    bool DisabledHasBeenSet() const;

                private:

                    /**
                     * 指定需要额外启用的插件列表
                     */
                    std::vector<SchedulerPolicyPriority> m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 指定需要禁用的默认插件列表
                     */
                    std::vector<SchedulerPolicyPriority> m_disabled;
                    bool m_disabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_PLUGINSET_H_
