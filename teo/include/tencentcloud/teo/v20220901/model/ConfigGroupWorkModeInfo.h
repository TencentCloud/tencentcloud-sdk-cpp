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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPWORKMODEINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPWORKMODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 版本管理配置组工作模式信息。
                */
                class ConfigGroupWorkModeInfo : public AbstractModel
                {
                public:
                    ConfigGroupWorkModeInfo();
                    ~ConfigGroupWorkModeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置组类型，可选项如下：<li>l7_acceleration: 七层加速配置组；</li><li>edge_functions: 边缘函数配置组。</li>
                     * @return ConfigGroupType 配置组类型，可选项如下：<li>l7_acceleration: 七层加速配置组；</li><li>edge_functions: 边缘函数配置组。</li>
                     * 
                     */
                    std::string GetConfigGroupType() const;

                    /**
                     * 设置配置组类型，可选项如下：<li>l7_acceleration: 七层加速配置组；</li><li>edge_functions: 边缘函数配置组。</li>
                     * @param _configGroupType 配置组类型，可选项如下：<li>l7_acceleration: 七层加速配置组；</li><li>edge_functions: 边缘函数配置组。</li>
                     * 
                     */
                    void SetConfigGroupType(const std::string& _configGroupType);

                    /**
                     * 判断参数 ConfigGroupType 是否已赋值
                     * @return ConfigGroupType 是否已赋值
                     * 
                     */
                    bool ConfigGroupTypeHasBeenSet() const;

                    /**
                     * 获取工作模式，可选项如下：<li>immediate_effect: 即时生效模式；</li><li>version_control: 版本管理模式。</li>
                     * @return WorkMode 工作模式，可选项如下：<li>immediate_effect: 即时生效模式；</li><li>version_control: 版本管理模式。</li>
                     * 
                     */
                    std::string GetWorkMode() const;

                    /**
                     * 设置工作模式，可选项如下：<li>immediate_effect: 即时生效模式；</li><li>version_control: 版本管理模式。</li>
                     * @param _workMode 工作模式，可选项如下：<li>immediate_effect: 即时生效模式；</li><li>version_control: 版本管理模式。</li>
                     * 
                     */
                    void SetWorkMode(const std::string& _workMode);

                    /**
                     * 判断参数 WorkMode 是否已赋值
                     * @return WorkMode 是否已赋值
                     * 
                     */
                    bool WorkModeHasBeenSet() const;

                private:

                    /**
                     * 配置组类型，可选项如下：<li>l7_acceleration: 七层加速配置组；</li><li>edge_functions: 边缘函数配置组。</li>
                     */
                    std::string m_configGroupType;
                    bool m_configGroupTypeHasBeenSet;

                    /**
                     * 工作模式，可选项如下：<li>immediate_effect: 即时生效模式；</li><li>version_control: 版本管理模式。</li>
                     */
                    std::string m_workMode;
                    bool m_workModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPWORKMODEINFO_H_
