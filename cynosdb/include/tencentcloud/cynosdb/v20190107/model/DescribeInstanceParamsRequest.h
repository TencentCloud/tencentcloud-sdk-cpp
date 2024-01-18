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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCEPARAMSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCEPARAMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeInstanceParams请求参数结构体
                */
                class DescribeInstanceParamsRequest : public AbstractModel
                {
                public:
                    DescribeInstanceParamsRequest();
                    ~DescribeInstanceParamsRequest() = default;
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
                     * 获取实例ID，支持批量查询
                     * @return InstanceIds 实例ID，支持批量查询
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例ID，支持批量查询
                     * @param _instanceIds 实例ID，支持批量查询
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取参数名搜索条件，支持模糊匹配
                     * @return ParamKeyword 参数名搜索条件，支持模糊匹配
                     * 
                     */
                    std::string GetParamKeyword() const;

                    /**
                     * 设置参数名搜索条件，支持模糊匹配
                     * @param _paramKeyword 参数名搜索条件，支持模糊匹配
                     * 
                     */
                    void SetParamKeyword(const std::string& _paramKeyword);

                    /**
                     * 判断参数 ParamKeyword 是否已赋值
                     * @return ParamKeyword 是否已赋值
                     * 
                     */
                    bool ParamKeywordHasBeenSet() const;

                    /**
                     * 获取是否为全局参数
                     * @return IsGlobal 是否为全局参数
                     * 
                     */
                    std::string GetIsGlobal() const;

                    /**
                     * 设置是否为全局参数
                     * @param _isGlobal 是否为全局参数
                     * 
                     */
                    void SetIsGlobal(const std::string& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 实例ID，支持批量查询
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 参数名搜索条件，支持模糊匹配
                     */
                    std::string m_paramKeyword;
                    bool m_paramKeywordHasBeenSet;

                    /**
                     * 是否为全局参数
                     */
                    std::string m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCEPARAMSREQUEST_H_
