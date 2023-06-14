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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_BINDDEVICEACCOUNTPRIVATEKEYREQUEST_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_BINDDEVICEACCOUNTPRIVATEKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * BindDeviceAccountPrivateKey请求参数结构体
                */
                class BindDeviceAccountPrivateKeyRequest : public AbstractModel
                {
                public:
                    BindDeviceAccountPrivateKeyRequest();
                    ~BindDeviceAccountPrivateKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主机账号ID
                     * @return Id 主机账号ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置主机账号ID
                     * @param _id 主机账号ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取主机账号私钥，最新长度128字节，最大长度8192字节
                     * @return PrivateKey 主机账号私钥，最新长度128字节，最大长度8192字节
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置主机账号私钥，最新长度128字节，最大长度8192字节
                     * @param _privateKey 主机账号私钥，最新长度128字节，最大长度8192字节
                     * 
                     */
                    void SetPrivateKey(const std::string& _privateKey);

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     * 
                     */
                    bool PrivateKeyHasBeenSet() const;

                    /**
                     * 获取主机账号私钥口令，最大长度256字节
                     * @return PrivateKeyPassword 主机账号私钥口令，最大长度256字节
                     * 
                     */
                    std::string GetPrivateKeyPassword() const;

                    /**
                     * 设置主机账号私钥口令，最大长度256字节
                     * @param _privateKeyPassword 主机账号私钥口令，最大长度256字节
                     * 
                     */
                    void SetPrivateKeyPassword(const std::string& _privateKeyPassword);

                    /**
                     * 判断参数 PrivateKeyPassword 是否已赋值
                     * @return PrivateKeyPassword 是否已赋值
                     * 
                     */
                    bool PrivateKeyPasswordHasBeenSet() const;

                private:

                    /**
                     * 主机账号ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 主机账号私钥，最新长度128字节，最大长度8192字节
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * 主机账号私钥口令，最大长度256字节
                     */
                    std::string m_privateKeyPassword;
                    bool m_privateKeyPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_BINDDEVICEACCOUNTPRIVATEKEYREQUEST_H_
