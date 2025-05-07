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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_OAUTH_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_OAUTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * OAuth配置信息。
                */
                class OAuth : public AbstractModel
                {
                public:
                    OAuth();
                    ~OAuth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开启或关闭鉴权。
True: 开启;
False: 关闭
默认为关闭。
                     * @return OAuthEnable 开启或关闭鉴权。
True: 开启;
False: 关闭
默认为关闭。
                     * 
                     */
                    bool GetOAuthEnable() const;

                    /**
                     * 设置开启或关闭鉴权。
True: 开启;
False: 关闭
默认为关闭。
                     * @param _oAuthEnable 开启或关闭鉴权。
True: 开启;
False: 关闭
默认为关闭。
                     * 
                     */
                    void SetOAuthEnable(const bool& _oAuthEnable);

                    /**
                     * 判断参数 OAuthEnable 是否已赋值
                     * @return OAuthEnable 是否已赋值
                     * 
                     */
                    bool OAuthEnableHasBeenSet() const;

                    /**
                     * 获取IAP全部故障后，拒绝请求还是放行。
BYPASS: 通过
REJECT: 拒绝
默认为 BYPASS
                     * @return OAuthFailureStatus IAP全部故障后，拒绝请求还是放行。
BYPASS: 通过
REJECT: 拒绝
默认为 BYPASS
                     * 
                     */
                    std::string GetOAuthFailureStatus() const;

                    /**
                     * 设置IAP全部故障后，拒绝请求还是放行。
BYPASS: 通过
REJECT: 拒绝
默认为 BYPASS
                     * @param _oAuthFailureStatus IAP全部故障后，拒绝请求还是放行。
BYPASS: 通过
REJECT: 拒绝
默认为 BYPASS
                     * 
                     */
                    void SetOAuthFailureStatus(const std::string& _oAuthFailureStatus);

                    /**
                     * 判断参数 OAuthFailureStatus 是否已赋值
                     * @return OAuthFailureStatus 是否已赋值
                     * 
                     */
                    bool OAuthFailureStatusHasBeenSet() const;

                private:

                    /**
                     * 开启或关闭鉴权。
True: 开启;
False: 关闭
默认为关闭。
                     */
                    bool m_oAuthEnable;
                    bool m_oAuthEnableHasBeenSet;

                    /**
                     * IAP全部故障后，拒绝请求还是放行。
BYPASS: 通过
REJECT: 拒绝
默认为 BYPASS
                     */
                    std::string m_oAuthFailureStatus;
                    bool m_oAuthFailureStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_OAUTH_H_
