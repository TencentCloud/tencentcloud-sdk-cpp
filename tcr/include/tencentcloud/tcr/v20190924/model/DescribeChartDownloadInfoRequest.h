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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBECHARTDOWNLOADINFOREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBECHARTDOWNLOADINFOREQUEST_H_

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
                * DescribeChartDownloadInfo请求参数结构体
                */
                class DescribeChartDownloadInfoRequest : public AbstractModel
                {
                public:
                    DescribeChartDownloadInfoRequest();
                    ~DescribeChartDownloadInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return RegistryId 实例ID
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例ID
                     * @param _registryId 实例ID
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取命名空间
                     * @return NamespaceName 命名空间
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置命名空间
                     * @param _namespaceName 命名空间
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取Chart包的名称
                     * @return ChartName Chart包的名称
                     * 
                     */
                    std::string GetChartName() const;

                    /**
                     * 设置Chart包的名称
                     * @param _chartName Chart包的名称
                     * 
                     */
                    void SetChartName(const std::string& _chartName);

                    /**
                     * 判断参数 ChartName 是否已赋值
                     * @return ChartName 是否已赋值
                     * 
                     */
                    bool ChartNameHasBeenSet() const;

                    /**
                     * 获取Chart包的版本
                     * @return ChartVersion Chart包的版本
                     * 
                     */
                    std::string GetChartVersion() const;

                    /**
                     * 设置Chart包的版本
                     * @param _chartVersion Chart包的版本
                     * 
                     */
                    void SetChartVersion(const std::string& _chartVersion);

                    /**
                     * 判断参数 ChartVersion 是否已赋值
                     * @return ChartVersion 是否已赋值
                     * 
                     */
                    bool ChartVersionHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * Chart包的名称
                     */
                    std::string m_chartName;
                    bool m_chartNameHasBeenSet;

                    /**
                     * Chart包的版本
                     */
                    std::string m_chartVersion;
                    bool m_chartVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBECHARTDOWNLOADINFOREQUEST_H_
