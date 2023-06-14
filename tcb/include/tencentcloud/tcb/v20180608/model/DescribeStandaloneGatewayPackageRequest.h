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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBESTANDALONEGATEWAYPACKAGEREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBESTANDALONEGATEWAYPACKAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeStandaloneGatewayPackage请求参数结构体
                */
                class DescribeStandaloneGatewayPackageRequest : public AbstractModel
                {
                public:
                    DescribeStandaloneGatewayPackageRequest();
                    ~DescribeStandaloneGatewayPackageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取套餐版本，包含starter、basic、advanced、enterprise
                     * @return PackageVersion 套餐版本，包含starter、basic、advanced、enterprise
                     * 
                     */
                    std::string GetPackageVersion() const;

                    /**
                     * 设置套餐版本，包含starter、basic、advanced、enterprise
                     * @param _packageVersion 套餐版本，包含starter、basic、advanced、enterprise
                     * 
                     */
                    void SetPackageVersion(const std::string& _packageVersion);

                    /**
                     * 判断参数 PackageVersion 是否已赋值
                     * @return PackageVersion 是否已赋值
                     * 
                     */
                    bool PackageVersionHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 套餐版本，包含starter、basic、advanced、enterprise
                     */
                    std::string m_packageVersion;
                    bool m_packageVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBESTANDALONEGATEWAYPACKAGEREQUEST_H_
