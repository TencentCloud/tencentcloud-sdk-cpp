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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGCLEANSETTINGINFOREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGCLEANSETTINGINFOREQUEST_H_

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
                * ModifySecLogCleanSettingInfo请求参数结构体
                */
                class ModifySecLogCleanSettingInfoRequest : public AbstractModel
                {
                public:
                    ModifySecLogCleanSettingInfoRequest();
                    ~ModifySecLogCleanSettingInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取触发清理的储量底线(50-99)
                     * @return ReservesLimit 触发清理的储量底线(50-99)
                     * 
                     */
                    uint64_t GetReservesLimit() const;

                    /**
                     * 设置触发清理的储量底线(50-99)
                     * @param _reservesLimit 触发清理的储量底线(50-99)
                     * 
                     */
                    void SetReservesLimit(const uint64_t& _reservesLimit);

                    /**
                     * 判断参数 ReservesLimit 是否已赋值
                     * @return ReservesLimit 是否已赋值
                     * 
                     */
                    bool ReservesLimitHasBeenSet() const;

                    /**
                     * 获取清理停止时的储量截至线(>0,小于ReservesLimit)
                     * @return ReservesDeadline 清理停止时的储量截至线(>0,小于ReservesLimit)
                     * 
                     */
                    uint64_t GetReservesDeadline() const;

                    /**
                     * 设置清理停止时的储量截至线(>0,小于ReservesLimit)
                     * @param _reservesDeadline 清理停止时的储量截至线(>0,小于ReservesLimit)
                     * 
                     */
                    void SetReservesDeadline(const uint64_t& _reservesDeadline);

                    /**
                     * 判断参数 ReservesDeadline 是否已赋值
                     * @return ReservesDeadline 是否已赋值
                     * 
                     */
                    bool ReservesDeadlineHasBeenSet() const;

                    /**
                     * 获取触发清理的存储天数(>=1)
                     * @return DayLimit 触发清理的存储天数(>=1)
                     * 
                     */
                    uint64_t GetDayLimit() const;

                    /**
                     * 设置触发清理的存储天数(>=1)
                     * @param _dayLimit 触发清理的存储天数(>=1)
                     * 
                     */
                    void SetDayLimit(const uint64_t& _dayLimit);

                    /**
                     * 判断参数 DayLimit 是否已赋值
                     * @return DayLimit 是否已赋值
                     * 
                     */
                    bool DayLimitHasBeenSet() const;

                private:

                    /**
                     * 触发清理的储量底线(50-99)
                     */
                    uint64_t m_reservesLimit;
                    bool m_reservesLimitHasBeenSet;

                    /**
                     * 清理停止时的储量截至线(>0,小于ReservesLimit)
                     */
                    uint64_t m_reservesDeadline;
                    bool m_reservesDeadlineHasBeenSet;

                    /**
                     * 触发清理的存储天数(>=1)
                     */
                    uint64_t m_dayLimit;
                    bool m_dayLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGCLEANSETTINGINFOREQUEST_H_
