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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_UPLOADIVRAUDIORESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_UPLOADIVRAUDIORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/UploadIvrAudioFailedInfo.h>
#include <tencentcloud/ccc/v20200210/model/AudioFileInfo.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * UploadIvrAudio返回参数结构体
                */
                class UploadIvrAudioResponse : public AbstractModel
                {
                public:
                    UploadIvrAudioResponse();
                    ~UploadIvrAudioResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取上传失败的文件列表
                     * @return FailedFileList 上传失败的文件列表
                     * 
                     */
                    std::vector<UploadIvrAudioFailedInfo> GetFailedFileList() const;

                    /**
                     * 判断参数 FailedFileList 是否已赋值
                     * @return FailedFileList 是否已赋值
                     * 
                     */
                    bool FailedFileListHasBeenSet() const;

                    /**
                     * 获取上传成功文件列表
                     * @return SuccessFileList 上传成功文件列表
                     * 
                     */
                    std::vector<AudioFileInfo> GetSuccessFileList() const;

                    /**
                     * 判断参数 SuccessFileList 是否已赋值
                     * @return SuccessFileList 是否已赋值
                     * 
                     */
                    bool SuccessFileListHasBeenSet() const;

                private:

                    /**
                     * 上传失败的文件列表
                     */
                    std::vector<UploadIvrAudioFailedInfo> m_failedFileList;
                    bool m_failedFileListHasBeenSet;

                    /**
                     * 上传成功文件列表
                     */
                    std::vector<AudioFileInfo> m_successFileList;
                    bool m_successFileListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_UPLOADIVRAUDIORESPONSE_H_
