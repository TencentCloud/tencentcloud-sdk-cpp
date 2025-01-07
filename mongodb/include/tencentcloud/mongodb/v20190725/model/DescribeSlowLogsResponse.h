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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBESLOWLOGSRESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBESLOWLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeSlowLogs返回参数结构体
                */
                class DescribeSlowLogsResponse : public AbstractModel
                {
                public:
                    DescribeSlowLogsResponse();
                    ~DescribeSlowLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取慢日志总数
                     * @return Count 慢日志总数
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取慢日志详情
                     * @return SlowLogs 慢日志详情
                     * 
                     */
                    std::vector<std::string> GetSlowLogs() const;

                    /**
                     * 判断参数 SlowLogs 是否已赋值
                     * @return SlowLogs 是否已赋值
                     * 
                     */
                    bool SlowLogsHasBeenSet() const;

                private:

                    /**
                     * 慢日志总数
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 慢日志详情
                     */
                    std::vector<std::string> m_slowLogs;
                    bool m_slowLogsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBESLOWLOGSRESPONSE_H_
