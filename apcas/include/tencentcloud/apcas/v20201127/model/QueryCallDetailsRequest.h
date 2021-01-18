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

#ifndef TENCENTCLOUD_APCAS_V20201127_MODEL_QUERYCALLDETAILSREQUEST_H_
#define TENCENTCLOUD_APCAS_V20201127_MODEL_QUERYCALLDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apcas
    {
        namespace V20201127
        {
            namespace Model
            {
                /**
                * QueryCallDetails请求参数结构体
                */
                class QueryCallDetailsRequest : public AbstractModel
                {
                public:
                    QueryCallDetailsRequest();
                    ~QueryCallDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取请求类型 1:人群特征洞察统计 2:购车意向预测统计
                     * @return Type 请求类型 1:人群特征洞察统计 2:购车意向预测统计
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置请求类型 1:人群特征洞察统计 2:购车意向预测统计
                     * @param Type 请求类型 1:人群特征洞察统计 2:购车意向预测统计
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取开始时间戳（毫秒）
                     * @return StartTime 开始时间戳（毫秒）
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置开始时间戳（毫秒）
                     * @param StartTime 开始时间戳（毫秒）
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间戳（毫秒）
                     * @return EndTime 结束时间戳（毫秒）
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置结束时间戳（毫秒）
                     * @param EndTime 结束时间戳（毫秒）
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取页数
                     * @return PageNumber 页数
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页数
                     * @param PageNumber 页数
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页个数
                     * @return PageSize 每页个数
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页个数
                     * @param PageSize 每页个数
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 请求类型 1:人群特征洞察统计 2:购车意向预测统计
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 开始时间戳（毫秒）
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间戳（毫秒）
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 页数
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页个数
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APCAS_V20201127_MODEL_QUERYCALLDETAILSREQUEST_H_
