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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECUSTOMFUNCTIONVERSIONLISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECUSTOMFUNCTIONVERSIONLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeCustomFunctionVersionList请求参数结构体
                */
                class DescribeCustomFunctionVersionListRequest : public AbstractModel
                {
                public:
                    DescribeCustomFunctionVersionListRequest();
                    ~DescribeCustomFunctionVersionListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取函数唯一标识
                     * @return FunctionId 函数唯一标识
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置函数唯一标识
                     * @param _functionId 函数唯一标识
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取集群实例引擎 ID
                     * @return ClusterIdentifier 集群实例引擎 ID
                     * 
                     */
                    std::string GetClusterIdentifier() const;

                    /**
                     * 设置集群实例引擎 ID
                     * @param _clusterIdentifier 集群实例引擎 ID
                     * 
                     */
                    void SetClusterIdentifier(const std::string& _clusterIdentifier);

                    /**
                     * 判断参数 ClusterIdentifier 是否已赋值
                     * @return ClusterIdentifier 是否已赋值
                     * 
                     */
                    bool ClusterIdentifierHasBeenSet() const;

                private:

                    /**
                     * 函数唯一标识
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * 集群实例引擎 ID
                     */
                    std::string m_clusterIdentifier;
                    bool m_clusterIdentifierHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECUSTOMFUNCTIONVERSIONLISTREQUEST_H_
