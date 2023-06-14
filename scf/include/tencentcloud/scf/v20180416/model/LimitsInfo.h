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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LIMITSINFO_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LIMITSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/NamespaceLimit.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 限制信息
                */
                class LimitsInfo : public AbstractModel
                {
                public:
                    LimitsInfo();
                    ~LimitsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间个数限制
                     * @return NamespacesCount 命名空间个数限制
                     * 
                     */
                    int64_t GetNamespacesCount() const;

                    /**
                     * 设置命名空间个数限制
                     * @param _namespacesCount 命名空间个数限制
                     * 
                     */
                    void SetNamespacesCount(const int64_t& _namespacesCount);

                    /**
                     * 判断参数 NamespacesCount 是否已赋值
                     * @return NamespacesCount 是否已赋值
                     * 
                     */
                    bool NamespacesCountHasBeenSet() const;

                    /**
                     * 获取命名空间限制信息
                     * @return Namespace 命名空间限制信息
                     * 
                     */
                    std::vector<NamespaceLimit> GetNamespace() const;

                    /**
                     * 设置命名空间限制信息
                     * @param _namespace 命名空间限制信息
                     * 
                     */
                    void SetNamespace(const std::vector<NamespaceLimit>& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                private:

                    /**
                     * 命名空间个数限制
                     */
                    int64_t m_namespacesCount;
                    bool m_namespacesCountHasBeenSet;

                    /**
                     * 命名空间限制信息
                     */
                    std::vector<NamespaceLimit> m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LIMITSINFO_H_
