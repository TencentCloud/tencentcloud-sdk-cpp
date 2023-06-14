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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBESNAPSHOTOPERATIONLOGSRESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBESNAPSHOTOPERATIONLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/SnapshotOperateLog.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeSnapshotOperationLogs返回参数结构体
                */
                class DescribeSnapshotOperationLogsResponse : public AbstractModel
                {
                public:
                    DescribeSnapshotOperationLogsResponse();
                    ~DescribeSnapshotOperationLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取快照ID
                     * @return SnapshotId 快照ID
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取操作日志
                     * @return SnapshotOperates 操作日志
                     * 
                     */
                    std::vector<SnapshotOperateLog> GetSnapshotOperates() const;

                    /**
                     * 判断参数 SnapshotOperates 是否已赋值
                     * @return SnapshotOperates 是否已赋值
                     * 
                     */
                    bool SnapshotOperatesHasBeenSet() const;

                private:

                    /**
                     * 快照ID
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * 操作日志
                     */
                    std::vector<SnapshotOperateLog> m_snapshotOperates;
                    bool m_snapshotOperatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBESNAPSHOTOPERATIONLOGSRESPONSE_H_
