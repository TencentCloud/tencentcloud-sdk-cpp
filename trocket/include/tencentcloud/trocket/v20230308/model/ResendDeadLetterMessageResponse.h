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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_RESENDDEADLETTERMESSAGERESPONSE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_RESENDDEADLETTERMESSAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * ResendDeadLetterMessage返回参数结构体
                */
                class ResendDeadLetterMessageResponse : public AbstractModel
                {
                public:
                    ResendDeadLetterMessageResponse();
                    ~ResendDeadLetterMessageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取重发消息结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResendResult 重发消息结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetResendResult() const;

                    /**
                     * 判断参数 ResendResult 是否已赋值
                     * @return ResendResult 是否已赋值
                     * 
                     */
                    bool ResendResultHasBeenSet() const;

                private:

                    /**
                     * 重发消息结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_resendResult;
                    bool m_resendResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_RESENDDEADLETTERMESSAGERESPONSE_H_
