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

#ifndef TENCENTCLOUD_MARKET_V20191010_MODEL_SYNCUSERANDORDERINFORESPONSE_H_
#define TENCENTCLOUD_MARKET_V20191010_MODEL_SYNCUSERANDORDERINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/market/v20191010/model/SyncUserAndOrderInfoDetail.h>
#include <tencentcloud/market/v20191010/model/Error.h>


namespace TencentCloud
{
    namespace Market
    {
        namespace V20191010
        {
            namespace Model
            {
                /**
                * SyncUserAndOrderInfo返回参数结构体
                */
                class SyncUserAndOrderInfoResponse : public AbstractModel
                {
                public:
                    SyncUserAndOrderInfoResponse();
                    ~SyncUserAndOrderInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取同步用户信息订单信息详情
                     * @return Details 同步用户信息订单信息详情
                     */
                    SyncUserAndOrderInfoDetail GetDetails() const;

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     */
                    bool DetailsHasBeenSet() const;

                    /**
                     * 获取返回信息 成功返回 0 success
                     * @return Info 返回信息 成功返回 0 success
                     */
                    Error GetInfo() const;

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     */
                    bool InfoHasBeenSet() const;

                private:

                    /**
                     * 同步用户信息订单信息详情
                     */
                    SyncUserAndOrderInfoDetail m_details;
                    bool m_detailsHasBeenSet;

                    /**
                     * 返回信息 成功返回 0 success
                     */
                    Error m_info;
                    bool m_infoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARKET_V20191010_MODEL_SYNCUSERANDORDERINFORESPONSE_H_
