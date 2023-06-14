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

#ifndef TENCENTCLOUD_FT_V20200304_MODEL_MORPHFACERESPONSE_H_
#define TENCENTCLOUD_FT_V20200304_MODEL_MORPHFACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ft
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * MorphFace返回参数结构体
                */
                class MorphFaceResponse : public AbstractModel
                {
                public:
                    MorphFaceResponse();
                    ~MorphFaceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取人像渐变任务的Job id
                     * @return JobId 人像渐变任务的Job id
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
                     * 人像渐变任务的Job id
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

#endif // !TENCENTCLOUD_FT_V20200304_MODEL_MORPHFACERESPONSE_H_
