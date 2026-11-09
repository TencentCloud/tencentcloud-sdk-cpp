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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINUSAGEDETAIL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINUSAGEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ResourceConsumption.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 插件调用明细
                */
                class PluginUsageDetail : public AbstractModel
                {
                public:
                    PluginUsageDetail();
                    ~PluginUsageDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>连接器与工具名称</p>
                     * @return PluginName <p>连接器与工具名称</p>
                     * 
                     */
                    std::string GetPluginName() const;

                    /**
                     * 设置<p>连接器与工具名称</p>
                     * @param _pluginName <p>连接器与工具名称</p>
                     * 
                     */
                    void SetPluginName(const std::string& _pluginName);

                    /**
                     * 判断参数 PluginName 是否已赋值
                     * @return PluginName 是否已赋值
                     * 
                     */
                    bool PluginNameHasBeenSet() const;

                    /**
                     * 获取<p>插件单次调用计量：TOKEN 总量用 total_tokens（兼容空 Label），输入/输出用 input/output；其余消耗量按 Unit 区分，PU 的 Label 为 total_pu</p>
                     * @return ResourceConsumptionList <p>插件单次调用计量：TOKEN 总量用 total_tokens（兼容空 Label），输入/输出用 input/output；其余消耗量按 Unit 区分，PU 的 Label 为 total_pu</p>
                     * 
                     */
                    std::vector<ResourceConsumption> GetResourceConsumptionList() const;

                    /**
                     * 设置<p>插件单次调用计量：TOKEN 总量用 total_tokens（兼容空 Label），输入/输出用 input/output；其余消耗量按 Unit 区分，PU 的 Label 为 total_pu</p>
                     * @param _resourceConsumptionList <p>插件单次调用计量：TOKEN 总量用 total_tokens（兼容空 Label），输入/输出用 input/output；其余消耗量按 Unit 区分，PU 的 Label 为 total_pu</p>
                     * 
                     */
                    void SetResourceConsumptionList(const std::vector<ResourceConsumption>& _resourceConsumptionList);

                    /**
                     * 判断参数 ResourceConsumptionList 是否已赋值
                     * @return ResourceConsumptionList 是否已赋值
                     * 
                     */
                    bool ResourceConsumptionListHasBeenSet() const;

                    /**
                     * 获取<p>工具名称</p>
                     * @return ToolName <p>工具名称</p>
                     * 
                     */
                    std::string GetToolName() const;

                    /**
                     * 设置<p>工具名称</p>
                     * @param _toolName <p>工具名称</p>
                     * 
                     */
                    void SetToolName(const std::string& _toolName);

                    /**
                     * 判断参数 ToolName 是否已赋值
                     * @return ToolName 是否已赋值
                     * 
                     */
                    bool ToolNameHasBeenSet() const;

                private:

                    /**
                     * <p>连接器与工具名称</p>
                     */
                    std::string m_pluginName;
                    bool m_pluginNameHasBeenSet;

                    /**
                     * <p>插件单次调用计量：TOKEN 总量用 total_tokens（兼容空 Label），输入/输出用 input/output；其余消耗量按 Unit 区分，PU 的 Label 为 total_pu</p>
                     */
                    std::vector<ResourceConsumption> m_resourceConsumptionList;
                    bool m_resourceConsumptionListHasBeenSet;

                    /**
                     * <p>工具名称</p>
                     */
                    std::string m_toolName;
                    bool m_toolNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINUSAGEDETAIL_H_
