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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECLOGVASINFORESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECLOGVASINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/VasInfoResourceDetail.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeSecLogVasInfo返回参数结构体
                */
                class DescribeSecLogVasInfoResponse : public AbstractModel
                {
                public:
                    DescribeSecLogVasInfoResponse();
                    ~DescribeSecLogVasInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取购买状态
待购: Pending
已购: Normal
隔离: Isolate
                     * @return BuyStatus 购买状态
待购: Pending
已购: Normal
隔离: Isolate
                     * 
                     */
                    std::string GetBuyStatus() const;

                    /**
                     * 判断参数 BuyStatus 是否已赋值
                     * @return BuyStatus 是否已赋值
                     * 
                     */
                    bool BuyStatusHasBeenSet() const;

                    /**
                     * 获取存储时长(月)
                     * @return LogSaveMonth 存储时长(月)
                     * 
                     */
                    int64_t GetLogSaveMonth() const;

                    /**
                     * 判断参数 LogSaveMonth 是否已赋值
                     * @return LogSaveMonth 是否已赋值
                     * 
                     */
                    bool LogSaveMonthHasBeenSet() const;

                    /**
                     * 获取起始时间
                     * @return StartTime 起始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取截止时间
                     * @return EndTime 截止时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取存储容量(GB)
                     * @return LogCapacity 存储容量(GB)
                     * 
                     */
                    uint64_t GetLogCapacity() const;

                    /**
                     * 判断参数 LogCapacity 是否已赋值
                     * @return LogCapacity 是否已赋值
                     * 
                     */
                    bool LogCapacityHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return ResourceID 资源ID
                     * 
                     */
                    std::string GetResourceID() const;

                    /**
                     * 判断参数 ResourceID 是否已赋值
                     * @return ResourceID 是否已赋值
                     * 
                     */
                    bool ResourceIDHasBeenSet() const;

                    /**
                     * 获取是否曾经购买过(false:未曾 true:曾经购买过)
                     * @return IsPurchased 是否曾经购买过(false:未曾 true:曾经购买过)
                     * 
                     */
                    bool GetIsPurchased() const;

                    /**
                     * 判断参数 IsPurchased 是否已赋值
                     * @return IsPurchased 是否已赋值
                     * 
                     */
                    bool IsPurchasedHasBeenSet() const;

                    /**
                     * 获取试用存储容量(GB)
                     * @return TrialCapacity 试用存储容量(GB)
                     * 
                     */
                    uint64_t GetTrialCapacity() const;

                    /**
                     * 判断参数 TrialCapacity 是否已赋值
                     * @return TrialCapacity 是否已赋值
                     * 
                     */
                    bool TrialCapacityHasBeenSet() const;

                    /**
                     * 获取资源详情数组对象
                     * @return ResourceDetailList 资源详情数组对象
                     * 
                     */
                    std::vector<VasInfoResourceDetail> GetResourceDetailList() const;

                    /**
                     * 判断参数 ResourceDetailList 是否已赋值
                     * @return ResourceDetailList 是否已赋值
                     * 
                     */
                    bool ResourceDetailListHasBeenSet() const;

                private:

                    /**
                     * 购买状态
待购: Pending
已购: Normal
隔离: Isolate
                     */
                    std::string m_buyStatus;
                    bool m_buyStatusHasBeenSet;

                    /**
                     * 存储时长(月)
                     */
                    int64_t m_logSaveMonth;
                    bool m_logSaveMonthHasBeenSet;

                    /**
                     * 起始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 截止时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 存储容量(GB)
                     */
                    uint64_t m_logCapacity;
                    bool m_logCapacityHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_resourceID;
                    bool m_resourceIDHasBeenSet;

                    /**
                     * 是否曾经购买过(false:未曾 true:曾经购买过)
                     */
                    bool m_isPurchased;
                    bool m_isPurchasedHasBeenSet;

                    /**
                     * 试用存储容量(GB)
                     */
                    uint64_t m_trialCapacity;
                    bool m_trialCapacityHasBeenSet;

                    /**
                     * 资源详情数组对象
                     */
                    std::vector<VasInfoResourceDetail> m_resourceDetailList;
                    bool m_resourceDetailListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECLOGVASINFORESPONSE_H_
