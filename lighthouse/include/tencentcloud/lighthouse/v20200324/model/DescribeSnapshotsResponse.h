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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBESNAPSHOTSRESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBESNAPSHOTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/Snapshot.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeSnapshots返回参数结构体
                */
                class DescribeSnapshotsResponse : public AbstractModel
                {
                public:
                    DescribeSnapshotsResponse();
                    ~DescribeSnapshotsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取快照的数量。
                     * @return TotalCount 快照的数量。
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
                     * 获取快照的详情列表。
                     * @return SnapshotSet 快照的详情列表。
                     * 
                     */
                    std::vector<Snapshot> GetSnapshotSet() const;

                    /**
                     * 判断参数 SnapshotSet 是否已赋值
                     * @return SnapshotSet 是否已赋值
                     * 
                     */
                    bool SnapshotSetHasBeenSet() const;

                private:

                    /**
                     * 快照的数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 快照的详情列表。
                     */
                    std::vector<Snapshot> m_snapshotSet;
                    bool m_snapshotSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBESNAPSHOTSRESPONSE_H_
