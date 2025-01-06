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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_RETRIEVEKNOWLEDGEREQUEST_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_RETRIEVEKNOWLEDGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/RetrievalSetting.h>
#include <tencentcloud/lkeap/v20240522/model/LabelItem.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * RetrieveKnowledge请求参数结构体
                */
                class RetrieveKnowledgeRequest : public AbstractModel
                {
                public:
                    RetrieveKnowledgeRequest();
                    ~RetrieveKnowledgeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取知识库ID。
                     * @return KnowledgeBaseId 知识库ID。
                     * 
                     */
                    std::string GetKnowledgeBaseId() const;

                    /**
                     * 设置知识库ID。
                     * @param _knowledgeBaseId 知识库ID。
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
                     * 获取用于检索的文本。
                     * @return Query 用于检索的文本。
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置用于检索的文本。
                     * @param _query 用于检索的文本。
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取检索方法，默认使用`HYBRID`混合检索。
- `SEMANTIC`：语义检索
- `FULL_TEXT`：全文检索
- `HYBRID`：混合检索
                     * @return RetrievalMethod 检索方法，默认使用`HYBRID`混合检索。
- `SEMANTIC`：语义检索
- `FULL_TEXT`：全文检索
- `HYBRID`：混合检索
                     * 
                     */
                    std::string GetRetrievalMethod() const;

                    /**
                     * 设置检索方法，默认使用`HYBRID`混合检索。
- `SEMANTIC`：语义检索
- `FULL_TEXT`：全文检索
- `HYBRID`：混合检索
                     * @param _retrievalMethod 检索方法，默认使用`HYBRID`混合检索。
- `SEMANTIC`：语义检索
- `FULL_TEXT`：全文检索
- `HYBRID`：混合检索
                     * 
                     */
                    void SetRetrievalMethod(const std::string& _retrievalMethod);

                    /**
                     * 判断参数 RetrievalMethod 是否已赋值
                     * @return RetrievalMethod 是否已赋值
                     * 
                     */
                    bool RetrievalMethodHasBeenSet() const;

                    /**
                     * 获取检索设置。
                     * @return RetrievalSetting 检索设置。
                     * 
                     */
                    RetrievalSetting GetRetrievalSetting() const;

                    /**
                     * 设置检索设置。
                     * @param _retrievalSetting 检索设置。
                     * 
                     */
                    void SetRetrievalSetting(const RetrievalSetting& _retrievalSetting);

                    /**
                     * 判断参数 RetrievalSetting 是否已赋值
                     * @return RetrievalSetting 是否已赋值
                     * 
                     */
                    bool RetrievalSettingHasBeenSet() const;

                    /**
                     * 获取标签过滤。
                     * @return AttributeLabels 标签过滤。
                     * 
                     */
                    std::vector<LabelItem> GetAttributeLabels() const;

                    /**
                     * 设置标签过滤。
                     * @param _attributeLabels 标签过滤。
                     * 
                     */
                    void SetAttributeLabels(const std::vector<LabelItem>& _attributeLabels);

                    /**
                     * 判断参数 AttributeLabels 是否已赋值
                     * @return AttributeLabels 是否已赋值
                     * 
                     */
                    bool AttributeLabelsHasBeenSet() const;

                private:

                    /**
                     * 知识库ID。
                     */
                    std::string m_knowledgeBaseId;
                    bool m_knowledgeBaseIdHasBeenSet;

                    /**
                     * 用于检索的文本。
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 检索方法，默认使用`HYBRID`混合检索。
- `SEMANTIC`：语义检索
- `FULL_TEXT`：全文检索
- `HYBRID`：混合检索
                     */
                    std::string m_retrievalMethod;
                    bool m_retrievalMethodHasBeenSet;

                    /**
                     * 检索设置。
                     */
                    RetrievalSetting m_retrievalSetting;
                    bool m_retrievalSettingHasBeenSet;

                    /**
                     * 标签过滤。
                     */
                    std::vector<LabelItem> m_attributeLabels;
                    bool m_attributeLabelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_RETRIEVEKNOWLEDGEREQUEST_H_
