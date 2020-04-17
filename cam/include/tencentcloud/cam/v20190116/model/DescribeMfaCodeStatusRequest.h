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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEMFACODESTATUSREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEMFACODESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * DescribeMfaCodeStatus请求参数结构体
                */
                class DescribeMfaCodeStatusRequest : public AbstractModel
                {
                public:
                    DescribeMfaCodeStatusRequest();
                    ~DescribeMfaCodeStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取mfaKey
                     * @return Tmpcode mfaKey
                     */
                    std::string GetTmpcode() const;

                    /**
                     * 设置mfaKey
                     * @param Tmpcode mfaKey
                     */
                    void SetTmpcode(const std::string& _tmpcode);

                    /**
                     * 判断参数 Tmpcode 是否已赋值
                     * @return Tmpcode 是否已赋值
                     */
                    bool TmpcodeHasBeenSet() const;

                    /**
                     * 获取登录态skey
                     * @return Skey 登录态skey
                     */
                    std::string GetSkey() const;

                    /**
                     * 设置登录态skey
                     * @param Skey 登录态skey
                     */
                    void SetSkey(const std::string& _skey);

                    /**
                     * 判断参数 Skey 是否已赋值
                     * @return Skey 是否已赋值
                     */
                    bool SkeyHasBeenSet() const;

                    /**
                     * 获取用户浏览器UA
                     * @return ClientUA 用户浏览器UA
                     */
                    std::string GetClientUA() const;

                    /**
                     * 设置用户浏览器UA
                     * @param ClientUA 用户浏览器UA
                     */
                    void SetClientUA(const std::string& _clientUA);

                    /**
                     * 判断参数 ClientUA 是否已赋值
                     * @return ClientUA 是否已赋值
                     */
                    bool ClientUAHasBeenSet() const;

                    /**
                     * 获取接口名
                     * @return Interface 接口名
                     */
                    std::string GetInterface() const;

                    /**
                     * 设置接口名
                     * @param Interface 接口名
                     */
                    void SetInterface(const std::string& _interface);

                    /**
                     * 判断参数 Interface 是否已赋值
                     * @return Interface 是否已赋值
                     */
                    bool InterfaceHasBeenSet() const;

                    /**
                     * 获取用户IP
                     * @return ClientIP 用户IP
                     */
                    std::string GetClientIP() const;

                    /**
                     * 设置用户IP
                     * @param ClientIP 用户IP
                     */
                    void SetClientIP(const std::string& _clientIP);

                    /**
                     * 判断参数 ClientIP 是否已赋值
                     * @return ClientIP 是否已赋值
                     */
                    bool ClientIPHasBeenSet() const;

                    /**
                     * 获取主账号
                     * @return OwnerUin 主账号
                     */
                    uint64_t GetOwnerUin() const;

                    /**
                     * 设置主账号
                     * @param OwnerUin 主账号
                     */
                    void SetOwnerUin(const uint64_t& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     */
                    bool OwnerUinHasBeenSet() const;

                private:

                    /**
                     * mfaKey
                     */
                    std::string m_tmpcode;
                    bool m_tmpcodeHasBeenSet;

                    /**
                     * 登录态skey
                     */
                    std::string m_skey;
                    bool m_skeyHasBeenSet;

                    /**
                     * 用户浏览器UA
                     */
                    std::string m_clientUA;
                    bool m_clientUAHasBeenSet;

                    /**
                     * 接口名
                     */
                    std::string m_interface;
                    bool m_interfaceHasBeenSet;

                    /**
                     * 用户IP
                     */
                    std::string m_clientIP;
                    bool m_clientIPHasBeenSet;

                    /**
                     * 主账号
                     */
                    uint64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBEMFACODESTATUSREQUEST_H_
