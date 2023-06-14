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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ADDEXISTEDINSTANCESRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ADDEXISTEDINSTANCESRESPONSE_H_

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
                * AddExistedInstances返回参数结构体
                */
                class AddExistedInstancesResponse : public AbstractModel
                {
                public:
                    AddExistedInstancesResponse();
                    ~AddExistedInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取失败的节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailedInstanceIds 失败的节点ID
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
                     * 获取成功的节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccInstanceIds 成功的节点ID
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
                     * 获取超时未返回出来节点的ID(可能失败，也可能成功)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeoutInstanceIds 超时未返回出来节点的ID(可能失败，也可能成功)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTimeoutInstanceIds() const;

                    /**
                     * 判断参数 TimeoutInstanceIds 是否已赋值
                     * @return TimeoutInstanceIds 是否已赋值
                     * 
                     */
                    bool TimeoutInstanceIdsHasBeenSet() const;

                    /**
                     * 获取失败的节点的失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailedReasons 失败的节点的失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetFailedReasons() const;

                    /**
                     * 判断参数 FailedReasons 是否已赋值
                     * @return FailedReasons 是否已赋值
                     * 
                     */
                    bool FailedReasonsHasBeenSet() const;

                private:

                    /**
                     * 失败的节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_failedInstanceIds;
                    bool m_failedInstanceIdsHasBeenSet;

                    /**
                     * 成功的节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_succInstanceIds;
                    bool m_succInstanceIdsHasBeenSet;

                    /**
                     * 超时未返回出来节点的ID(可能失败，也可能成功)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_timeoutInstanceIds;
                    bool m_timeoutInstanceIdsHasBeenSet;

                    /**
                     * 失败的节点的失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_failedReasons;
                    bool m_failedReasonsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ADDEXISTEDINSTANCESRESPONSE_H_
