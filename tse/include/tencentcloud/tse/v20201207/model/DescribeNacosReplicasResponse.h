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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBENACOSREPLICASRESPONSE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBENACOSREPLICASRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/NacosReplica.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeNacosReplicas返回参数结构体
                */
                class DescribeNacosReplicasResponse : public AbstractModel
                {
                public:
                    DescribeNacosReplicasResponse();
                    ~DescribeNacosReplicasResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取引擎实例副本信息
                     * @return Replicas 引擎实例副本信息
                     */
                    std::vector<NacosReplica> GetReplicas() const;

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     */
                    bool ReplicasHasBeenSet() const;

                    /**
                     * 获取副本个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 副本个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 引擎实例副本信息
                     */
                    std::vector<NacosReplica> m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * 副本个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBENACOSREPLICASRESPONSE_H_
