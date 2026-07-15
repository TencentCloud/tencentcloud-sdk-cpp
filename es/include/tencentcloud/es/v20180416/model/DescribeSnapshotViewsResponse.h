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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESNAPSHOTVIEWSRESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESNAPSHOTVIEWSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/Snapshots.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeSnapshotViews返回参数结构体
                */
                class DescribeSnapshotViewsResponse : public AbstractModel
                {
                public:
                    DescribeSnapshotViewsResponse();
                    ~DescribeSnapshotViewsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>快照信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Snapshots <p>快照信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Snapshots> GetSnapshots() const;

                    /**
                     * 判断参数 Snapshots 是否已赋值
                     * @return Snapshots 是否已赋值
                     * 
                     */
                    bool SnapshotsHasBeenSet() const;

                    /**
                     * 获取<p>集群快照获取失败信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailedMsgs <p>集群快照获取失败信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetFailedMsgs() const;

                    /**
                     * 判断参数 FailedMsgs 是否已赋值
                     * @return FailedMsgs 是否已赋值
                     * 
                     */
                    bool FailedMsgsHasBeenSet() const;

                private:

                    /**
                     * <p>快照信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Snapshots> m_snapshots;
                    bool m_snapshotsHasBeenSet;

                    /**
                     * <p>集群快照获取失败信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_failedMsgs;
                    bool m_failedMsgsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESNAPSHOTVIEWSRESPONSE_H_
