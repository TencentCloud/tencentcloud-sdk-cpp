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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATETOKENPLANTEAMORDERANDBUYRESPONSE_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATETOKENPLANTEAMORDERANDBUYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * CreateTokenPlanTeamOrderAndBuy返回参数结构体
                */
                class CreateTokenPlanTeamOrderAndBuyResponse : public AbstractModel
                {
                public:
                    CreateTokenPlanTeamOrderAndBuyResponse();
                    ~CreateTokenPlanTeamOrderAndBuyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯云订单 ID。用于关联一次购买操作下的所有子订单。
                     * @return BigOrderId 腾讯云订单 ID。用于关联一次购买操作下的所有子订单。
                     * 
                     */
                    std::string GetBigOrderId() const;

                    /**
                     * 判断参数 BigOrderId 是否已赋值
                     * @return BigOrderId 是否已赋值
                     * 
                     */
                    bool BigOrderIdHasBeenSet() const;

                private:

                    /**
                     * 腾讯云订单 ID。用于关联一次购买操作下的所有子订单。
                     */
                    std::string m_bigOrderId;
                    bool m_bigOrderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATETOKENPLANTEAMORDERANDBUYRESPONSE_H_
