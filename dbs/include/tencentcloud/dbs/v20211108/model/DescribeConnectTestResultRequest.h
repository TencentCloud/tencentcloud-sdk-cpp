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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBECONNECTTESTRESULTREQUEST_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBECONNECTTESTRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * DescribeConnectTestResult请求参数结构体
                */
                class DescribeConnectTestResultRequest : public AbstractModel
                {
                public:
                    DescribeConnectTestResultRequest();
                    ~DescribeConnectTestResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>连通性检测任务 ID。</p>
                     * @return TaskIds <p>连通性检测任务 ID。</p>
                     * 
                     */
                    std::vector<int64_t> GetTaskIds() const;

                    /**
                     * 设置<p>连通性检测任务 ID。</p>
                     * @param _taskIds <p>连通性检测任务 ID。</p>
                     * 
                     */
                    void SetTaskIds(const std::vector<int64_t>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                private:

                    /**
                     * <p>连通性检测任务 ID。</p>
                     */
                    std::vector<int64_t> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBECONNECTTESTRESULTREQUEST_H_
