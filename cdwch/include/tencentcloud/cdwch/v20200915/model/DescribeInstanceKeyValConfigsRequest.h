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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEINSTANCEKEYVALCONFIGSREQUEST_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEINSTANCEKEYVALCONFIGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * DescribeInstanceKeyValConfigs请求参数结构体
                */
                class DescribeInstanceKeyValConfigsRequest : public AbstractModel
                {
                public:
                    DescribeInstanceKeyValConfigsRequest();
                    ~DescribeInstanceKeyValConfigsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群实例ID
                     * @return InstanceId 集群实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群实例ID
                     * @param _instanceId 集群实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取搜索的配置项名称
                     * @return SearchConfigName 搜索的配置项名称
                     * 
                     */
                    std::string GetSearchConfigName() const;

                    /**
                     * 设置搜索的配置项名称
                     * @param _searchConfigName 搜索的配置项名称
                     * 
                     */
                    void SetSearchConfigName(const std::string& _searchConfigName);

                    /**
                     * 判断参数 SearchConfigName 是否已赋值
                     * @return SearchConfigName 是否已赋值
                     * 
                     */
                    bool SearchConfigNameHasBeenSet() const;

                private:

                    /**
                     * 集群实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 搜索的配置项名称
                     */
                    std::string m_searchConfigName;
                    bool m_searchConfigNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEINSTANCEKEYVALCONFIGSREQUEST_H_
