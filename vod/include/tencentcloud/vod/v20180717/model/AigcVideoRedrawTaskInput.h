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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOREDRAWTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOREDRAWTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoRedrawTaskInputFileInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoRedrawOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AIGC 视频转绘任务的输入。
                */
                class AigcVideoRedrawTaskInput : public AbstractModel
                {
                public:
                    AigcVideoRedrawTaskInput();
                    ~AigcVideoRedrawTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>AIGC 视频转绘任务输入文件信息。</p>
                     * @return FileInfo <p>AIGC 视频转绘任务输入文件信息。</p>
                     * 
                     */
                    AigcVideoRedrawTaskInputFileInfo GetFileInfo() const;

                    /**
                     * 设置<p>AIGC 视频转绘任务输入文件信息。</p>
                     * @param _fileInfo <p>AIGC 视频转绘任务输入文件信息。</p>
                     * 
                     */
                    void SetFileInfo(const AigcVideoRedrawTaskInputFileInfo& _fileInfo);

                    /**
                     * 判断参数 FileInfo 是否已赋值
                     * @return FileInfo 是否已赋值
                     * 
                     */
                    bool FileInfoHasBeenSet() const;

                    /**
                     * 获取<p>AIGC 视频转绘输出配置。</p>
                     * @return OutputConfig <p>AIGC 视频转绘输出配置。</p>
                     * 
                     */
                    AigcVideoRedrawOutputConfig GetOutputConfig() const;

                    /**
                     * 设置<p>AIGC 视频转绘输出配置。</p>
                     * @param _outputConfig <p>AIGC 视频转绘输出配置。</p>
                     * 
                     */
                    void SetOutputConfig(const AigcVideoRedrawOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                private:

                    /**
                     * <p>AIGC 视频转绘任务输入文件信息。</p>
                     */
                    AigcVideoRedrawTaskInputFileInfo m_fileInfo;
                    bool m_fileInfoHasBeenSet;

                    /**
                     * <p>AIGC 视频转绘输出配置。</p>
                     */
                    AigcVideoRedrawOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOREDRAWTASKINPUT_H_
