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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_CHUNKDOCUMENTASYNCREQUEST_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_CHUNKDOCUMENTASYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20250101/model/Document.h>
#include <tencentcloud/es/v20250101/model/ChunkConfigAsync.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * ChunkDocumentAsync请求参数结构体
                */
                class ChunkDocumentAsyncRequest : public AbstractModel
                {
                public:
                    ChunkDocumentAsyncRequest();
                    ~ChunkDocumentAsyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件信息。
                     * @return Document 文件信息。
                     * 
                     */
                    Document GetDocument() const;

                    /**
                     * 设置文件信息。
                     * @param _document 文件信息。
                     * 
                     */
                    void SetDocument(const Document& _document);

                    /**
                     * 判断参数 Document 是否已赋值
                     * @return Document 是否已赋值
                     * 
                     */
                    bool DocumentHasBeenSet() const;

                    /**
                     * 获取模型名称，可选模型列表：doc-tree-chunk。
                     * @return ModelName 模型名称，可选模型列表：doc-tree-chunk。
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称，可选模型列表：doc-tree-chunk。
                     * @param _modelName 模型名称，可选模型列表：doc-tree-chunk。
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取文件切片配置。
                     * @return Config 文件切片配置。
                     * 
                     */
                    ChunkConfigAsync GetConfig() const;

                    /**
                     * 设置文件切片配置。
                     * @param _config 文件切片配置。
                     * 
                     */
                    void SetConfig(const ChunkConfigAsync& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * 文件信息。
                     */
                    Document m_document;
                    bool m_documentHasBeenSet;

                    /**
                     * 模型名称，可选模型列表：doc-tree-chunk。
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 文件切片配置。
                     */
                    ChunkConfigAsync m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_CHUNKDOCUMENTASYNCREQUEST_H_
