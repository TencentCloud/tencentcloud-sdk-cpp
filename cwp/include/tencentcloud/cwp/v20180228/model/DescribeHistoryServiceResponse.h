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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEHISTORYSERVICERESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEHISTORYSERVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeHistoryService返回参数结构体
                */
                class DescribeHistoryServiceResponse : public AbstractModel
                {
                public:
                    DescribeHistoryServiceResponse();
                    ~DescribeHistoryServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取1 可购买 2 只能升降配 3 只能跳到续费管理页
                     * @return BuyStatus 1 可购买 2 只能升降配 3 只能跳到续费管理页
                     * 
                     */
                    uint64_t GetBuyStatus() const;

                    /**
                     * 判断参数 BuyStatus 是否已赋值
                     * @return BuyStatus 是否已赋值
                     * 
                     */
                    bool BuyStatusHasBeenSet() const;

                    /**
                     * 获取用户已购容量 单位 G
                     * @return InquireNum 用户已购容量 单位 G
                     * 
                     */
                    uint64_t GetInquireNum() const;

                    /**
                     * 判断参数 InquireNum 是否已赋值
                     * @return InquireNum 是否已赋值
                     * 
                     */
                    bool InquireNumHasBeenSet() const;

                    /**
                     * 获取到期时间
                     * @return EndTime 到期时间
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
                     * 获取是否自动续费,0 初始值, 1 开通 2 没开通
                     * @return IsAutoOpenRenew 是否自动续费,0 初始值, 1 开通 2 没开通
                     * 
                     */
                    uint64_t GetIsAutoOpenRenew() const;

                    /**
                     * 判断参数 IsAutoOpenRenew 是否已赋值
                     * @return IsAutoOpenRenew 是否已赋值
                     * 
                     */
                    bool IsAutoOpenRenewHasBeenSet() const;

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
                     * 获取0 没开通 1 正常 2隔离 3销毁
                     * @return Status 0 没开通 1 正常 2隔离 3销毁
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                private:

                    /**
                     * 1 可购买 2 只能升降配 3 只能跳到续费管理页
                     */
                    uint64_t m_buyStatus;
                    bool m_buyStatusHasBeenSet;

                    /**
                     * 用户已购容量 单位 G
                     */
                    uint64_t m_inquireNum;
                    bool m_inquireNumHasBeenSet;

                    /**
                     * 到期时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 是否自动续费,0 初始值, 1 开通 2 没开通
                     */
                    uint64_t m_isAutoOpenRenew;
                    bool m_isAutoOpenRenewHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 0 没开通 1 正常 2隔离 3销毁
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEHISTORYSERVICERESPONSE_H_
