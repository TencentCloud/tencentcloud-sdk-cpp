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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_INSTALLAGENTOPENAPIREQUEST_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_INSTALLAGENTOPENAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * InstallAgentOpenApi请求参数结构体
                */
                class InstallAgentOpenApiRequest : public AbstractModel
                {
                public:
                    InstallAgentOpenApiRequest();
                    ~InstallAgentOpenApiRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>1:CVM<br>2:TKE</p>
                     * @return InstanceType <p>1:CVM<br>2:TKE</p>
                     * 
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置<p>1:CVM<br>2:TKE</p>
                     * @param _instanceType <p>1:CVM<br>2:TKE</p>
                     * 
                     */
                    void SetInstanceType(const uint64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>安装探针实例列表</p>
                     * @return InstanceIds <p>安装探针实例列表</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>安装探针实例列表</p>
                     * @param _instanceIds <p>安装探针实例列表</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * <p>1:CVM<br>2:TKE</p>
                     */
                    uint64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>安装探针实例列表</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_INSTALLAGENTOPENAPIREQUEST_H_
