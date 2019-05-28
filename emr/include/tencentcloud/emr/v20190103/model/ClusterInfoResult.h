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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTERINFORESULT_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTERINFORESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ClusterInstanceInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 查询结果
                */
                class ClusterInfoResult : public AbstractModel
                {
                public:
                    ClusterInfoResult();
                    ~ClusterInfoResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCnt 数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTotalCnt() const;

                    /**
                     * 设置数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TotalCnt 数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTotalCnt(const uint64_t& _totalCnt);

                    /**
                     * 判断参数 TotalCnt 是否已赋值
                     * @return TotalCnt 是否已赋值
                     */
                    bool TotalCntHasBeenSet() const;

                    /**
                     * 获取集群信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterList 集群信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ClusterInstanceInfo> GetClusterList() const;

                    /**
                     * 设置集群信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterList 集群信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterList(const std::vector<ClusterInstanceInfo>& _clusterList);

                    /**
                     * 判断参数 ClusterList 是否已赋值
                     * @return ClusterList 是否已赋值
                     */
                    bool ClusterListHasBeenSet() const;

                private:

                    /**
                     * 数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCnt;
                    bool m_totalCntHasBeenSet;

                    /**
                     * 集群信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ClusterInstanceInfo> m_clusterList;
                    bool m_clusterListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTERINFORESULT_H_
