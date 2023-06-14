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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_VALIDATENAMESPACEEXISTPERSONALREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_VALIDATENAMESPACEEXISTPERSONALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * ValidateNamespaceExistPersonal请求参数结构体
                */
                class ValidateNamespaceExistPersonalRequest : public AbstractModel
                {
                public:
                    ValidateNamespaceExistPersonalRequest();
                    ~ValidateNamespaceExistPersonalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取命名空间名称
                     * @return Namespace 命名空间名称
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间名称
                     * @param _namespace 命名空间名称
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
                     * 命名空间名称
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_VALIDATENAMESPACEEXISTPERSONALREQUEST_H_
