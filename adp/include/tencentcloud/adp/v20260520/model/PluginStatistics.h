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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINSTATISTICS_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * PluginStatistics
                */
                class PluginStatistics : public AbstractModel
                {
                public:
                    PluginStatistics();
                    ~PluginStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取插件调用量
                     * @return CallCount 插件调用量
                     * 
                     */
                    uint64_t GetCallCount() const;

                    /**
                     * 设置插件调用量
                     * @param _callCount 插件调用量
                     * 
                     */
                    void SetCallCount(const uint64_t& _callCount);

                    /**
                     * 判断参数 CallCount 是否已赋值
                     * @return CallCount 是否已赋值
                     * 
                     */
                    bool CallCountHasBeenSet() const;

                    /**
                     * 获取工具数量
                     * @return ToolCount 工具数量
                     * 
                     */
                    int64_t GetToolCount() const;

                    /**
                     * 设置工具数量
                     * @param _toolCount 工具数量
                     * 
                     */
                    void SetToolCount(const int64_t& _toolCount);

                    /**
                     * 判断参数 ToolCount 是否已赋值
                     * @return ToolCount 是否已赋值
                     * 
                     */
                    bool ToolCountHasBeenSet() const;

                private:

                    /**
                     * 插件调用量
                     */
                    uint64_t m_callCount;
                    bool m_callCountHasBeenSet;

                    /**
                     * 工具数量
                     */
                    int64_t m_toolCount;
                    bool m_toolCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINSTATISTICS_H_
