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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEDEALRESPONSE_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEDEALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/Deals.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * CreateDeal返回参数结构体
                */
                class CreateDealResponse : public AbstractModel
                {
                public:
                    CreateDealResponse();
                    ~CreateDealResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取大订单号，一个大订单号下可以有多个子订单，说明是同一次下单
                     * @return BigDealId 大订单号，一个大订单号下可以有多个子订单，说明是同一次下单
                     * 
                     */
                    std::string GetBigDealId() const;

                    /**
                     * 判断参数 BigDealId 是否已赋值
                     * @return BigDealId 是否已赋值
                     * 
                     */
                    bool BigDealIdHasBeenSet() const;

                    /**
                     * 获取子订单列表
                     * @return DealList 子订单列表
                     * 
                     */
                    std::vector<Deals> GetDealList() const;

                    /**
                     * 判断参数 DealList 是否已赋值
                     * @return DealList 是否已赋值
                     * 
                     */
                    bool DealListHasBeenSet() const;

                private:

                    /**
                     * 大订单号，一个大订单号下可以有多个子订单，说明是同一次下单
                     */
                    std::string m_bigDealId;
                    bool m_bigDealIdHasBeenSet;

                    /**
                     * 子订单列表
                     */
                    std::vector<Deals> m_dealList;
                    bool m_dealListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEDEALRESPONSE_H_
