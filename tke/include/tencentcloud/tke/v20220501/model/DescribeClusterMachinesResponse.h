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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBECLUSTERMACHINESRESPONSE_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBECLUSTERMACHINESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/Machine.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * DescribeClusterMachines返回参数结构体
                */
                class DescribeClusterMachinesResponse : public AbstractModel
                {
                public:
                    DescribeClusterMachinesResponse();
                    ~DescribeClusterMachinesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取节点池节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Machines 节点池节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Machine> GetMachines() const;

                    /**
                     * 判断参数 Machines 是否已赋值
                     * @return Machines 是否已赋值
                     * 
                     */
                    bool MachinesHasBeenSet() const;

                    /**
                     * 获取资源总数
                     * @return TotalCount 资源总数
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
                     * 节点池节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Machine> m_machines;
                    bool m_machinesHasBeenSet;

                    /**
                     * 资源总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBECLUSTERMACHINESRESPONSE_H_
