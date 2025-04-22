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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_BATCHDEREGISTERTARGETSRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_BATCHDEREGISTERTARGETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * BatchDeregisterTargets返回参数结构体
                */
                class BatchDeregisterTargetsResponse : public AbstractModel
                {
                public:
                    BatchDeregisterTargetsResponse();
                    ~BatchDeregisterTargetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取解绑失败的监听器ID。
                     * @return FailListenerIdSet 解绑失败的监听器ID。
                     * 
                     */
                    std::vector<std::string> GetFailListenerIdSet() const;

                    /**
                     * 判断参数 FailListenerIdSet 是否已赋值
                     * @return FailListenerIdSet 是否已赋值
                     * 
                     */
                    bool FailListenerIdSetHasBeenSet() const;

                    /**
                     * 获取解绑失败错误原因信息。
                     * @return Message 解绑失败错误原因信息。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 解绑失败的监听器ID。
                     */
                    std::vector<std::string> m_failListenerIdSet;
                    bool m_failListenerIdSetHasBeenSet;

                    /**
                     * 解绑失败错误原因信息。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_BATCHDEREGISTERTARGETSRESPONSE_H_
