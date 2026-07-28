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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDBPROXYRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDBPROXYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateDBProxy返回参数结构体
                */
                class CreateDBProxyResponse : public AbstractModel
                {
                public:
                    CreateDBProxyResponse();
                    ~CreateDBProxyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>订单号，下单成功返回。</p>
                     * @return DealName <p>订单号，下单成功返回。</p>
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取<p>创建出的 Proxy 实例 ID，格式形如：proxy-xxxxxxxx。</p>
                     * @return ProxyGroupId <p>创建出的 Proxy 实例 ID，格式形如：proxy-xxxxxxxx。</p>
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     * 
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                private:

                    /**
                     * <p>订单号，下单成功返回。</p>
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * <p>创建出的 Proxy 实例 ID，格式形如：proxy-xxxxxxxx。</p>
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDBPROXYRESPONSE_H_
