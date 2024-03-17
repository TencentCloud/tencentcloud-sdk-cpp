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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECONFIGFILESBYGROUPREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECONFIGFILESBYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeConfigFilesByGroup请求参数结构体
                */
                class DescribeConfigFilesByGroupRequest : public AbstractModel
                {
                public:
                    DescribeConfigFilesByGroupRequest();
                    ~DescribeConfigFilesByGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TSE实例id
                     * @return InstanceId TSE实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置TSE实例id
                     * @param _instanceId TSE实例id
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
                     * 获取命名空间名
                     * @return Namespace 命名空间名
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间名
                     * @param _namespace 命名空间名
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
                     * 获取组名
                     * @return Group 组名
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置组名
                     * @param _group 组名
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为100。	
                     * @return Limit 返回数量，默认为20，最大值为100。	
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。	
                     * @param _limit 返回数量，默认为20，最大值为100。	
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。	
                     * @return Offset 偏移量，默认为0。	
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。	
                     * @param _offset 偏移量，默认为0。	
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * TSE实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 命名空间名
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 组名
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。	
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。	
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECONFIGFILESBYGROUPREQUEST_H_
