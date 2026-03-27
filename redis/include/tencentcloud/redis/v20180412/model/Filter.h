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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_FILTER_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_FILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 业务侧实例过滤参数
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>过滤字段。</p><p>枚举值：</p><ul><li>InstanceId： 实例 ID。</li><li>InstanceName： 实例名称。</li><li>TagKey： 标签键。</li><li>InstanceTags： 实例标签键值，标签key值&amp;标签value值。</li></ul>
                     * @return Name <p>过滤字段。</p><p>枚举值：</p><ul><li>InstanceId： 实例 ID。</li><li>InstanceName： 实例名称。</li><li>TagKey： 标签键。</li><li>InstanceTags： 实例标签键值，标签key值&amp;标签value值。</li></ul>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>过滤字段。</p><p>枚举值：</p><ul><li>InstanceId： 实例 ID。</li><li>InstanceName： 实例名称。</li><li>TagKey： 标签键。</li><li>InstanceTags： 实例标签键值，标签key值&amp;标签value值。</li></ul>
                     * @param _name <p>过滤字段。</p><p>枚举值：</p><ul><li>InstanceId： 实例 ID。</li><li>InstanceName： 实例名称。</li><li>TagKey： 标签键。</li><li>InstanceTags： 实例标签键值，标签key值&amp;标签value值。</li></ul>
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
                     * 获取<p>过滤字段的值。</p>
                     * @return Values <p>过滤字段的值。</p>
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置<p>过滤字段的值。</p>
                     * @param _values <p>过滤字段的值。</p>
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取<p>精确匹配开关。</p><ul><li>false：关闭。</li><li>true：开启。</li></ul>
                     * @return ExactMatch <p>精确匹配开关。</p><ul><li>false：关闭。</li><li>true：开启。</li></ul>
                     * 
                     */
                    bool GetExactMatch() const;

                    /**
                     * 设置<p>精确匹配开关。</p><ul><li>false：关闭。</li><li>true：开启。</li></ul>
                     * @param _exactMatch <p>精确匹配开关。</p><ul><li>false：关闭。</li><li>true：开启。</li></ul>
                     * 
                     */
                    void SetExactMatch(const bool& _exactMatch);

                    /**
                     * 判断参数 ExactMatch 是否已赋值
                     * @return ExactMatch 是否已赋值
                     * 
                     */
                    bool ExactMatchHasBeenSet() const;

                private:

                    /**
                     * <p>过滤字段。</p><p>枚举值：</p><ul><li>InstanceId： 实例 ID。</li><li>InstanceName： 实例名称。</li><li>TagKey： 标签键。</li><li>InstanceTags： 实例标签键值，标签key值&amp;标签value值。</li></ul>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>过滤字段的值。</p>
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * <p>精确匹配开关。</p><ul><li>false：关闭。</li><li>true：开启。</li></ul>
                     */
                    bool m_exactMatch;
                    bool m_exactMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_FILTER_H_
