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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBERESOURCESBYTAGREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBERESOURCESBYTAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeResourcesByTag请求参数结构体
                */
                class DescribeResourcesByTagRequest : public AbstractModel
                {
                public:
                    DescribeResourcesByTagRequest();
                    ~DescribeResourcesByTagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取标签键。
                     * @return TagKey 标签键。
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置标签键。
                     * @param _tagKey 标签键。
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取标签值。
                     * @return TagValue 标签值。
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置标签值。
                     * @param _tagValue 标签值。
                     * 
                     */
                    void SetTagValue(const std::string& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     * 
                     */
                    bool TagValueHasBeenSet() const;

                    /**
                     * 获取资源类型，其中：
Proxy表示通道；
ProxyGroup表示通道组；
RealServer表示源站。
不指定该字段则查询该标签下所有资源。
                     * @return ResourceType 资源类型，其中：
Proxy表示通道；
ProxyGroup表示通道组；
RealServer表示源站。
不指定该字段则查询该标签下所有资源。
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型，其中：
Proxy表示通道；
ProxyGroup表示通道组；
RealServer表示源站。
不指定该字段则查询该标签下所有资源。
                     * @param _resourceType 资源类型，其中：
Proxy表示通道；
ProxyGroup表示通道组；
RealServer表示源站。
不指定该字段则查询该标签下所有资源。
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                private:

                    /**
                     * 标签键。
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * 标签值。
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * 资源类型，其中：
Proxy表示通道；
ProxyGroup表示通道组；
RealServer表示源站。
不指定该字段则查询该标签下所有资源。
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBERESOURCESBYTAGREQUEST_H_
