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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_SEARCHCOMMANDRESPONSE_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_SEARCHCOMMANDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/SearchCommandResult.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * SearchCommand返回参数结构体
                */
                class SearchCommandResponse : public AbstractModel
                {
                public:
                    SearchCommandResponse();
                    ~SearchCommandResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总记录数
                     * @return TotalCount 总记录数
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
                     * 获取命令列表
                     * @return Commands 命令列表
                     * 
                     */
                    std::vector<SearchCommandResult> GetCommands() const;

                    /**
                     * 判断参数 Commands 是否已赋值
                     * @return Commands 是否已赋值
                     * 
                     */
                    bool CommandsHasBeenSet() const;

                private:

                    /**
                     * 总记录数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 命令列表
                     */
                    std::vector<SearchCommandResult> m_commands;
                    bool m_commandsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_SEARCHCOMMANDRESPONSE_H_
