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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_PARTITION_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_PARTITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * 磁盘分区数据
                */
                class Partition : public AbstractModel
                {
                public:
                    Partition();
                    ~Partition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取磁盘名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 磁盘名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置磁盘名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 磁盘名
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
                     * 获取总容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 总容量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTotal() const;

                    /**
                     * 设置总容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total 总容量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotal(const double& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取使用量,39.31%
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Usage 使用量,39.31%
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetUsage() const;

                    /**
                     * 设置使用量,39.31%
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usage 使用量,39.31%
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsage(const double& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                private:

                    /**
                     * 磁盘名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 总容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 使用量,39.31%
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_usage;
                    bool m_usageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_PARTITION_H_
