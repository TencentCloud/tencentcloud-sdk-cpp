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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTBLINDWATERMARKINPUTINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTBLINDWATERMARKINPUTINFO_H_

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
                * 提取盲水印输入信息
                */
                class ExtractBlindWatermarkInputInfo : public AbstractModel
                {
                public:
                    ExtractBlindWatermarkInputInfo();
                    ~ExtractBlindWatermarkInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取提取数字水印输入类型，可选值：<li>FILEID：文件媒资ID；</li><li>URL：文件url；</li>
                     * @return Type 提取数字水印输入类型，可选值：<li>FILEID：文件媒资ID；</li><li>URL：文件url；</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置提取数字水印输入类型，可选值：<li>FILEID：文件媒资ID；</li><li>URL：文件url；</li>
                     * @param _type 提取数字水印输入类型，可选值：<li>FILEID：文件媒资ID；</li><li>URL：文件url；</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取需要提取的文件媒资ID
                     * @return FileId 需要提取的文件媒资ID
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置需要提取的文件媒资ID
                     * @param _fileId 需要提取的文件媒资ID
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取需要提取的视频文件url
                     * @return Url 需要提取的视频文件url
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置需要提取的视频文件url
                     * @param _url 需要提取的视频文件url
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 提取数字水印输入类型，可选值：<li>FILEID：文件媒资ID；</li><li>URL：文件url；</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 需要提取的文件媒资ID
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 需要提取的视频文件url
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTBLINDWATERMARKINPUTINFO_H_
