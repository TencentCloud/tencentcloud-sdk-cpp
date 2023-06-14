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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBSLOWLOGSRESPONSE_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBSLOWLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/SlowLogData.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDBSlowLogs返回参数结构体
                */
                class DescribeDBSlowLogsResponse : public AbstractModel
                {
                public:
                    DescribeDBSlowLogsResponse();
                    ~DescribeDBSlowLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取慢查询日志数据
                     * @return Data 慢查询日志数据
                     * 
                     */
                    std::vector<SlowLogData> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取所有语句锁时间总和
                     * @return LockTimeSum 所有语句锁时间总和
                     * 
                     */
                    double GetLockTimeSum() const;

                    /**
                     * 判断参数 LockTimeSum 是否已赋值
                     * @return LockTimeSum 是否已赋值
                     * 
                     */
                    bool LockTimeSumHasBeenSet() const;

                    /**
                     * 获取所有语句查询总次数
                     * @return QueryCount 所有语句查询总次数
                     * 
                     */
                    int64_t GetQueryCount() const;

                    /**
                     * 判断参数 QueryCount 是否已赋值
                     * @return QueryCount 是否已赋值
                     * 
                     */
                    bool QueryCountHasBeenSet() const;

                    /**
                     * 获取总记录数
                     * @return Total 总记录数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取所有语句查询时间总和
                     * @return QueryTimeSum 所有语句查询时间总和
                     * 
                     */
                    double GetQueryTimeSum() const;

                    /**
                     * 判断参数 QueryTimeSum 是否已赋值
                     * @return QueryTimeSum 是否已赋值
                     * 
                     */
                    bool QueryTimeSumHasBeenSet() const;

                private:

                    /**
                     * 慢查询日志数据
                     */
                    std::vector<SlowLogData> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 所有语句锁时间总和
                     */
                    double m_lockTimeSum;
                    bool m_lockTimeSumHasBeenSet;

                    /**
                     * 所有语句查询总次数
                     */
                    int64_t m_queryCount;
                    bool m_queryCountHasBeenSet;

                    /**
                     * 总记录数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 所有语句查询时间总和
                     */
                    double m_queryTimeSum;
                    bool m_queryTimeSumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBSLOWLOGSRESPONSE_H_
