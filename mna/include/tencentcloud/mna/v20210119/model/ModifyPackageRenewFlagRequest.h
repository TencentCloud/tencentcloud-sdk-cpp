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
                     * 获取流量包的唯一资源ID
                     * @return ResourceId 流量包的唯一资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置流量包的唯一资源ID
                     * @param _resourceId 流量包的唯一资源ID
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
                     * 获取自动续费标识。true代表自动续费，false代表不自动续费
                     * @return RenewFlag 自动续费标识。true代表自动续费，false代表不自动续费
                     * 
                     */
                    bool GetRenewFlag() const;

                    /**
                     * 设置自动续费标识。true代表自动续费，false代表不自动续费
                     * @param _renewFlag 自动续费标识。true代表自动续费，false代表不自动续费
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
                     * 流量包的唯一资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 自动续费标识。true代表自动续费，false代表不自动续费
                     */
                    bool m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_MODIFYPACKAGERENEWFLAGREQUEST_H_
