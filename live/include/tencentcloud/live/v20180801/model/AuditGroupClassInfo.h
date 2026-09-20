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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITGROUPCLASSINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITGROUPCLASSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/AuditLabelGroupInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 直播审核标签分组数据
                */
                class AuditGroupClassInfo : public AbstractModel
                {
                public:
                    AuditGroupClassInfo();
                    ~AuditGroupClassInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>标签组分类中文名。</p>
                     * @return GroupClassName <p>标签组分类中文名。</p>
                     * 
                     */
                    std::string GetGroupClassName() const;

                    /**
                     * 设置<p>标签组分类中文名。</p>
                     * @param _groupClassName <p>标签组分类中文名。</p>
                     * 
                     */
                    void SetGroupClassName(const std::string& _groupClassName);

                    /**
                     * 判断参数 GroupClassName 是否已赋值
                     * @return GroupClassName 是否已赋值
                     * 
                     */
                    bool GroupClassNameHasBeenSet() const;

                    /**
                     * 获取<p>标签组分类英文名。</p>
                     * @return GroupClassEname <p>标签组分类英文名。</p>
                     * 
                     */
                    std::string GetGroupClassEname() const;

                    /**
                     * 设置<p>标签组分类英文名。</p>
                     * @param _groupClassEname <p>标签组分类英文名。</p>
                     * 
                     */
                    void SetGroupClassEname(const std::string& _groupClassEname);

                    /**
                     * 判断参数 GroupClassEname 是否已赋值
                     * @return GroupClassEname 是否已赋值
                     * 
                     */
                    bool GroupClassEnameHasBeenSet() const;

                    /**
                     * 获取<p>标签组列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelGroupList <p>标签组列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AuditLabelGroupInfo> GetLabelGroupList() const;

                    /**
                     * 设置<p>标签组列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelGroupList <p>标签组列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelGroupList(const std::vector<AuditLabelGroupInfo>& _labelGroupList);

                    /**
                     * 判断参数 LabelGroupList 是否已赋值
                     * @return LabelGroupList 是否已赋值
                     * 
                     */
                    bool LabelGroupListHasBeenSet() const;

                private:

                    /**
                     * <p>标签组分类中文名。</p>
                     */
                    std::string m_groupClassName;
                    bool m_groupClassNameHasBeenSet;

                    /**
                     * <p>标签组分类英文名。</p>
                     */
                    std::string m_groupClassEname;
                    bool m_groupClassEnameHasBeenSet;

                    /**
                     * <p>标签组列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AuditLabelGroupInfo> m_labelGroupList;
                    bool m_labelGroupListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITGROUPCLASSINFO_H_
