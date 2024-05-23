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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONGROUPINVITATIONLINKRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONGROUPINVITATIONLINKRESPONSE_H_

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
                * CreateOrganizationGroupInvitationLink返回参数结构体
                */
                class CreateOrganizationGroupInvitationLinkResponse : public AbstractModel
                {
                public:
                    CreateOrganizationGroupInvitationLinkResponse();
                    ~CreateOrganizationGroupInvitationLinkResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取加入集团二维码链接，子企业的管理员可以直接扫码进入。
注意:1. 该链接有效期时间为ExpireTime，同时需要注意保密，不要外泄给无关用户。2. 该链接不支持小程序嵌入，仅支持<b>移动端浏览器</b>打开。3. <font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     * @return Link 加入集团二维码链接，子企业的管理员可以直接扫码进入。
注意:1. 该链接有效期时间为ExpireTime，同时需要注意保密，不要外泄给无关用户。2. 该链接不支持小程序嵌入，仅支持<b>移动端浏览器</b>打开。3. <font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     * 
                     */
                    std::string GetLink() const;

                    /**
                     * 判断参数 Link 是否已赋值
                     * @return Link 是否已赋值
                     * 
                     */
                    bool LinkHasBeenSet() const;

                    /**
                     * 获取到期时间（以秒为单位的时间戳）
                     * @return ExpireTime 到期时间（以秒为单位的时间戳）
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
                     * 获取加入集团短链接。
注意:
1. 该链接有效期时间为ExpireTime，同时需要注意保密，不要外泄给无关用户。
2. 该链接不支持小程序嵌入，仅支持<b>移动端浏览器</b>打开。
3. <font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     * @return JumpUrl 加入集团短链接。
注意:
1. 该链接有效期时间为ExpireTime，同时需要注意保密，不要外泄给无关用户。
2. 该链接不支持小程序嵌入，仅支持<b>移动端浏览器</b>打开。
3. <font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     * 
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 判断参数 JumpUrl 是否已赋值
                     * @return JumpUrl 是否已赋值
                     * 
                     */
                    bool JumpUrlHasBeenSet() const;

                    /**
                     * 获取腾讯电子签小程序加入集团链接。

<li>小程序和APP集成使用</li>
<li>得到的链接类似于`pages/guide?shortKey=yDw***k1xFc5`, 用法可以参考：<a href="https://qian.tencent.com/developers/company/openwxminiprogram" target="_blank">跳转电子签小程序</a></li>


注： <font color="red">生成的链路后面不能再增加参数</font>
                     * @return MiniAppPath 腾讯电子签小程序加入集团链接。

<li>小程序和APP集成使用</li>
<li>得到的链接类似于`pages/guide?shortKey=yDw***k1xFc5`, 用法可以参考：<a href="https://qian.tencent.com/developers/company/openwxminiprogram" target="_blank">跳转电子签小程序</a></li>


注： <font color="red">生成的链路后面不能再增加参数</font>
                     * 
                     */
                    std::string GetMiniAppPath() const;

                    /**
                     * 判断参数 MiniAppPath 是否已赋值
                     * @return MiniAppPath 是否已赋值
                     * 
                     */
                    bool MiniAppPathHasBeenSet() const;

                private:

                    /**
                     * 加入集团二维码链接，子企业的管理员可以直接扫码进入。
注意:1. 该链接有效期时间为ExpireTime，同时需要注意保密，不要外泄给无关用户。2. 该链接不支持小程序嵌入，仅支持<b>移动端浏览器</b>打开。3. <font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     */
                    std::string m_link;
                    bool m_linkHasBeenSet;

                    /**
                     * 到期时间（以秒为单位的时间戳）
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 加入集团短链接。
注意:
1. 该链接有效期时间为ExpireTime，同时需要注意保密，不要外泄给无关用户。
2. 该链接不支持小程序嵌入，仅支持<b>移动端浏览器</b>打开。
3. <font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     */
                    std::string m_jumpUrl;
                    bool m_jumpUrlHasBeenSet;

                    /**
                     * 腾讯电子签小程序加入集团链接。

<li>小程序和APP集成使用</li>
<li>得到的链接类似于`pages/guide?shortKey=yDw***k1xFc5`, 用法可以参考：<a href="https://qian.tencent.com/developers/company/openwxminiprogram" target="_blank">跳转电子签小程序</a></li>


注： <font color="red">生成的链路后面不能再增加参数</font>
                     */
                    std::string m_miniAppPath;
                    bool m_miniAppPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEORGANIZATIONGROUPINVITATIONLINKRESPONSE_H_
