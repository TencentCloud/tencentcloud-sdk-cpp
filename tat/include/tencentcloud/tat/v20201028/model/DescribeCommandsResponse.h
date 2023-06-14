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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBECOMMANDSRESPONSE_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBECOMMANDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/Command.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeCommands返回参数结构体
                */
                class DescribeCommandsResponse : public AbstractModel
                {
                public:
                    DescribeCommandsResponse();
                    ~DescribeCommandsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的命令总数。
                     * @return TotalCount 符合条件的命令总数。
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
                     * 获取命令详情列表。
                     * @return CommandSet 命令详情列表。
                     * 
                     */
                    std::vector<Command> GetCommandSet() const;

                    /**
                     * 判断参数 CommandSet 是否已赋值
                     * @return CommandSet 是否已赋值
                     * 
                     */
                    bool CommandSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的命令总数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 命令详情列表。
                     */
                    std::vector<Command> m_commandSet;
                    bool m_commandSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBECOMMANDSRESPONSE_H_
