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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CHECKJOBSPECNAMERESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CHECKJOBSPECNAMERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CheckJobSpecName返回参数结构体
                */
                class CheckJobSpecNameResponse : public AbstractModel
                {
                public:
                    CheckJobSpecNameResponse();
                    ~CheckJobSpecNameResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>名称是否可用（未重名且不含保留字）</p>
                     * @return Available <p>名称是否可用（未重名且不含保留字）</p>
                     * 
                     */
                    bool GetAvailable() const;

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                    /**
                     * 获取<p>不可用时的原因；可用时为 null</p>
                     * @return Reason <p>不可用时的原因；可用时为 null</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * <p>名称是否可用（未重名且不含保留字）</p>
                     */
                    bool m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * <p>不可用时的原因；可用时为 null</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CHECKJOBSPECNAMERESPONSE_H_
