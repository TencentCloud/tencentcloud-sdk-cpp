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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEPROVERSIONINFORESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEPROVERSIONINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeProVersionInfo返回参数结构体
                */
                class DescribeProVersionInfoResponse : public AbstractModel
                {
                public:
                    DescribeProVersionInfoResponse();
                    ~DescribeProVersionInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取专业版开始时间，补充购买时才不为空
                     * @return StartTime 专业版开始时间，补充购买时才不为空
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
                     * 获取专业版结束时间，补充购买时才不为空
                     * @return EndTime 专业版结束时间，补充购买时才不为空
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
                     * 获取需购买的机器核数
                     * @return CoresCnt 需购买的机器核数
                     * 
                     */
                    uint64_t GetCoresCnt() const;

                    /**
                     * 判断参数 CoresCnt 是否已赋值
                     * @return CoresCnt 是否已赋值
                     * 
                     */
                    bool CoresCntHasBeenSet() const;

                    /**
                     * 获取弹性计费上限
                     * @return MaxPostPayCoresCnt 弹性计费上限
                     * 
                     */
                    uint64_t GetMaxPostPayCoresCnt() const;

                    /**
                     * 判断参数 MaxPostPayCoresCnt 是否已赋值
                     * @return MaxPostPayCoresCnt 是否已赋值
                     * 
                     */
                    bool MaxPostPayCoresCntHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return ResourceId 资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

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

                private:

                    /**
                     * 专业版开始时间，补充购买时才不为空
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 专业版结束时间，补充购买时才不为空
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 需购买的机器核数
                     */
                    uint64_t m_coresCnt;
                    bool m_coresCntHasBeenSet;

                    /**
                     * 弹性计费上限
                     */
                    uint64_t m_maxPostPayCoresCnt;
                    bool m_maxPostPayCoresCntHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 购买状态
待购: Pending
已购: Normal
隔离: Isolate
                     */
                    std::string m_buyStatus;
                    bool m_buyStatusHasBeenSet;

                    /**
                     * 是否曾经购买过(false:未曾 true:曾经购买过)
                     */
                    bool m_isPurchased;
                    bool m_isPurchasedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEPROVERSIONINFORESPONSE_H_
