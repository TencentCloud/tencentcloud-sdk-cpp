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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_SOCCOMPLIANCEITEM_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_SOCCOMPLIANCEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/SocProductionItem.h>
#include <tencentcloud/ssa/v20180608/model/SocCheckItem.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * soc合规信息
                */
                class SocComplianceItem : public AbstractModel
                {
                public:
                    SocComplianceItem();
                    ~SocComplianceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Item 唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetItem() const;

                    /**
                     * 设置唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _item 唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItem(const std::string& _item);

                    /**
                     * 判断参数 Item 是否已赋值
                     * @return Item 是否已赋值
                     * 
                     */
                    bool ItemHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取分类
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StandardItem 分类
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStandardItem() const;

                    /**
                     * 设置分类
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _standardItem 分类
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStandardItem(const std::string& _standardItem);

                    /**
                     * 判断参数 StandardItem 是否已赋值
                     * @return StandardItem 是否已赋值
                     * 
                     */
                    bool StandardItemHasBeenSet() const;

                    /**
                     * 获取结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetResult() const;

                    /**
                     * 设置结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _result 结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResult(const int64_t& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Suggestion 建议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _suggestion 建议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取产品字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProStr 产品字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProStr() const;

                    /**
                     * 设置产品字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _proStr 产品字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProStr(const std::string& _proStr);

                    /**
                     * 判断参数 ProStr 是否已赋值
                     * @return ProStr 是否已赋值
                     * 
                     */
                    bool ProStrHasBeenSet() const;

                    /**
                     * 获取产品数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Production 产品数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SocProductionItem> GetProduction() const;

                    /**
                     * 设置产品数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _production 产品数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProduction(const std::vector<SocProductionItem>& _production);

                    /**
                     * 判断参数 Production 是否已赋值
                     * @return Production 是否已赋值
                     * 
                     */
                    bool ProductionHasBeenSet() const;

                    /**
                     * 获取配置项数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckItems 配置项数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SocCheckItem> GetCheckItems() const;

                    /**
                     * 设置配置项数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkItems 配置项数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCheckItems(const std::vector<SocCheckItem>& _checkItems);

                    /**
                     * 判断参数 CheckItems 是否已赋值
                     * @return CheckItems 是否已赋值
                     * 
                     */
                    bool CheckItemsHasBeenSet() const;

                private:

                    /**
                     * 唯一id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_item;
                    bool m_itemHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 分类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_standardItem;
                    bool m_standardItemHasBeenSet;

                    /**
                     * 结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 建议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 产品字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_proStr;
                    bool m_proStrHasBeenSet;

                    /**
                     * 产品数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SocProductionItem> m_production;
                    bool m_productionHasBeenSet;

                    /**
                     * 配置项数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SocCheckItem> m_checkItems;
                    bool m_checkItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_SOCCOMPLIANCEITEM_H_
