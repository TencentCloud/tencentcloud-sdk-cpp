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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEDGEAVAILABLEEXTRAARGSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEDGEAVAILABLEEXTRAARGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/EdgeAvailableExtraArgs.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeEdgeAvailableExtraArgs返回参数结构体
                */
                class DescribeEdgeAvailableExtraArgsResponse : public AbstractModel
                {
                public:
                    DescribeEdgeAvailableExtraArgsResponse();
                    ~DescribeEdgeAvailableExtraArgsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterVersion 集群版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取可用的自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvailableExtraArgs 可用的自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EdgeAvailableExtraArgs GetAvailableExtraArgs() const;

                    /**
                     * 判断参数 AvailableExtraArgs 是否已赋值
                     * @return AvailableExtraArgs 是否已赋值
                     */
                    bool AvailableExtraArgsHasBeenSet() const;

                private:

                    /**
                     * 集群版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * 可用的自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EdgeAvailableExtraArgs m_availableExtraArgs;
                    bool m_availableExtraArgsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEDGEAVAILABLEEXTRAARGSRESPONSE_H_
