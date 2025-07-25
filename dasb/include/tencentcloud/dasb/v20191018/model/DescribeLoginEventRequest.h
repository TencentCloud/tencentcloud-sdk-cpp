/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBELOGINEVENTREQUEST_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBELOGINEVENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * DescribeLoginEvent请求参数结构体
                */
                class DescribeLoginEventRequest : public AbstractModel
                {
                public:
                    DescribeLoginEventRequest();
                    ~DescribeLoginEventRequest() = default;
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
                     * 获取登录入口：1-字符界面,2-图形界面，3-web页面, 4-API
                     * @return Entry 登录入口：1-字符界面,2-图形界面，3-web页面, 4-API
                     * 
                     */
                    uint64_t GetEntry() const;

                    /**
                     * 设置登录入口：1-字符界面,2-图形界面，3-web页面, 4-API
                     * @param _entry 登录入口：1-字符界面,2-图形界面，3-web页面, 4-API
                     * 
                     */
                    void SetEntry(const uint64_t& _entry);

                    /**
                     * 判断参数 Entry 是否已赋值
                     * @return Entry 是否已赋值
                     * 
                     */
                    bool EntryHasBeenSet() const;

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
                     * 登录入口：1-字符界面,2-图形界面，3-web页面, 4-API
                     */
                    uint64_t m_entry;
                    bool m_entryHasBeenSet;

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

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBELOGINEVENTREQUEST_H_
