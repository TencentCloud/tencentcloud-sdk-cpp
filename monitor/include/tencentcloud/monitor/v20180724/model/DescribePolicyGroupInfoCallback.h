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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPINFOCALLBACK_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPINFOCALLBACK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 查询策略输出的用户回调信息
                */
                class DescribePolicyGroupInfoCallback : public AbstractModel
                {
                public:
                    DescribePolicyGroupInfoCallback();
                    ~DescribePolicyGroupInfoCallback() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户回调接口地址
                     * @return CallbackUrl 用户回调接口地址
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置用户回调接口地址
                     * @param _callbackUrl 用户回调接口地址
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取用户回调接口状态，0表示未验证，1表示已验证，2表示存在url但没有通过验证
                     * @return ValidFlag 用户回调接口状态，0表示未验证，1表示已验证，2表示存在url但没有通过验证
                     * 
                     */
                    int64_t GetValidFlag() const;

                    /**
                     * 设置用户回调接口状态，0表示未验证，1表示已验证，2表示存在url但没有通过验证
                     * @param _validFlag 用户回调接口状态，0表示未验证，1表示已验证，2表示存在url但没有通过验证
                     * 
                     */
                    void SetValidFlag(const int64_t& _validFlag);

                    /**
                     * 判断参数 ValidFlag 是否已赋值
                     * @return ValidFlag 是否已赋值
                     * 
                     */
                    bool ValidFlagHasBeenSet() const;

                    /**
                     * 获取用户回调接口验证码
                     * @return VerifyCode 用户回调接口验证码
                     * 
                     */
                    std::string GetVerifyCode() const;

                    /**
                     * 设置用户回调接口验证码
                     * @param _verifyCode 用户回调接口验证码
                     * 
                     */
                    void SetVerifyCode(const std::string& _verifyCode);

                    /**
                     * 判断参数 VerifyCode 是否已赋值
                     * @return VerifyCode 是否已赋值
                     * 
                     */
                    bool VerifyCodeHasBeenSet() const;

                private:

                    /**
                     * 用户回调接口地址
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 用户回调接口状态，0表示未验证，1表示已验证，2表示存在url但没有通过验证
                     */
                    int64_t m_validFlag;
                    bool m_validFlagHasBeenSet;

                    /**
                     * 用户回调接口验证码
                     */
                    std::string m_verifyCode;
                    bool m_verifyCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPINFOCALLBACK_H_
