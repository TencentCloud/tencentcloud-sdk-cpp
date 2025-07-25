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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBECHANNELSEALPOLICYWORKFLOWURLRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBECHANNELSEALPOLICYWORKFLOWURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * DescribeChannelSealPolicyWorkflowUrl返回参数结构体
                */
                class DescribeChannelSealPolicyWorkflowUrlResponse : public AbstractModel
                {
                public:
                    DescribeChannelSealPolicyWorkflowUrlResponse();
                    ~DescribeChannelSealPolicyWorkflowUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用印审批小程序链接，链接类型（通过H5唤起小程序或通过APP跳转方式查看）。
                     * @return WorkflowUrl 用印审批小程序链接，链接类型（通过H5唤起小程序或通过APP跳转方式查看）。
                     * 
                     */
                    std::string GetWorkflowUrl() const;

                    /**
                     * 判断参数 WorkflowUrl 是否已赋值
                     * @return WorkflowUrl 是否已赋值
                     * 
                     */
                    bool WorkflowUrlHasBeenSet() const;

                private:

                    /**
                     * 用印审批小程序链接，链接类型（通过H5唤起小程序或通过APP跳转方式查看）。
                     */
                    std::string m_workflowUrl;
                    bool m_workflowUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBECHANNELSEALPOLICYWORKFLOWURLRESPONSE_H_
