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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYNAMESPACEREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYNAMESPACEREQUEST_H_

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
                * ModifyNamespace请求参数结构体
                */
                class ModifyNamespaceRequest : public AbstractModel
                {
                public:
                    ModifyNamespaceRequest();
                    ~ModifyNamespaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取命名空间ID
                     * @return NamespaceId 命名空间ID
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间ID
                     * @param _namespaceId 命名空间ID
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
                     * 获取命名空间名称
                     * @return NamespaceName 命名空间名称
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置命名空间名称
                     * @param _namespaceName 命名空间名称
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取命名空间备注
                     * @return NamespaceDesc 命名空间备注
                     * 
                     */
                    std::string GetNamespaceDesc() const;

                    /**
                     * 设置命名空间备注
                     * @param _namespaceDesc 命名空间备注
                     * 
                     */
                    void SetNamespaceDesc(const std::string& _namespaceDesc);

                    /**
                     * 判断参数 NamespaceDesc 是否已赋值
                     * @return NamespaceDesc 是否已赋值
                     * 
                     */
                    bool NamespaceDescHasBeenSet() const;

                    /**
                     * 获取是否开启高可用
                     * @return IsHaEnable 是否开启高可用
                     * 
                     */
                    std::string GetIsHaEnable() const;

                    /**
                     * 设置是否开启高可用
                     * @param _isHaEnable 是否开启高可用
                     * 
                     */
                    void SetIsHaEnable(const std::string& _isHaEnable);

                    /**
                     * 判断参数 IsHaEnable 是否已赋值
                     * @return IsHaEnable 是否已赋值
                     * 
                     */
                    bool IsHaEnableHasBeenSet() const;

                private:

                    /**
                     * 命名空间ID
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 命名空间名称
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 命名空间备注
                     */
                    std::string m_namespaceDesc;
                    bool m_namespaceDescHasBeenSet;

                    /**
                     * 是否开启高可用
                     */
                    std::string m_isHaEnable;
                    bool m_isHaEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYNAMESPACEREQUEST_H_
