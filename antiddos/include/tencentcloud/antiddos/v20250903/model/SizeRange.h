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

#ifndef TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_SIZERANGE_H_
#define TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_SIZERANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20250903
        {
            namespace Model
            {
                /**
                * 数值范围。
                */
                class SizeRange : public AbstractModel
                {
                public:
                    SizeRange();
                    ~SizeRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>最小值。</p><p>与 <code>Max</code> 相等时表示单个值。</p>
                     * @return Min <p>最小值。</p><p>与 <code>Max</code> 相等时表示单个值。</p>
                     * 
                     */
                    uint64_t GetMin() const;

                    /**
                     * 设置<p>最小值。</p><p>与 <code>Max</code> 相等时表示单个值。</p>
                     * @param _min <p>最小值。</p><p>与 <code>Max</code> 相等时表示单个值。</p>
                     * 
                     */
                    void SetMin(const uint64_t& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取<p>最大值。</p>
                     * @return Max <p>最大值。</p>
                     * 
                     */
                    uint64_t GetMax() const;

                    /**
                     * 设置<p>最大值。</p>
                     * @param _max <p>最大值。</p>
                     * 
                     */
                    void SetMax(const uint64_t& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                private:

                    /**
                     * <p>最小值。</p><p>与 <code>Max</code> 相等时表示单个值。</p>
                     */
                    uint64_t m_min;
                    bool m_minHasBeenSet;

                    /**
                     * <p>最大值。</p>
                     */
                    uint64_t m_max;
                    bool m_maxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_SIZERANGE_H_
