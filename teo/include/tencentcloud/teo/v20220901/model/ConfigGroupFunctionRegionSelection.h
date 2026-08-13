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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPFUNCTIONREGIONSELECTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPFUNCTIONREGIONSELECTION_H_

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
                * 地区策略配置。
                */
                class ConfigGroupFunctionRegionSelection : public AbstractModel
                {
                public:
                    ConfigGroupFunctionRegionSelection();
                    ~ConfigGroupFunctionRegionSelection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>指定执行的函数，取值为函数在站点内的唯一标识。当 TriggerType 为 direct 时生效。</p>
                     * @return Function <p>指定执行的函数，取值为函数在站点内的唯一标识。当 TriggerType 为 direct 时生效。</p>
                     * 
                     */
                    std::string GetFunction() const;

                    /**
                     * 设置<p>指定执行的函数，取值为函数在站点内的唯一标识。当 TriggerType 为 direct 时生效。</p>
                     * @param _function <p>指定执行的函数，取值为函数在站点内的唯一标识。当 TriggerType 为 direct 时生效。</p>
                     * 
                     */
                    void SetFunction(const std::string& _function);

                    /**
                     * 判断参数 Function 是否已赋值
                     * @return Function 是否已赋值
                     * 
                     */
                    bool FunctionHasBeenSet() const;

                    /**
                     * 获取<p>国家/地区列表。示例值：CN：中国，CN.GD：中国广东。取值请参考：<a href="https://cloud.tencent.com/document/product/1552/112542">国家/地区及对应代码枚举</a>。</p>
                     * @return Regions <p>国家/地区列表。示例值：CN：中国，CN.GD：中国广东。取值请参考：<a href="https://cloud.tencent.com/document/product/1552/112542">国家/地区及对应代码枚举</a>。</p>
                     * 
                     */
                    std::vector<std::string> GetRegions() const;

                    /**
                     * 设置<p>国家/地区列表。示例值：CN：中国，CN.GD：中国广东。取值请参考：<a href="https://cloud.tencent.com/document/product/1552/112542">国家/地区及对应代码枚举</a>。</p>
                     * @param _regions <p>国家/地区列表。示例值：CN：中国，CN.GD：中国广东。取值请参考：<a href="https://cloud.tencent.com/document/product/1552/112542">国家/地区及对应代码枚举</a>。</p>
                     * 
                     */
                    void SetRegions(const std::vector<std::string>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * 
                     */
                    bool RegionsHasBeenSet() const;

                private:

                    /**
                     * <p>指定执行的函数，取值为函数在站点内的唯一标识。当 TriggerType 为 direct 时生效。</p>
                     */
                    std::string m_function;
                    bool m_functionHasBeenSet;

                    /**
                     * <p>国家/地区列表。示例值：CN：中国，CN.GD：中国广东。取值请参考：<a href="https://cloud.tencent.com/document/product/1552/112542">国家/地区及对应代码枚举</a>。</p>
                     */
                    std::vector<std::string> m_regions;
                    bool m_regionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPFUNCTIONREGIONSELECTION_H_
