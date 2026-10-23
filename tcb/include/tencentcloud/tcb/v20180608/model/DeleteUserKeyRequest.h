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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DELETEUSERKEYREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DELETEUSERKEYREQUEST_H_

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
                * DeleteUserKey请求参数结构体
                */
                class DeleteUserKeyRequest : public AbstractModel
                {
                public:
                    DeleteUserKeyRequest();
                    ~DeleteUserKeyRequest() = default;
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
                     * 获取用户密钥对标识，前半部分用户填写，后半部分平台按照一定规则生成
                     * @return KeyID 用户密钥对标识，前半部分用户填写，后半部分平台按照一定规则生成
                     * 
                     */
                    std::string GetKeyID() const;

                    /**
                     * 设置用户密钥对标识，前半部分用户填写，后半部分平台按照一定规则生成
                     * @param _keyID 用户密钥对标识，前半部分用户填写，后半部分平台按照一定规则生成
                     * 
                     */
                    void SetKeyID(const std::string& _keyID);

                    /**
                     * 判断参数 KeyID 是否已赋值
                     * @return KeyID 是否已赋值
                     * 
                     */
                    bool KeyIDHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 用户密钥对标识，前半部分用户填写，后半部分平台按照一定规则生成
                     */
                    std::string m_keyID;
                    bool m_keyIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DELETEUSERKEYREQUEST_H_
