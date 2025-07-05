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

#ifndef TENCENTCLOUD_FT_V20200304_MODEL_CANCELFACEMORPHJOBREQUEST_H_
#define TENCENTCLOUD_FT_V20200304_MODEL_CANCELFACEMORPHJOBREQUEST_H_

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
                * CancelFaceMorphJob请求参数结构体
                */
                class CancelFaceMorphJobRequest : public AbstractModel
                {
                public:
                    CancelFaceMorphJobRequest();
                    ~CancelFaceMorphJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取人像渐变任务Job id
                     * @return JobId 人像渐变任务Job id
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置人像渐变任务Job id
                     * @param _jobId 人像渐变任务Job id
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                private:

                    /**
                     * 人像渐变任务Job id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FT_V20200304_MODEL_CANCELFACEMORPHJOBREQUEST_H_
