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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBECOLLATIONTIMEZONERESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBECOLLATIONTIMEZONERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeCollationTimeZone返回参数结构体
                */
                class DescribeCollationTimeZoneResponse : public AbstractModel
                {
                public:
                    DescribeCollationTimeZoneResponse();
                    ~DescribeCollationTimeZoneResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取系统字符集排序规则列表
                     * @return Collation 系统字符集排序规则列表
                     * 
                     */
                    std::vector<std::string> GetCollation() const;

                    /**
                     * 判断参数 Collation 是否已赋值
                     * @return Collation 是否已赋值
                     * 
                     */
                    bool CollationHasBeenSet() const;

                    /**
                     * 获取系统时区列表
                     * @return TimeZone 系统时区列表
                     * 
                     */
                    std::vector<std::string> GetTimeZone() const;

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                private:

                    /**
                     * 系统字符集排序规则列表
                     */
                    std::vector<std::string> m_collation;
                    bool m_collationHasBeenSet;

                    /**
                     * 系统时区列表
                     */
                    std::vector<std::string> m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBECOLLATIONTIMEZONERESPONSE_H_
