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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CATALOGAPPROVERS_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CATALOGAPPROVERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/FlowApproverInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * 目录流程参与者
                */
                class CatalogApprovers : public AbstractModel
                {
                public:
                    CatalogApprovers();
                    ~CatalogApprovers() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流程ID
                     * @return FlowId 流程ID
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置流程ID
                     * @param _flowId 流程ID
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
                     * 获取参与者列表
                     * @return Approvers 参与者列表
                     * 
                     */
                    std::vector<FlowApproverInfo> GetApprovers() const;

                    /**
                     * 设置参与者列表
                     * @param _approvers 参与者列表
                     * 
                     */
                    void SetApprovers(const std::vector<FlowApproverInfo>& _approvers);

                    /**
                     * 判断参数 Approvers 是否已赋值
                     * @return Approvers 是否已赋值
                     * 
                     */
                    bool ApproversHasBeenSet() const;

                private:

                    /**
                     * 流程ID
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 参与者列表
                     */
                    std::vector<FlowApproverInfo> m_approvers;
                    bool m_approversHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CATALOGAPPROVERS_H_
