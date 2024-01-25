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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKCUSTOMFUNCTIONPREMISEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKCUSTOMFUNCTIONPREMISEREQUEST_H_

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
                * CheckCustomFunctionPremise请求参数结构体
                */
                class CheckCustomFunctionPremiseRequest : public AbstractModel
                {
                public:
                    CheckCustomFunctionPremiseRequest();
                    ~CheckCustomFunctionPremiseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群实例 ID
                     * @return ClusterIdentifier 集群实例 ID
                     * 
                     */
                    std::string GetClusterIdentifier() const;

                    /**
                     * 设置集群实例 ID
                     * @param _clusterIdentifier 集群实例 ID
                     * 
                     */
                    void SetClusterIdentifier(const std::string& _clusterIdentifier);

                    /**
                     * 判断参数 ClusterIdentifier 是否已赋值
                     * @return ClusterIdentifier 是否已赋值
                     * 
                     */
                    bool ClusterIdentifierHasBeenSet() const;

                    /**
                     * 获取函数类型
                     * @return Type 函数类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置函数类型
                     * @param _type 函数类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 集群实例 ID
                     */
                    std::string m_clusterIdentifier;
                    bool m_clusterIdentifierHasBeenSet;

                    /**
                     * 函数类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKCUSTOMFUNCTIONPREMISEREQUEST_H_
