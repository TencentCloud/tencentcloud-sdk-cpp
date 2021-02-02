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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_INVOKECOMMANDREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_INVOKECOMMANDREQUEST_H_

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
                * InvokeCommand请求参数结构体
                */
                class InvokeCommandRequest : public AbstractModel
                {
                public:
                    InvokeCommandRequest();
                    ~InvokeCommandRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待触发的命令ID。
                     * @return CommandId 待触发的命令ID。
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置待触发的命令ID。
                     * @param CommandId 待触发的命令ID。
                     */
                    void SetCommandId(const std::string& _commandId);

                    /**
                     * 判断参数 CommandId 是否已赋值
                     * @return CommandId 是否已赋值
                     */
                    bool CommandIdHasBeenSet() const;

                    /**
                     * 获取待执行命令的实例ID列表。
                     * @return InstanceIds 待执行命令的实例ID列表。
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置待执行命令的实例ID列表。
                     * @param InstanceIds 待执行命令的实例ID列表。
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * 待触发的命令ID。
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * 待执行命令的实例ID列表。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_INVOKECOMMANDREQUEST_H_
