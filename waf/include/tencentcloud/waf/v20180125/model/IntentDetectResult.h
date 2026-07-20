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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_INTENTDETECTRESULT_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_INTENTDETECTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 大模型安全意图检测响应数据
                */
                class IntentDetectResult : public AbstractModel
                {
                public:
                    IntentDetectResult();
                    ~IntentDetectResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否恶意意图</p><p>枚举值：</p><ul><li>1： 恶意</li><li>0： 正常</li></ul>
                     * @return IsUnSafe <p>是否恶意意图</p><p>枚举值：</p><ul><li>1： 恶意</li><li>0： 正常</li></ul>
                     * 
                     */
                    uint64_t GetIsUnSafe() const;

                    /**
                     * 设置<p>是否恶意意图</p><p>枚举值：</p><ul><li>1： 恶意</li><li>0： 正常</li></ul>
                     * @param _isUnSafe <p>是否恶意意图</p><p>枚举值：</p><ul><li>1： 恶意</li><li>0： 正常</li></ul>
                     * 
                     */
                    void SetIsUnSafe(const uint64_t& _isUnSafe);

                    /**
                     * 判断参数 IsUnSafe 是否已赋值
                     * @return IsUnSafe 是否已赋值
                     * 
                     */
                    bool IsUnSafeHasBeenSet() const;

                    /**
                     * 获取<p>检出分类</p>
                     * @return Category <p>检出分类</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>检出分类</p>
                     * @param _category <p>检出分类</p>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                private:

                    /**
                     * <p>是否恶意意图</p><p>枚举值：</p><ul><li>1： 恶意</li><li>0： 正常</li></ul>
                     */
                    uint64_t m_isUnSafe;
                    bool m_isUnSafeHasBeenSet;

                    /**
                     * <p>检出分类</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_INTENTDETECTRESULT_H_
