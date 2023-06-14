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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LOGINACTIONMFAFLAG_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LOGINACTIONMFAFLAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 登录和敏感操作flag
                */
                class LoginActionMfaFlag : public AbstractModel
                {
                public:
                    LoginActionMfaFlag();
                    ~LoginActionMfaFlag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取手机
                     * @return Phone 手机
                     * 
                     */
                    uint64_t GetPhone() const;

                    /**
                     * 设置手机
                     * @param _phone 手机
                     * 
                     */
                    void SetPhone(const uint64_t& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取软token
                     * @return Stoken 软token
                     * 
                     */
                    uint64_t GetStoken() const;

                    /**
                     * 设置软token
                     * @param _stoken 软token
                     * 
                     */
                    void SetStoken(const uint64_t& _stoken);

                    /**
                     * 判断参数 Stoken 是否已赋值
                     * @return Stoken 是否已赋值
                     * 
                     */
                    bool StokenHasBeenSet() const;

                    /**
                     * 获取微信
                     * @return Wechat 微信
                     * 
                     */
                    uint64_t GetWechat() const;

                    /**
                     * 设置微信
                     * @param _wechat 微信
                     * 
                     */
                    void SetWechat(const uint64_t& _wechat);

                    /**
                     * 判断参数 Wechat 是否已赋值
                     * @return Wechat 是否已赋值
                     * 
                     */
                    bool WechatHasBeenSet() const;

                private:

                    /**
                     * 手机
                     */
                    uint64_t m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 软token
                     */
                    uint64_t m_stoken;
                    bool m_stokenHasBeenSet;

                    /**
                     * 微信
                     */
                    uint64_t m_wechat;
                    bool m_wechatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LOGINACTIONMFAFLAG_H_
