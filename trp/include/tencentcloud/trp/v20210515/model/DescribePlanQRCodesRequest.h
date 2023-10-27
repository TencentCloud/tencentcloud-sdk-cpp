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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBEPLANQRCODESREQUEST_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBEPLANQRCODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * DescribePlanQRCodes请求参数结构体
                */
                class DescribePlanQRCodesRequest : public AbstractModel
                {
                public:
                    DescribePlanQRCodesRequest();
                    ~DescribePlanQRCodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取计划ID
                     * @return PlanId 计划ID
                     * 
                     */
                    int64_t GetPlanId() const;

                    /**
                     * 设置计划ID
                     * @param _planId 计划ID
                     * 
                     */
                    void SetPlanId(const int64_t& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取页码
                     * @return PageNo 页码
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置页码
                     * @param _pageNo 页码
                     * 
                     */
                    void SetPageNo(const int64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取页大小
                     * @return PageSize 页大小
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置页大小
                     * @param _pageSize 页大小
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 计划ID
                     */
                    int64_t m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * 页大小
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBEPLANQRCODESREQUEST_H_
