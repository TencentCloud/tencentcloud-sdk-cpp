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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBECLIENTEXCEPTIONREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBECLIENTEXCEPTIONREQUEST_H_

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
                * DescribeClientException请求参数结构体
                */
                class DescribeClientExceptionRequest : public AbstractModel
                {
                public:
                    DescribeClientExceptionRequest();
                    ~DescribeClientExceptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户端异常类型 1:客户端离线，2:客户端卸载
                     * @return ExceptionType 客户端异常类型 1:客户端离线，2:客户端卸载
                     * 
                     */
                    int64_t GetExceptionType() const;

                    /**
                     * 设置客户端异常类型 1:客户端离线，2:客户端卸载
                     * @param _exceptionType 客户端异常类型 1:客户端离线，2:客户端卸载
                     * 
                     */
                    void SetExceptionType(const int64_t& _exceptionType);

                    /**
                     * 判断参数 ExceptionType 是否已赋值
                     * @return ExceptionType 是否已赋值
                     * 
                     */
                    bool ExceptionTypeHasBeenSet() const;

                    /**
                     * 获取分页的偏移量
                     * @return Offset 分页的偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页的偏移量
                     * @param _offset 分页的偏移量
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页单页限制数目，不为0，最大值100
                     * @return Limit 分页单页限制数目，不为0，最大值100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页单页限制数目，不为0，最大值100
                     * @param _limit 分页单页限制数目，不为0，最大值100
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取起始时间 `2006-01-02 15:04:05` 格式
                     * @return StartTime 起始时间 `2006-01-02 15:04:05` 格式
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间 `2006-01-02 15:04:05` 格式
                     * @param _startTime 起始时间 `2006-01-02 15:04:05` 格式
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
                     * 获取结束时间 `2006-01-02 15:04:05` 格式
                     * @return EndTime 结束时间 `2006-01-02 15:04:05` 格式
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间 `2006-01-02 15:04:05` 格式
                     * @param _endTime 结束时间 `2006-01-02 15:04:05` 格式
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 客户端异常类型 1:客户端离线，2:客户端卸载
                     */
                    int64_t m_exceptionType;
                    bool m_exceptionTypeHasBeenSet;

                    /**
                     * 分页的偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页单页限制数目，不为0，最大值100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 起始时间 `2006-01-02 15:04:05` 格式
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间 `2006-01-02 15:04:05` 格式
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBECLIENTEXCEPTIONREQUEST_H_
