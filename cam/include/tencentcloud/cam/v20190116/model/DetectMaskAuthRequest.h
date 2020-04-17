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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DETECTMASKAUTHREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DETECTMASKAUTHREQUEST_H_

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
                * DetectMaskAuth请求参数结构体
                */
                class DetectMaskAuthRequest : public AbstractModel
                {
                public:
                    DetectMaskAuthRequest();
                    ~DetectMaskAuthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取登录态Skey
                     * @return Skey 登录态Skey
                     */
                    std::string GetSkey() const;

                    /**
                     * 设置登录态Skey
                     * @param Skey 登录态Skey
                     */
                    void SetSkey(const std::string& _skey);

                    /**
                     * 判断参数 Skey 是否已赋值
                     * @return Skey 是否已赋值
                     */
                    bool SkeyHasBeenSet() const;

                    /**
                     * 获取IP
                     * @return ClientIP IP
                     */
                    std::string GetClientIP() const;

                    /**
                     * 设置IP
                     * @param ClientIP IP
                     */
                    void SetClientIP(const std::string& _clientIP);

                    /**
                     * 判断参数 ClientIP 是否已赋值
                     * @return ClientIP 是否已赋值
                     */
                    bool ClientIPHasBeenSet() const;

                    /**
                     * 获取浏览器UA
                     * @return ClientUA 浏览器UA
                     */
                    std::string GetClientUA() const;

                    /**
                     * 设置浏览器UA
                     * @param ClientUA 浏览器UA
                     */
                    void SetClientUA(const std::string& _clientUA);

                    /**
                     * 判断参数 ClientUA 是否已赋值
                     * @return ClientUA 是否已赋值
                     */
                    bool ClientUAHasBeenSet() const;

                    /**
                     * 获取人脸类型
                     * @return Type 人脸类型
                     */
                    std::string GetType() const;

                    /**
                     * 设置人脸类型
                     * @param Type 人脸类型
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取用户名称
                     * @return Name 用户名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置用户名称
                     * @param Name 用户名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取用户Idcard
                     * @return Idcard 用户Idcard
                     */
                    std::string GetIdcard() const;

                    /**
                     * 设置用户Idcard
                     * @param Idcard 用户Idcard
                     */
                    void SetIdcard(const std::string& _idcard);

                    /**
                     * 判断参数 Idcard 是否已赋值
                     * @return Idcard 是否已赋值
                     */
                    bool IdcardHasBeenSet() const;

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
                     * 登录态Skey
                     */
                    std::string m_skey;
                    bool m_skeyHasBeenSet;

                    /**
                     * IP
                     */
                    std::string m_clientIP;
                    bool m_clientIPHasBeenSet;

                    /**
                     * 浏览器UA
                     */
                    std::string m_clientUA;
                    bool m_clientUAHasBeenSet;

                    /**
                     * 人脸类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 用户名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 用户Idcard
                     */
                    std::string m_idcard;
                    bool m_idcardHasBeenSet;

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

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DETECTMASKAUTHREQUEST_H_
