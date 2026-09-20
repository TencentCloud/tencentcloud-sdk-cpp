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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITGROUPINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/AuditGroupClassInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 直播审核标签分组信息
                */
                class AuditGroupInfo : public AbstractModel
                {
                public:
                    AuditGroupInfo();
                    ~AuditGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>标签类型。<br>可取值：TagImage，TagText，TagAudio。</p>
                     * @return TagType <p>标签类型。<br>可取值：TagImage，TagText，TagAudio。</p>
                     * 
                     */
                    std::string GetTagType() const;

                    /**
                     * 设置<p>标签类型。<br>可取值：TagImage，TagText，TagAudio。</p>
                     * @param _tagType <p>标签类型。<br>可取值：TagImage，TagText，TagAudio。</p>
                     * 
                     */
                    void SetTagType(const std::string& _tagType);

                    /**
                     * 判断参数 TagType 是否已赋值
                     * @return TagType 是否已赋值
                     * 
                     */
                    bool TagTypeHasBeenSet() const;

                    /**
                     * 获取<p>标签组分类列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupClassList <p>标签组分类列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AuditGroupClassInfo> GetGroupClassList() const;

                    /**
                     * 设置<p>标签组分类列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupClassList <p>标签组分类列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupClassList(const std::vector<AuditGroupClassInfo>& _groupClassList);

                    /**
                     * 判断参数 GroupClassList 是否已赋值
                     * @return GroupClassList 是否已赋值
                     * 
                     */
                    bool GroupClassListHasBeenSet() const;

                private:

                    /**
                     * <p>标签类型。<br>可取值：TagImage，TagText，TagAudio。</p>
                     */
                    std::string m_tagType;
                    bool m_tagTypeHasBeenSet;

                    /**
                     * <p>标签组分类列表。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AuditGroupClassInfo> m_groupClassList;
                    bool m_groupClassListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITGROUPINFO_H_
