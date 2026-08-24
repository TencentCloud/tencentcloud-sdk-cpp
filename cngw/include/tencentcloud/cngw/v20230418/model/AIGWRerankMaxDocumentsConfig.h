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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWRERANKMAXDOCUMENTSCONFIG_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWRERANKMAXDOCUMENTSCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * AI 网关Rerank场景最大文档数限制配置
                */
                class AIGWRerankMaxDocumentsConfig : public AbstractModel
                {
                public:
                    AIGWRerankMaxDocumentsConfig();
                    ~AIGWRerankMaxDocumentsConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>启用最大文档数限制</p>
                     * @return EnableMaxDocuments <p>启用最大文档数限制</p>
                     * 
                     */
                    bool GetEnableMaxDocuments() const;

                    /**
                     * 设置<p>启用最大文档数限制</p>
                     * @param _enableMaxDocuments <p>启用最大文档数限制</p>
                     * 
                     */
                    void SetEnableMaxDocuments(const bool& _enableMaxDocuments);

                    /**
                     * 判断参数 EnableMaxDocuments 是否已赋值
                     * @return EnableMaxDocuments 是否已赋值
                     * 
                     */
                    bool EnableMaxDocumentsHasBeenSet() const;

                    /**
                     * 获取<p>Rerank场景最大文档数限制</p>
                     * @return MaxDocumentValue <p>Rerank场景最大文档数限制</p>
                     * 
                     */
                    int64_t GetMaxDocumentValue() const;

                    /**
                     * 设置<p>Rerank场景最大文档数限制</p>
                     * @param _maxDocumentValue <p>Rerank场景最大文档数限制</p>
                     * 
                     */
                    void SetMaxDocumentValue(const int64_t& _maxDocumentValue);

                    /**
                     * 判断参数 MaxDocumentValue 是否已赋值
                     * @return MaxDocumentValue 是否已赋值
                     * 
                     */
                    bool MaxDocumentValueHasBeenSet() const;

                private:

                    /**
                     * <p>启用最大文档数限制</p>
                     */
                    bool m_enableMaxDocuments;
                    bool m_enableMaxDocumentsHasBeenSet;

                    /**
                     * <p>Rerank场景最大文档数限制</p>
                     */
                    int64_t m_maxDocumentValue;
                    bool m_maxDocumentValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWRERANKMAXDOCUMENTSCONFIG_H_
