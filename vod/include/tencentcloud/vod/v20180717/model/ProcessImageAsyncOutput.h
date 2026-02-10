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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ProcessImageAsyncOutputFileInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 图片异步处理任务的输出。
                */
                class ProcessImageAsyncOutput : public AbstractModel
                {
                public:
                    ProcessImageAsyncOutput();
                    ~ProcessImageAsyncOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片异步处理任务的输出文件信息。
                     * @return FileInfo 图片异步处理任务的输出文件信息。
                     * 
                     */
                    ProcessImageAsyncOutputFileInfo GetFileInfo() const;

                    /**
                     * 设置图片异步处理任务的输出文件信息。
                     * @param _fileInfo 图片异步处理任务的输出文件信息。
                     * 
                     */
                    void SetFileInfo(const ProcessImageAsyncOutputFileInfo& _fileInfo);

                    /**
                     * 判断参数 FileInfo 是否已赋值
                     * @return FileInfo 是否已赋值
                     * 
                     */
                    bool FileInfoHasBeenSet() const;

                    /**
                     * 获取图片理解结果。
                     * @return OutputText 图片理解结果。
                     * 
                     */
                    std::string GetOutputText() const;

                    /**
                     * 设置图片理解结果。
                     * @param _outputText 图片理解结果。
                     * 
                     */
                    void SetOutputText(const std::string& _outputText);

                    /**
                     * 判断参数 OutputText 是否已赋值
                     * @return OutputText 是否已赋值
                     * 
                     */
                    bool OutputTextHasBeenSet() const;

                private:

                    /**
                     * 图片异步处理任务的输出文件信息。
                     */
                    ProcessImageAsyncOutputFileInfo m_fileInfo;
                    bool m_fileInfoHasBeenSet;

                    /**
                     * 图片理解结果。
                     */
                    std::string m_outputText;
                    bool m_outputTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCOUTPUT_H_
