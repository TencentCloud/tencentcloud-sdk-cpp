/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_NAMESPACERESOURCE_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_NAMESPACERESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 命名空间下资源描述
                */
                class NamespaceResource : public AbstractModel
                {
                public:
                    NamespaceResource();
                    ~NamespaceResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型(workload|grid|configmap|secret)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 类型(workload|grid|configmap|secret)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型(workload|grid|configmap|secret)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 类型(workload|grid|configmap|secret)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Count 总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _count 总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取名称(最多返回5个）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Names 名称(最多返回5个）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置名称(最多返回5个）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _names 名称(最多返回5个）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     * 
                     */
                    bool NamesHasBeenSet() const;

                private:

                    /**
                     * 类型(workload|grid|configmap|secret)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 名称(最多返回5个）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_NAMESPACERESOURCE_H_
