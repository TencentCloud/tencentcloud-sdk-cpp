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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSOutputFile.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * MPS 子任务输出返回结果。
                */
                class MPSTaskOutput : public AbstractModel
                {
                public:
                    MPSTaskOutput();
                    ~MPSTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务返回结果中的文件类型结果。如智能擦除中，擦除后的视频文件将被存入媒资，并在此字段中给出 FileId；基于画面提取的字幕文件 Url 将在此字段中给出。
                     * @return OutputFiles 任务返回结果中的文件类型结果。如智能擦除中，擦除后的视频文件将被存入媒资，并在此字段中给出 FileId；基于画面提取的字幕文件 Url 将在此字段中给出。
                     * 
                     */
                    std::vector<MPSOutputFile> GetOutputFiles() const;

                    /**
                     * 设置任务返回结果中的文件类型结果。如智能擦除中，擦除后的视频文件将被存入媒资，并在此字段中给出 FileId；基于画面提取的字幕文件 Url 将在此字段中给出。
                     * @param _outputFiles 任务返回结果中的文件类型结果。如智能擦除中，擦除后的视频文件将被存入媒资，并在此字段中给出 FileId；基于画面提取的字幕文件 Url 将在此字段中给出。
                     * 
                     */
                    void SetOutputFiles(const std::vector<MPSOutputFile>& _outputFiles);

                    /**
                     * 判断参数 OutputFiles 是否已赋值
                     * @return OutputFiles 是否已赋值
                     * 
                     */
                    bool OutputFilesHasBeenSet() const;

                private:

                    /**
                     * 任务返回结果中的文件类型结果。如智能擦除中，擦除后的视频文件将被存入媒资，并在此字段中给出 FileId；基于画面提取的字幕文件 Url 将在此字段中给出。
                     */
                    std::vector<MPSOutputFile> m_outputFiles;
                    bool m_outputFilesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSTASKOUTPUT_H_
