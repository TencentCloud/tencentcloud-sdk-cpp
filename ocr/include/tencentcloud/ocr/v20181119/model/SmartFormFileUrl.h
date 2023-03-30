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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_SMARTFORMFILEURL_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_SMARTFORMFILEURL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 智慧表单上传文件信息
                */
                class SmartFormFileUrl : public AbstractModel
                {
                public:
                    SmartFormFileUrl();
                    ~SmartFormFileUrl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件url地址
                     * @return FileUrl 文件url地址
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置文件url地址
                     * @param FileUrl 文件url地址
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取文件的顺序，顺序从1开始
                     * @return FileOrderNumber 文件的顺序，顺序从1开始
                     */
                    uint64_t GetFileOrderNumber() const;

                    /**
                     * 设置文件的顺序，顺序从1开始
                     * @param FileOrderNumber 文件的顺序，顺序从1开始
                     */
                    void SetFileOrderNumber(const uint64_t& _fileOrderNumber);

                    /**
                     * 判断参数 FileOrderNumber 是否已赋值
                     * @return FileOrderNumber 是否已赋值
                     */
                    bool FileOrderNumberHasBeenSet() const;

                private:

                    /**
                     * 文件url地址
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * 文件的顺序，顺序从1开始
                     */
                    uint64_t m_fileOrderNumber;
                    bool m_fileOrderNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_SMARTFORMFILEURL_H_
