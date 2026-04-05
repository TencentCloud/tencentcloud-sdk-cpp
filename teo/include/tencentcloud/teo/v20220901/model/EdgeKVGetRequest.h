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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVGETREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVGETREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * EdgeKVGet请求参数结构体
                */
                class EdgeKVGetRequest : public AbstractModel
                {
                public:
                    EdgeKVGetRequest();
                    ~EdgeKVGetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
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
                     * 获取命名空间名称。可通过 DescribeEdgeKVNamespaces 接口获取站点下的命名空间列表。
                     * @return Namespace 命名空间名称。可通过 DescribeEdgeKVNamespaces 接口获取站点下的命名空间列表。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间名称。可通过 DescribeEdgeKVNamespaces 接口获取站点下的命名空间列表。
                     * @param _namespace 命名空间名称。可通过 DescribeEdgeKVNamespaces 接口获取站点下的命名空间列表。
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
                     * 获取键名列表。数组长度上限为 20。每个键名不能为空，长度为 1-512 个字符，允许的字符为字母、数字、中划线和下划线。查询单个键时传入包含一个元素的数组。
                     * @return Keys 键名列表。数组长度上限为 20。每个键名不能为空，长度为 1-512 个字符，允许的字符为字母、数字、中划线和下划线。查询单个键时传入包含一个元素的数组。
                     * 
                     */
                    std::vector<std::string> GetKeys() const;

                    /**
                     * 设置键名列表。数组长度上限为 20。每个键名不能为空，长度为 1-512 个字符，允许的字符为字母、数字、中划线和下划线。查询单个键时传入包含一个元素的数组。
                     * @param _keys 键名列表。数组长度上限为 20。每个键名不能为空，长度为 1-512 个字符，允许的字符为字母、数字、中划线和下划线。查询单个键时传入包含一个元素的数组。
                     * 
                     */
                    void SetKeys(const std::vector<std::string>& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 命名空间名称。可通过 DescribeEdgeKVNamespaces 接口获取站点下的命名空间列表。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 键名列表。数组长度上限为 20。每个键名不能为空，长度为 1-512 个字符，允许的字符为字母、数字、中划线和下划线。查询单个键时传入包含一个元素的数组。
                     */
                    std::vector<std::string> m_keys;
                    bool m_keysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVGETREQUEST_H_
