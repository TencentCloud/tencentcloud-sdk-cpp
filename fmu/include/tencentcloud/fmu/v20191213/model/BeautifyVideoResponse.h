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

#ifndef TENCENTCLOUD_FMU_V20191213_MODEL_BEAUTIFYVIDEORESPONSE_H_
#define TENCENTCLOUD_FMU_V20191213_MODEL_BEAUTIFYVIDEORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Fmu
    {
        namespace V20191213
        {
            namespace Model
            {
                /**
                * BeautifyVideo返回参数结构体
                */
                class BeautifyVideoResponse : public AbstractModel
                {
                public:
                    BeautifyVideoResponse();
                    ~BeautifyVideoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取视频美颜任务的Job id
                     * @return JobId 视频美颜任务的Job id
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取预估处理时间，粒度为秒
                     * @return EstimatedProcessTime 预估处理时间，粒度为秒
                     * 
                     */
                    int64_t GetEstimatedProcessTime() const;

                    /**
                     * 判断参数 EstimatedProcessTime 是否已赋值
                     * @return EstimatedProcessTime 是否已赋值
                     * 
                     */
                    bool EstimatedProcessTimeHasBeenSet() const;

                private:

                    /**
                     * 视频美颜任务的Job id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 预估处理时间，粒度为秒
                     */
                    int64_t m_estimatedProcessTime;
                    bool m_estimatedProcessTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FMU_V20191213_MODEL_BEAUTIFYVIDEORESPONSE_H_
