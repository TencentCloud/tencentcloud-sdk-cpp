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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DELETEUSERSREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DELETEUSERSREQUEST_H_

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
                * DeleteUsers请求参数结构体
                */
                class DeleteUsersRequest : public AbstractModel
                {
                public:
                    DeleteUsersRequest();
                    ~DeleteUsersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境id
                     * @return EnvId 环境id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境id
                     * @param _envId 环境id
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
                     * 获取tcb用户id列表, 一次最多支持删除100个
                     * @return Uids tcb用户id列表, 一次最多支持删除100个
                     * 
                     */
                    std::vector<std::string> GetUids() const;

                    /**
                     * 设置tcb用户id列表, 一次最多支持删除100个
                     * @param _uids tcb用户id列表, 一次最多支持删除100个
                     * 
                     */
                    void SetUids(const std::vector<std::string>& _uids);

                    /**
                     * 判断参数 Uids 是否已赋值
                     * @return Uids 是否已赋值
                     * 
                     */
                    bool UidsHasBeenSet() const;

                private:

                    /**
                     * 环境id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * tcb用户id列表, 一次最多支持删除100个
                     */
                    std::vector<std::string> m_uids;
                    bool m_uidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DELETEUSERSREQUEST_H_
