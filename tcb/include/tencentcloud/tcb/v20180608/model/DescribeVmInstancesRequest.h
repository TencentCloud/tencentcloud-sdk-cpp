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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEVMINSTANCESREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEVMINSTANCESREQUEST_H_

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
                * DescribeVmInstances请求参数结构体
                */
                class DescribeVmInstancesRequest : public AbstractModel
                {
                public:
                    DescribeVmInstancesRequest();
                    ~DescribeVmInstancesRequest() = default;
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
                     * 获取服务器类型： LightHouse = 轻量云服务器 CVM = 云服务器
                     * @return Type 服务器类型： LightHouse = 轻量云服务器 CVM = 云服务器
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置服务器类型： LightHouse = 轻量云服务器 CVM = 云服务器
                     * @param _type 服务器类型： LightHouse = 轻量云服务器 CVM = 云服务器
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 服务器类型： LightHouse = 轻量云服务器 CVM = 云服务器
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEVMINSTANCESREQUEST_H_
