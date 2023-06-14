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
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置人员库名称
                     * @param _groupName 人员库名称
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
                     * 获取人员库ID
                     * @return GroupId 人员库ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置人员库ID
                     * @param _groupId 人员库ID
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
                     * 获取人员库自定义描述字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupExDescriptions 人员库自定义描述字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetGroupExDescriptions() const;

                    /**
                     * 设置人员库自定义描述字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupExDescriptions 人员库自定义描述字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupExDescriptions(const std::vector<std::string>& _groupExDescriptions);

                    /**
                     * 判断参数 GroupExDescriptions 是否已赋值
                     * @return GroupExDescriptions 是否已赋值
                     * 
                     */
                    bool GroupExDescriptionsHasBeenSet() const;

                    /**
                     * 获取人员库信息备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tag 人员库信息备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置人员库信息备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tag 人员库信息备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取人脸识别所用的算法模型版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FaceModelVersion 人脸识别所用的算法模型版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 设置人脸识别所用的算法模型版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _faceModelVersion 人脸识别所用的算法模型版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFaceModelVersion(const std::string& _faceModelVersion);

                    /**
                     * 判断参数 FaceModelVersion 是否已赋值
                     * @return FaceModelVersion 是否已赋值
                     * 
                     */
                    bool FaceModelVersionHasBeenSet() const;

                    /**
                     * 获取Group的创建时间和日期 CreationTimestamp。CreationTimestamp 的值是自 Unix 纪元时间到Group创建时间的毫秒数。 
Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 00:00:00。有关更多信息，请参阅 Unix 时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreationTimestamp Group的创建时间和日期 CreationTimestamp。CreationTimestamp 的值是自 Unix 纪元时间到Group创建时间的毫秒数。 
Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 00:00:00。有关更多信息，请参阅 Unix 时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCreationTimestamp() const;

                    /**
                     * 设置Group的创建时间和日期 CreationTimestamp。CreationTimestamp 的值是自 Unix 纪元时间到Group创建时间的毫秒数。 
Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 00:00:00。有关更多信息，请参阅 Unix 时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creationTimestamp Group的创建时间和日期 CreationTimestamp。CreationTimestamp 的值是自 Unix 纪元时间到Group创建时间的毫秒数。 
Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 00:00:00。有关更多信息，请参阅 Unix 时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreationTimestamp(const uint64_t& _creationTimestamp);

                    /**
                     * 判断参数 CreationTimestamp 是否已赋值
                     * @return CreationTimestamp 是否已赋值
                     * 
                     */
                    bool CreationTimestampHasBeenSet() const;

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

                    /**
                     * 人脸识别所用的算法模型版本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                    /**
                     * Group的创建时间和日期 CreationTimestamp。CreationTimestamp 的值是自 Unix 纪元时间到Group创建时间的毫秒数。 
Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 00:00:00。有关更多信息，请参阅 Unix 时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_creationTimestamp;
                    bool m_creationTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_GROUPINFO_H_
