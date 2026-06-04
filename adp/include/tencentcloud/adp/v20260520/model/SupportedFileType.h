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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SUPPORTEDFILETYPE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SUPPORTEDFILETYPE_H_

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
                * 支持的文件类型
                */
                class SupportedFileType : public AbstractModel
                {
                public:
                    SupportedFileType();
                    ~SupportedFileType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件类型描述(如"文本文档")
                     * @return Description 文件类型描述(如"文本文档")
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置文件类型描述(如"文本文档")
                     * @param _description 文件类型描述(如"文本文档")
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取文件类型(如 txt、pdf、jpg, 建议用扩展名)
                     * @return FileExt 文件类型(如 txt、pdf、jpg, 建议用扩展名)
                     * 
                     */
                    std::string GetFileExt() const;

                    /**
                     * 设置文件类型(如 txt、pdf、jpg, 建议用扩展名)
                     * @param _fileExt 文件类型(如 txt、pdf、jpg, 建议用扩展名)
                     * 
                     */
                    void SetFileExt(const std::string& _fileExt);

                    /**
                     * 判断参数 FileExt 是否已赋值
                     * @return FileExt 是否已赋值
                     * 
                     */
                    bool FileExtHasBeenSet() const;

                    /**
                     * 获取文件大小限制(单位: 字节)
                     * @return MaxSizeBytes 文件大小限制(单位: 字节)
                     * 
                     */
                    std::string GetMaxSizeBytes() const;

                    /**
                     * 设置文件大小限制(单位: 字节)
                     * @param _maxSizeBytes 文件大小限制(单位: 字节)
                     * 
                     */
                    void SetMaxSizeBytes(const std::string& _maxSizeBytes);

                    /**
                     * 判断参数 MaxSizeBytes 是否已赋值
                     * @return MaxSizeBytes 是否已赋值
                     * 
                     */
                    bool MaxSizeBytesHasBeenSet() const;

                private:

                    /**
                     * 文件类型描述(如"文本文档")
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 文件类型(如 txt、pdf、jpg, 建议用扩展名)
                     */
                    std::string m_fileExt;
                    bool m_fileExtHasBeenSet;

                    /**
                     * 文件大小限制(单位: 字节)
                     */
                    std::string m_maxSizeBytes;
                    bool m_maxSizeBytesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SUPPORTEDFILETYPE_H_
