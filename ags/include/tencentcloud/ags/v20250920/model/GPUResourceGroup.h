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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_GPURESOURCEGROUP_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_GPURESOURCEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/GPUResourceGroupSpec.h>
#include <tencentcloud/ags/v20250920/model/GPUResourceGroupStatistics.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * GPU 资源组元数据及统计；资源组是管理集合，期限和续费标记逐台保存。
                */
                class GPUResourceGroup : public AbstractModel
                {
                public:
                    GPUResourceGroup();
                    ~GPUResourceGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取GPU 资源组 ID。
                     * @return ResourceGroupId GPU 资源组 ID。
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置GPU 资源组 ID。
                     * @param _resourceGroupId GPU 资源组 ID。
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取资源组名称。
                     * @return Name 资源组名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置资源组名称。
                     * @param _name 资源组名称。
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
                     * 获取资源组固定规格；已下架规格的已购组仍可查询。
                     * @return Spec 资源组固定规格；已下架规格的已购组仍可查询。
                     * 
                     */
                    GPUResourceGroupSpec GetSpec() const;

                    /**
                     * 设置资源组固定规格；已下架规格的已购组仍可查询。
                     * @param _spec 资源组固定规格；已下架规格的已购组仍可查询。
                     * 
                     */
                    void SetSpec(const GPUResourceGroupSpec& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取当前资源统计。
                     * @return Statistics 当前资源统计。
                     * 
                     */
                    GPUResourceGroupStatistics GetStatistics() const;

                    /**
                     * 设置当前资源统计。
                     * @param _statistics 当前资源统计。
                     * 
                     */
                    void SetStatistics(const GPUResourceGroupStatistics& _statistics);

                    /**
                     * 判断参数 Statistics 是否已赋值
                     * @return Statistics 是否已赋值
                     * 
                     */
                    bool StatisticsHasBeenSet() const;

                private:

                    /**
                     * GPU 资源组 ID。
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 资源组名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 资源组固定规格；已下架规格的已购组仍可查询。
                     */
                    GPUResourceGroupSpec m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * 当前资源统计。
                     */
                    GPUResourceGroupStatistics m_statistics;
                    bool m_statisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_GPURESOURCEGROUP_H_
