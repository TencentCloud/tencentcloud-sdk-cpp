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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNOPERATIONTYPESRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNOPERATIONTYPESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeCloudBaseRunOperationTypes返回参数结构体
                */
                class DescribeCloudBaseRunOperationTypesResponse : public AbstractModel
                {
                public:
                    DescribeCloudBaseRunOperationTypesResponse();
                    ~DescribeCloudBaseRunOperationTypesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取操作类型
                     * @return Action 操作类型
                     * 
                     */
                    std::vector<std::string> GetAction() const;

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取服务名列表
                     * @return ServerName 服务名列表
                     * 
                     */
                    std::vector<std::string> GetServerName() const;

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                private:

                    /**
                     * 操作类型
                     */
                    std::vector<std::string> m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 服务名列表
                     */
                    std::vector<std::string> m_serverName;
                    bool m_serverNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNOPERATIONTYPESRESPONSE_H_
