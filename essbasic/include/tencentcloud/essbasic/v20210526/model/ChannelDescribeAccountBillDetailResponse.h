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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDESCRIBEACCOUNTBILLDETAILRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDESCRIBEACCOUNTBILLDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelDescribeAccountBillDetail返回参数结构体
                */
                class ChannelDescribeAccountBillDetailResponse : public AbstractModel
                {
                public:
                    ChannelDescribeAccountBillDetailResponse();
                    ~ChannelDescribeAccountBillDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当前绑定中账号数量
                     * @return BoundAccountsNumber 当前绑定中账号数量
                     * 
                     */
                    int64_t GetBoundAccountsNumber() const;

                    /**
                     * 判断参数 BoundAccountsNumber 是否已赋值
                     * @return BoundAccountsNumber 是否已赋值
                     * 
                     */
                    bool BoundAccountsNumberHasBeenSet() const;

                    /**
                     * 获取剩余可绑定账号数量
                     * @return RemainAvailableAccountsNumber 剩余可绑定账号数量
                     * 
                     */
                    int64_t GetRemainAvailableAccountsNumber() const;

                    /**
                     * 判断参数 RemainAvailableAccountsNumber 是否已赋值
                     * @return RemainAvailableAccountsNumber 是否已赋值
                     * 
                     */
                    bool RemainAvailableAccountsNumberHasBeenSet() const;

                    /**
                     * 获取已失效账号数量
                     * @return InvalidAccountsNumber 已失效账号数量
                     * 
                     */
                    int64_t GetInvalidAccountsNumber() const;

                    /**
                     * 判断参数 InvalidAccountsNumber 是否已赋值
                     * @return InvalidAccountsNumber 是否已赋值
                     * 
                     */
                    bool InvalidAccountsNumberHasBeenSet() const;

                    /**
                     * 获取购买数量
                     * @return TotalBuyAccountsNumber 购买数量
                     * 
                     */
                    int64_t GetTotalBuyAccountsNumber() const;

                    /**
                     * 判断参数 TotalBuyAccountsNumber 是否已赋值
                     * @return TotalBuyAccountsNumber 是否已赋值
                     * 
                     */
                    bool TotalBuyAccountsNumberHasBeenSet() const;

                    /**
                     * 获取赠送数量
                     * @return TotalGiftAccountsNumber 赠送数量
                     * 
                     */
                    int64_t GetTotalGiftAccountsNumber() const;

                    /**
                     * 判断参数 TotalGiftAccountsNumber 是否已赋值
                     * @return TotalGiftAccountsNumber 是否已赋值
                     * 
                     */
                    bool TotalGiftAccountsNumberHasBeenSet() const;

                private:

                    /**
                     * 当前绑定中账号数量
                     */
                    int64_t m_boundAccountsNumber;
                    bool m_boundAccountsNumberHasBeenSet;

                    /**
                     * 剩余可绑定账号数量
                     */
                    int64_t m_remainAvailableAccountsNumber;
                    bool m_remainAvailableAccountsNumberHasBeenSet;

                    /**
                     * 已失效账号数量
                     */
                    int64_t m_invalidAccountsNumber;
                    bool m_invalidAccountsNumberHasBeenSet;

                    /**
                     * 购买数量
                     */
                    int64_t m_totalBuyAccountsNumber;
                    bool m_totalBuyAccountsNumberHasBeenSet;

                    /**
                     * 赠送数量
                     */
                    int64_t m_totalGiftAccountsNumber;
                    bool m_totalGiftAccountsNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDESCRIBEACCOUNTBILLDETAILRESPONSE_H_
