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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_KEYWORDSLIBINFO_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_KEYWORDSLIBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 关键词库信息
                */
                class KeywordsLibInfo : public AbstractModel
                {
                public:
                    KeywordsLibInfo();
                    ~KeywordsLibInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关键词库ID
                     * @return ID 关键词库ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置关键词库ID
                     * @param _iD 关键词库ID
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取关键词库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LibName 关键词库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLibName() const;

                    /**
                     * 设置关键词库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _libName 关键词库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLibName(const std::string& _libName);

                    /**
                     * 判断参数 LibName 是否已赋值
                     * @return LibName 是否已赋值
                     * 
                     */
                    bool LibNameHasBeenSet() const;

                    /**
                     * 获取关键词库描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Describe 关键词库描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置关键词库描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _describe 关键词库描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取关键词库创建时间
                     * @return CreateTime 关键词库创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置关键词库创建时间
                     * @param _createTime 关键词库创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取审核建议(Review/Block)
                     * @return Suggestion 审核建议(Review/Block)
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置审核建议(Review/Block)
                     * @param _suggestion 审核建议(Review/Block)
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
                     * 获取匹配模式(ExactMatch/FuzzyMatch)
                     * @return MatchType 匹配模式(ExactMatch/FuzzyMatch)
                     * 
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置匹配模式(ExactMatch/FuzzyMatch)
                     * @param _matchType 匹配模式(ExactMatch/FuzzyMatch)
                     * 
                     */
                    void SetMatchType(const std::string& _matchType);

                    /**
                     * 判断参数 MatchType 是否已赋值
                     * @return MatchType 是否已赋值
                     * 
                     */
                    bool MatchTypeHasBeenSet() const;

                    /**
                     * 获取关联策略BizType列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizTypes 关联策略BizType列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBizTypes() const;

                    /**
                     * 设置关联策略BizType列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bizTypes 关联策略BizType列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBizTypes(const std::vector<std::string>& _bizTypes);

                    /**
                     * 判断参数 BizTypes 是否已赋值
                     * @return BizTypes 是否已赋值
                     * 
                     */
                    bool BizTypesHasBeenSet() const;

                private:

                    /**
                     * 关键词库ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 关键词库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_libName;
                    bool m_libNameHasBeenSet;

                    /**
                     * 关键词库描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * 关键词库创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 审核建议(Review/Block)
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 匹配模式(ExactMatch/FuzzyMatch)
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                    /**
                     * 关联策略BizType列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_bizTypes;
                    bool m_bizTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_KEYWORDSLIBINFO_H_
