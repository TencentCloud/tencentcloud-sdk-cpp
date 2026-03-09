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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_DESCRIBEETCDINSTANCESRESPONSE_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_DESCRIBEETCDINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cetcd/v20220325/model/Etcd.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribeEtcdInstances返回参数结构体
                */
                class DescribeEtcdInstancesResponse : public AbstractModel
                {
                public:
                    DescribeEtcdInstancesResponse();
                    ~DescribeEtcdInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取etcd实例详细信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Etcds etcd实例详细信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Etcd> GetEtcds() const;

                    /**
                     * 判断参数 Etcds 是否已赋值
                     * @return Etcds 是否已赋值
                     * 
                     */
                    bool EtcdsHasBeenSet() const;

                    /**
                     * 获取符合条件的实例数量
                     * @return TotalCount 符合条件的实例数量
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * etcd实例详细信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Etcd> m_etcds;
                    bool m_etcdsHasBeenSet;

                    /**
                     * 符合条件的实例数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_DESCRIBEETCDINSTANCESRESPONSE_H_
