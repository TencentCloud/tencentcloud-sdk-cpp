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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_AIGWRERANKMAXDOCUMENTSCONFIG_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_AIGWRERANKMAXDOCUMENTSCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
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
                     * 获取<p>是否开启最大文档数限制</p><p>枚举值：</p><ul><li>true： 开启最大文档数限制</li><li>false： 关闭最大文档数限制</li></ul>
                     * @return EnableMaxDocuments <p>是否开启最大文档数限制</p><p>枚举值：</p><ul><li>true： 开启最大文档数限制</li><li>false： 关闭最大文档数限制</li></ul>
                     * 
                     */
                    bool GetEnableMaxDocuments() const;

                    /**
                     * 设置<p>是否开启最大文档数限制</p><p>枚举值：</p><ul><li>true： 开启最大文档数限制</li><li>false： 关闭最大文档数限制</li></ul>
                     * @param _enableMaxDocuments <p>是否开启最大文档数限制</p><p>枚举值：</p><ul><li>true： 开启最大文档数限制</li><li>false： 关闭最大文档数限制</li></ul>
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
                     * 获取<p>最大文档数限制</p><p>取值范围：[1, 5000]</p>
                     * @return MaxDocumentValue <p>最大文档数限制</p><p>取值范围：[1, 5000]</p>
                     * 
                     */
                    int64_t GetMaxDocumentValue() const;

                    /**
                     * 设置<p>最大文档数限制</p><p>取值范围：[1, 5000]</p>
                     * @param _maxDocumentValue <p>最大文档数限制</p><p>取值范围：[1, 5000]</p>
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
                     * <p>是否开启最大文档数限制</p><p>枚举值：</p><ul><li>true： 开启最大文档数限制</li><li>false： 关闭最大文档数限制</li></ul>
                     */
                    bool m_enableMaxDocuments;
                    bool m_enableMaxDocumentsHasBeenSet;

                    /**
                     * <p>最大文档数限制</p><p>取值范围：[1, 5000]</p>
                     */
                    int64_t m_maxDocumentValue;
                    bool m_maxDocumentValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_AIGWRERANKMAXDOCUMENTSCONFIG_H_
