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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_CLOUDFILTER_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_CLOUDFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 通用过滤条件。Name 为字段名，Values 为字段候选值；字段间 AND、Values 内 OR。
                */
                class CloudFilter : public AbstractModel
                {
                public:
                    CloudFilter();
                    ~CloudFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>过滤字段名。DescribeRegistryList 支持 <code>name</code> / <code>search</code>（模糊搜索）与 <code>archived</code> / <code>status</code>（true / false / all）；DescribeRegistryRecordList 支持 <code>name</code> / <code>search</code>（模糊）、<code>descriptor-type</code>、<code>lifecycle-status</code>（精确）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>过滤字段名。DescribeRegistryList 支持 <code>name</code> / <code>search</code>（模糊搜索）与 <code>archived</code> / <code>status</code>（true / false / all）；DescribeRegistryRecordList 支持 <code>name</code> / <code>search</code>（模糊）、<code>descriptor-type</code>、<code>lifecycle-status</code>（精确）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>过滤字段名。DescribeRegistryList 支持 <code>name</code> / <code>search</code>（模糊搜索）与 <code>archived</code> / <code>status</code>（true / false / all）；DescribeRegistryRecordList 支持 <code>name</code> / <code>search</code>（模糊）、<code>descriptor-type</code>、<code>lifecycle-status</code>（精确）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>过滤字段名。DescribeRegistryList 支持 <code>name</code> / <code>search</code>（模糊搜索）与 <code>archived</code> / <code>status</code>（true / false / all）；DescribeRegistryRecordList 支持 <code>name</code> / <code>search</code>（模糊）、<code>descriptor-type</code>、<code>lifecycle-status</code>（精确）。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>过滤字段候选值列表；至少 1 项。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Values <p>过滤字段候选值列表；至少 1 项。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置<p>过滤字段候选值列表；至少 1 项。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _values <p>过滤字段候选值列表；至少 1 项。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * <p>过滤字段名。DescribeRegistryList 支持 <code>name</code> / <code>search</code>（模糊搜索）与 <code>archived</code> / <code>status</code>（true / false / all）；DescribeRegistryRecordList 支持 <code>name</code> / <code>search</code>（模糊）、<code>descriptor-type</code>、<code>lifecycle-status</code>（精确）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>过滤字段候选值列表；至少 1 项。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CLOUDFILTER_H_
