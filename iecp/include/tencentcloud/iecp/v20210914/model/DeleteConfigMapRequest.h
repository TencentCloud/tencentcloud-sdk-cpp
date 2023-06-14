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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DELETECONFIGMAPREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DELETECONFIGMAPREQUEST_H_

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
                * DeleteConfigMap请求参数结构体
                */
                class DeleteConfigMapRequest : public AbstractModel
                {
                public:
                    DeleteConfigMapRequest();
                    ~DeleteConfigMapRequest() = default;
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
                     * 获取ConfigMap名
                     * @return ConfigMapName ConfigMap名
                     * 
                     */
                    std::string GetConfigMapName() const;

                    /**
                     * 设置ConfigMap名
                     * @param _configMapName ConfigMap名
                     * 
                     */
                    void SetConfigMapName(const std::string& _configMapName);

                    /**
                     * 判断参数 ConfigMapName 是否已赋值
                     * @return ConfigMapName 是否已赋值
                     * 
                     */
                    bool ConfigMapNameHasBeenSet() const;

                    /**
                     * 获取ConfigMap命名空间，默认：default
                     * @return ConfigMapNamespace ConfigMap命名空间，默认：default
                     * 
                     */
                    std::string GetConfigMapNamespace() const;

                    /**
                     * 设置ConfigMap命名空间，默认：default
                     * @param _configMapNamespace ConfigMap命名空间，默认：default
                     * 
                     */
                    void SetConfigMapNamespace(const std::string& _configMapNamespace);

                    /**
                     * 判断参数 ConfigMapNamespace 是否已赋值
                     * @return ConfigMapNamespace 是否已赋值
                     * 
                     */
                    bool ConfigMapNamespaceHasBeenSet() const;

                private:

                    /**
                     * 单元ID
                     */
                    uint64_t m_edgeUnitID;
                    bool m_edgeUnitIDHasBeenSet;

                    /**
                     * ConfigMap名
                     */
                    std::string m_configMapName;
                    bool m_configMapNameHasBeenSet;

                    /**
                     * ConfigMap命名空间，默认：default
                     */
                    std::string m_configMapNamespace;
                    bool m_configMapNamespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DELETECONFIGMAPREQUEST_H_
