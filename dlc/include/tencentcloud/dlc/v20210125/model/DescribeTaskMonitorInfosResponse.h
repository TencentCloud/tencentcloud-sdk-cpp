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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKMONITORINFOSRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKMONITORINFOSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/TaskMonitorInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeTaskMonitorInfos返回参数结构体
                */
                class DescribeTaskMonitorInfosResponse : public AbstractModel
                {
                public:
                    DescribeTaskMonitorInfosResponse();
                    ~DescribeTaskMonitorInfosResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务监控信息列表
                     * @return TaskMonitorInfoList 任务监控信息列表
                     * 
                     */
                    std::vector<TaskMonitorInfo> GetTaskMonitorInfoList() const;

                    /**
                     * 判断参数 TaskMonitorInfoList 是否已赋值
                     * @return TaskMonitorInfoList 是否已赋值
                     * 
                     */
                    bool TaskMonitorInfoListHasBeenSet() const;

                    /**
                     * 获取任务总数
                     * @return TotalCount 任务总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 任务监控信息列表
                     */
                    std::vector<TaskMonitorInfo> m_taskMonitorInfoList;
                    bool m_taskMonitorInfoListHasBeenSet;

                    /**
                     * 任务总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKMONITORINFOSRESPONSE_H_
