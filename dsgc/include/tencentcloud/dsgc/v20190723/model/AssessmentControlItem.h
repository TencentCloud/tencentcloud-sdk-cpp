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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_ASSESSMENTCONTROLITEM_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_ASSESSMENTCONTROLITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DSPA评估控制项
                */
                class AssessmentControlItem : public AbstractModel
                {
                public:
                    AssessmentControlItem();
                    ~AssessmentControlItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取评估项Id
                     * @return ItemId 评估项Id
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置评估项Id
                     * @param _itemId 评估项Id
                     * 
                     */
                    void SetItemId(const std::string& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取评估项名称
                     * @return ItemName 评估项名称
                     * 
                     */
                    std::string GetItemName() const;

                    /**
                     * 设置评估项名称
                     * @param _itemName 评估项名称
                     * 
                     */
                    void SetItemName(const std::string& _itemName);

                    /**
                     * 判断参数 ItemName 是否已赋值
                     * @return ItemName 是否已赋值
                     * 
                     */
                    bool ItemNameHasBeenSet() const;

                    /**
                     * 获取评估项描述
                     * @return Description 评估项描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置评估项描述
                     * @param _description 评估项描述
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
                     * 获取评估项来源，内置/用户自定，取值（system，user）
                     * @return Source 评估项来源，内置/用户自定，取值（system，user）
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置评估项来源，内置/用户自定，取值（system，user）
                     * @param _source 评估项来源，内置/用户自定，取值（system，user）
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
                     * 获取评估项类型，问卷/自动化，取值（questionnaire，auto）
                     * @return ItemType 评估项类型，问卷/自动化，取值（questionnaire，auto）
                     * 
                     */
                    std::string GetItemType() const;

                    /**
                     * 设置评估项类型，问卷/自动化，取值（questionnaire，auto）
                     * @param _itemType 评估项类型，问卷/自动化，取值（questionnaire，auto）
                     * 
                     */
                    void SetItemType(const std::string& _itemType);

                    /**
                     * 判断参数 ItemType 是否已赋值
                     * @return ItemType 是否已赋值
                     * 
                     */
                    bool ItemTypeHasBeenSet() const;

                    /**
                     * 获取评估项子类型，单选/多选/时间/文本/AKSK等，取值（singlechoice，multichoice，date，text，AKSK……等）
                     * @return ItemSubType 评估项子类型，单选/多选/时间/文本/AKSK等，取值（singlechoice，multichoice，date，text，AKSK……等）
                     * 
                     */
                    std::string GetItemSubType() const;

                    /**
                     * 设置评估项子类型，单选/多选/时间/文本/AKSK等，取值（singlechoice，multichoice，date，text，AKSK……等）
                     * @param _itemSubType 评估项子类型，单选/多选/时间/文本/AKSK等，取值（singlechoice，multichoice，date，text，AKSK……等）
                     * 
                     */
                    void SetItemSubType(const std::string& _itemSubType);

                    /**
                     * 判断参数 ItemSubType 是否已赋值
                     * @return ItemSubType 是否已赋值
                     * 
                     */
                    bool ItemSubTypeHasBeenSet() const;

                    /**
                     * 获取评估项创建时间
                     * @return CreatedTime 评估项创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置评估项创建时间
                     * @param _createdTime 评估项创建时间
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
                     * 获取评估项启用状态，启用/未启用，取值draft / launched
                     * @return Status 评估项启用状态，启用/未启用，取值draft / launched
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置评估项启用状态，启用/未启用，取值draft / launched
                     * @param _status 评估项启用状态，启用/未启用，取值draft / launched
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
                     * 获取评估项关联的模板数量
                     * @return TemplateCount 评估项关联的模板数量
                     * 
                     */
                    int64_t GetTemplateCount() const;

                    /**
                     * 设置评估项关联的模板数量
                     * @param _templateCount 评估项关联的模板数量
                     * 
                     */
                    void SetTemplateCount(const int64_t& _templateCount);

                    /**
                     * 判断参数 TemplateCount 是否已赋值
                     * @return TemplateCount 是否已赋值
                     * 
                     */
                    bool TemplateCountHasBeenSet() const;

                private:

                    /**
                     * 评估项Id
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * 评估项名称
                     */
                    std::string m_itemName;
                    bool m_itemNameHasBeenSet;

                    /**
                     * 评估项描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 评估项来源，内置/用户自定，取值（system，user）
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 评估项类型，问卷/自动化，取值（questionnaire，auto）
                     */
                    std::string m_itemType;
                    bool m_itemTypeHasBeenSet;

                    /**
                     * 评估项子类型，单选/多选/时间/文本/AKSK等，取值（singlechoice，multichoice，date，text，AKSK……等）
                     */
                    std::string m_itemSubType;
                    bool m_itemSubTypeHasBeenSet;

                    /**
                     * 评估项创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 评估项启用状态，启用/未启用，取值draft / launched
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 评估项关联的模板数量
                     */
                    int64_t m_templateCount;
                    bool m_templateCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_ASSESSMENTCONTROLITEM_H_
