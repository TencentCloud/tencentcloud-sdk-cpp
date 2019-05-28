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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_GROUPINFO_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_GROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 返回的人员库信息
                */
                class GroupInfo : public AbstractModel
                {
                public:
                    GroupInfo();
                    ~GroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人员库名称
                     * @return GroupName 人员库名称
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置人员库名称
                     * @param GroupName 人员库名称
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取人员库ID
                     * @return GroupId 人员库ID
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置人员库ID
                     * @param GroupId 人员库ID
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取人员库自定义描述字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupExDescriptions 人员库自定义描述字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetGroupExDescriptions() const;

                    /**
                     * 设置人员库自定义描述字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupExDescriptions 人员库自定义描述字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupExDescriptions(const std::vector<std::string>& _groupExDescriptions);

                    /**
                     * 判断参数 GroupExDescriptions 是否已赋值
                     * @return GroupExDescriptions 是否已赋值
                     */
                    bool GroupExDescriptionsHasBeenSet() const;

                    /**
                     * 获取人员库信息备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tag 人员库信息备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTag() const;

                    /**
                     * 设置人员库信息备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tag 人员库信息备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * 人员库名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 人员库ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 人员库自定义描述字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_groupExDescriptions;
                    bool m_groupExDescriptionsHasBeenSet;

                    /**
                     * 人员库信息备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_GROUPINFO_H_
