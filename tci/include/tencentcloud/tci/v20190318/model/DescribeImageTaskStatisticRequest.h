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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_DESCRIBEIMAGETASKSTATISTICREQUEST_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_DESCRIBEIMAGETASKSTATISTICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * DescribeImageTaskStatistic请求参数结构体
                */
                class DescribeImageTaskStatisticRequest : public AbstractModel
                {
                public:
                    DescribeImageTaskStatisticRequest();
                    ~DescribeImageTaskStatisticRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图像任务标识符
                     * @return JobId 图像任务标识符
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 设置图像任务标识符
                     * @param _jobId 图像任务标识符
                     * 
                     */
                    void SetJobId(const int64_t& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                private:

                    /**
                     * 图像任务标识符
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_DESCRIBEIMAGETASKSTATISTICREQUEST_H_
