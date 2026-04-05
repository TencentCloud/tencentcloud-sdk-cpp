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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVLISTREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVLISTREQUEST_H_

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
                * EdgeKVList请求参数结构体
                */
                class EdgeKVListRequest : public AbstractModel
                {
                public:
                    EdgeKVListRequest();
                    ~EdgeKVListRequest() = default;
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
                     * 获取命名空间名称。
                     * @return Namespace 命名空间名称。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间名称。
                     * @param _namespace 命名空间名称。
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
                     * 获取键名前缀过滤。只返回以指定前缀开头的键名，长度为 1-512 个字符。不填写表示返回所有键名；不允许传入空字符串。
                     * @return Prefix 键名前缀过滤。只返回以指定前缀开头的键名，长度为 1-512 个字符。不填写表示返回所有键名；不允许传入空字符串。
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置键名前缀过滤。只返回以指定前缀开头的键名，长度为 1-512 个字符。不填写表示返回所有键名；不允许传入空字符串。
                     * @param _prefix 键名前缀过滤。只返回以指定前缀开头的键名，长度为 1-512 个字符。不填写表示返回所有键名；不允许传入空字符串。
                     * 
                     */
                    void SetPrefix(const std::string& _prefix);

                    /**
                     * 判断参数 Prefix 是否已赋值
                     * @return Prefix 是否已赋值
                     * 
                     */
                    bool PrefixHasBeenSet() const;

                    /**
                     * 获取游标位置。标识当前查询的起始位置，用于遍历大量数据。首次查询时不填写，从头开始遍历；后续查询时填写上一次返回的 Cursor 值，从该位置继续向后遍历。

                     * @return Cursor 游标位置。标识当前查询的起始位置，用于遍历大量数据。首次查询时不填写，从头开始遍历；后续查询时填写上一次返回的 Cursor 值，从该位置继续向后遍历。

                     * 
                     */
                    std::string GetCursor() const;

                    /**
                     * 设置游标位置。标识当前查询的起始位置，用于遍历大量数据。首次查询时不填写，从头开始遍历；后续查询时填写上一次返回的 Cursor 值，从该位置继续向后遍历。

                     * @param _cursor 游标位置。标识当前查询的起始位置，用于遍历大量数据。首次查询时不填写，从头开始遍历；后续查询时填写上一次返回的 Cursor 值，从该位置继续向后遍历。

                     * 
                     */
                    void SetCursor(const std::string& _cursor);

                    /**
                     * 判断参数 Cursor 是否已赋值
                     * @return Cursor 是否已赋值
                     * 
                     */
                    bool CursorHasBeenSet() const;

                    /**
                     * 获取返回的键名数量。默认值：20，最大值：1000。
                     * @return Limit 返回的键名数量。默认值：20，最大值：1000。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回的键名数量。默认值：20，最大值：1000。
                     * @param _limit 返回的键名数量。默认值：20，最大值：1000。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 命名空间名称。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 键名前缀过滤。只返回以指定前缀开头的键名，长度为 1-512 个字符。不填写表示返回所有键名；不允许传入空字符串。
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * 游标位置。标识当前查询的起始位置，用于遍历大量数据。首次查询时不填写，从头开始遍历；后续查询时填写上一次返回的 Cursor 值，从该位置继续向后遍历。

                     */
                    std::string m_cursor;
                    bool m_cursorHasBeenSet;

                    /**
                     * 返回的键名数量。默认值：20，最大值：1000。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EDGEKVLISTREQUEST_H_
