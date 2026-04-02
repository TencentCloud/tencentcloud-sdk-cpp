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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FACERECOGNITIONOUTPUTFILEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FACERECOGNITIONOUTPUTFILEINFO_H_

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
                * 人脸识别输出文件信息
                */
                class FaceRecognitionOutputFileInfo : public AbstractModel
                {
                public:
                    FaceRecognitionOutputFileInfo();
                    ~FaceRecognitionOutputFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>人脸识别输出文件类型</p><p>枚举值：</p><ul><li>Output： 任务生成的结果输出，文件对应人脸识别任务返回中的结果，以 JSON 格式生成文件。</li></ul>
                     * @return FileType <p>人脸识别输出文件类型</p><p>枚举值：</p><ul><li>Output： 任务生成的结果输出，文件对应人脸识别任务返回中的结果，以 JSON 格式生成文件。</li></ul>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>人脸识别输出文件类型</p><p>枚举值：</p><ul><li>Output： 任务生成的结果输出，文件对应人脸识别任务返回中的结果，以 JSON 格式生成文件。</li></ul>
                     * @param _fileType <p>人脸识别输出文件类型</p><p>枚举值：</p><ul><li>Output： 任务生成的结果输出，文件对应人脸识别任务返回中的结果，以 JSON 格式生成文件。</li></ul>
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取<p>人脸识别输出文件的URL</p>
                     * @return Url <p>人脸识别输出文件的URL</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>人脸识别输出文件的URL</p>
                     * @param _url <p>人脸识别输出文件的URL</p>
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
                     * <p>人脸识别输出文件类型</p><p>枚举值：</p><ul><li>Output： 任务生成的结果输出，文件对应人脸识别任务返回中的结果，以 JSON 格式生成文件。</li></ul>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>人脸识别输出文件的URL</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FACERECOGNITIONOUTPUTFILEINFO_H_
