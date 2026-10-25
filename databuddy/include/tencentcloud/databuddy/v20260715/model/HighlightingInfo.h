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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_HIGHLIGHTINGINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_HIGHLIGHTINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/Fragment.h>
#include <tencentcloud/databuddy/v20260715/model/TagInfo.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 高亮信息
                */
                class HighlightingInfo : public AbstractModel
                {
                public:
                    HighlightingInfo();
                    ~HighlightingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资产名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetName <p>资产名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置<p>资产名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetName <p>资产名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取<p>资产全名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FullName <p>资产全名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置<p>资产全名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fullName <p>资产全名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFullName(const std::string& _fullName);

                    /**
                     * 判断参数 FullName 是否已赋值
                     * @return FullName 是否已赋值
                     * 
                     */
                    bool FullNameHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Comment <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comment <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取<p>代码片段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeFragments <p>代码片段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Fragment> GetCodeFragments() const;

                    /**
                     * 设置<p>代码片段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codeFragments <p>代码片段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCodeFragments(const std::vector<Fragment>& _codeFragments);

                    /**
                     * 判断参数 CodeFragments 是否已赋值
                     * @return CodeFragments 是否已赋值
                     * 
                     */
                    bool CodeFragmentsHasBeenSet() const;

                    /**
                     * 获取<p>文本片段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TextFragments <p>文本片段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Fragment> GetTextFragments() const;

                    /**
                     * 设置<p>文本片段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _textFragments <p>文本片段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTextFragments(const std::vector<Fragment>& _textFragments);

                    /**
                     * 判断参数 TextFragments 是否已赋值
                     * @return TextFragments 是否已赋值
                     * 
                     */
                    bool TextFragmentsHasBeenSet() const;

                    /**
                     * 获取<p>标签(废弃)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>标签(废弃)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>标签(废弃)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>标签(废弃)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagFragments <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TagInfo> GetTagFragments() const;

                    /**
                     * 设置<p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagFragments <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagFragments(const std::vector<TagInfo>& _tagFragments);

                    /**
                     * 判断参数 TagFragments 是否已赋值
                     * @return TagFragments 是否已赋值
                     * 
                     */
                    bool TagFragmentsHasBeenSet() const;

                    /**
                     * 获取<p>别名高亮片段列表。使用场景：资产别名命中关键词时，返回带 <em></em> 标签的高亮片段供前端渲染</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AliasFragments <p>别名高亮片段列表。使用场景：资产别名命中关键词时，返回带 <em></em> 标签的高亮片段供前端渲染</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAliasFragments() const;

                    /**
                     * 设置<p>别名高亮片段列表。使用场景：资产别名命中关键词时，返回带 <em></em> 标签的高亮片段供前端渲染</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aliasFragments <p>别名高亮片段列表。使用场景：资产别名命中关键词时，返回带 <em></em> 标签的高亮片段供前端渲染</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAliasFragments(const std::vector<std::string>& _aliasFragments);

                    /**
                     * 判断参数 AliasFragments 是否已赋值
                     * @return AliasFragments 是否已赋值
                     * 
                     */
                    bool AliasFragmentsHasBeenSet() const;

                private:

                    /**
                     * <p>资产名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * <p>资产全名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>代码片段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Fragment> m_codeFragments;
                    bool m_codeFragmentsHasBeenSet;

                    /**
                     * <p>文本片段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Fragment> m_textFragments;
                    bool m_textFragmentsHasBeenSet;

                    /**
                     * <p>标签(废弃)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagInfo> m_tagFragments;
                    bool m_tagFragmentsHasBeenSet;

                    /**
                     * <p>别名高亮片段列表。使用场景：资产别名命中关键词时，返回带 <em></em> 标签的高亮片段供前端渲染</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_aliasFragments;
                    bool m_aliasFragmentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_HIGHLIGHTINGINFO_H_
