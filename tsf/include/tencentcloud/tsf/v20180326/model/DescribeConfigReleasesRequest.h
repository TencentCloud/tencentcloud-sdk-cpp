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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBECONFIGRELEASESREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBECONFIGRELEASESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeConfigReleases请求参数结构体
                */
                class DescribeConfigReleasesRequest : public AbstractModel
                {
                public:
                    DescribeConfigReleasesRequest();
                    ~DescribeConfigReleasesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置项名称，不传入时查询全量
                     * @return ConfigName 配置项名称，不传入时查询全量
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置配置项名称，不传入时查询全量
                     * @param _configName 配置项名称，不传入时查询全量
                     * 
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     * 
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取部署组ID，不传入时查询全量
                     * @return GroupId 部署组ID，不传入时查询全量
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID，不传入时查询全量
                     * @param _groupId 部署组ID，不传入时查询全量
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取命名空间ID，不传入时查询全量
                     * @return NamespaceId 命名空间ID，不传入时查询全量
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间ID，不传入时查询全量
                     * @param _namespaceId 命名空间ID，不传入时查询全量
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取集群ID，不传入时查询全量
                     * @return ClusterId 集群ID，不传入时查询全量
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID，不传入时查询全量
                     * @param _clusterId 集群ID，不传入时查询全量
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
                     * 获取每页条数
                     * @return Limit 每页条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页条数
                     * @param _limit 每页条数
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取配置ID，不传入时查询全量
                     * @return ConfigId 配置ID，不传入时查询全量
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置配置ID，不传入时查询全量
                     * @param _configId 配置ID，不传入时查询全量
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取应用ID，不传入时查询全量
                     * @return ApplicationId 应用ID，不传入时查询全量
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用ID，不传入时查询全量
                     * @param _applicationId 应用ID，不传入时查询全量
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                private:

                    /**
                     * 配置项名称，不传入时查询全量
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * 部署组ID，不传入时查询全量
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 命名空间ID，不传入时查询全量
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 集群ID，不传入时查询全量
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 每页条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 配置ID，不传入时查询全量
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 应用ID，不传入时查询全量
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBECONFIGRELEASESREQUEST_H_
