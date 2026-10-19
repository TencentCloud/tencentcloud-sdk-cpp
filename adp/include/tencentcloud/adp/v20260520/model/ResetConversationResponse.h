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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_RESETCONVERSATIONRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_RESETCONVERSATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ResetConversation返回参数结构体
                */
                class ResetConversationResponse : public AbstractModel
                {
                public:
                    ResetConversationResponse();
                    ~ResetConversationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>重置时间，单位为ms</p>
                     * @return ResetTime <p>重置时间，单位为ms</p>
                     * 
                     */
                    std::string GetResetTime() const;

                    /**
                     * 判断参数 ResetTime 是否已赋值
                     * @return ResetTime 是否已赋值
                     * 
                     */
                    bool ResetTimeHasBeenSet() const;

                    /**
                     * 获取<p>重置前的最后一条记录的recordId</p>
                     * @return ResetThroughRecordId <p>重置前的最后一条记录的recordId</p>
                     * 
                     */
                    std::string GetResetThroughRecordId() const;

                    /**
                     * 判断参数 ResetThroughRecordId 是否已赋值
                     * @return ResetThroughRecordId 是否已赋值
                     * 
                     */
                    bool ResetThroughRecordIdHasBeenSet() const;

                private:

                    /**
                     * <p>重置时间，单位为ms</p>
                     */
                    std::string m_resetTime;
                    bool m_resetTimeHasBeenSet;

                    /**
                     * <p>重置前的最后一条记录的recordId</p>
                     */
                    std::string m_resetThroughRecordId;
                    bool m_resetThroughRecordIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_RESETCONVERSATIONRESPONSE_H_
