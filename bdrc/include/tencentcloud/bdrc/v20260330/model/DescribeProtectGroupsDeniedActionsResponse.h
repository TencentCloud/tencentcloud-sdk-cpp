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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEPROTECTGROUPSDENIEDACTIONSRESPONSE_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEPROTECTGROUPSDENIEDACTIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/ProtectGroupDeniedAction.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * DescribeProtectGroupsDeniedActions返回参数结构体
                */
                class DescribeProtectGroupsDeniedActionsResponse : public AbstractModel
                {
                public:
                    DescribeProtectGroupsDeniedActionsResponse();
                    ~DescribeProtectGroupsDeniedActionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取保护组操作掩码列表，返回每个保护组被禁止执行的操作
                     * @return ProtectGroupDeniedActionSet 保护组操作掩码列表，返回每个保护组被禁止执行的操作
                     * 
                     */
                    std::vector<ProtectGroupDeniedAction> GetProtectGroupDeniedActionSet() const;

                    /**
                     * 判断参数 ProtectGroupDeniedActionSet 是否已赋值
                     * @return ProtectGroupDeniedActionSet 是否已赋值
                     * 
                     */
                    bool ProtectGroupDeniedActionSetHasBeenSet() const;

                private:

                    /**
                     * 保护组操作掩码列表，返回每个保护组被禁止执行的操作
                     */
                    std::vector<ProtectGroupDeniedAction> m_protectGroupDeniedActionSet;
                    bool m_protectGroupDeniedActionSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEPROTECTGROUPSDENIEDACTIONSRESPONSE_H_
