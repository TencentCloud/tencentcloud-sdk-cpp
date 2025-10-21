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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_MODIFYATTRIBUTELABELREQUEST_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_MODIFYATTRIBUTELABELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/AttributeLabelItem.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * ModifyAttributeLabel请求参数结构体
                */
                class ModifyAttributeLabelRequest : public AbstractModel
                {
                public:
                    ModifyAttributeLabelRequest();
                    ~ModifyAttributeLabelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取说明：知识库ID
备注：通过创建知识库接口（DeleteKnowledgeBase）得到知识库ID（KnowledgeBaseId）
                     * @return KnowledgeBaseId 说明：知识库ID
备注：通过创建知识库接口（DeleteKnowledgeBase）得到知识库ID（KnowledgeBaseId）
                     * 
                     */
                    std::string GetKnowledgeBaseId() const;

                    /**
                     * 设置说明：知识库ID
备注：通过创建知识库接口（DeleteKnowledgeBase）得到知识库ID（KnowledgeBaseId）
                     * @param _knowledgeBaseId 说明：知识库ID
备注：通过创建知识库接口（DeleteKnowledgeBase）得到知识库ID（KnowledgeBaseId）
                     * 
                     */
                    void SetKnowledgeBaseId(const std::string& _knowledgeBaseId);

                    /**
                     * 判断参数 KnowledgeBaseId 是否已赋值
                     * @return KnowledgeBaseId 是否已赋值
                     * 
                     */
                    bool KnowledgeBaseIdHasBeenSet() const;

                    /**
                     * 获取说明：属性ID
备注：通过CreateAttributeLabel接口创建属性时会生成AttributeId，通过ListAttributeLabels接口可查询得到AttributeId、AttributeKey、AttributeName以及LabelId、LabelName的对应关系
                     * @return AttributeId 说明：属性ID
备注：通过CreateAttributeLabel接口创建属性时会生成AttributeId，通过ListAttributeLabels接口可查询得到AttributeId、AttributeKey、AttributeName以及LabelId、LabelName的对应关系
                     * 
                     */
                    std::string GetAttributeId() const;

                    /**
                     * 设置说明：属性ID
备注：通过CreateAttributeLabel接口创建属性时会生成AttributeId，通过ListAttributeLabels接口可查询得到AttributeId、AttributeKey、AttributeName以及LabelId、LabelName的对应关系
                     * @param _attributeId 说明：属性ID
备注：通过CreateAttributeLabel接口创建属性时会生成AttributeId，通过ListAttributeLabels接口可查询得到AttributeId、AttributeKey、AttributeName以及LabelId、LabelName的对应关系
                     * 
                     */
                    void SetAttributeId(const std::string& _attributeId);

                    /**
                     * 判断参数 AttributeId 是否已赋值
                     * @return AttributeId 是否已赋值
                     * 
                     */
                    bool AttributeIdHasBeenSet() const;

                    /**
                     * 获取说明：属性标识，
备注：仅支持英文字符，不支持数字，支持下划线。最大支持40个英文字符，如style
                     * @return AttributeKey 说明：属性标识，
备注：仅支持英文字符，不支持数字，支持下划线。最大支持40个英文字符，如style
                     * 
                     */
                    std::string GetAttributeKey() const;

                    /**
                     * 设置说明：属性标识，
备注：仅支持英文字符，不支持数字，支持下划线。最大支持40个英文字符，如style
                     * @param _attributeKey 说明：属性标识，
备注：仅支持英文字符，不支持数字，支持下划线。最大支持40个英文字符，如style
                     * 
                     */
                    void SetAttributeKey(const std::string& _attributeKey);

                    /**
                     * 判断参数 AttributeKey 是否已赋值
                     * @return AttributeKey 是否已赋值
                     * 
                     */
                    bool AttributeKeyHasBeenSet() const;

                    /**
                     * 获取说明：属性名称
备注：支持中英文字符。最大支持80个中英文字符，如风格
                     * @return AttributeName 说明：属性名称
备注：支持中英文字符。最大支持80个中英文字符，如风格
                     * 
                     */
                    std::string GetAttributeName() const;

                    /**
                     * 设置说明：属性名称
备注：支持中英文字符。最大支持80个中英文字符，如风格
                     * @param _attributeName 说明：属性名称
备注：支持中英文字符。最大支持80个中英文字符，如风格
                     * 
                     */
                    void SetAttributeName(const std::string& _attributeName);

                    /**
                     * 判断参数 AttributeName 是否已赋值
                     * @return AttributeName 是否已赋值
                     * 
                     */
                    bool AttributeNameHasBeenSet() const;

                    /**
                     * 获取说明：标签ID（LabelId）以及标签名（LabelName）
备注：
- 不填写LabelId，默认在当前AttributeId下新增标签值（LabelName）；
- 若填写该AttributeId下的LabelId以及LabelName，则为修改该LabelId对应的标签值
                     * @return Labels 说明：标签ID（LabelId）以及标签名（LabelName）
备注：
- 不填写LabelId，默认在当前AttributeId下新增标签值（LabelName）；
- 若填写该AttributeId下的LabelId以及LabelName，则为修改该LabelId对应的标签值
                     * 
                     */
                    std::vector<AttributeLabelItem> GetLabels() const;

                    /**
                     * 设置说明：标签ID（LabelId）以及标签名（LabelName）
备注：
- 不填写LabelId，默认在当前AttributeId下新增标签值（LabelName）；
- 若填写该AttributeId下的LabelId以及LabelName，则为修改该LabelId对应的标签值
                     * @param _labels 说明：标签ID（LabelId）以及标签名（LabelName）
备注：
- 不填写LabelId，默认在当前AttributeId下新增标签值（LabelName）；
- 若填写该AttributeId下的LabelId以及LabelName，则为修改该LabelId对应的标签值
                     * 
                     */
                    void SetLabels(const std::vector<AttributeLabelItem>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取说明：删除的标签id
                     * @return DeleteLabelIds 说明：删除的标签id
                     * 
                     */
                    std::vector<std::string> GetDeleteLabelIds() const;

                    /**
                     * 设置说明：删除的标签id
                     * @param _deleteLabelIds 说明：删除的标签id
                     * 
                     */
                    void SetDeleteLabelIds(const std::vector<std::string>& _deleteLabelIds);

                    /**
                     * 判断参数 DeleteLabelIds 是否已赋值
                     * @return DeleteLabelIds 是否已赋值
                     * 
                     */
                    bool DeleteLabelIdsHasBeenSet() const;

                private:

                    /**
                     * 说明：知识库ID
备注：通过创建知识库接口（DeleteKnowledgeBase）得到知识库ID（KnowledgeBaseId）
                     */
                    std::string m_knowledgeBaseId;
                    bool m_knowledgeBaseIdHasBeenSet;

                    /**
                     * 说明：属性ID
备注：通过CreateAttributeLabel接口创建属性时会生成AttributeId，通过ListAttributeLabels接口可查询得到AttributeId、AttributeKey、AttributeName以及LabelId、LabelName的对应关系
                     */
                    std::string m_attributeId;
                    bool m_attributeIdHasBeenSet;

                    /**
                     * 说明：属性标识，
备注：仅支持英文字符，不支持数字，支持下划线。最大支持40个英文字符，如style
                     */
                    std::string m_attributeKey;
                    bool m_attributeKeyHasBeenSet;

                    /**
                     * 说明：属性名称
备注：支持中英文字符。最大支持80个中英文字符，如风格
                     */
                    std::string m_attributeName;
                    bool m_attributeNameHasBeenSet;

                    /**
                     * 说明：标签ID（LabelId）以及标签名（LabelName）
备注：
- 不填写LabelId，默认在当前AttributeId下新增标签值（LabelName）；
- 若填写该AttributeId下的LabelId以及LabelName，则为修改该LabelId对应的标签值
                     */
                    std::vector<AttributeLabelItem> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 说明：删除的标签id
                     */
                    std::vector<std::string> m_deleteLabelIds;
                    bool m_deleteLabelIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_MODIFYATTRIBUTELABELREQUEST_H_
