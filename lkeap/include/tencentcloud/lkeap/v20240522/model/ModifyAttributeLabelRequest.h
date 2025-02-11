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
                     * 获取知识库ID
                     * @return KnowledgeBaseId 知识库ID
                     * 
                     */
                    std::string GetKnowledgeBaseId() const;

                    /**
                     * 设置知识库ID
                     * @param _knowledgeBaseId 知识库ID
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
                     * 获取属性ID
                     * @return AttributeId 属性ID
                     * 
                     */
                    std::string GetAttributeId() const;

                    /**
                     * 设置属性ID
                     * @param _attributeId 属性ID
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
                     * 获取属性标识，最大40个英文字符，如style
                     * @return AttributeKey 属性标识，最大40个英文字符，如style
                     * 
                     */
                    std::string GetAttributeKey() const;

                    /**
                     * 设置属性标识，最大40个英文字符，如style
                     * @param _attributeKey 属性标识，最大40个英文字符，如style
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
                     * 获取属性名称，最大80个英文字符，如风格
                     * @return AttributeName 属性名称，最大80个英文字符，如风格
                     * 
                     */
                    std::string GetAttributeName() const;

                    /**
                     * 设置属性名称，最大80个英文字符，如风格
                     * @param _attributeName 属性名称，最大80个英文字符，如风格
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
                     * 获取属性标签
                     * @return Labels 属性标签
                     * 
                     */
                    std::vector<AttributeLabelItem> GetLabels() const;

                    /**
                     * 设置属性标签
                     * @param _labels 属性标签
                     * 
                     */
                    void SetLabels(const std::vector<AttributeLabelItem>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                private:

                    /**
                     * 知识库ID
                     */
                    std::string m_knowledgeBaseId;
                    bool m_knowledgeBaseIdHasBeenSet;

                    /**
                     * 属性ID
                     */
                    std::string m_attributeId;
                    bool m_attributeIdHasBeenSet;

                    /**
                     * 属性标识，最大40个英文字符，如style
                     */
                    std::string m_attributeKey;
                    bool m_attributeKeyHasBeenSet;

                    /**
                     * 属性名称，最大80个英文字符，如风格
                     */
                    std::string m_attributeName;
                    bool m_attributeNameHasBeenSet;

                    /**
                     * 属性标签
                     */
                    std::vector<AttributeLabelItem> m_labels;
                    bool m_labelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_MODIFYATTRIBUTELABELREQUEST_H_
