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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEOFFLINELOGSRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEOFFLINELOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeOfflineLogs返回参数结构体
                */
                class DescribeOfflineLogsResponse : public AbstractModel
                {
                public:
                    DescribeOfflineLogsResponse();
                    ~DescribeOfflineLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取接口调用返回信息
                     * @return Msg 接口调用返回信息
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取日志列表
                     * @return LogSet 日志列表
                     */
                    std::vector<std::string> GetLogSet() const;

                    /**
                     * 判断参数 LogSet 是否已赋值
                     * @return LogSet 是否已赋值
                     */
                    bool LogSetHasBeenSet() const;

                private:

                    /**
                     * 接口调用返回信息
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * 日志列表
                     */
                    std::vector<std::string> m_logSet;
                    bool m_logSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEOFFLINELOGSRESPONSE_H_
