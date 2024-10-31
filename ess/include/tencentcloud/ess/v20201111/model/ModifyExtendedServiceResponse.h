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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_MODIFYEXTENDEDSERVICERESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_MODIFYEXTENDEDSERVICERESPONSE_H_

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
                * ModifyExtendedService返回参数结构体
                */
                class ModifyExtendedServiceResponse : public AbstractModel
                {
                public:
                    ModifyExtendedServiceResponse();
                    ~ModifyExtendedServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取操作跳转链接
<ul>
<li><strong>有效期：</strong> 跳转链接的有效期为24小时。</li>
<li><strong>无跳转链接返回的情况：</strong> 如果在操作过程中没有返回跳转链接，这意味着无需进行跳转操作。在这种情况下，服务将会直接被开通或关闭。
<li><strong>有跳转链接返回的情况：</strong> 当操作类型为“OPEN”（开通服务），并且扩展服务类型为以下之一时，  系统将返回一个操作链接。当前操作人（超级管理员或法人）需要点击此链接，以完成服务的开通操作。

<ul>
<li><strong>OPEN_SERVER_SIGN</strong>（企业自动签署）</li>
</ul></li></li>
</ul>
                     * @return OperateUrl 操作跳转链接
<ul>
<li><strong>有效期：</strong> 跳转链接的有效期为24小时。</li>
<li><strong>无跳转链接返回的情况：</strong> 如果在操作过程中没有返回跳转链接，这意味着无需进行跳转操作。在这种情况下，服务将会直接被开通或关闭。
<li><strong>有跳转链接返回的情况：</strong> 当操作类型为“OPEN”（开通服务），并且扩展服务类型为以下之一时，  系统将返回一个操作链接。当前操作人（超级管理员或法人）需要点击此链接，以完成服务的开通操作。

<ul>
<li><strong>OPEN_SERVER_SIGN</strong>（企业自动签署）</li>
</ul></li></li>
</ul>
                     * 
                     */
                    std::string GetOperateUrl() const;

                    /**
                     * 判断参数 OperateUrl 是否已赋值
                     * @return OperateUrl 是否已赋值
                     * 
                     */
                    bool OperateUrlHasBeenSet() const;

                private:

                    /**
                     * 操作跳转链接
<ul>
<li><strong>有效期：</strong> 跳转链接的有效期为24小时。</li>
<li><strong>无跳转链接返回的情况：</strong> 如果在操作过程中没有返回跳转链接，这意味着无需进行跳转操作。在这种情况下，服务将会直接被开通或关闭。
<li><strong>有跳转链接返回的情况：</strong> 当操作类型为“OPEN”（开通服务），并且扩展服务类型为以下之一时，  系统将返回一个操作链接。当前操作人（超级管理员或法人）需要点击此链接，以完成服务的开通操作。

<ul>
<li><strong>OPEN_SERVER_SIGN</strong>（企业自动签署）</li>
</ul></li></li>
</ul>
                     */
                    std::string m_operateUrl;
                    bool m_operateUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_MODIFYEXTENDEDSERVICERESPONSE_H_
