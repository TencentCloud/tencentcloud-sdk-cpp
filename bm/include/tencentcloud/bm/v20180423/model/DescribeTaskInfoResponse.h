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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBETASKINFORESPONSE_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBETASKINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bm/v20180423/model/TaskInfo.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * DescribeTaskInfo返回参数结构体
                */
                class DescribeTaskInfoResponse : public AbstractModel
                {
                public:
                    DescribeTaskInfoResponse();
                    ~DescribeTaskInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回任务总数量
                     * @return TotalCount 返回任务总数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取任务信息列表
                     * @return TaskInfoSet 任务信息列表
                     * 
                     */
                    std::vector<TaskInfo> GetTaskInfoSet() const;

                    /**
                     * 判断参数 TaskInfoSet 是否已赋值
                     * @return TaskInfoSet 是否已赋值
                     * 
                     */
                    bool TaskInfoSetHasBeenSet() const;

                private:

                    /**
                     * 返回任务总数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 任务信息列表
                     */
                    std::vector<TaskInfo> m_taskInfoSet;
                    bool m_taskInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBETASKINFORESPONSE_H_
