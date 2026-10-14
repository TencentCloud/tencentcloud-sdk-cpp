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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONFILECOLLECTION_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONFILECOLLECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * FileCollection 文件收集信息
                */
                class ConversationFileCollection : public AbstractModel
                {
                public:
                    ConversationFileCollection();
                    ~ConversationFileCollection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>最大文件数量</p>
                     * @return MaxFileCount <p>最大文件数量</p>
                     * 
                     */
                    int64_t GetMaxFileCount() const;

                    /**
                     * 设置<p>最大文件数量</p>
                     * @param _maxFileCount <p>最大文件数量</p>
                     * 
                     */
                    void SetMaxFileCount(const int64_t& _maxFileCount);

                    /**
                     * 判断参数 MaxFileCount 是否已赋值
                     * @return MaxFileCount 是否已赋值
                     * 
                     */
                    bool MaxFileCountHasBeenSet() const;

                    /**
                     * 获取<p>支持的文件类型列表</p>
                     * @return SupportedFileTypeList <p>支持的文件类型列表</p>
                     * 
                     */
                    std::vector<std::string> GetSupportedFileTypeList() const;

                    /**
                     * 设置<p>支持的文件类型列表</p>
                     * @param _supportedFileTypeList <p>支持的文件类型列表</p>
                     * 
                     */
                    void SetSupportedFileTypeList(const std::vector<std::string>& _supportedFileTypeList);

                    /**
                     * 判断参数 SupportedFileTypeList 是否已赋值
                     * @return SupportedFileTypeList 是否已赋值
                     * 
                     */
                    bool SupportedFileTypeListHasBeenSet() const;

                    /**
                     * 获取<p>支持的文件类型列表</p>
                     * @return SupportedFileTypes <p>支持的文件类型列表</p>
                     * 
                     */
                    std::vector<std::string> GetSupportedFileTypes() const;

                    /**
                     * 设置<p>支持的文件类型列表</p>
                     * @param _supportedFileTypes <p>支持的文件类型列表</p>
                     * 
                     */
                    void SetSupportedFileTypes(const std::vector<std::string>& _supportedFileTypes);

                    /**
                     * 判断参数 SupportedFileTypes 是否已赋值
                     * @return SupportedFileTypes 是否已赋值
                     * 
                     */
                    bool SupportedFileTypesHasBeenSet() const;

                private:

                    /**
                     * <p>最大文件数量</p>
                     */
                    int64_t m_maxFileCount;
                    bool m_maxFileCountHasBeenSet;

                    /**
                     * <p>支持的文件类型列表</p>
                     */
                    std::vector<std::string> m_supportedFileTypeList;
                    bool m_supportedFileTypeListHasBeenSet;

                    /**
                     * <p>支持的文件类型列表</p>
                     */
                    std::vector<std::string> m_supportedFileTypes;
                    bool m_supportedFileTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONFILECOLLECTION_H_
