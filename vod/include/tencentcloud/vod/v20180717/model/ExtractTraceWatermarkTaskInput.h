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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTTRACEWATERMARKTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTTRACEWATERMARKTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 提取溯源水印输入
                */
                class ExtractTraceWatermarkTaskInput : public AbstractModel
                {
                public:
                    ExtractTraceWatermarkTaskInput();
                    ~ExtractTraceWatermarkTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取需要提取水印的媒体 URL。
                     * @return Url 需要提取水印的媒体 URL。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置需要提取水印的媒体 URL。
                     * @param _url 需要提取水印的媒体 URL。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取媒体文件 ID。Url 对应的原始媒体文件 ID。
                     * @return FileId 媒体文件 ID。Url 对应的原始媒体文件 ID。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置媒体文件 ID。Url 对应的原始媒体文件 ID。
                     * @param _fileId 媒体文件 ID。Url 对应的原始媒体文件 ID。
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                private:

                    /**
                     * 需要提取水印的媒体 URL。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 媒体文件 ID。Url 对应的原始媒体文件 ID。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTTRACEWATERMARKTASKINPUT_H_
