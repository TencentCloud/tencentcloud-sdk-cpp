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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FLOWGROUPAPPROVERINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FLOWGROUPAPPROVERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 合同组相关信息，指定合同组子合同和签署方的信息，用于补充动态签署人。
                */
                class FlowGroupApproverInfo : public AbstractModel
                {
                public:
                    FlowGroupApproverInfo();
                    ~FlowGroupApproverInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合同流程ID。
                     * @return FlowId 合同流程ID。
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置合同流程ID。
                     * @param _flowId 合同流程ID。
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取签署节点ID，用于生成动态签署人链接完成领取。注：`生成动态签署人补充链接时必传。`
                     * @return RecipientId 签署节点ID，用于生成动态签署人链接完成领取。注：`生成动态签署人补充链接时必传。`
                     * 
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置签署节点ID，用于生成动态签署人链接完成领取。注：`生成动态签署人补充链接时必传。`
                     * @param _recipientId 签署节点ID，用于生成动态签署人链接完成领取。注：`生成动态签署人补充链接时必传。`
                     * 
                     */
                    void SetRecipientId(const std::string& _recipientId);

                    /**
                     * 判断参数 RecipientId 是否已赋值
                     * @return RecipientId 是否已赋值
                     * 
                     */
                    bool RecipientIdHasBeenSet() const;

                private:

                    /**
                     * 合同流程ID。
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 签署节点ID，用于生成动态签署人链接完成领取。注：`生成动态签署人补充链接时必传。`
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FLOWGROUPAPPROVERINFO_H_
