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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_SETNODEPOOLNODEPROTECTIONRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_SETNODEPOOLNODEPROTECTIONRESPONSE_H_

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
                * SetNodePoolNodeProtection返回参数结构体
                */
                class SetNodePoolNodeProtectionResponse : public AbstractModel
                {
                public:
                    SetNodePoolNodeProtectionResponse();
                    ~SetNodePoolNodeProtectionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取成功设置的节点id
                     * @return SucceedInstanceIds 成功设置的节点id
                     * 
                     */
                    std::vector<std::string> GetSucceedInstanceIds() const;

                    /**
                     * 判断参数 SucceedInstanceIds 是否已赋值
                     * @return SucceedInstanceIds 是否已赋值
                     * 
                     */
                    bool SucceedInstanceIdsHasBeenSet() const;

                    /**
                     * 获取没有成功设置的节点id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailedInstanceIds 没有成功设置的节点id
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

                private:

                    /**
                     * 成功设置的节点id
                     */
                    std::vector<std::string> m_succeedInstanceIds;
                    bool m_succeedInstanceIdsHasBeenSet;

                    /**
                     * 没有成功设置的节点id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_failedInstanceIds;
                    bool m_failedInstanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_SETNODEPOOLNODEPROTECTIONRESPONSE_H_
