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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEUSERMOBILECHANGEURLRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEUSERMOBILECHANGEURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateUserMobileChangeUrl返回参数结构体
                */
                class CreateUserMobileChangeUrlResponse : public AbstractModel
                {
                public:
                    CreateUserMobileChangeUrlResponse();
                    ~CreateUserMobileChangeUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯电子签小程序的实名认证链接。 如果没有传递，默认值是 HTTP。 链接的有效期均是 7 天。

<b>1.如果EndPoint是APP</b>，
得到的链接类似于<a href="">pages/guide/index?to=MOBILE_CHANGE_INTENTION&shortKey=yDCZHUyOcExAlcOvNod0</a>, 用法可以参考描述中的"跳转到小程序的实现"

<b>2.如果EndPoint是HTTP</b>，
得到的链接类似于<a href="">https://res.ess.tencent.cn/cdn/h5-activity/jump-mp.html?to=MOBILE_CHANGE_INTENTION&shortKey=yDCZHUyOcChrfpaswT0d</a>，点击后会跳转到腾讯电子签小程序进行签署

<b>3.如果EndPoint是HTTP_SHORT_URL</b>，
得到的链接类似于<a href="">https://essurl.cn/2n**42Nd</a>，点击后会跳转到腾讯电子签小程序进行签署

注： <font color="red">生成的链路后面不能再增加参数</font>

                     * @return Url 腾讯电子签小程序的实名认证链接。 如果没有传递，默认值是 HTTP。 链接的有效期均是 7 天。

<b>1.如果EndPoint是APP</b>，
得到的链接类似于<a href="">pages/guide/index?to=MOBILE_CHANGE_INTENTION&shortKey=yDCZHUyOcExAlcOvNod0</a>, 用法可以参考描述中的"跳转到小程序的实现"

<b>2.如果EndPoint是HTTP</b>，
得到的链接类似于<a href="">https://res.ess.tencent.cn/cdn/h5-activity/jump-mp.html?to=MOBILE_CHANGE_INTENTION&shortKey=yDCZHUyOcChrfpaswT0d</a>，点击后会跳转到腾讯电子签小程序进行签署

<b>3.如果EndPoint是HTTP_SHORT_URL</b>，
得到的链接类似于<a href="">https://essurl.cn/2n**42Nd</a>，点击后会跳转到腾讯电子签小程序进行签署

注： <font color="red">生成的链路后面不能再增加参数</font>

                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取链接失效期限，为Unix时间戳（单位秒），有如下规则：

<ul>
<li>如果指定更换绑定手机号的用户(指定用户ID或姓名等信息)，则设定的链接失效期限为7天后。</li>
<li>如果没有指定更换绑定手机号的用户，则生成通用跳转到个人换手机号的界面，链接不会过期。</li>
</ul>
                     * @return ExpireTime 链接失效期限，为Unix时间戳（单位秒），有如下规则：

<ul>
<li>如果指定更换绑定手机号的用户(指定用户ID或姓名等信息)，则设定的链接失效期限为7天后。</li>
<li>如果没有指定更换绑定手机号的用户，则生成通用跳转到个人换手机号的界面，链接不会过期。</li>
</ul>
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 腾讯电子签小程序的实名认证链接。 如果没有传递，默认值是 HTTP。 链接的有效期均是 7 天。

<b>1.如果EndPoint是APP</b>，
得到的链接类似于<a href="">pages/guide/index?to=MOBILE_CHANGE_INTENTION&shortKey=yDCZHUyOcExAlcOvNod0</a>, 用法可以参考描述中的"跳转到小程序的实现"

<b>2.如果EndPoint是HTTP</b>，
得到的链接类似于<a href="">https://res.ess.tencent.cn/cdn/h5-activity/jump-mp.html?to=MOBILE_CHANGE_INTENTION&shortKey=yDCZHUyOcChrfpaswT0d</a>，点击后会跳转到腾讯电子签小程序进行签署

<b>3.如果EndPoint是HTTP_SHORT_URL</b>，
得到的链接类似于<a href="">https://essurl.cn/2n**42Nd</a>，点击后会跳转到腾讯电子签小程序进行签署

注： <font color="red">生成的链路后面不能再增加参数</font>

                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 链接失效期限，为Unix时间戳（单位秒），有如下规则：

<ul>
<li>如果指定更换绑定手机号的用户(指定用户ID或姓名等信息)，则设定的链接失效期限为7天后。</li>
<li>如果没有指定更换绑定手机号的用户，则生成通用跳转到个人换手机号的界面，链接不会过期。</li>
</ul>
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEUSERMOBILECHANGEURLRESPONSE_H_
