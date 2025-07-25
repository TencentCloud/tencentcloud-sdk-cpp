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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_UPDATEANDPUBLISHNETWORKFIREWALLPOLICYDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_UPDATEANDPUBLISHNETWORKFIREWALLPOLICYDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * UpdateAndPublishNetworkFirewallPolicyDetail返回参数结构体
                */
                class UpdateAndPublishNetworkFirewallPolicyDetailResponse : public AbstractModel
                {
                public:
                    UpdateAndPublishNetworkFirewallPolicyDetailResponse();
                    ~UpdateAndPublishNetworkFirewallPolicyDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回创建的任务的ID，为0表示创建失败。
                     * @return TaskId 返回创建的任务的ID，为0表示创建失败。
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取创建任务的结果，"Succ"为成功，"Failed"为失败
                     * @return Result 创建任务的结果，"Succ"为成功，"Failed"为失败
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 返回创建的任务的ID，为0表示创建失败。
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 创建任务的结果，"Succ"为成功，"Failed"为失败
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_UPDATEANDPUBLISHNETWORKFIREWALLPOLICYDETAILRESPONSE_H_
