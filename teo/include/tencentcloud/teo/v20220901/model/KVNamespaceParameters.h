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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_KVNAMESPACEPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_KVNAMESPACEPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 边缘函数绑定 KV 命名空间时所需的详细配置参数，用于指定绑定的命名空间来源。通过此配置，边缘函数可操作指定站点下的 KV 命名空间。
                */
                class KVNamespaceParameters : public AbstractModel
                {
                public:
                    KVNamespaceParameters();
                    ~KVNamespaceParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取KV 命名空间所属的站点 ID。指定要绑定的 KV 命名空间所在的站点，支持跨站点绑定。
                     * @return ZoneId KV 命名空间所属的站点 ID。指定要绑定的 KV 命名空间所在的站点，支持跨站点绑定。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置KV 命名空间所属的站点 ID。指定要绑定的 KV 命名空间所在的站点，支持跨站点绑定。
                     * @param _zoneId KV 命名空间所属的站点 ID。指定要绑定的 KV 命名空间所在的站点，支持跨站点绑定。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取KV 命名空间名称。指定要绑定的具体命名空间，可通过 DescribeKVNamespace 接口获取站点下的命名空间列表。
                     * @return Namespace KV 命名空间名称。指定要绑定的具体命名空间，可通过 DescribeKVNamespace 接口获取站点下的命名空间列表。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置KV 命名空间名称。指定要绑定的具体命名空间，可通过 DescribeKVNamespace 接口获取站点下的命名空间列表。
                     * @param _namespace KV 命名空间名称。指定要绑定的具体命名空间，可通过 DescribeKVNamespace 接口获取站点下的命名空间列表。
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
                     * KV 命名空间所属的站点 ID。指定要绑定的 KV 命名空间所在的站点，支持跨站点绑定。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * KV 命名空间名称。指定要绑定的具体命名空间，可通过 DescribeKVNamespace 接口获取站点下的命名空间列表。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_KVNAMESPACEPARAMETERS_H_
