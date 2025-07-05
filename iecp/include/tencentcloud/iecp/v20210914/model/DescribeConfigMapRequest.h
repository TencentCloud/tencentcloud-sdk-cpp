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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBECONFIGMAPREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBECONFIGMAPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeConfigMap请求参数结构体
                */
                class DescribeConfigMapRequest : public AbstractModel
                {
                public:
                    DescribeConfigMapRequest();
                    ~DescribeConfigMapRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取单元ID
                     * @return EdgeUnitID 单元ID
                     * 
                     */
                    uint64_t GetEdgeUnitID() const;

                    /**
                     * 设置单元ID
                     * @param _edgeUnitID 单元ID
                     * 
                     */
                    void SetEdgeUnitID(const uint64_t& _edgeUnitID);

                    /**
                     * 判断参数 EdgeUnitID 是否已赋值
                     * @return EdgeUnitID 是否已赋值
                     * 
                     */
                    bool EdgeUnitIDHasBeenSet() const;

                    /**
                     * 获取ConfigMap名称
                     * @return ConfigMapName ConfigMap名称
                     * 
                     */
                    std::string GetConfigMapName() const;

                    /**
                     * 设置ConfigMap名称
                     * @param _configMapName ConfigMap名称
                     * 
                     */
                    void SetConfigMapName(const std::string& _configMapName);

                    /**
                     * 判断参数 ConfigMapName 是否已赋值
                     * @return ConfigMapName 是否已赋值
                     * 
                     */
                    bool ConfigMapNameHasBeenSet() const;

                    /**
                     * 获取ConfigMap命名空间
                     * @return ConfigMapNamespace ConfigMap命名空间
                     * 
                     */
                    std::string GetConfigMapNamespace() const;

                    /**
                     * 设置ConfigMap命名空间
                     * @param _configMapNamespace ConfigMap命名空间
                     * 
                     */
                    void SetConfigMapNamespace(const std::string& _configMapNamespace);

                    /**
                     * 判断参数 ConfigMapNamespace 是否已赋值
                     * @return ConfigMapNamespace 是否已赋值
                     * 
                     */
                    bool ConfigMapNamespaceHasBeenSet() const;

                private:

                    /**
                     * 单元ID
                     */
                    uint64_t m_edgeUnitID;
                    bool m_edgeUnitIDHasBeenSet;

                    /**
                     * ConfigMap名称
                     */
                    std::string m_configMapName;
                    bool m_configMapNameHasBeenSet;

                    /**
                     * ConfigMap命名空间
                     */
                    std::string m_configMapNamespace;
                    bool m_configMapNamespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBECONFIGMAPREQUEST_H_
