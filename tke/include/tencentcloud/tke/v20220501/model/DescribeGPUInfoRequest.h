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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBEGPUINFOREQUEST_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBEGPUINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * DescribeGPUInfo请求参数结构体
                */
                class DescribeGPUInfoRequest : public AbstractModel
                {
                public:
                    DescribeGPUInfoRequest();
                    ~DescribeGPUInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例机型名称，默认值""
                     * @return InstanceType 实例机型名称，默认值""
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例机型名称，默认值""
                     * @param _instanceType 实例机型名称，默认值""
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取操作系统oskey，默认值""
                     * @return OsName 操作系统oskey，默认值""
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置操作系统oskey，默认值""
                     * @param _osName 操作系统oskey，默认值""
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                private:

                    /**
                     * 实例机型名称，默认值""
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 操作系统oskey，默认值""
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_DESCRIBEGPUINFOREQUEST_H_
