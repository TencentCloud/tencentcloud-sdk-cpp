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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_PARSEDOCUMENTREQUEST_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_PARSEDOCUMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20250101/model/ParseDocument.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * ParseDocument请求参数结构体
                */
                class ParseDocumentRequest : public AbstractModel
                {
                public:
                    ParseDocumentRequest();
                    ~ParseDocumentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件信息
                     * @return Document 文件信息
                     * 
                     */
                    ParseDocument GetDocument() const;

                    /**
                     * 设置文件信息
                     * @param _document 文件信息
                     * 
                     */
                    void SetDocument(const ParseDocument& _document);

                    /**
                     * 判断参数 Document 是否已赋值
                     * @return Document 是否已赋值
                     * 
                     */
                    bool DocumentHasBeenSet() const;

                    /**
                     * 获取模型名称，doc-llm。
                     * @return ModelName 模型名称，doc-llm。
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称，doc-llm。
                     * @param _modelName 模型名称，doc-llm。
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                private:

                    /**
                     * 文件信息
                     */
                    ParseDocument m_document;
                    bool m_documentHasBeenSet;

                    /**
                     * 模型名称，doc-llm。
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_PARSEDOCUMENTREQUEST_H_
