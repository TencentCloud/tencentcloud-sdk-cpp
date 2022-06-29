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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_UNFREEZECLOUDBASERUNSERVERSREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_UNFREEZECLOUDBASERUNSERVERSREQUEST_H_

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
                * UnfreezeCloudBaseRunServers请求参数结构体
                */
                class UnfreezeCloudBaseRunServersRequest : public AbstractModel
                {
                public:
                    UnfreezeCloudBaseRunServersRequest();
                    ~UnfreezeCloudBaseRunServersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param EnvId 环境ID
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取服务名称列表
                     * @return ServerNameList 服务名称列表
                     */
                    std::vector<std::string> GetServerNameList() const;

                    /**
                     * 设置服务名称列表
                     * @param ServerNameList 服务名称列表
                     */
                    void SetServerNameList(const std::vector<std::string>& _serverNameList);

                    /**
                     * 判断参数 ServerNameList 是否已赋值
                     * @return ServerNameList 是否已赋值
                     */
                    bool ServerNameListHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 服务名称列表
                     */
                    std::vector<std::string> m_serverNameList;
                    bool m_serverNameListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_UNFREEZECLOUDBASERUNSERVERSREQUEST_H_
