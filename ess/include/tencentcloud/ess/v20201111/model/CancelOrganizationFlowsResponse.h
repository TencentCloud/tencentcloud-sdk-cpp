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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CANCELORGANIZATIONFLOWSRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CANCELORGANIZATIONFLOWSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * CancelOrganizationFlows返回参数结构体
                */
                class CancelOrganizationFlowsResponse : public AbstractModel
                {
                public:
                    CancelOrganizationFlowsResponse();
                    ~CancelOrganizationFlowsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>批量撤销任务编号，为32位字符串，可用于<a href="https://qian.tencent.com/developers/partnerApis/operateFlows/DescribeCancelFlowsTask">查询批量撤销合同结果</a> 或关联<a href="https://qian.tencent.com/developers/partner/callback_types_contracts_sign#%E4%B9%9D-%E6%89%B9%E9%87%8F%E6%92%A4%E9%94%80%E7%BB%93%E6%9E%9C%E5%9B%9E%E8%B0%83">批量撤销任务结果回调</a></p>
                     * @return TaskId <p>批量撤销任务编号，为32位字符串，可用于<a href="https://qian.tencent.com/developers/partnerApis/operateFlows/DescribeCancelFlowsTask">查询批量撤销合同结果</a> 或关联<a href="https://qian.tencent.com/developers/partner/callback_types_contracts_sign#%E4%B9%9D-%E6%89%B9%E9%87%8F%E6%92%A4%E9%94%80%E7%BB%93%E6%9E%9C%E5%9B%9E%E8%B0%83">批量撤销任务结果回调</a></p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * <p>批量撤销任务编号，为32位字符串，可用于<a href="https://qian.tencent.com/developers/partnerApis/operateFlows/DescribeCancelFlowsTask">查询批量撤销合同结果</a> 或关联<a href="https://qian.tencent.com/developers/partner/callback_types_contracts_sign#%E4%B9%9D-%E6%89%B9%E9%87%8F%E6%92%A4%E9%94%80%E7%BB%93%E6%9E%9C%E5%9B%9E%E8%B0%83">批量撤销任务结果回调</a></p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CANCELORGANIZATIONFLOWSRESPONSE_H_
