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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CONTENTIDENTIFIER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CONTENTIDENTIFIER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Tag.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 内容标识符。该功能仅白名单开放。
                */
                class ContentIdentifier : public AbstractModel
                {
                public:
                    ContentIdentifier();
                    ~ContentIdentifier() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内容标识符 ID。
                     * @return ContentId 内容标识符 ID。
                     * 
                     */
                    std::string GetContentId() const;

                    /**
                     * 设置内容标识符 ID。
                     * @param _contentId 内容标识符 ID。
                     * 
                     */
                    void SetContentId(const std::string& _contentId);

                    /**
                     * 判断参数 ContentId 是否已赋值
                     * @return ContentId 是否已赋值
                     * 
                     */
                    bool ContentIdHasBeenSet() const;

                    /**
                     * 获取内容标识符描述。
                     * @return Description 内容标识符描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置内容标识符描述。
                     * @param _description 内容标识符描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取被规则引擎引用的次数。
                     * @return ReferenceCount 被规则引擎引用的次数。
                     * 
                     */
                    int64_t GetReferenceCount() const;

                    /**
                     * 设置被规则引擎引用的次数。
                     * @param _referenceCount 被规则引擎引用的次数。
                     * 
                     */
                    void SetReferenceCount(const int64_t& _referenceCount);

                    /**
                     * 判断参数 ReferenceCount 是否已赋值
                     * @return ReferenceCount 是否已赋值
                     * 
                     */
                    bool ReferenceCountHasBeenSet() const;

                    /**
                     * 获取绑定的套餐 ID。
                     * @return PlanId 绑定的套餐 ID。
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置绑定的套餐 ID。
                     * @param _planId 绑定的套餐 ID。
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取绑定的标签。
                     * @return Tags 绑定的标签。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置绑定的标签。
                     * @param _tags 绑定的标签。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取内容标识符状态，取值有：
<li> active：已生效； </li>
<li> deleted：已删除。</li>
                     * @return Status 内容标识符状态，取值有：
<li> active：已生效； </li>
<li> deleted：已删除。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置内容标识符状态，取值有：
<li> active：已生效； </li>
<li> deleted：已删除。</li>
                     * @param _status 内容标识符状态，取值有：
<li> active：已生效； </li>
<li> deleted：已删除。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间，时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * @return CreatedOn 创建时间，时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置创建时间，时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * @param _createdOn 创建时间，时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取最新一次更新时间，时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * @return ModifiedOn 最新一次更新时间，时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * 
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置最新一次更新时间，时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * @param _modifiedOn 最新一次更新时间，时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * 
                     */
                    void SetModifiedOn(const std::string& _modifiedOn);

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     * 
                     */
                    bool ModifiedOnHasBeenSet() const;

                    /**
                     * 获取删除时间，状态非 deleted 时候为空；时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeletedOn 删除时间，状态非 deleted 时候为空；时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeletedOn() const;

                    /**
                     * 设置删除时间，状态非 deleted 时候为空；时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deletedOn 删除时间，状态非 deleted 时候为空；时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeletedOn(const std::string& _deletedOn);

                    /**
                     * 判断参数 DeletedOn 是否已赋值
                     * @return DeletedOn 是否已赋值
                     * 
                     */
                    bool DeletedOnHasBeenSet() const;

                private:

                    /**
                     * 内容标识符 ID。
                     */
                    std::string m_contentId;
                    bool m_contentIdHasBeenSet;

                    /**
                     * 内容标识符描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 被规则引擎引用的次数。
                     */
                    int64_t m_referenceCount;
                    bool m_referenceCountHasBeenSet;

                    /**
                     * 绑定的套餐 ID。
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 绑定的标签。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 内容标识符状态，取值有：
<li> active：已生效； </li>
<li> deleted：已删除。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间，时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 最新一次更新时间，时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                    /**
                     * 删除时间，状态非 deleted 时候为空；时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deletedOn;
                    bool m_deletedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CONTENTIDENTIFIER_H_
