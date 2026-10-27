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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_DISASSOCIATESECURITYGROUPRESPONSE_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_DISASSOCIATESECURITYGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * DisassociateSecurityGroup返回参数结构体
                */
                class DisassociateSecurityGroupResponse : public AbstractModel
                {
                public:
                    DisassociateSecurityGroupResponse();
                    ~DisassociateSecurityGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取解关联失败的云桌面列表
                     * @return FailureSet 解关联失败的云桌面列表
                     * 
                     */
                    std::vector<std::string> GetFailureSet() const;

                    /**
                     * 判断参数 FailureSet 是否已赋值
                     * @return FailureSet 是否已赋值
                     * 
                     */
                    bool FailureSetHasBeenSet() const;

                    /**
                     * 获取解关联成功的云桌面列表
                     * @return SuccessSet 解关联成功的云桌面列表
                     * 
                     */
                    std::vector<std::string> GetSuccessSet() const;

                    /**
                     * 判断参数 SuccessSet 是否已赋值
                     * @return SuccessSet 是否已赋值
                     * 
                     */
                    bool SuccessSetHasBeenSet() const;

                private:

                    /**
                     * 解关联失败的云桌面列表
                     */
                    std::vector<std::string> m_failureSet;
                    bool m_failureSetHasBeenSet;

                    /**
                     * 解关联成功的云桌面列表
                     */
                    std::vector<std::string> m_successSet;
                    bool m_successSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_DISASSOCIATESECURITYGROUPRESPONSE_H_
