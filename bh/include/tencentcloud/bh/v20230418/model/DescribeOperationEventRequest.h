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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEOPERATIONEVENTREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEOPERATIONEVENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeOperationEvent请求参数结构体
                */
                class DescribeOperationEventRequest : public AbstractModel
                {
                public:
                    DescribeOperationEventRequest();
                    ~DescribeOperationEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户名，如果不包含其他条件时对user_name or real_name两个字段模糊查询
                     * @return UserName 用户名，如果不包含其他条件时对user_name or real_name两个字段模糊查询
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名，如果不包含其他条件时对user_name or real_name两个字段模糊查询
                     * @param _userName 用户名，如果不包含其他条件时对user_name or real_name两个字段模糊查询
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取姓名，模糊查询
                     * @return RealName 姓名，模糊查询
                     * 
                     */
                    std::string GetRealName() const;

                    /**
                     * 设置姓名，模糊查询
                     * @param _realName 姓名，模糊查询
                     * 
                     */
                    void SetRealName(const std::string& _realName);

                    /**
                     * 判断参数 RealName 是否已赋值
                     * @return RealName 是否已赋值
                     * 
                     */
                    bool RealNameHasBeenSet() const;

                    /**
                     * 获取查询时间范围，起始时间
                     * @return StartTime 查询时间范围，起始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询时间范围，起始时间
                     * @param _startTime 查询时间范围，起始时间
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
                     * 获取查询时间范围，结束时间
                     * @return EndTime 查询时间范围，结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询时间范围，结束时间
                     * @param _endTime 查询时间范围，结束时间
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
                     * 获取来源IP，模糊查询
                     * @return SourceIp 来源IP，模糊查询
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置来源IP，模糊查询
                     * @param _sourceIp 来源IP，模糊查询
                     * 
                     */
                    void SetSourceIp(const std::string& _sourceIp);

                    /**
                     * 判断参数 SourceIp 是否已赋值
                     * @return SourceIp 是否已赋值
                     * 
                     */
                    bool SourceIpHasBeenSet() const;

                    /**
                     * 获取操作类型，参考DescribeOperationType返回结果
                     * @return Kind 操作类型，参考DescribeOperationType返回结果
                     * 
                     */
                    uint64_t GetKind() const;

                    /**
                     * 设置操作类型，参考DescribeOperationType返回结果
                     * @param _kind 操作类型，参考DescribeOperationType返回结果
                     * 
                     */
                    void SetKind(const uint64_t& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取操作结果，1-成功，2-失败
                     * @return Result 操作结果，1-成功，2-失败
                     * 
                     */
                    uint64_t GetResult() const;

                    /**
                     * 设置操作结果，1-成功，2-失败
                     * @param _result 操作结果，1-成功，2-失败
                     * 
                     */
                    void SetResult(const uint64_t& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取分页偏移位置，默认值为0
                     * @return Offset 分页偏移位置，默认值为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移位置，默认值为0
                     * @param _offset 分页偏移位置，默认值为0
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
                     * 获取分页每页记录数，默认20
                     * @return Limit 分页每页记录数，默认20
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页每页记录数，默认20
                     * @param _limit 分页每页记录数，默认20
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 用户名，如果不包含其他条件时对user_name or real_name两个字段模糊查询
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 姓名，模糊查询
                     */
                    std::string m_realName;
                    bool m_realNameHasBeenSet;

                    /**
                     * 查询时间范围，起始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询时间范围，结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 来源IP，模糊查询
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * 操作类型，参考DescribeOperationType返回结果
                     */
                    uint64_t m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 操作结果，1-成功，2-失败
                     */
                    uint64_t m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 分页偏移位置，默认值为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页每页记录数，默认20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEOPERATIONEVENTREQUEST_H_
