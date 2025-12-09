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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoTaskOutputFileInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AIGC 生视频任务的输出信息。
                */
                class AigcVideoTaskOutput : public AbstractModel
                {
                public:
                    AigcVideoTaskOutput();
                    ~AigcVideoTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AIGC 生视频任务的输出文件信息。	
                     * @return FileInfos AIGC 生视频任务的输出文件信息。	
                     * 
                     */
                    std::vector<AigcVideoTaskOutputFileInfo> GetFileInfos() const;

                    /**
                     * 设置AIGC 生视频任务的输出文件信息。	
                     * @param _fileInfos AIGC 生视频任务的输出文件信息。	
                     * 
                     */
                    void SetFileInfos(const std::vector<AigcVideoTaskOutputFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                private:

                    /**
                     * AIGC 生视频任务的输出文件信息。	
                     */
                    std::vector<AigcVideoTaskOutputFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKOUTPUT_H_
