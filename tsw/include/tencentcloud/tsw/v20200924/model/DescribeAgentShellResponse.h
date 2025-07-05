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

#ifndef TENCENTCLOUD_TSW_V20200924_MODEL_DESCRIBEAGENTSHELLRESPONSE_H_
#define TENCENTCLOUD_TSW_V20200924_MODEL_DESCRIBEAGENTSHELLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsw/v20200924/model/AgentShell.h>


namespace TencentCloud
{
    namespace Tsw
    {
        namespace V20200924
        {
            namespace Model
            {
                /**
                * DescribeAgentShell返回参数结构体
                */
                class DescribeAgentShellResponse : public AbstractModel
                {
                public:
                    DescribeAgentShellResponse();
                    ~DescribeAgentShellResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取接入信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 接入信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AgentShell GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 接入信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AgentShell m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSW_V20200924_MODEL_DESCRIBEAGENTSHELLRESPONSE_H_
