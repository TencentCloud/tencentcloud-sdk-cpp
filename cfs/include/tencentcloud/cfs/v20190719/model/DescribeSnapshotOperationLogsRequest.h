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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBESNAPSHOTOPERATIONLOGSREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBESNAPSHOTOPERATIONLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeSnapshotOperationLogs请求参数结构体
                */
                class DescribeSnapshotOperationLogsRequest : public AbstractModel
                {
                public:
                    DescribeSnapshotOperationLogsRequest();
                    ~DescribeSnapshotOperationLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取快照ID，可以通过[DescribeCfsSnapshots](https://cloud.tencent.com/document/api/582/80206) 查询获取
                     * @return SnapshotId 快照ID，可以通过[DescribeCfsSnapshots](https://cloud.tencent.com/document/api/582/80206) 查询获取
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置快照ID，可以通过[DescribeCfsSnapshots](https://cloud.tencent.com/document/api/582/80206) 查询获取
                     * @param _snapshotId 快照ID，可以通过[DescribeCfsSnapshots](https://cloud.tencent.com/document/api/582/80206) 查询获取
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取起始时间，格式“YYYY-MM-DD hh:mm:ss”
                     * @return StartTime 起始时间，格式“YYYY-MM-DD hh:mm:ss”
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间，格式“YYYY-MM-DD hh:mm:ss”
                     * @param _startTime 起始时间，格式“YYYY-MM-DD hh:mm:ss”
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，格式“YYYY-MM-DD hh:mm:ss”
                     * @return EndTime 结束时间，格式“YYYY-MM-DD hh:mm:ss”
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，格式“YYYY-MM-DD hh:mm:ss”
                     * @param _endTime 结束时间，格式“YYYY-MM-DD hh:mm:ss”
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 快照ID，可以通过[DescribeCfsSnapshots](https://cloud.tencent.com/document/api/582/80206) 查询获取
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * 起始时间，格式“YYYY-MM-DD hh:mm:ss”
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，格式“YYYY-MM-DD hh:mm:ss”
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBESNAPSHOTOPERATIONLOGSREQUEST_H_
