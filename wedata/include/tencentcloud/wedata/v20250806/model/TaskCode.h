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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKCODE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKCODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 任务代码
                */
                class TaskCode : public AbstractModel
                {
                public:
                    TaskCode();
                    ~TaskCode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取代码内容
                     * @return CodeContent 代码内容
                     * 
                     */
                    std::string GetCodeContent() const;

                    /**
                     * 设置代码内容
                     * @param _codeContent 代码内容
                     * 
                     */
                    void SetCodeContent(const std::string& _codeContent);

                    /**
                     * 判断参数 CodeContent 是否已赋值
                     * @return CodeContent 是否已赋值
                     * 
                     */
                    bool CodeContentHasBeenSet() const;

                    /**
                     * 获取代码文件大小，单位bytes
                     * @return CodeFileSize 代码文件大小，单位bytes
                     * 
                     */
                    uint64_t GetCodeFileSize() const;

                    /**
                     * 设置代码文件大小，单位bytes
                     * @param _codeFileSize 代码文件大小，单位bytes
                     * 
                     */
                    void SetCodeFileSize(const uint64_t& _codeFileSize);

                    /**
                     * 判断参数 CodeFileSize 是否已赋值
                     * @return CodeFileSize 是否已赋值
                     * 
                     */
                    bool CodeFileSizeHasBeenSet() const;

                private:

                    /**
                     * 代码内容
                     */
                    std::string m_codeContent;
                    bool m_codeContentHasBeenSet;

                    /**
                     * 代码文件大小，单位bytes
                     */
                    uint64_t m_codeFileSize;
                    bool m_codeFileSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKCODE_H_
