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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERINSTANCESRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DeleteClusterInstances返回参数结构体
                */
                class DeleteClusterInstancesResponse : public AbstractModel
                {
                public:
                    DeleteClusterInstancesResponse();
                    ~DeleteClusterInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取删除成功的实例ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccInstanceIds 删除成功的实例ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSuccInstanceIds() const;

                    /**
                     * 判断参数 SuccInstanceIds 是否已赋值
                     * @return SuccInstanceIds 是否已赋值
                     * 
                     */
                    bool SuccInstanceIdsHasBeenSet() const;

                    /**
                     * 获取删除失败的实例ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailedInstanceIds 删除失败的实例ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetFailedInstanceIds() const;

                    /**
                     * 判断参数 FailedInstanceIds 是否已赋值
                     * @return FailedInstanceIds 是否已赋值
                     * 
                     */
                    bool FailedInstanceIdsHasBeenSet() const;

                    /**
                     * 获取未匹配到的实例ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotFoundInstanceIds 未匹配到的实例ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNotFoundInstanceIds() const;

                    /**
                     * 判断参数 NotFoundInstanceIds 是否已赋值
                     * @return NotFoundInstanceIds 是否已赋值
                     * 
                     */
                    bool NotFoundInstanceIdsHasBeenSet() const;

                private:

                    /**
                     * 删除成功的实例ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_succInstanceIds;
                    bool m_succInstanceIdsHasBeenSet;

                    /**
                     * 删除失败的实例ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_failedInstanceIds;
                    bool m_failedInstanceIdsHasBeenSet;

                    /**
                     * 未匹配到的实例ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_notFoundInstanceIds;
                    bool m_notFoundInstanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERINSTANCESRESPONSE_H_
