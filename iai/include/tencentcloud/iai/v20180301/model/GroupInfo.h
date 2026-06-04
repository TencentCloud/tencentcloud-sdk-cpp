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
                     * 获取<p>人员库名称</p>
                     * @return GroupName <p>人员库名称</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>人员库名称</p>
                     * @param _groupName <p>人员库名称</p>
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
                     * 获取<p>人员库ID</p>
                     * @return GroupId <p>人员库ID</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>人员库ID</p>
                     * @param _groupId <p>人员库ID</p>
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
                     * 获取<p>人员库自定义描述字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupExDescriptions <p>人员库自定义描述字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetGroupExDescriptions() const;

                    /**
                     * 设置<p>人员库自定义描述字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupExDescriptions <p>人员库自定义描述字段</p>
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
                     * 获取<p>人员库信息备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tag <p>人员库信息备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置<p>人员库信息备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tag <p>人员库信息备注</p>
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
                     * 获取<p>人脸识别所用的算法模型版本。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FaceModelVersion <p>人脸识别所用的算法模型版本。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFaceModelVersion() const;

                    /**
                     * 设置<p>人脸识别所用的算法模型版本。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _faceModelVersion <p>人脸识别所用的算法模型版本。</p>
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
                     * 获取<p>Group的创建时间和日期 CreationTimestamp。CreationTimestamp 的值是自 Unix 纪元时间到Group创建时间的毫秒数。<br>Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 00:00:00。有关更多信息，请参阅 Unix 时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreationTimestamp <p>Group的创建时间和日期 CreationTimestamp。CreationTimestamp 的值是自 Unix 纪元时间到Group创建时间的毫秒数。<br>Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 00:00:00。有关更多信息，请参阅 Unix 时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCreationTimestamp() const;

                    /**
                     * 设置<p>Group的创建时间和日期 CreationTimestamp。CreationTimestamp 的值是自 Unix 纪元时间到Group创建时间的毫秒数。<br>Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 00:00:00。有关更多信息，请参阅 Unix 时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creationTimestamp <p>Group的创建时间和日期 CreationTimestamp。CreationTimestamp 的值是自 Unix 纪元时间到Group创建时间的毫秒数。<br>Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 00:00:00。有关更多信息，请参阅 Unix 时间。</p>
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

                    /**
                     * 获取<p>Group的更新时间和日期 UpdateTimestamp。<br>UpdateTimestamp 的值是自 Unix 纪元时间到Group更新时间的毫秒数。<br>Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 00:00:00。<br>有关更多信息，请参阅 Unix 时间。</p>
                     * @return UpdateTimestamp <p>Group的更新时间和日期 UpdateTimestamp。<br>UpdateTimestamp 的值是自 Unix 纪元时间到Group更新时间的毫秒数。<br>Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 00:00:00。<br>有关更多信息，请参阅 Unix 时间。</p>
                     * 
                     */
                    uint64_t GetUpdateTimestamp() const;

                    /**
                     * 设置<p>Group的更新时间和日期 UpdateTimestamp。<br>UpdateTimestamp 的值是自 Unix 纪元时间到Group更新时间的毫秒数。<br>Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 00:00:00。<br>有关更多信息，请参阅 Unix 时间。</p>
                     * @param _updateTimestamp <p>Group的更新时间和日期 UpdateTimestamp。<br>UpdateTimestamp 的值是自 Unix 纪元时间到Group更新时间的毫秒数。<br>Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 00:00:00。<br>有关更多信息，请参阅 Unix 时间。</p>
                     * 
                     */
                    void SetUpdateTimestamp(const uint64_t& _updateTimestamp);

                    /**
                     * 判断参数 UpdateTimestamp 是否已赋值
                     * @return UpdateTimestamp 是否已赋值
                     * 
                     */
                    bool UpdateTimestampHasBeenSet() const;

                private:

                    /**
                     * <p>人员库名称</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>人员库ID</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>人员库自定义描述字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_groupExDescriptions;
                    bool m_groupExDescriptionsHasBeenSet;

                    /**
                     * <p>人员库信息备注</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>人脸识别所用的算法模型版本。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_faceModelVersion;
                    bool m_faceModelVersionHasBeenSet;

                    /**
                     * <p>Group的创建时间和日期 CreationTimestamp。CreationTimestamp 的值是自 Unix 纪元时间到Group创建时间的毫秒数。<br>Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 00:00:00。有关更多信息，请参阅 Unix 时间。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_creationTimestamp;
                    bool m_creationTimestampHasBeenSet;

                    /**
                     * <p>Group的更新时间和日期 UpdateTimestamp。<br>UpdateTimestamp 的值是自 Unix 纪元时间到Group更新时间的毫秒数。<br>Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 00:00:00。<br>有关更多信息，请参阅 Unix 时间。</p>
                     */
                    uint64_t m_updateTimestamp;
                    bool m_updateTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_GROUPINFO_H_
