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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYPACKAGEAUTORENEWREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYPACKAGEAUTORENEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * ModifyPackageAutoRenew请求参数结构体
                */
                class ModifyPackageAutoRenewRequest : public AbstractModel
                {
                public:
                    ModifyPackageAutoRenewRequest();
                    ~ModifyPackageAutoRenewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源ID。可以在控制台查看所有的资源
                     * @return ResourceId 资源ID。可以在控制台查看所有的资源
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID。可以在控制台查看所有的资源
                     * @param _resourceId 资源ID。可以在控制台查看所有的资源
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
                     * 获取enable 开启自动续费；disable 关闭自动续费
                     * @return Status enable 开启自动续费；disable 关闭自动续费
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置enable 开启自动续费；disable 关闭自动续费
                     * @param _status enable 开启自动续费；disable 关闭自动续费
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 资源ID。可以在控制台查看所有的资源
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * enable 开启自动续费；disable 关闭自动续费
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYPACKAGEAUTORENEWREQUEST_H_
