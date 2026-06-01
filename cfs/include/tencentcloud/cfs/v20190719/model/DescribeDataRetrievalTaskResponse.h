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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEDATARETRIEVALTASKRESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEDATARETRIEVALTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/DataRetrievalTaskInfo.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeDataRetrievalTask返回参数结构体
                */
                class DescribeDataRetrievalTaskResponse : public AbstractModel
                {
                public:
                    DescribeDataRetrievalTaskResponse();
                    ~DescribeDataRetrievalTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数据检索任务总量 示例值：0</p>
                     * @return TotalCount <p>数据检索任务总量 示例值：0</p>
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
                     * 获取<p>检索任务详情</p>
                     * @return DataRetrievalTasks <p>检索任务详情</p>
                     * 
                     */
                    std::vector<DataRetrievalTaskInfo> GetDataRetrievalTasks() const;

                    /**
                     * 判断参数 DataRetrievalTasks 是否已赋值
                     * @return DataRetrievalTasks 是否已赋值
                     * 
                     */
                    bool DataRetrievalTasksHasBeenSet() const;

                private:

                    /**
                     * <p>数据检索任务总量 示例值：0</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>检索任务详情</p>
                     */
                    std::vector<DataRetrievalTaskInfo> m_dataRetrievalTasks;
                    bool m_dataRetrievalTasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEDATARETRIEVALTASKRESPONSE_H_
