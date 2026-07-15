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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_SEALPOLICYAUTHORIZATIONFLOWS_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_SEALPOLICYAUTHORIZATIONFLOWS_H_

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
                * 根据合同对印章授权
                */
                class SealPolicyAuthorizationFlows : public AbstractModel
                {
                public:
                    SealPolicyAuthorizationFlows();
                    ~SealPolicyAuthorizationFlows() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>合同id列表，最大支持50个</p>
                     * @return FlowIds <p>合同id列表，最大支持50个</p>
                     * 
                     */
                    std::vector<std::string> GetFlowIds() const;

                    /**
                     * 设置<p>合同id列表，最大支持50个</p>
                     * @param _flowIds <p>合同id列表，最大支持50个</p>
                     * 
                     */
                    void SetFlowIds(const std::vector<std::string>& _flowIds);

                    /**
                     * 判断参数 FlowIds 是否已赋值
                     * @return FlowIds 是否已赋值
                     * 
                     */
                    bool FlowIdsHasBeenSet() const;

                    /**
                     * 获取<p>合同组id列表， 最大支持10个<br>FlowGroupIds(合同组)与FlowIds(合同列表) 两个参数只能选择其中一个，两者同时传会提示参数错误。</p>
                     * @return FlowGroupIds <p>合同组id列表， 最大支持10个<br>FlowGroupIds(合同组)与FlowIds(合同列表) 两个参数只能选择其中一个，两者同时传会提示参数错误。</p>
                     * 
                     */
                    std::vector<std::string> GetFlowGroupIds() const;

                    /**
                     * 设置<p>合同组id列表， 最大支持10个<br>FlowGroupIds(合同组)与FlowIds(合同列表) 两个参数只能选择其中一个，两者同时传会提示参数错误。</p>
                     * @param _flowGroupIds <p>合同组id列表， 最大支持10个<br>FlowGroupIds(合同组)与FlowIds(合同列表) 两个参数只能选择其中一个，两者同时传会提示参数错误。</p>
                     * 
                     */
                    void SetFlowGroupIds(const std::vector<std::string>& _flowGroupIds);

                    /**
                     * 判断参数 FlowGroupIds 是否已赋值
                     * @return FlowGroupIds 是否已赋值
                     * 
                     */
                    bool FlowGroupIdsHasBeenSet() const;

                private:

                    /**
                     * <p>合同id列表，最大支持50个</p>
                     */
                    std::vector<std::string> m_flowIds;
                    bool m_flowIdsHasBeenSet;

                    /**
                     * <p>合同组id列表， 最大支持10个<br>FlowGroupIds(合同组)与FlowIds(合同列表) 两个参数只能选择其中一个，两者同时传会提示参数错误。</p>
                     */
                    std::vector<std::string> m_flowGroupIds;
                    bool m_flowGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_SEALPOLICYAUTHORIZATIONFLOWS_H_
