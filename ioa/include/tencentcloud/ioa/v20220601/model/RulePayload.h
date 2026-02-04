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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_RULEPAYLOAD_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_RULEPAYLOAD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/RulePayloadItem.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 条件筛选
                */
                class RulePayload : public AbstractModel
                {
                public:
                    RulePayload();
                    ~RulePayload() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取条件组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Groups 条件组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RulePayloadItem> GetGroups() const;

                    /**
                     * 设置条件组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groups 条件组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroups(const std::vector<RulePayloadItem>& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                    /**
                     * 获取条件关系 or/and
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelateOption 条件关系 or/and
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRelateOption() const;

                    /**
                     * 设置条件关系 or/and
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relateOption 条件关系 or/and
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRelateOption(const std::string& _relateOption);

                    /**
                     * 判断参数 RelateOption 是否已赋值
                     * @return RelateOption 是否已赋值
                     * 
                     */
                    bool RelateOptionHasBeenSet() const;

                private:

                    /**
                     * 条件组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RulePayloadItem> m_groups;
                    bool m_groupsHasBeenSet;

                    /**
                     * 条件关系 or/and
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_relateOption;
                    bool m_relateOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_RULEPAYLOAD_H_
