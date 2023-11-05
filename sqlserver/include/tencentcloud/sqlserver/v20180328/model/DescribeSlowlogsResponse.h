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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBESLOWLOGSRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBESLOWLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/SlowlogInfo.h>
#include <tencentcloud/sqlserver/v20180328/model/SlowLog.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeSlowlogs返回参数结构体
                */
                class DescribeSlowlogsResponse : public AbstractModel
                {
                public:
                    DescribeSlowlogsResponse();
                    ~DescribeSlowlogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询总数
                     * @return TotalCount 查询总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取慢查询日志信息列表
                     * @return Slowlogs 慢查询日志信息列表
                     * @deprecated
                     */
                    std::vector<SlowlogInfo> GetSlowlogs() const;

                    /**
                     * 判断参数 Slowlogs 是否已赋值
                     * @return Slowlogs 是否已赋值
                     * @deprecated
                     */
                    bool SlowlogsHasBeenSet() const;

                    /**
                     * 获取慢查询日志信息列表
                     * @return SlowLogs 慢查询日志信息列表
                     * 
                     */
                    std::vector<SlowLog> GetSlowLogs() const;

                    /**
                     * 判断参数 SlowLogs 是否已赋值
                     * @return SlowLogs 是否已赋值
                     * 
                     */
                    bool SlowLogsHasBeenSet() const;

                private:

                    /**
                     * 查询总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 慢查询日志信息列表
                     */
                    std::vector<SlowlogInfo> m_slowlogs;
                    bool m_slowlogsHasBeenSet;

                    /**
                     * 慢查询日志信息列表
                     */
                    std::vector<SlowLog> m_slowLogs;
                    bool m_slowLogsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBESLOWLOGSRESPONSE_H_
