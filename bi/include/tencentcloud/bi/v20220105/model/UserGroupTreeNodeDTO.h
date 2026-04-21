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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_USERGROUPTREENODEDTO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_USERGROUPTREENODEDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 用户组数节点
                */
                class UserGroupTreeNodeDTO : public AbstractModel
                {
                public:
                    UserGroupTreeNodeDTO();
                    ~UserGroupTreeNodeDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId 用户组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置用户组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupId 用户组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取是否查询子节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueryChildNodes 是否查询子节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetQueryChildNodes() const;

                    /**
                     * 设置是否查询子节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queryChildNodes 是否查询子节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueryChildNodes(const bool& _queryChildNodes);

                    /**
                     * 判断参数 QueryChildNodes 是否已赋值
                     * @return QueryChildNodes 是否已赋值
                     * 
                     */
                    bool QueryChildNodesHasBeenSet() const;

                private:

                    /**
                     * 用户组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 是否查询子节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_queryChildNodes;
                    bool m_queryChildNodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_USERGROUPTREENODEDTO_H_
