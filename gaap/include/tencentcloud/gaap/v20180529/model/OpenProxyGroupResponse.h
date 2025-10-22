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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_OPENPROXYGROUPRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_OPENPROXYGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * OpenProxyGroup返回参数结构体
                */
                class OpenProxyGroupResponse : public AbstractModel
                {
                public:
                    OpenProxyGroupResponse();
                    ~OpenProxyGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取非关闭状态下的通道实例ID列表，不可开启。
                     * @return InvalidStatusInstanceSet 非关闭状态下的通道实例ID列表，不可开启。
                     * 
                     */
                    std::vector<std::string> GetInvalidStatusInstanceSet() const;

                    /**
                     * 判断参数 InvalidStatusInstanceSet 是否已赋值
                     * @return InvalidStatusInstanceSet 是否已赋值
                     * 
                     */
                    bool InvalidStatusInstanceSetHasBeenSet() const;

                    /**
                     * 获取开启操作失败的通道实例ID列表。
                     * @return OperationFailedInstanceSet 开启操作失败的通道实例ID列表。
                     * 
                     */
                    std::vector<std::string> GetOperationFailedInstanceSet() const;

                    /**
                     * 判断参数 OperationFailedInstanceSet 是否已赋值
                     * @return OperationFailedInstanceSet 是否已赋值
                     * 
                     */
                    bool OperationFailedInstanceSetHasBeenSet() const;

                private:

                    /**
                     * 非关闭状态下的通道实例ID列表，不可开启。
                     */
                    std::vector<std::string> m_invalidStatusInstanceSet;
                    bool m_invalidStatusInstanceSetHasBeenSet;

                    /**
                     * 开启操作失败的通道实例ID列表。
                     */
                    std::vector<std::string> m_operationFailedInstanceSet;
                    bool m_operationFailedInstanceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_OPENPROXYGROUPRESPONSE_H_
