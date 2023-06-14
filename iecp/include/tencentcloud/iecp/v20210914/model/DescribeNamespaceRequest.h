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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBENAMESPACEREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBENAMESPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeNamespace请求参数结构体
                */
                class DescribeNamespaceRequest : public AbstractModel
                {
                public:
                    DescribeNamespaceRequest();
                    ~DescribeNamespaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取单元ID
                     * @return EdgeUnitID 单元ID
                     * 
                     */
                    uint64_t GetEdgeUnitID() const;

                    /**
                     * 设置单元ID
                     * @param _edgeUnitID 单元ID
                     * 
                     */
                    void SetEdgeUnitID(const uint64_t& _edgeUnitID);

                    /**
                     * 判断参数 EdgeUnitID 是否已赋值
                     * @return EdgeUnitID 是否已赋值
                     * 
                     */
                    bool EdgeUnitIDHasBeenSet() const;

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

                private:

                    /**
                     * 单元ID
                     */
                    uint64_t m_edgeUnitID;
                    bool m_edgeUnitIDHasBeenSet;

                    /**
                     * 命名空间名
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBENAMESPACEREQUEST_H_
