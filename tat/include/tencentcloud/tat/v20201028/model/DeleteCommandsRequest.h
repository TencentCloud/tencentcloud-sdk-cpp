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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DELETECOMMANDSREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DELETECOMMANDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DeleteCommands请求参数结构体
                */
                class DeleteCommandsRequest : public AbstractModel
                {
                public:
                    DeleteCommandsRequest();
                    ~DeleteCommandsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待删除的命令 ID。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
                     * @return CommandIds 待删除的命令 ID。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
                     * 
                     */
                    std::vector<std::string> GetCommandIds() const;

                    /**
                     * 设置待删除的命令 ID。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
                     * @param _commandIds 待删除的命令 ID。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
                     * 
                     */
                    void SetCommandIds(const std::vector<std::string>& _commandIds);

                    /**
                     * 判断参数 CommandIds 是否已赋值
                     * @return CommandIds 是否已赋值
                     * 
                     */
                    bool CommandIdsHasBeenSet() const;

                private:

                    /**
                     * 待删除的命令 ID。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
                     */
                    std::vector<std::string> m_commandIds;
                    bool m_commandIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DELETECOMMANDSREQUEST_H_
