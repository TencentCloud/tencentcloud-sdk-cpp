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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ProcessImageAsyncTaskInput.h>
#include <tencentcloud/vod/v20180717/model/ProcessImageAsyncOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 图片异步处理任务信息。
                */
                class ProcessImageAsyncInput : public AbstractModel
                {
                public:
                    ProcessImageAsyncInput();
                    ~ProcessImageAsyncInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>图片处理的FileId。</p>
                     * @return FileId <p>图片处理的FileId。</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>图片处理的FileId。</p>
                     * @param _fileId <p>图片处理的FileId。</p>
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
                     * 获取<p>图片URL。</p>
                     * @return Url <p>图片URL。</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>图片URL。</p>
                     * @param _url <p>图片URL。</p>
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
                     * 获取<p>图片处理参数。</p>
                     * @return ImageTaskInput <p>图片处理参数。</p>
                     * 
                     */
                    ProcessImageAsyncTaskInput GetImageTaskInput() const;

                    /**
                     * 设置<p>图片处理参数。</p>
                     * @param _imageTaskInput <p>图片处理参数。</p>
                     * 
                     */
                    void SetImageTaskInput(const ProcessImageAsyncTaskInput& _imageTaskInput);

                    /**
                     * 判断参数 ImageTaskInput 是否已赋值
                     * @return ImageTaskInput 是否已赋值
                     * 
                     */
                    bool ImageTaskInputHasBeenSet() const;

                    /**
                     * 获取<p>图片处理任务的输出媒体文件配置。</p>
                     * @return OutputConfig <p>图片处理任务的输出媒体文件配置。</p>
                     * 
                     */
                    ProcessImageAsyncOutputConfig GetOutputConfig() const;

                    /**
                     * 设置<p>图片处理任务的输出媒体文件配置。</p>
                     * @param _outputConfig <p>图片处理任务的输出媒体文件配置。</p>
                     * 
                     */
                    void SetOutputConfig(const ProcessImageAsyncOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                private:

                    /**
                     * <p>图片处理的FileId。</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>图片URL。</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>图片处理参数。</p>
                     */
                    ProcessImageAsyncTaskInput m_imageTaskInput;
                    bool m_imageTaskInputHasBeenSet;

                    /**
                     * <p>图片处理任务的输出媒体文件配置。</p>
                     */
                    ProcessImageAsyncOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCINPUT_H_
