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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_QUERYCRMSTATISTICSREQUEST_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_QUERYCRMSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * QueryCrmStatistics请求参数结构体
                */
                class QueryCrmStatisticsRequest : public AbstractModel
                {
                public:
                    QueryCrmStatisticsRequest();
                    ~QueryCrmStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询开始时间， 单位秒
                     * @return BeginTime 查询开始时间， 单位秒
                     * 
                     */
                    uint64_t GetBeginTime() const;

                    /**
                     * 设置查询开始时间， 单位秒
                     * @param _beginTime 查询开始时间， 单位秒
                     * 
                     */
                    void SetBeginTime(const uint64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取查询结束时间， 单位秒
                     * @return EndTime 查询结束时间， 单位秒
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置查询结束时间， 单位秒
                     * @param _endTime 查询结束时间， 单位秒
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取用于分页查询的游标，字符串类型，由上一次调用返回，首次调用可不填
                     * @return Cursor 用于分页查询的游标，字符串类型，由上一次调用返回，首次调用可不填
                     * 
                     */
                    std::string GetCursor() const;

                    /**
                     * 设置用于分页查询的游标，字符串类型，由上一次调用返回，首次调用可不填
                     * @param _cursor 用于分页查询的游标，字符串类型，由上一次调用返回，首次调用可不填
                     * 
                     */
                    void SetCursor(const std::string& _cursor);

                    /**
                     * 判断参数 Cursor 是否已赋值
                     * @return Cursor 是否已赋值
                     * 
                     */
                    bool CursorHasBeenSet() const;

                    /**
                     * 获取返回的最大记录数，整型，最大值100，默认值50，超过最大值时取最大值
                     * @return Limit 返回的最大记录数，整型，最大值100，默认值50，超过最大值时取最大值
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回的最大记录数，整型，最大值100，默认值50，超过最大值时取最大值
                     * @param _limit 返回的最大记录数，整型，最大值100，默认值50，超过最大值时取最大值
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取请求的企业成员id，为空时默认全租户
                     * @return SalesId 请求的企业成员id，为空时默认全租户
                     * 
                     */
                    std::string GetSalesId() const;

                    /**
                     * 设置请求的企业成员id，为空时默认全租户
                     * @param _salesId 请求的企业成员id，为空时默认全租户
                     * 
                     */
                    void SetSalesId(const std::string& _salesId);

                    /**
                     * 判断参数 SalesId 是否已赋值
                     * @return SalesId 是否已赋值
                     * 
                     */
                    bool SalesIdHasBeenSet() const;

                    /**
                     * 获取请求的部门id，为空时默认全租户
                     * @return OrgId 请求的部门id，为空时默认全租户
                     * 
                     */
                    uint64_t GetOrgId() const;

                    /**
                     * 设置请求的部门id，为空时默认全租户
                     * @param _orgId 请求的部门id，为空时默认全租户
                     * 
                     */
                    void SetOrgId(const uint64_t& _orgId);

                    /**
                     * 判断参数 OrgId 是否已赋值
                     * @return OrgId 是否已赋值
                     * 
                     */
                    bool OrgIdHasBeenSet() const;

                private:

                    /**
                     * 查询开始时间， 单位秒
                     */
                    uint64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 查询结束时间， 单位秒
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 用于分页查询的游标，字符串类型，由上一次调用返回，首次调用可不填
                     */
                    std::string m_cursor;
                    bool m_cursorHasBeenSet;

                    /**
                     * 返回的最大记录数，整型，最大值100，默认值50，超过最大值时取最大值
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 请求的企业成员id，为空时默认全租户
                     */
                    std::string m_salesId;
                    bool m_salesIdHasBeenSet;

                    /**
                     * 请求的部门id，为空时默认全租户
                     */
                    uint64_t m_orgId;
                    bool m_orgIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_QUERYCRMSTATISTICSREQUEST_H_
