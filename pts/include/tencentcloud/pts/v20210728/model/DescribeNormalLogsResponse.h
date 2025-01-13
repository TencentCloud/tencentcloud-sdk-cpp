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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBENORMALLOGSRESPONSE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBENORMALLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/NormalLog.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeNormalLogs返回参数结构体
                */
                class DescribeNormalLogsResponse : public AbstractModel
                {
                public:
                    DescribeNormalLogsResponse();
                    ~DescribeNormalLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取日志上下文，加载更多日志时使用，透传上次返回的Context值，获取后续的日志内容。过期时间1小时
                     * @return Context 日志上下文，加载更多日志时使用，透传上次返回的Context值，获取后续的日志内容。过期时间1小时
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取日志数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NormalLogs 日志数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NormalLog> GetNormalLogs() const;

                    /**
                     * 判断参数 NormalLogs 是否已赋值
                     * @return NormalLogs 是否已赋值
                     * 
                     */
                    bool NormalLogsHasBeenSet() const;

                private:

                    /**
                     * 日志上下文，加载更多日志时使用，透传上次返回的Context值，获取后续的日志内容。过期时间1小时
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 日志数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NormalLog> m_normalLogs;
                    bool m_normalLogsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBENORMALLOGSRESPONSE_H_
