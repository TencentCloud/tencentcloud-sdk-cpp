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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCREQLIMITPOLICYRECORD_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCREQLIMITPOLICYRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * CC频率限制策略项字段
                */
                class CCReqLimitPolicyRecord : public AbstractModel
                {
                public:
                    CCReqLimitPolicyRecord();
                    ~CCReqLimitPolicyRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取统计周期，可取值1，10，30，60，单位秒
                     * @return Period 统计周期，可取值1，10，30，60，单位秒
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置统计周期，可取值1，10，30，60，单位秒
                     * @param _period 统计周期，可取值1，10，30，60，单位秒
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取请求数，取值1~20000
                     * @return RequestNum 请求数，取值1~20000
                     * 
                     */
                    uint64_t GetRequestNum() const;

                    /**
                     * 设置请求数，取值1~20000
                     * @param _requestNum 请求数，取值1~20000
                     * 
                     */
                    void SetRequestNum(const uint64_t& _requestNum);

                    /**
                     * 判断参数 RequestNum 是否已赋值
                     * @return RequestNum 是否已赋值
                     * 
                     */
                    bool RequestNumHasBeenSet() const;

                    /**
                     * 获取频率限制策略方式，可取值alg表示验证码，drop表示丢弃
                     * @return Action 频率限制策略方式，可取值alg表示验证码，drop表示丢弃
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置频率限制策略方式，可取值alg表示验证码，drop表示丢弃
                     * @param _action 频率限制策略方式，可取值alg表示验证码，drop表示丢弃
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取频率限制策略时长，可取值1~86400，单位秒
                     * @return ExecuteDuration 频率限制策略时长，可取值1~86400，单位秒
                     * 
                     */
                    uint64_t GetExecuteDuration() const;

                    /**
                     * 设置频率限制策略时长，可取值1~86400，单位秒
                     * @param _executeDuration 频率限制策略时长，可取值1~86400，单位秒
                     * 
                     */
                    void SetExecuteDuration(const uint64_t& _executeDuration);

                    /**
                     * 判断参数 ExecuteDuration 是否已赋值
                     * @return ExecuteDuration 是否已赋值
                     * 
                     */
                    bool ExecuteDurationHasBeenSet() const;

                    /**
                     * 获取策略项比对方式，可取值include表示包含，equal表示等于
                     * @return Mode 策略项比对方式，可取值include表示包含，equal表示等于
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置策略项比对方式，可取值include表示包含，equal表示等于
                     * @param _mode 策略项比对方式，可取值include表示包含，equal表示等于
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Uri，三个策略项仅可填其中之一
                     * @return Uri Uri，三个策略项仅可填其中之一
                     * 
                     */
                    std::string GetUri() const;

                    /**
                     * 设置Uri，三个策略项仅可填其中之一
                     * @param _uri Uri，三个策略项仅可填其中之一
                     * 
                     */
                    void SetUri(const std::string& _uri);

                    /**
                     * 判断参数 Uri 是否已赋值
                     * @return Uri 是否已赋值
                     * 
                     */
                    bool UriHasBeenSet() const;

                    /**
                     * 获取User-Agent，三个策略项仅可填其中之一
                     * @return UserAgent User-Agent，三个策略项仅可填其中之一
                     * 
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置User-Agent，三个策略项仅可填其中之一
                     * @param _userAgent User-Agent，三个策略项仅可填其中之一
                     * 
                     */
                    void SetUserAgent(const std::string& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     * 
                     */
                    bool UserAgentHasBeenSet() const;

                    /**
                     * 获取Cookie，三个策略项仅可填其中之一
                     * @return Cookie Cookie，三个策略项仅可填其中之一
                     * 
                     */
                    std::string GetCookie() const;

                    /**
                     * 设置Cookie，三个策略项仅可填其中之一
                     * @param _cookie Cookie，三个策略项仅可填其中之一
                     * 
                     */
                    void SetCookie(const std::string& _cookie);

                    /**
                     * 判断参数 Cookie 是否已赋值
                     * @return Cookie 是否已赋值
                     * 
                     */
                    bool CookieHasBeenSet() const;

                private:

                    /**
                     * 统计周期，可取值1，10，30，60，单位秒
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 请求数，取值1~20000
                     */
                    uint64_t m_requestNum;
                    bool m_requestNumHasBeenSet;

                    /**
                     * 频率限制策略方式，可取值alg表示验证码，drop表示丢弃
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 频率限制策略时长，可取值1~86400，单位秒
                     */
                    uint64_t m_executeDuration;
                    bool m_executeDurationHasBeenSet;

                    /**
                     * 策略项比对方式，可取值include表示包含，equal表示等于
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Uri，三个策略项仅可填其中之一
                     */
                    std::string m_uri;
                    bool m_uriHasBeenSet;

                    /**
                     * User-Agent，三个策略项仅可填其中之一
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

                    /**
                     * Cookie，三个策略项仅可填其中之一
                     */
                    std::string m_cookie;
                    bool m_cookieHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCREQLIMITPOLICYRECORD_H_
