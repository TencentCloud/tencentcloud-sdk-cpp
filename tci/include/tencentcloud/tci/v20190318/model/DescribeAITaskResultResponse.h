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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_DESCRIBEAITASKRESULTRESPONSE_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_DESCRIBEAITASKRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/StandardAudioResult.h>
#include <tencentcloud/tci/v20190318/model/StandardImageResult.h>
#include <tencentcloud/tci/v20190318/model/StandardVideoResult.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * DescribeAITaskResult返回参数结构体
                */
                class DescribeAITaskResultResponse : public AbstractModel
                {
                public:
                    DescribeAITaskResultResponse();
                    ~DescribeAITaskResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取音频分析结果
                     * @return AudioResult 音频分析结果
                     * 
                     */
                    StandardAudioResult GetAudioResult() const;

                    /**
                     * 判断参数 AudioResult 是否已赋值
                     * @return AudioResult 是否已赋值
                     * 
                     */
                    bool AudioResultHasBeenSet() const;

                    /**
                     * 获取图像分析结果
                     * @return ImageResult 图像分析结果
                     * 
                     */
                    StandardImageResult GetImageResult() const;

                    /**
                     * 判断参数 ImageResult 是否已赋值
                     * @return ImageResult 是否已赋值
                     * 
                     */
                    bool ImageResultHasBeenSet() const;

                    /**
                     * 获取视频分析结果
                     * @return VideoResult 视频分析结果
                     * 
                     */
                    StandardVideoResult GetVideoResult() const;

                    /**
                     * 判断参数 VideoResult 是否已赋值
                     * @return VideoResult 是否已赋值
                     * 
                     */
                    bool VideoResultHasBeenSet() const;

                    /**
                     * 获取任务状态
                     * @return Status 任务状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务唯一id。在URL方式时提交请求后会返回一个jobid，后续查询该url的结果时使用这个jobid进行查询。
                     * @return TaskId 任务唯一id。在URL方式时提交请求后会返回一个jobid，后续查询该url的结果时使用这个jobid进行查询。
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 音频分析结果
                     */
                    StandardAudioResult m_audioResult;
                    bool m_audioResultHasBeenSet;

                    /**
                     * 图像分析结果
                     */
                    StandardImageResult m_imageResult;
                    bool m_imageResultHasBeenSet;

                    /**
                     * 视频分析结果
                     */
                    StandardVideoResult m_videoResult;
                    bool m_videoResultHasBeenSet;

                    /**
                     * 任务状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务唯一id。在URL方式时提交请求后会返回一个jobid，后续查询该url的结果时使用这个jobid进行查询。
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_DESCRIBEAITASKRESULTRESPONSE_H_
