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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEJOBDETAILREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEJOBDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeJobDetail请求参数结构体
                */
                class DescribeJobDetailRequest : public AbstractModel
                {
                public:
                    DescribeJobDetailRequest();
                    ~DescribeJobDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>作业唯一标识符（ID）。必填。</p>
                     * @return JobId <p>作业唯一标识符（ID）。必填。</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>作业唯一标识符（ID）。必填。</p>
                     * @param _jobId <p>作业唯一标识符（ID）。必填。</p>
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
                     * <p>作业唯一标识符（ID）。必填。</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEJOBDETAILREQUEST_H_
