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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGSETSRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGSETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/LogsetInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeLogsets返回参数结构体
                */
                class DescribeLogsetsResponse : public AbstractModel
                {
                public:
                    DescribeLogsetsResponse();
                    ~DescribeLogsetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分页的总数目
                     * @return TotalCount 分页的总数目
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
                     * 获取日志集列表
                     * @return Logsets 日志集列表
                     * 
                     */
                    std::vector<LogsetInfo> GetLogsets() const;

                    /**
                     * 判断参数 Logsets 是否已赋值
                     * @return Logsets 是否已赋值
                     * 
                     */
                    bool LogsetsHasBeenSet() const;

                private:

                    /**
                     * 分页的总数目
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 日志集列表
                     */
                    std::vector<LogsetInfo> m_logsets;
                    bool m_logsetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGSETSRESPONSE_H_
