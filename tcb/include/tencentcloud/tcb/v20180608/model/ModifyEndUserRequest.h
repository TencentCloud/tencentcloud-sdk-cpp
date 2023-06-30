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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYENDUSERREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYENDUSERREQUEST_H_

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
                * ModifyEndUser请求参数结构体
                */
                class ModifyEndUserRequest : public AbstractModel
                {
                public:
                    ModifyEndUserRequest();
                    ~ModifyEndUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取C端用户端的唯一ID
                     * @return UUId C端用户端的唯一ID
                     * 
                     */
                    std::string GetUUId() const;

                    /**
                     * 设置C端用户端的唯一ID
                     * @param _uUId C端用户端的唯一ID
                     * 
                     */
                    void SetUUId(const std::string& _uUId);

                    /**
                     * 判断参数 UUId 是否已赋值
                     * @return UUId 是否已赋值
                     * 
                     */
                    bool UUIdHasBeenSet() const;

                    /**
                     * 获取账号的状态
<li>ENABLE</li>
<li>DISABLE</li>
                     * @return Status 账号的状态
<li>ENABLE</li>
<li>DISABLE</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置账号的状态
<li>ENABLE</li>
<li>DISABLE</li>
                     * @param _status 账号的状态
<li>ENABLE</li>
<li>DISABLE</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * C端用户端的唯一ID
                     */
                    std::string m_uUId;
                    bool m_uUIdHasBeenSet;

                    /**
                     * 账号的状态
<li>ENABLE</li>
<li>DISABLE</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYENDUSERREQUEST_H_
