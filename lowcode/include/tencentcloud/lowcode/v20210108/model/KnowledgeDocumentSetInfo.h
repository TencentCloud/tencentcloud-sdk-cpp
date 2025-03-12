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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_KNOWLEDGEDOCUMENTSETINFO_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_KNOWLEDGEDOCUMENTSETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * 文档信息
                */
                class KnowledgeDocumentSetInfo : public AbstractModel
                {
                public:
                    KnowledgeDocumentSetInfo();
                    ~KnowledgeDocumentSetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件的字符数。
                     * @return TextLength 文件的字符数。
                     * 
                     */
                    uint64_t GetTextLength() const;

                    /**
                     * 设置文件的字符数。
                     * @param _textLength 文件的字符数。
                     * 
                     */
                    void SetTextLength(const uint64_t& _textLength);

                    /**
                     * 判断参数 TextLength 是否已赋值
                     * @return TextLength 是否已赋值
                     * 
                     */
                    bool TextLengthHasBeenSet() const;

                    /**
                     * 获取文件的字节数。
                     * @return ByteLength 文件的字节数。
                     * 
                     */
                    uint64_t GetByteLength() const;

                    /**
                     * 设置文件的字节数。
                     * @param _byteLength 文件的字节数。
                     * 
                     */
                    void SetByteLength(const uint64_t& _byteLength);

                    /**
                     * 判断参数 ByteLength 是否已赋值
                     * @return ByteLength 是否已赋值
                     * 
                     */
                    bool ByteLengthHasBeenSet() const;

                    /**
                     * 获取文件被预处理、Embedding 向量化的进度。
                     * @return IndexedProgress 文件被预处理、Embedding 向量化的进度。
                     * 
                     */
                    uint64_t GetIndexedProgress() const;

                    /**
                     * 设置文件被预处理、Embedding 向量化的进度。
                     * @param _indexedProgress 文件被预处理、Embedding 向量化的进度。
                     * 
                     */
                    void SetIndexedProgress(const uint64_t& _indexedProgress);

                    /**
                     * 判断参数 IndexedProgress 是否已赋值
                     * @return IndexedProgress 是否已赋值
                     * 
                     */
                    bool IndexedProgressHasBeenSet() const;

                    /**
                     * 获取文件预处理、Embedding 向量化的状态。
New：等待解析。
Loading：文件解析中。
Failure：文件解析、写入出错。
Ready：文件解析、写入完成。

                     * @return IndexedStatus 文件预处理、Embedding 向量化的状态。
New：等待解析。
Loading：文件解析中。
Failure：文件解析、写入出错。
Ready：文件解析、写入完成。

                     * 
                     */
                    std::string GetIndexedStatus() const;

                    /**
                     * 设置文件预处理、Embedding 向量化的状态。
New：等待解析。
Loading：文件解析中。
Failure：文件解析、写入出错。
Ready：文件解析、写入完成。

                     * @param _indexedStatus 文件预处理、Embedding 向量化的状态。
New：等待解析。
Loading：文件解析中。
Failure：文件解析、写入出错。
Ready：文件解析、写入完成。

                     * 
                     */
                    void SetIndexedStatus(const std::string& _indexedStatus);

                    /**
                     * 判断参数 IndexedStatus 是否已赋值
                     * @return IndexedStatus 是否已赋值
                     * 
                     */
                    bool IndexedStatusHasBeenSet() const;

                    /**
                     * 获取文件创建时间。
                     * @return CreateTime 文件创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置文件创建时间。
                     * @param _createTime 文件创建时间。
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
                     * 获取文件最后更新时间。
                     * @return LastUpdateTime 文件最后更新时间。
                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置文件最后更新时间。
                     * @param _lastUpdateTime 文件最后更新时间。
                     * 
                     */
                    void SetLastUpdateTime(const std::string& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取文件关键字。
                     * @return Keywords 文件关键字。
                     * 
                     */
                    std::string GetKeywords() const;

                    /**
                     * 设置文件关键字。
                     * @param _keywords 文件关键字。
                     * 
                     */
                    void SetKeywords(const std::string& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                private:

                    /**
                     * 文件的字符数。
                     */
                    uint64_t m_textLength;
                    bool m_textLengthHasBeenSet;

                    /**
                     * 文件的字节数。
                     */
                    uint64_t m_byteLength;
                    bool m_byteLengthHasBeenSet;

                    /**
                     * 文件被预处理、Embedding 向量化的进度。
                     */
                    uint64_t m_indexedProgress;
                    bool m_indexedProgressHasBeenSet;

                    /**
                     * 文件预处理、Embedding 向量化的状态。
New：等待解析。
Loading：文件解析中。
Failure：文件解析、写入出错。
Ready：文件解析、写入完成。

                     */
                    std::string m_indexedStatus;
                    bool m_indexedStatusHasBeenSet;

                    /**
                     * 文件创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 文件最后更新时间。
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * 文件关键字。
                     */
                    std::string m_keywords;
                    bool m_keywordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_KNOWLEDGEDOCUMENTSETINFO_H_
