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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBETRAININGTASKPODURLREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBETRAININGTASKPODURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeTrainingTaskPodUrl请求参数结构体
                */
                class DescribeTrainingTaskPodUrlRequest : public AbstractModel
                {
                public:
                    DescribeTrainingTaskPodUrlRequest();
                    ~DescribeTrainingTaskPodUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务实例名
                     * @return PodName 任务实例名
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置任务实例名
                     * @param _podName 任务实例名
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                private:

                    /**
                     * 任务实例名
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBETRAININGTASKPODURLREQUEST_H_
