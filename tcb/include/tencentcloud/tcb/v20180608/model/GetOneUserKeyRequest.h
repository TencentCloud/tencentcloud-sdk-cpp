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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_GETONEUSERKEYREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_GETONEUSERKEYREQUEST_H_

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
                * GetOneUserKey请求参数结构体
                */
                class GetOneUserKeyRequest : public AbstractModel
                {
                public:
                    GetOneUserKeyRequest();
                    ~GetOneUserKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>环境ID</p>
                     * @return EnvId <p>环境ID</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境ID</p>
                     * @param _envId <p>环境ID</p>
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
                     * 获取<p>用户密钥对标识，前半部分用户填写，后半部分平台按照一定规则生成</p>
                     * @return KeyID <p>用户密钥对标识，前半部分用户填写，后半部分平台按照一定规则生成</p>
                     * 
                     */
                    std::string GetKeyID() const;

                    /**
                     * 设置<p>用户密钥对标识，前半部分用户填写，后半部分平台按照一定规则生成</p>
                     * @param _keyID <p>用户密钥对标识，前半部分用户填写，后半部分平台按照一定规则生成</p>
                     * 
                     */
                    void SetKeyID(const std::string& _keyID);

                    /**
                     * 判断参数 KeyID 是否已赋值
                     * @return KeyID 是否已赋值
                     * 
                     */
                    bool KeyIDHasBeenSet() const;

                    /**
                     * 获取<p>业务场景来源，默认不传，表示来源授权中心，integration表示来源集成中心，当从集成中心请求时必传integration</p>
                     * @return Business <p>业务场景来源，默认不传，表示来源授权中心，integration表示来源集成中心，当从集成中心请求时必传integration</p>
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置<p>业务场景来源，默认不传，表示来源授权中心，integration表示来源集成中心，当从集成中心请求时必传integration</p>
                     * @param _business <p>业务场景来源，默认不传，表示来源授权中心，integration表示来源集成中心，当从集成中心请求时必传integration</p>
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取<p>是否需要加密字段的值，true：是，false：否，默认不传，不需要</p><p>默认值：false</p><p>当为true时，返回加密字段的值，前端进行按约定解密</p>
                     * @return NeedPwd <p>是否需要加密字段的值，true：是，false：否，默认不传，不需要</p><p>默认值：false</p><p>当为true时，返回加密字段的值，前端进行按约定解密</p>
                     * 
                     */
                    bool GetNeedPwd() const;

                    /**
                     * 设置<p>是否需要加密字段的值，true：是，false：否，默认不传，不需要</p><p>默认值：false</p><p>当为true时，返回加密字段的值，前端进行按约定解密</p>
                     * @param _needPwd <p>是否需要加密字段的值，true：是，false：否，默认不传，不需要</p><p>默认值：false</p><p>当为true时，返回加密字段的值，前端进行按约定解密</p>
                     * 
                     */
                    void SetNeedPwd(const bool& _needPwd);

                    /**
                     * 判断参数 NeedPwd 是否已赋值
                     * @return NeedPwd 是否已赋值
                     * 
                     */
                    bool NeedPwdHasBeenSet() const;

                private:

                    /**
                     * <p>环境ID</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>用户密钥对标识，前半部分用户填写，后半部分平台按照一定规则生成</p>
                     */
                    std::string m_keyID;
                    bool m_keyIDHasBeenSet;

                    /**
                     * <p>业务场景来源，默认不传，表示来源授权中心，integration表示来源集成中心，当从集成中心请求时必传integration</p>
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * <p>是否需要加密字段的值，true：是，false：否，默认不传，不需要</p><p>默认值：false</p><p>当为true时，返回加密字段的值，前端进行按约定解密</p>
                     */
                    bool m_needPwd;
                    bool m_needPwdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_GETONEUSERKEYREQUEST_H_
