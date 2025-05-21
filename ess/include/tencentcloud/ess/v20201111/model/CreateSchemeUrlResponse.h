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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATESCHEMEURLRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATESCHEMEURLRESPONSE_H_

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
                * CreateSchemeUrl返回参数结构体
                */
                class CreateSchemeUrlResponse : public AbstractModel
                {
                public:
                    CreateSchemeUrlResponse();
                    ~CreateSchemeUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯电子签小程序的签署链接。

<ul><li>如果EndPoint是**APP**，得到的链接类似于`pages/guide?from=default&where=mini&id=yDwJSUUirqauh***7jNSxwdirTSGuH&to=CONTRACT_DETAIL&name=&phone=&shortKey=yDw***k1xFc5`, 用法可以参加接口描述中的"跳转到小程序的实现"</li>
<li>如果EndPoint是**HTTP**，得到的链接类似于 `https://res.ess.tencent.cn/cdn/h5-activity/jump-mp.html?where=mini&from=SFY&id=yDwfEUUw**4rV6Avz&to=MVP_CONTRACT_COVER&name=%E9%83%**5%86%9B`，点击后会跳转到腾讯电子签小程序进行签署</li>
<li>如果EndPoint是**HTTP_SHORT_URL**，得到的链接类似于 `https://essurl.cn/2n**42Nd`，点击后会跳转到腾讯电子签小程序进行签署</li></ul>


注： <font color="red">生成的链路后面不能再增加参数</font>
                     * @return SchemeUrl 腾讯电子签小程序的签署链接。

<ul><li>如果EndPoint是**APP**，得到的链接类似于`pages/guide?from=default&where=mini&id=yDwJSUUirqauh***7jNSxwdirTSGuH&to=CONTRACT_DETAIL&name=&phone=&shortKey=yDw***k1xFc5`, 用法可以参加接口描述中的"跳转到小程序的实现"</li>
<li>如果EndPoint是**HTTP**，得到的链接类似于 `https://res.ess.tencent.cn/cdn/h5-activity/jump-mp.html?where=mini&from=SFY&id=yDwfEUUw**4rV6Avz&to=MVP_CONTRACT_COVER&name=%E9%83%**5%86%9B`，点击后会跳转到腾讯电子签小程序进行签署</li>
<li>如果EndPoint是**HTTP_SHORT_URL**，得到的链接类似于 `https://essurl.cn/2n**42Nd`，点击后会跳转到腾讯电子签小程序进行签署</li></ul>


注： <font color="red">生成的链路后面不能再增加参数</font>
                     * 
                     */
                    std::string GetSchemeUrl() const;

                    /**
                     * 判断参数 SchemeUrl 是否已赋值
                     * @return SchemeUrl 是否已赋值
                     * 
                     */
                    bool SchemeUrlHasBeenSet() const;

                    /**
                     * 获取二维码，在生成动态签署人跳转封面页链接时返回  注：`此二维码下载链接有效期为5分钟，可下载二维码后本地保存。`
                     * @return SchemeQrcodeUrl 二维码，在生成动态签署人跳转封面页链接时返回  注：`此二维码下载链接有效期为5分钟，可下载二维码后本地保存。`
                     * 
                     */
                    std::string GetSchemeQrcodeUrl() const;

                    /**
                     * 判断参数 SchemeQrcodeUrl 是否已赋值
                     * @return SchemeQrcodeUrl 是否已赋值
                     * 
                     */
                    bool SchemeQrcodeUrlHasBeenSet() const;

                private:

                    /**
                     * 腾讯电子签小程序的签署链接。

<ul><li>如果EndPoint是**APP**，得到的链接类似于`pages/guide?from=default&where=mini&id=yDwJSUUirqauh***7jNSxwdirTSGuH&to=CONTRACT_DETAIL&name=&phone=&shortKey=yDw***k1xFc5`, 用法可以参加接口描述中的"跳转到小程序的实现"</li>
<li>如果EndPoint是**HTTP**，得到的链接类似于 `https://res.ess.tencent.cn/cdn/h5-activity/jump-mp.html?where=mini&from=SFY&id=yDwfEUUw**4rV6Avz&to=MVP_CONTRACT_COVER&name=%E9%83%**5%86%9B`，点击后会跳转到腾讯电子签小程序进行签署</li>
<li>如果EndPoint是**HTTP_SHORT_URL**，得到的链接类似于 `https://essurl.cn/2n**42Nd`，点击后会跳转到腾讯电子签小程序进行签署</li></ul>


注： <font color="red">生成的链路后面不能再增加参数</font>
                     */
                    std::string m_schemeUrl;
                    bool m_schemeUrlHasBeenSet;

                    /**
                     * 二维码，在生成动态签署人跳转封面页链接时返回  注：`此二维码下载链接有效期为5分钟，可下载二维码后本地保存。`
                     */
                    std::string m_schemeQrcodeUrl;
                    bool m_schemeQrcodeUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATESCHEMEURLRESPONSE_H_
