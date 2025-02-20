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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_GROUPINFO_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_GROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * 获取群组列表返回的群组信息
                */
                class GroupInfo : public AbstractModel
                {
                public:
                    GroupInfo();
                    ~GroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取群组ID
                     * @return GroupId 群组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置群组ID
                     * @param _groupId 群组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取群组名称
                     * @return GroupName 群组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置群组名称
                     * @param _groupName 群组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取群组主讲人ID
                     * @return TeacherId 群组主讲人ID
                     * 
                     */
                    std::string GetTeacherId() const;

                    /**
                     * 设置群组主讲人ID
                     * @param _teacherId 群组主讲人ID
                     * 
                     */
                    void SetTeacherId(const std::string& _teacherId);

                    /**
                     * 判断参数 TeacherId 是否已赋值
                     * @return TeacherId 是否已赋值
                     * 
                     */
                    bool TeacherIdHasBeenSet() const;

                    /**
                     * 获取群组类型 
0-基础群组 
1-组合群组，若为1时会返回子群组ID列表
                     * @return GroupType 群组类型 
0-基础群组 
1-组合群组，若为1时会返回子群组ID列表
                     * 
                     */
                    uint64_t GetGroupType() const;

                    /**
                     * 设置群组类型 
0-基础群组 
1-组合群组，若为1时会返回子群组ID列表
                     * @param _groupType 群组类型 
0-基础群组 
1-组合群组，若为1时会返回子群组ID列表
                     * 
                     */
                    void SetGroupType(const uint64_t& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取子群组ID列表，如有。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubGroupIds 子群组ID列表，如有。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubGroupIds() const;

                    /**
                     * 设置子群组ID列表，如有。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subGroupIds 子群组ID列表，如有。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubGroupIds(const std::string& _subGroupIds);

                    /**
                     * 判断参数 SubGroupIds 是否已赋值
                     * @return SubGroupIds 是否已赋值
                     * 
                     */
                    bool SubGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 群组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 群组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 群组主讲人ID
                     */
                    std::string m_teacherId;
                    bool m_teacherIdHasBeenSet;

                    /**
                     * 群组类型 
0-基础群组 
1-组合群组，若为1时会返回子群组ID列表
                     */
                    uint64_t m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * 子群组ID列表，如有。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subGroupIds;
                    bool m_subGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_GROUPINFO_H_
