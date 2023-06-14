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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_CREATEEDGEUNITCLOUDRESPONSE_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_CREATEEDGEUNITCLOUDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * CreateEdgeUnitCloud返回参数结构体
                */
                class CreateEdgeUnitCloudResponse : public AbstractModel
                {
                public:
                    CreateEdgeUnitCloudResponse();
                    ~CreateEdgeUnitCloudResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取tke集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId tke集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取IECP集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EdgeUnitId IECP集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetEdgeUnitId() const;

                    /**
                     * 判断参数 EdgeUnitId 是否已赋值
                     * @return EdgeUnitId 是否已赋值
                     * 
                     */
                    bool EdgeUnitIdHasBeenSet() const;

                private:

                    /**
                     * tke集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * IECP集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_edgeUnitId;
                    bool m_edgeUnitIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_CREATEEDGEUNITCLOUDRESPONSE_H_
