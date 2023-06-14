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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCELOGSRESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCELOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/InstanceLog.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeInstanceLogs返回参数结构体
                */
                class DescribeInstanceLogsResponse : public AbstractModel
                {
                public:
                    DescribeInstanceLogsResponse();
                    ~DescribeInstanceLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的日志条数
                     * @return TotalCount 返回的日志条数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取日志详细信息列表
                     * @return InstanceLogList 日志详细信息列表
                     * 
                     */
                    std::vector<InstanceLog> GetInstanceLogList() const;

                    /**
                     * 判断参数 InstanceLogList 是否已赋值
                     * @return InstanceLogList 是否已赋值
                     * 
                     */
                    bool InstanceLogListHasBeenSet() const;

                private:

                    /**
                     * 返回的日志条数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 日志详细信息列表
                     */
                    std::vector<InstanceLog> m_instanceLogList;
                    bool m_instanceLogListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCELOGSRESPONSE_H_
