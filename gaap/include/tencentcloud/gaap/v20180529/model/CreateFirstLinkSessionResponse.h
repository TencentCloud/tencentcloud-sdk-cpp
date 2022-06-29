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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEFIRSTLINKSESSIONRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEFIRSTLINKSESSIONRESPONSE_H_

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
                * CreateFirstLinkSession返回参数结构体
                */
                class CreateFirstLinkSessionResponse : public AbstractModel
                {
                public:
                    CreateFirstLinkSessionResponse();
                    ~CreateFirstLinkSessionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取加速成功时返回，单次加速唯一会话Id。。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionId 加速成功时返回，单次加速唯一会话Id。。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSessionId() const;

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取剩余的加速时间，单位秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 剩余的加速时间，单位秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetDuration() const;

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * 加速成功时返回，单次加速唯一会话Id。。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 剩余的加速时间，单位秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEFIRSTLINKSESSIONRESPONSE_H_
