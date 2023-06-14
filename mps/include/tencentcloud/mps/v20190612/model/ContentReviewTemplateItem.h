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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CONTENTREVIEWTEMPLATEITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CONTENTREVIEWTEMPLATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/PornConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/TerrorismConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/PoliticalConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/ProhibitedConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/UserDefineConfigureInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 内容审核模板详情
                */
                class ContentReviewTemplateItem : public AbstractModel
                {
                public:
                    ContentReviewTemplateItem();
                    ~ContentReviewTemplateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内容审核模板唯一标识。
                     * @return Definition 内容审核模板唯一标识。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置内容审核模板唯一标识。
                     * @param _definition 内容审核模板唯一标识。
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取内容审核模板名称，长度限制：64 个字符。
                     * @return Name 内容审核模板名称，长度限制：64 个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置内容审核模板名称，长度限制：64 个字符。
                     * @param _name 内容审核模板名称，长度限制：64 个字符。
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
                     * 获取内容审核模板描述信息，长度限制：256 个字符。
                     * @return Comment 内容审核模板描述信息，长度限制：256 个字符。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置内容审核模板描述信息，长度限制：256 个字符。
                     * @param _comment 内容审核模板描述信息，长度限制：256 个字符。
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
                     * 获取鉴黄控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PornConfigure 鉴黄控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PornConfigureInfo GetPornConfigure() const;

                    /**
                     * 设置鉴黄控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pornConfigure 鉴黄控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPornConfigure(const PornConfigureInfo& _pornConfigure);

                    /**
                     * 判断参数 PornConfigure 是否已赋值
                     * @return PornConfigure 是否已赋值
                     * 
                     */
                    bool PornConfigureHasBeenSet() const;

                    /**
                     * 获取涉敏控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TerrorismConfigure 涉敏控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TerrorismConfigureInfo GetTerrorismConfigure() const;

                    /**
                     * 设置涉敏控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _terrorismConfigure 涉敏控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTerrorismConfigure(const TerrorismConfigureInfo& _terrorismConfigure);

                    /**
                     * 判断参数 TerrorismConfigure 是否已赋值
                     * @return TerrorismConfigure 是否已赋值
                     * 
                     */
                    bool TerrorismConfigureHasBeenSet() const;

                    /**
                     * 获取涉敏控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PoliticalConfigure 涉敏控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PoliticalConfigureInfo GetPoliticalConfigure() const;

                    /**
                     * 设置涉敏控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _politicalConfigure 涉敏控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPoliticalConfigure(const PoliticalConfigureInfo& _politicalConfigure);

                    /**
                     * 判断参数 PoliticalConfigure 是否已赋值
                     * @return PoliticalConfigure 是否已赋值
                     * 
                     */
                    bool PoliticalConfigureHasBeenSet() const;

                    /**
                     * 获取违禁控制参数。违禁内容包括：
<li>谩骂；</li>
<li>涉毒违法。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProhibitedConfigure 违禁控制参数。违禁内容包括：
<li>谩骂；</li>
<li>涉毒违法。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ProhibitedConfigureInfo GetProhibitedConfigure() const;

                    /**
                     * 设置违禁控制参数。违禁内容包括：
<li>谩骂；</li>
<li>涉毒违法。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _prohibitedConfigure 违禁控制参数。违禁内容包括：
<li>谩骂；</li>
<li>涉毒违法。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProhibitedConfigure(const ProhibitedConfigureInfo& _prohibitedConfigure);

                    /**
                     * 判断参数 ProhibitedConfigure 是否已赋值
                     * @return ProhibitedConfigure 是否已赋值
                     * 
                     */
                    bool ProhibitedConfigureHasBeenSet() const;

                    /**
                     * 获取用户自定义内容审核控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserDefineConfigure 用户自定义内容审核控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UserDefineConfigureInfo GetUserDefineConfigure() const;

                    /**
                     * 设置用户自定义内容审核控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userDefineConfigure 用户自定义内容审核控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserDefineConfigure(const UserDefineConfigureInfo& _userDefineConfigure);

                    /**
                     * 判断参数 UserDefineConfigure 是否已赋值
                     * @return UserDefineConfigure 是否已赋值
                     * 
                     */
                    bool UserDefineConfigureHasBeenSet() const;

                    /**
                     * 获取模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @return CreateTime 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @param _createTime 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
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
                     * 获取模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @return UpdateTime 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @param _updateTime 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取模板类型，取值范围：
* Preset：系统预置模板；
* Custom：用户自定义模板。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 模板类型，取值范围：
* Preset：系统预置模板；
* Custom：用户自定义模板。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置模板类型，取值范围：
* Preset：系统预置模板；
* Custom：用户自定义模板。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 模板类型，取值范围：
* Preset：系统预置模板；
* Custom：用户自定义模板。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 内容审核模板唯一标识。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 内容审核模板名称，长度限制：64 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 内容审核模板描述信息，长度限制：256 个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 鉴黄控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PornConfigureInfo m_pornConfigure;
                    bool m_pornConfigureHasBeenSet;

                    /**
                     * 涉敏控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TerrorismConfigureInfo m_terrorismConfigure;
                    bool m_terrorismConfigureHasBeenSet;

                    /**
                     * 涉敏控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PoliticalConfigureInfo m_politicalConfigure;
                    bool m_politicalConfigureHasBeenSet;

                    /**
                     * 违禁控制参数。违禁内容包括：
<li>谩骂；</li>
<li>涉毒违法。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProhibitedConfigureInfo m_prohibitedConfigure;
                    bool m_prohibitedConfigureHasBeenSet;

                    /**
                     * 用户自定义内容审核控制参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UserDefineConfigureInfo m_userDefineConfigure;
                    bool m_userDefineConfigureHasBeenSet;

                    /**
                     * 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 模板类型，取值范围：
* Preset：系统预置模板；
* Custom：用户自定义模板。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CONTENTREVIEWTEMPLATEITEM_H_
