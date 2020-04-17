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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateInstance请求参数结构体
                */
                class CreateInstanceRequest : public AbstractModel
                {
                public:
                    CreateInstanceRequest();
                    ~CreateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业版实例名称
                     * @return RegistryName 企业版实例名称
                     */
                    std::string GetRegistryName() const;

                    /**
                     * 设置企业版实例名称
                     * @param RegistryName 企业版实例名称
                     */
                    void SetRegistryName(const std::string& _registryName);

                    /**
                     * 判断参数 RegistryName 是否已赋值
                     * @return RegistryName 是否已赋值
                     */
                    bool RegistryNameHasBeenSet() const;

                    /**
                     * 获取企业版实例类型
                     * @return RegistryType 企业版实例类型
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置企业版实例类型
                     * @param RegistryType 企业版实例类型
                     */
                    void SetRegistryType(const std::string& _registryType);

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     */
                    bool RegistryTypeHasBeenSet() const;

                private:

                    /**
                     * 企业版实例名称
                     */
                    std::string m_registryName;
                    bool m_registryNameHasBeenSet;

                    /**
                     * 企业版实例类型
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATEINSTANCEREQUEST_H_
