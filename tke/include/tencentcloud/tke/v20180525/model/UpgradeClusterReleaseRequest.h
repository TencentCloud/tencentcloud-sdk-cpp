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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_UPGRADECLUSTERRELEASEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_UPGRADECLUSTERRELEASEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ReleaseValues.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * UpgradeClusterRelease请求参数结构体
                */
                class UpgradeClusterReleaseRequest : public AbstractModel
                {
                public:
                    UpgradeClusterReleaseRequest();
                    ~UpgradeClusterReleaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取自定义的应用名称
                     * @return Name 自定义的应用名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置自定义的应用名称
                     * @param _name 自定义的应用名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取应用命名空间
                     * @return Namespace 应用命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置应用命名空间
                     * @param _namespace 应用命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取制品名称或从第三方repo 安装chart时，制品压缩包下载地址, 不支持重定向类型chart 地址，结尾为*.tgz
                     * @return Chart 制品名称或从第三方repo 安装chart时，制品压缩包下载地址, 不支持重定向类型chart 地址，结尾为*.tgz
                     * 
                     */
                    std::string GetChart() const;

                    /**
                     * 设置制品名称或从第三方repo 安装chart时，制品压缩包下载地址, 不支持重定向类型chart 地址，结尾为*.tgz
                     * @param _chart 制品名称或从第三方repo 安装chart时，制品压缩包下载地址, 不支持重定向类型chart 地址，结尾为*.tgz
                     * 
                     */
                    void SetChart(const std::string& _chart);

                    /**
                     * 判断参数 Chart 是否已赋值
                     * @return Chart 是否已赋值
                     * 
                     */
                    bool ChartHasBeenSet() const;

                    /**
                     * 获取自定义参数，覆盖chart 中values.yaml 中的参数
                     * @return Values 自定义参数，覆盖chart 中values.yaml 中的参数
                     * 
                     */
                    ReleaseValues GetValues() const;

                    /**
                     * 设置自定义参数，覆盖chart 中values.yaml 中的参数
                     * @param _values 自定义参数，覆盖chart 中values.yaml 中的参数
                     * 
                     */
                    void SetValues(const ReleaseValues& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取制品来源，范围：tke-market 或 other 默认值：tke-market，示例值：tke-market
                     * @return ChartFrom 制品来源，范围：tke-market 或 other 默认值：tke-market，示例值：tke-market
                     * 
                     */
                    std::string GetChartFrom() const;

                    /**
                     * 设置制品来源，范围：tke-market 或 other 默认值：tke-market，示例值：tke-market
                     * @param _chartFrom 制品来源，范围：tke-market 或 other 默认值：tke-market，示例值：tke-market
                     * 
                     */
                    void SetChartFrom(const std::string& _chartFrom);

                    /**
                     * 判断参数 ChartFrom 是否已赋值
                     * @return ChartFrom 是否已赋值
                     * 
                     */
                    bool ChartFromHasBeenSet() const;

                    /**
                     * 获取制品版本( 从第三方安装时，不传这个参数）
                     * @return ChartVersion 制品版本( 从第三方安装时，不传这个参数）
                     * 
                     */
                    std::string GetChartVersion() const;

                    /**
                     * 设置制品版本( 从第三方安装时，不传这个参数）
                     * @param _chartVersion 制品版本( 从第三方安装时，不传这个参数）
                     * 
                     */
                    void SetChartVersion(const std::string& _chartVersion);

                    /**
                     * 判断参数 ChartVersion 是否已赋值
                     * @return ChartVersion 是否已赋值
                     * 
                     */
                    bool ChartVersionHasBeenSet() const;

                    /**
                     * 获取制品仓库URL地址
                     * @return ChartRepoURL 制品仓库URL地址
                     * 
                     */
                    std::string GetChartRepoURL() const;

                    /**
                     * 设置制品仓库URL地址
                     * @param _chartRepoURL 制品仓库URL地址
                     * 
                     */
                    void SetChartRepoURL(const std::string& _chartRepoURL);

                    /**
                     * 判断参数 ChartRepoURL 是否已赋值
                     * @return ChartRepoURL 是否已赋值
                     * 
                     */
                    bool ChartRepoURLHasBeenSet() const;

                    /**
                     * 获取制品访问用户名
                     * @return Username 制品访问用户名
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置制品访问用户名
                     * @param _username 制品访问用户名
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取制品访问密码
                     * @return Password 制品访问密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置制品访问密码
                     * @param _password 制品访问密码
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取制品命名空间，ChartFrom为tke-market时ChartNamespace不为空，值为DescribeProducts接口反馈的Namespace
                     * @return ChartNamespace 制品命名空间，ChartFrom为tke-market时ChartNamespace不为空，值为DescribeProducts接口反馈的Namespace
                     * 
                     */
                    std::string GetChartNamespace() const;

                    /**
                     * 设置制品命名空间，ChartFrom为tke-market时ChartNamespace不为空，值为DescribeProducts接口反馈的Namespace
                     * @param _chartNamespace 制品命名空间，ChartFrom为tke-market时ChartNamespace不为空，值为DescribeProducts接口反馈的Namespace
                     * 
                     */
                    void SetChartNamespace(const std::string& _chartNamespace);

                    /**
                     * 判断参数 ChartNamespace 是否已赋值
                     * @return ChartNamespace 是否已赋值
                     * 
                     */
                    bool ChartNamespaceHasBeenSet() const;

                    /**
                     * 获取集群类型，支持传 tke, eks, tkeedge, external(注册集群）
                     * @return ClusterType 集群类型，支持传 tke, eks, tkeedge, external(注册集群）
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型，支持传 tke, eks, tkeedge, external(注册集群）
                     * @param _clusterType 集群类型，支持传 tke, eks, tkeedge, external(注册集群）
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 自定义的应用名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 应用命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 制品名称或从第三方repo 安装chart时，制品压缩包下载地址, 不支持重定向类型chart 地址，结尾为*.tgz
                     */
                    std::string m_chart;
                    bool m_chartHasBeenSet;

                    /**
                     * 自定义参数，覆盖chart 中values.yaml 中的参数
                     */
                    ReleaseValues m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 制品来源，范围：tke-market 或 other 默认值：tke-market，示例值：tke-market
                     */
                    std::string m_chartFrom;
                    bool m_chartFromHasBeenSet;

                    /**
                     * 制品版本( 从第三方安装时，不传这个参数）
                     */
                    std::string m_chartVersion;
                    bool m_chartVersionHasBeenSet;

                    /**
                     * 制品仓库URL地址
                     */
                    std::string m_chartRepoURL;
                    bool m_chartRepoURLHasBeenSet;

                    /**
                     * 制品访问用户名
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 制品访问密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 制品命名空间，ChartFrom为tke-market时ChartNamespace不为空，值为DescribeProducts接口反馈的Namespace
                     */
                    std::string m_chartNamespace;
                    bool m_chartNamespaceHasBeenSet;

                    /**
                     * 集群类型，支持传 tke, eks, tkeedge, external(注册集群）
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_UPGRADECLUSTERRELEASEREQUEST_H_
