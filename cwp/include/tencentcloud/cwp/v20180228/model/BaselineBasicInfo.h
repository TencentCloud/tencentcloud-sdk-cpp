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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEBASICINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEBASICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 基线基础信息
                */
                class BaselineBasicInfo : public AbstractModel
                {
                public:
                    BaselineBasicInfo();
                    ~BaselineBasicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取基线名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 基线名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置基线名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 基线名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取基线id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BaselineId 基线id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetBaselineId() const;

                    /**
                     * 设置基线id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BaselineId 基线id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBaselineId(const uint64_t& _baselineId);

                    /**
                     * 判断参数 BaselineId 是否已赋值
                     * @return BaselineId 是否已赋值
                     */
                    bool BaselineIdHasBeenSet() const;

                    /**
                     * 获取父级id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentId 父级id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetParentId() const;

                    /**
                     * 设置父级id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ParentId 父级id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetParentId(const uint64_t& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     */
                    bool ParentIdHasBeenSet() const;

                private:

                    /**
                     * 基线名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 基线id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_baselineId;
                    bool m_baselineIdHasBeenSet;

                    /**
                     * 父级id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEBASICINFO_H_
