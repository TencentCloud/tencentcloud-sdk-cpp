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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_AUTOSCALINGCONFIG_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_AUTOSCALINGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * serverless实例的资源范围
ResourceType 为 cpu 时表示 ccu
为 nodecount 时表示节点数范围
                */
                class AutoScalingConfig : public AbstractModel
                {
                public:
                    AutoScalingConfig();
                    ~AutoScalingConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>ccu最小值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RangeMin <p>ccu最小值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRangeMin() const;

                    /**
                     * 设置<p>ccu最小值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rangeMin <p>ccu最小值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRangeMin(const double& _rangeMin);

                    /**
                     * 判断参数 RangeMin 是否已赋值
                     * @return RangeMin 是否已赋值
                     * 
                     */
                    bool RangeMinHasBeenSet() const;

                    /**
                     * 获取<p>ccu最大值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RangeMax <p>ccu最大值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRangeMax() const;

                    /**
                     * 设置<p>ccu最大值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rangeMax <p>ccu最大值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRangeMax(const double& _rangeMax);

                    /**
                     * 判断参数 RangeMax 是否已赋值
                     * @return RangeMax 是否已赋值
                     * 
                     */
                    bool RangeMaxHasBeenSet() const;

                    /**
                     * 获取<p>返回的 range 参数对应的资源类型</p><p>枚举值：</p><ul><li>cpu： 返回的是 cpu 调整返回限制，当不存在mem限制时代表 ccu</li><li>nodecount： 返回的是水平扩缩容的节点数限制范围</li></ul>
                     * @return ResourceType <p>返回的 range 参数对应的资源类型</p><p>枚举值：</p><ul><li>cpu： 返回的是 cpu 调整返回限制，当不存在mem限制时代表 ccu</li><li>nodecount： 返回的是水平扩缩容的节点数限制范围</li></ul>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>返回的 range 参数对应的资源类型</p><p>枚举值：</p><ul><li>cpu： 返回的是 cpu 调整返回限制，当不存在mem限制时代表 ccu</li><li>nodecount： 返回的是水平扩缩容的节点数限制范围</li></ul>
                     * @param _resourceType <p>返回的 range 参数对应的资源类型</p><p>枚举值：</p><ul><li>cpu： 返回的是 cpu 调整返回限制，当不存在mem限制时代表 ccu</li><li>nodecount： 返回的是水平扩缩容的节点数限制范围</li></ul>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                private:

                    /**
                     * <p>ccu最小值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_rangeMin;
                    bool m_rangeMinHasBeenSet;

                    /**
                     * <p>ccu最大值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_rangeMax;
                    bool m_rangeMaxHasBeenSet;

                    /**
                     * <p>返回的 range 参数对应的资源类型</p><p>枚举值：</p><ul><li>cpu： 返回的是 cpu 调整返回限制，当不存在mem限制时代表 ccu</li><li>nodecount： 返回的是水平扩缩容的节点数限制范围</li></ul>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_AUTOSCALINGCONFIG_H_
