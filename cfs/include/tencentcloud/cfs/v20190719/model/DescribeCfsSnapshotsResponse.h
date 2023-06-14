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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSSNAPSHOTSRESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSSNAPSHOTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/SnapshotInfo.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeCfsSnapshots返回参数结构体
                */
                class DescribeCfsSnapshotsResponse : public AbstractModel
                {
                public:
                    DescribeCfsSnapshotsResponse();
                    ~DescribeCfsSnapshotsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总个数
                     * @return TotalCount 总个数
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
                     * 获取快照信息描述
                     * @return Snapshots 快照信息描述
                     * 
                     */
                    std::vector<SnapshotInfo> GetSnapshots() const;

                    /**
                     * 判断参数 Snapshots 是否已赋值
                     * @return Snapshots 是否已赋值
                     * 
                     */
                    bool SnapshotsHasBeenSet() const;

                    /**
                     * 获取快照列表快照汇总
                     * @return TotalSize 快照列表快照汇总
                     * 
                     */
                    uint64_t GetTotalSize() const;

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     * 
                     */
                    bool TotalSizeHasBeenSet() const;

                private:

                    /**
                     * 总个数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 快照信息描述
                     */
                    std::vector<SnapshotInfo> m_snapshots;
                    bool m_snapshotsHasBeenSet;

                    /**
                     * 快照列表快照汇总
                     */
                    uint64_t m_totalSize;
                    bool m_totalSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSSNAPSHOTSRESPONSE_H_
