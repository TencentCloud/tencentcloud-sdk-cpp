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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINUSAGESUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINUSAGESUMMARY_H_

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
                * 插件资源用量聚合明细（PLUGIN 域专属）
                */
                class PluginUsageSummary : public AbstractModel
                {
                public:
                    PluginUsageSummary();
                    ~PluginUsageSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>调用次数（业务调用维度的顶层计数）</p>
                     * @return CallCount <p>调用次数（业务调用维度的顶层计数）</p>
                     * 
                     */
                    double GetCallCount() const;

                    /**
                     * 设置<p>调用次数（业务调用维度的顶层计数）</p>
                     * @param _callCount <p>调用次数（业务调用维度的顶层计数）</p>
                     * 
                     */
                    void SetCallCount(const double& _callCount);

                    /**
                     * 判断参数 CallCount 是否已赋值
                     * @return CallCount 是否已赋值
                     * 
                     */
                    bool CallCountHasBeenSet() const;

                    /**
                     * 获取<p>PLUGIN 域消耗计量列表（权威字段）：按单位+label 分项列出每类计量。unit=TOKEN 时 label 区分 Token 子类别（input/output/avg_*），label 为空表示 total_tokens</p>
                     * @return ResourceConsumptionList <p>PLUGIN 域消耗计量列表（权威字段）：按单位+label 分项列出每类计量。unit=TOKEN 时 label 区分 Token 子类别（input/output/avg_*），label 为空表示 total_tokens</p>
                     * 
                     */
                    std::vector<ResourceConsumption> GetResourceConsumptionList() const;

                    /**
                     * 设置<p>PLUGIN 域消耗计量列表（权威字段）：按单位+label 分项列出每类计量。unit=TOKEN 时 label 区分 Token 子类别（input/output/avg_*），label 为空表示 total_tokens</p>
                     * @param _resourceConsumptionList <p>PLUGIN 域消耗计量列表（权威字段）：按单位+label 分项列出每类计量。unit=TOKEN 时 label 区分 Token 子类别（input/output/avg_*），label 为空表示 total_tokens</p>
                     * 
                     */
                    void SetResourceConsumptionList(const std::vector<ResourceConsumption>& _resourceConsumptionList);

                    /**
                     * 判断参数 ResourceConsumptionList 是否已赋值
                     * @return ResourceConsumptionList 是否已赋值
                     * 
                     */
                    bool ResourceConsumptionListHasBeenSet() const;

                private:

                    /**
                     * <p>调用次数（业务调用维度的顶层计数）</p>
                     */
                    double m_callCount;
                    bool m_callCountHasBeenSet;

                    /**
                     * <p>PLUGIN 域消耗计量列表（权威字段）：按单位+label 分项列出每类计量。unit=TOKEN 时 label 区分 Token 子类别（input/output/avg_*），label 为空表示 total_tokens</p>
                     */
                    std::vector<ResourceConsumption> m_resourceConsumptionList;
                    bool m_resourceConsumptionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINUSAGESUMMARY_H_
