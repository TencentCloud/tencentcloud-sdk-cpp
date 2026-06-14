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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_GLOSSARYITEM_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_GLOSSARYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * 术语库详情
                */
                class GlossaryItem : public AbstractModel
                {
                public:
                    GlossaryItem();
                    ~GlossaryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取术语库 ID。
                     * @return GlossaryId 术语库 ID。
                     * 
                     */
                    std::string GetGlossaryId() const;

                    /**
                     * 设置术语库 ID。
                     * @param _glossaryId 术语库 ID。
                     * 
                     */
                    void SetGlossaryId(const std::string& _glossaryId);

                    /**
                     * 判断参数 GlossaryId 是否已赋值
                     * @return GlossaryId 是否已赋值
                     * 
                     */
                    bool GlossaryIdHasBeenSet() const;

                    /**
                     * 获取术语库名称。
                     * @return Name 术语库名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置术语库名称。
                     * @param _name 术语库名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取术语库描述。
                     * @return Description 术语库描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置术语库描述。
                     * @param _description 术语库描述。
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
                     * 获取源语言代码。
                     * @return Source 源语言代码。
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置源语言代码。
                     * @param _source 源语言代码。
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取目标语言代码。
                     * @return Target 目标语言代码。
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置目标语言代码。
                     * @param _target 目标语言代码。
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreatedTime 创建时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createdTime 创建时间。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取更新时间。
                     * @return UpdatedTime 更新时间。
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置更新时间。
                     * @param _updatedTime 更新时间。
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                private:

                    /**
                     * 术语库 ID。
                     */
                    std::string m_glossaryId;
                    bool m_glossaryIdHasBeenSet;

                    /**
                     * 术语库名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 术语库描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 源语言代码。
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 目标语言代码。
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 更新时间。
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_GLOSSARYITEM_H_
