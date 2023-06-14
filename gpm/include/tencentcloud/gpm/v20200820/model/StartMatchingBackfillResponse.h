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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_STARTMATCHINGBACKFILLRESPONSE_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_STARTMATCHINGBACKFILLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gpm/v20200820/model/MatchTicket.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * StartMatchingBackfill返回参数结构体
                */
                class StartMatchingBackfillResponse : public AbstractModel
                {
                public:
                    StartMatchingBackfillResponse();
                    ~StartMatchingBackfillResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取匹配票据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MatchTicket 匹配票据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MatchTicket GetMatchTicket() const;

                    /**
                     * 判断参数 MatchTicket 是否已赋值
                     * @return MatchTicket 是否已赋值
                     * 
                     */
                    bool MatchTicketHasBeenSet() const;

                private:

                    /**
                     * 匹配票据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MatchTicket m_matchTicket;
                    bool m_matchTicketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_STARTMATCHINGBACKFILLRESPONSE_H_
