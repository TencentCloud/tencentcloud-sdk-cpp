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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBEPRODUCTTASKSRESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBEPRODUCTTASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20180614/model/ProductTaskInfo.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * DescribeProductTasks返回参数结构体
                */
                class DescribeProductTasksResponse : public AbstractModel
                {
                public:
                    DescribeProductTasksResponse();
                    ~DescribeProductTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的任务总个数
                     * @return TotalCount 符合条件的任务总个数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取任务详细信息列表
                     * @return TaskInfos 任务详细信息列表
                     * 
                     */
                    std::vector<ProductTaskInfo> GetTaskInfos() const;

                    /**
                     * 判断参数 TaskInfos 是否已赋值
                     * @return TaskInfos 是否已赋值
                     * 
                     */
                    bool TaskInfosHasBeenSet() const;

                private:

                    /**
                     * 符合条件的任务总个数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 任务详细信息列表
                     */
                    std::vector<ProductTaskInfo> m_taskInfos;
                    bool m_taskInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBEPRODUCTTASKSRESPONSE_H_
