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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_EXCEPTIONBUCKET_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_EXCEPTIONBUCKET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 异常维度同批计数桶；IncludedInTotal 表示计入父行总数，ParentKey 表示包含关系。
                */
                class ExceptionBucket : public AbstractModel
                {
                public:
                    ExceptionBucket();
                    ~ExceptionBucket() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>固定目录分类 key，与请求平台、CategoryKeys 或 EventTypes 派生目录一致。</p>
                     * @return Key <p>固定目录分类 key，与请求平台、CategoryKeys 或 EventTypes 派生目录一致。</p>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>固定目录分类 key，与请求平台、CategoryKeys 或 EventTypes 派生目录一致。</p>
                     * @param _key <p>固定目录分类 key，与请求平台、CategoryKeys 或 EventTypes 派生目录一致。</p>
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取<p>精确事件行数，0至9007199254740991的整数，0必须保留。</p>
                     * @return Count <p>精确事件行数，0至9007199254740991的整数，0必须保留。</p>
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置<p>精确事件行数，0至9007199254740991的整数，0必须保留。</p>
                     * @param _count <p>精确事件行数，0至9007199254740991的整数，0必须保留。</p>
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取<p>是否为计入 TotalCount 的互斥主项。包含项为false，不重复计总。</p>
                     * @return IncludedInTotal <p>是否为计入 TotalCount 的互斥主项。包含项为false，不重复计总。</p>
                     * 
                     */
                    bool GetIncludedInTotal() const;

                    /**
                     * 设置<p>是否为计入 TotalCount 的互斥主项。包含项为false，不重复计总。</p>
                     * @param _includedInTotal <p>是否为计入 TotalCount 的互斥主项。包含项为false，不重复计总。</p>
                     * 
                     */
                    void SetIncludedInTotal(const bool& _includedInTotal);

                    /**
                     * 判断参数 IncludedInTotal 是否已赋值
                     * @return IncludedInTotal 是否已赋值
                     * 
                     */
                    bool IncludedInTotalHasBeenSet() const;

                    /**
                     * 获取<p>包含项所属主项的 Key；主项不返回该字段。</p>
                     * @return ParentKey <p>包含项所属主项的 Key；主项不返回该字段。</p>
                     * 
                     */
                    std::string GetParentKey() const;

                    /**
                     * 设置<p>包含项所属主项的 Key；主项不返回该字段。</p>
                     * @param _parentKey <p>包含项所属主项的 Key；主项不返回该字段。</p>
                     * 
                     */
                    void SetParentKey(const std::string& _parentKey);

                    /**
                     * 判断参数 ParentKey 是否已赋值
                     * @return ParentKey 是否已赋值
                     * 
                     */
                    bool ParentKeyHasBeenSet() const;

                private:

                    /**
                     * <p>固定目录分类 key，与请求平台、CategoryKeys 或 EventTypes 派生目录一致。</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>精确事件行数，0至9007199254740991的整数，0必须保留。</p>
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>是否为计入 TotalCount 的互斥主项。包含项为false，不重复计总。</p>
                     */
                    bool m_includedInTotal;
                    bool m_includedInTotalHasBeenSet;

                    /**
                     * <p>包含项所属主项的 Key；主项不返回该字段。</p>
                     */
                    std::string m_parentKey;
                    bool m_parentKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_EXCEPTIONBUCKET_H_
