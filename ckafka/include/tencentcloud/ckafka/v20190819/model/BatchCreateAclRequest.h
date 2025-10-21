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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHCREATEACLREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHCREATEACLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/AclRuleInfo.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * BatchCreateAcl请求参数结构体
                */
                class BatchCreateAclRequest : public AbstractModel
                {
                public:
                    BatchCreateAclRequest();
                    ~BatchCreateAclRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ckafka集群实例Id，可通过[DescribeInstances](https://cloud.tencent.com/document/product/597/40835)接口获取
                     * @return InstanceId ckafka集群实例Id，可通过[DescribeInstances](https://cloud.tencent.com/document/product/597/40835)接口获取
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka集群实例Id，可通过[DescribeInstances](https://cloud.tencent.com/document/product/597/40835)接口获取
                     * @param _instanceId ckafka集群实例Id，可通过[DescribeInstances](https://cloud.tencent.com/document/product/597/40835)接口获取
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
                     * 获取Acl资源类型，(2:TOPIC）
                     * @return ResourceType Acl资源类型，(2:TOPIC）
                     * 
                     */
                    int64_t GetResourceType() const;

                    /**
                     * 设置Acl资源类型，(2:TOPIC）
                     * @param _resourceType Acl资源类型，(2:TOPIC）
                     * 
                     */
                    void SetResourceType(const int64_t& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取资源列表数组，可通过[DescribeTopic](https://cloud.tencent.com/document/product/597/40847)接口获取。
                     * @return ResourceNames 资源列表数组，可通过[DescribeTopic](https://cloud.tencent.com/document/product/597/40847)接口获取。
                     * 
                     */
                    std::vector<std::string> GetResourceNames() const;

                    /**
                     * 设置资源列表数组，可通过[DescribeTopic](https://cloud.tencent.com/document/product/597/40847)接口获取。
                     * @param _resourceNames 资源列表数组，可通过[DescribeTopic](https://cloud.tencent.com/document/product/597/40847)接口获取。
                     * 
                     */
                    void SetResourceNames(const std::vector<std::string>& _resourceNames);

                    /**
                     * 判断参数 ResourceNames 是否已赋值
                     * @return ResourceNames 是否已赋值
                     * 
                     */
                    bool ResourceNamesHasBeenSet() const;

                    /**
                     * 获取设置的ACL规则列表，可通过[DescribeAclRule](https://cloud.tencent.com/document/product/597/89217)接口获取。
                     * @return RuleList 设置的ACL规则列表，可通过[DescribeAclRule](https://cloud.tencent.com/document/product/597/89217)接口获取。
                     * 
                     */
                    std::vector<AclRuleInfo> GetRuleList() const;

                    /**
                     * 设置设置的ACL规则列表，可通过[DescribeAclRule](https://cloud.tencent.com/document/product/597/89217)接口获取。
                     * @param _ruleList 设置的ACL规则列表，可通过[DescribeAclRule](https://cloud.tencent.com/document/product/597/89217)接口获取。
                     * 
                     */
                    void SetRuleList(const std::vector<AclRuleInfo>& _ruleList);

                    /**
                     * 判断参数 RuleList 是否已赋值
                     * @return RuleList 是否已赋值
                     * 
                     */
                    bool RuleListHasBeenSet() const;

                private:

                    /**
                     * ckafka集群实例Id，可通过[DescribeInstances](https://cloud.tencent.com/document/product/597/40835)接口获取
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Acl资源类型，(2:TOPIC）
                     */
                    int64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源列表数组，可通过[DescribeTopic](https://cloud.tencent.com/document/product/597/40847)接口获取。
                     */
                    std::vector<std::string> m_resourceNames;
                    bool m_resourceNamesHasBeenSet;

                    /**
                     * 设置的ACL规则列表，可通过[DescribeAclRule](https://cloud.tencent.com/document/product/597/89217)接口获取。
                     */
                    std::vector<AclRuleInfo> m_ruleList;
                    bool m_ruleListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHCREATEACLREQUEST_H_
