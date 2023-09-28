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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCESTAGSRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCESTAGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ClusterIDToFlowID.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifyResourcesTags返回参数结构体
                */
                class ModifyResourcesTagsResponse : public AbstractModel
                {
                public:
                    ModifyResourcesTagsResponse();
                    ~ModifyResourcesTagsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取成功的资源id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessList 成功的资源id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSuccessList() const;

                    /**
                     * 判断参数 SuccessList 是否已赋值
                     * @return SuccessList 是否已赋值
                     * 
                     */
                    bool SuccessListHasBeenSet() const;

                    /**
                     * 获取失败的资源id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailList 失败的资源id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetFailList() const;

                    /**
                     * 判断参数 FailList 是否已赋值
                     * @return FailList 是否已赋值
                     * 
                     */
                    bool FailListHasBeenSet() const;

                    /**
                     * 获取部分成功的资源id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PartSuccessList 部分成功的资源id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPartSuccessList() const;

                    /**
                     * 判断参数 PartSuccessList 是否已赋值
                     * @return PartSuccessList 是否已赋值
                     * 
                     */
                    bool PartSuccessListHasBeenSet() const;

                    /**
                     * 获取集群id与流程id的映射列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterToFlowIdList 集群id与流程id的映射列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ClusterIDToFlowID> GetClusterToFlowIdList() const;

                    /**
                     * 判断参数 ClusterToFlowIdList 是否已赋值
                     * @return ClusterToFlowIdList 是否已赋值
                     * 
                     */
                    bool ClusterToFlowIdListHasBeenSet() const;

                private:

                    /**
                     * 成功的资源id列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_successList;
                    bool m_successListHasBeenSet;

                    /**
                     * 失败的资源id列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_failList;
                    bool m_failListHasBeenSet;

                    /**
                     * 部分成功的资源id列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_partSuccessList;
                    bool m_partSuccessListHasBeenSet;

                    /**
                     * 集群id与流程id的映射列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ClusterIDToFlowID> m_clusterToFlowIdList;
                    bool m_clusterToFlowIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCESTAGSRESPONSE_H_
