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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_GETSNAPOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_GETSNAPOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * GetSnapOverview返回参数结构体
                */
                class GetSnapOverviewResponse : public AbstractModel
                {
                public:
                    GetSnapOverviewResponse();
                    ~GetSnapOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户快照总大小
                     * @return TotalSize 用户快照总大小
                     * 
                     */
                    double GetTotalSize() const;

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     * 
                     */
                    bool TotalSizeHasBeenSet() const;

                    /**
                     * 获取用户快照总大小（用于计费）
                     * @return RealTradeSize 用户快照总大小（用于计费）
                     * 
                     */
                    double GetRealTradeSize() const;

                    /**
                     * 判断参数 RealTradeSize 是否已赋值
                     * @return RealTradeSize 是否已赋值
                     * 
                     */
                    bool RealTradeSizeHasBeenSet() const;

                    /**
                     * 获取快照免费额度
                     * @return FreeQuota 快照免费额度
                     * 
                     */
                    double GetFreeQuota() const;

                    /**
                     * 判断参数 FreeQuota 是否已赋值
                     * @return FreeQuota 是否已赋值
                     * 
                     */
                    bool FreeQuotaHasBeenSet() const;

                    /**
                     * 获取快照总个数
                     * @return TotalNums 快照总个数
                     * 
                     */
                    int64_t GetTotalNums() const;

                    /**
                     * 判断参数 TotalNums 是否已赋值
                     * @return TotalNums 是否已赋值
                     * 
                     */
                    bool TotalNumsHasBeenSet() const;

                private:

                    /**
                     * 用户快照总大小
                     */
                    double m_totalSize;
                    bool m_totalSizeHasBeenSet;

                    /**
                     * 用户快照总大小（用于计费）
                     */
                    double m_realTradeSize;
                    bool m_realTradeSizeHasBeenSet;

                    /**
                     * 快照免费额度
                     */
                    double m_freeQuota;
                    bool m_freeQuotaHasBeenSet;

                    /**
                     * 快照总个数
                     */
                    int64_t m_totalNums;
                    bool m_totalNumsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_GETSNAPOVERVIEWRESPONSE_H_
