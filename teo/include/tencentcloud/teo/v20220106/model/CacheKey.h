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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CACHEKEY_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CACHEKEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/QueryString.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 缓存键配置
                */
                class CacheKey : public AbstractModel
                {
                public:
                    CacheKey();
                    ~CacheKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启全路径缓存
on：开启全路径缓存（即关闭参数忽略）
off：关闭全路径缓存（即开启参数忽略）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FullUrlCache 是否开启全路径缓存
on：开启全路径缓存（即关闭参数忽略）
off：关闭全路径缓存（即开启参数忽略）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFullUrlCache() const;

                    /**
                     * 设置是否开启全路径缓存
on：开启全路径缓存（即关闭参数忽略）
off：关闭全路径缓存（即开启参数忽略）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FullUrlCache 是否开启全路径缓存
on：开启全路径缓存（即关闭参数忽略）
off：关闭全路径缓存（即开启参数忽略）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFullUrlCache(const std::string& _fullUrlCache);

                    /**
                     * 判断参数 FullUrlCache 是否已赋值
                     * @return FullUrlCache 是否已赋值
                     */
                    bool FullUrlCacheHasBeenSet() const;

                    /**
                     * 获取是否忽略大小写缓存
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IgnoreCase 是否忽略大小写缓存
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIgnoreCase() const;

                    /**
                     * 设置是否忽略大小写缓存
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IgnoreCase 是否忽略大小写缓存
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIgnoreCase(const std::string& _ignoreCase);

                    /**
                     * 判断参数 IgnoreCase 是否已赋值
                     * @return IgnoreCase 是否已赋值
                     */
                    bool IgnoreCaseHasBeenSet() const;

                    /**
                     * 获取CacheKey中包含请求参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueryString CacheKey中包含请求参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QueryString GetQueryString() const;

                    /**
                     * 设置CacheKey中包含请求参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param QueryString CacheKey中包含请求参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetQueryString(const QueryString& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     */
                    bool QueryStringHasBeenSet() const;

                private:

                    /**
                     * 是否开启全路径缓存
on：开启全路径缓存（即关闭参数忽略）
off：关闭全路径缓存（即开启参数忽略）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fullUrlCache;
                    bool m_fullUrlCacheHasBeenSet;

                    /**
                     * 是否忽略大小写缓存
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ignoreCase;
                    bool m_ignoreCaseHasBeenSet;

                    /**
                     * CacheKey中包含请求参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QueryString m_queryString;
                    bool m_queryStringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CACHEKEY_H_
