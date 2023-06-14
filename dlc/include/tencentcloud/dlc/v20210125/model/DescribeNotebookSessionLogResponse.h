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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBENOTEBOOKSESSIONLOGRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBENOTEBOOKSESSIONLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeNotebookSessionLog返回参数结构体
                */
                class DescribeNotebookSessionLogResponse : public AbstractModel
                {
                public:
                    DescribeNotebookSessionLogResponse();
                    ~DescribeNotebookSessionLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取日志信息，默认获取最新的200条
                     * @return Logs 日志信息，默认获取最新的200条
                     * 
                     */
                    std::vector<std::string> GetLogs() const;

                    /**
                     * 判断参数 Logs 是否已赋值
                     * @return Logs 是否已赋值
                     * 
                     */
                    bool LogsHasBeenSet() const;

                    /**
                     * 获取分页参数，默认200
                     * @return Limit 分页参数，默认200
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页参数，默认0
                     * @return Offset 分页参数，默认0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 日志信息，默认获取最新的200条
                     */
                    std::vector<std::string> m_logs;
                    bool m_logsHasBeenSet;

                    /**
                     * 分页参数，默认200
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页参数，默认0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBENOTEBOOKSESSIONLOGRESPONSE_H_
