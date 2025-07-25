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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_RETRIEVALRECORD_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_RETRIEVALRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/RetrievalRecordMetadata.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * 检索的结果
                */
                class RetrievalRecord : public AbstractModel
                {
                public:
                    RetrievalRecord();
                    ~RetrievalRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检索结果的元数据
                     * @return Metadata 检索结果的元数据
                     * 
                     */
                    RetrievalRecordMetadata GetMetadata() const;

                    /**
                     * 设置检索结果的元数据
                     * @param _metadata 检索结果的元数据
                     * 
                     */
                    void SetMetadata(const RetrievalRecordMetadata& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取检索到的标题
                     * @return Title 检索到的标题
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置检索到的标题
                     * @param _title 检索到的标题
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取检索到的内容
                     * @return Content 检索到的内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置检索到的内容
                     * @param _content 检索到的内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 检索结果的元数据
                     */
                    RetrievalRecordMetadata m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * 检索到的标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 检索到的内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_RETRIEVALRECORD_H_
