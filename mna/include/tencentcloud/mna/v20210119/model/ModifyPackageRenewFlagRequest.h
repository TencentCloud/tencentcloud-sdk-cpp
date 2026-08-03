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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_MODIFYPACKAGERENEWFLAGREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_MODIFYPACKAGERENEWFLAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * ModifyPackageRenewFlag请求参数结构体
                */
                class ModifyPackageRenewFlagRequest : public AbstractModel
                {
                public:
                    ModifyPackageRenewFlagRequest();
                    ~ModifyPackageRenewFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>流量包的唯一资源ID</p>
                     * @return ResourceId <p>流量包的唯一资源ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>流量包的唯一资源ID</p>
                     * @param _resourceId <p>流量包的唯一资源ID</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>自动续费标识。true代表自动续费，false代表不自动续费</p>
                     * @return RenewFlag <p>自动续费标识。true代表自动续费，false代表不自动续费</p>
                     * 
                     */
                    bool GetRenewFlag() const;

                    /**
                     * 设置<p>自动续费标识。true代表自动续费，false代表不自动续费</p>
                     * @param _renewFlag <p>自动续费标识。true代表自动续费，false代表不自动续费</p>
                     * 
                     */
                    void SetRenewFlag(const bool& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

                    /**
                     * <p>流量包的唯一资源ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>自动续费标识。true代表自动续费，false代表不自动续费</p>
                     */
                    bool m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_MODIFYPACKAGERENEWFLAGREQUEST_H_
