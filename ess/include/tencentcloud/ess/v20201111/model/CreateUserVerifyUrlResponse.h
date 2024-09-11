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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEUSERVERIFYURLRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEUSERVERIFYURLRESPONSE_H_

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
                * CreateUserVerifyUrl返回参数结构体
                */
                class CreateUserVerifyUrlResponse : public AbstractModel
                {
                public:
                    CreateUserVerifyUrlResponse();
                    ~CreateUserVerifyUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯电子签小程序的实名认证链接。
如果没有传递，默认值是 HTTP。 链接的有效期均是 7 天。

<strong>1.如果EndPoint是APP</strong>：
得到的链接类似于<a href="">pages/guide/index?to=MP_PERSONAL_VERIFY&shortKey=yDCZHUyOcExAlcOvNod0</a>, 用法可以参考描述中的"跳转到小程序的实现"

<strong>2.如果EndPoint是HTTP</strong>：
得到的链接类似于 <a href="">https://res.ess.tencent.cn/cdn/h5-activity/jump-mp.html?to=TAG_VERIFY&shortKey=yDCZHUyOcChrfpaswT0d</a>，点击后会跳转到腾讯电子签小程序进行签署

<strong>3.如果EndPoint是HTTP_SHORT_URL</strong>：
得到的链接类似于<a href="">https://essurl.cn/2n**42Nd</a>，点击后会跳转到腾讯电子签小程序进行签署

<strong>4.如果EndPoint是H5</strong>：
得到的链接类似于 <a href="">https://quick.test.qian.tencent.cn/guide?Code=yDU****VJhsS5q&CodeType=xxx&shortKey=yD*****frcb</a>，点击后会跳转到腾讯电子签H5页面进行签署

<strong>5.如果EndPoint是H5_SHORT_URL</strong>：
得到的链接类似于<a href="">https://essurl.cn/2n**42Nd</a>，点击后会跳转到腾讯电子签H5页面进行签署


`注：` <font color="red">生成的链路后面不能再增加参数，防止出错重复参数覆盖原有的参数</font>
示例值：https://essurl.cn/2n**42Nd
                     * @return UserVerifyUrl 腾讯电子签小程序的实名认证链接。
如果没有传递，默认值是 HTTP。 链接的有效期均是 7 天。

<strong>1.如果EndPoint是APP</strong>：
得到的链接类似于<a href="">pages/guide/index?to=MP_PERSONAL_VERIFY&shortKey=yDCZHUyOcExAlcOvNod0</a>, 用法可以参考描述中的"跳转到小程序的实现"

<strong>2.如果EndPoint是HTTP</strong>：
得到的链接类似于 <a href="">https://res.ess.tencent.cn/cdn/h5-activity/jump-mp.html?to=TAG_VERIFY&shortKey=yDCZHUyOcChrfpaswT0d</a>，点击后会跳转到腾讯电子签小程序进行签署

<strong>3.如果EndPoint是HTTP_SHORT_URL</strong>：
得到的链接类似于<a href="">https://essurl.cn/2n**42Nd</a>，点击后会跳转到腾讯电子签小程序进行签署

<strong>4.如果EndPoint是H5</strong>：
得到的链接类似于 <a href="">https://quick.test.qian.tencent.cn/guide?Code=yDU****VJhsS5q&CodeType=xxx&shortKey=yD*****frcb</a>，点击后会跳转到腾讯电子签H5页面进行签署

<strong>5.如果EndPoint是H5_SHORT_URL</strong>：
得到的链接类似于<a href="">https://essurl.cn/2n**42Nd</a>，点击后会跳转到腾讯电子签H5页面进行签署


`注：` <font color="red">生成的链路后面不能再增加参数，防止出错重复参数覆盖原有的参数</font>
示例值：https://essurl.cn/2n**42Nd
                     * 
                     */
                    std::string GetUserVerifyUrl() const;

                    /**
                     * 判断参数 UserVerifyUrl 是否已赋值
                     * @return UserVerifyUrl 是否已赋值
                     * 
                     */
                    bool UserVerifyUrlHasBeenSet() const;

                    /**
                     * 获取链接过期时间，为Unix时间戳（单位为秒）。
                     * @return ExpireTime 链接过期时间，为Unix时间戳（单位为秒）。
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取小程序appid，用于半屏拉起电子签小程序， 仅在 Endpoint 设置为 APP 的时候返回
                     * @return MiniAppId 小程序appid，用于半屏拉起电子签小程序， 仅在 Endpoint 设置为 APP 的时候返回
                     * 
                     */
                    std::string GetMiniAppId() const;

                    /**
                     * 判断参数 MiniAppId 是否已赋值
                     * @return MiniAppId 是否已赋值
                     * 
                     */
                    bool MiniAppIdHasBeenSet() const;

                private:

                    /**
                     * 腾讯电子签小程序的实名认证链接。
如果没有传递，默认值是 HTTP。 链接的有效期均是 7 天。

<strong>1.如果EndPoint是APP</strong>：
得到的链接类似于<a href="">pages/guide/index?to=MP_PERSONAL_VERIFY&shortKey=yDCZHUyOcExAlcOvNod0</a>, 用法可以参考描述中的"跳转到小程序的实现"

<strong>2.如果EndPoint是HTTP</strong>：
得到的链接类似于 <a href="">https://res.ess.tencent.cn/cdn/h5-activity/jump-mp.html?to=TAG_VERIFY&shortKey=yDCZHUyOcChrfpaswT0d</a>，点击后会跳转到腾讯电子签小程序进行签署

<strong>3.如果EndPoint是HTTP_SHORT_URL</strong>：
得到的链接类似于<a href="">https://essurl.cn/2n**42Nd</a>，点击后会跳转到腾讯电子签小程序进行签署

<strong>4.如果EndPoint是H5</strong>：
得到的链接类似于 <a href="">https://quick.test.qian.tencent.cn/guide?Code=yDU****VJhsS5q&CodeType=xxx&shortKey=yD*****frcb</a>，点击后会跳转到腾讯电子签H5页面进行签署

<strong>5.如果EndPoint是H5_SHORT_URL</strong>：
得到的链接类似于<a href="">https://essurl.cn/2n**42Nd</a>，点击后会跳转到腾讯电子签H5页面进行签署


`注：` <font color="red">生成的链路后面不能再增加参数，防止出错重复参数覆盖原有的参数</font>
示例值：https://essurl.cn/2n**42Nd
                     */
                    std::string m_userVerifyUrl;
                    bool m_userVerifyUrlHasBeenSet;

                    /**
                     * 链接过期时间，为Unix时间戳（单位为秒）。
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 小程序appid，用于半屏拉起电子签小程序， 仅在 Endpoint 设置为 APP 的时候返回
                     */
                    std::string m_miniAppId;
                    bool m_miniAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEUSERVERIFYURLRESPONSE_H_
