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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTTOOL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTTOOL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentToolBasicConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Agent 工具详情
                */
                class AgentTool : public AbstractModel
                {
                public:
                    AgentTool();
                    ~AgentTool() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>工具配置字段</p>
                     * @return Config <p>工具配置字段</p>
                     * 
                     */
                    AgentToolBasicConfig GetConfig() const;

                    /**
                     * 设置<p>工具配置字段</p>
                     * @param _config <p>工具配置字段</p>
                     * 
                     */
                    void SetConfig(const AgentToolBasicConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取<p>工具名称</p>
                     * @return Name <p>工具名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>工具名称</p>
                     * @param _name <p>工具名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>工具状态</p><p>枚举值：</p><ul><li>1： 可用</li><li>2： 不可用</li><li>3： 已失效</li></ul>
                     * @return Status <p>工具状态</p><p>枚举值：</p><ul><li>1： 可用</li><li>2： 不可用</li><li>3： 已失效</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>工具状态</p><p>枚举值：</p><ul><li>1： 可用</li><li>2： 不可用</li><li>3： 已失效</li></ul>
                     * @param _status <p>工具状态</p><p>枚举值：</p><ul><li>1： 可用</li><li>2： 不可用</li><li>3： 已失效</li></ul>
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
                     * 获取<p>调用方式</p><p>枚举值：</p><ul><li>0： 非流式</li><li>1： 流式</li></ul>
                     * @return StreamMode <p>调用方式</p><p>枚举值：</p><ul><li>0： 非流式</li><li>1： 流式</li></ul>
                     * 
                     */
                    int64_t GetStreamMode() const;

                    /**
                     * 设置<p>调用方式</p><p>枚举值：</p><ul><li>0： 非流式</li><li>1： 流式</li></ul>
                     * @param _streamMode <p>调用方式</p><p>枚举值：</p><ul><li>0： 非流式</li><li>1： 流式</li></ul>
                     * 
                     */
                    void SetStreamMode(const int64_t& _streamMode);

                    /**
                     * 判断参数 StreamMode 是否已赋值
                     * @return StreamMode 是否已赋值
                     * 
                     */
                    bool StreamModeHasBeenSet() const;

                    /**
                     * 获取<p>工具访问模式</p><p>枚举值：</p><ul><li>0： 未指定</li><li>1： 只读</li><li>2： 写/删除</li></ul>
                     * @return ToolAccessMode <p>工具访问模式</p><p>枚举值：</p><ul><li>0： 未指定</li><li>1： 只读</li><li>2： 写/删除</li></ul>
                     * 
                     */
                    int64_t GetToolAccessMode() const;

                    /**
                     * 设置<p>工具访问模式</p><p>枚举值：</p><ul><li>0： 未指定</li><li>1： 只读</li><li>2： 写/删除</li></ul>
                     * @param _toolAccessMode <p>工具访问模式</p><p>枚举值：</p><ul><li>0： 未指定</li><li>1： 只读</li><li>2： 写/删除</li></ul>
                     * 
                     */
                    void SetToolAccessMode(const int64_t& _toolAccessMode);

                    /**
                     * 判断参数 ToolAccessMode 是否已赋值
                     * @return ToolAccessMode 是否已赋值
                     * 
                     */
                    bool ToolAccessModeHasBeenSet() const;

                private:

                    /**
                     * <p>工具配置字段</p>
                     */
                    AgentToolBasicConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>工具名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>工具状态</p><p>枚举值：</p><ul><li>1： 可用</li><li>2： 不可用</li><li>3： 已失效</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>调用方式</p><p>枚举值：</p><ul><li>0： 非流式</li><li>1： 流式</li></ul>
                     */
                    int64_t m_streamMode;
                    bool m_streamModeHasBeenSet;

                    /**
                     * <p>工具访问模式</p><p>枚举值：</p><ul><li>0： 未指定</li><li>1： 只读</li><li>2： 写/删除</li></ul>
                     */
                    int64_t m_toolAccessMode;
                    bool m_toolAccessModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTTOOL_H_
