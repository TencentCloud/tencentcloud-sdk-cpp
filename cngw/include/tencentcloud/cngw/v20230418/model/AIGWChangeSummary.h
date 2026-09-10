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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWCHANGESUMMARY_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWCHANGESUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 版本变更的兼容变更，破坏变更数
                */
                class AIGWChangeSummary : public AbstractModel
                {
                public:
                    AIGWChangeSummary();
                    ~AIGWChangeSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>破坏性变更数</p>
                     * @return Breaking <p>破坏性变更数</p>
                     * 
                     */
                    uint64_t GetBreaking() const;

                    /**
                     * 设置<p>破坏性变更数</p>
                     * @param _breaking <p>破坏性变更数</p>
                     * 
                     */
                    void SetBreaking(const uint64_t& _breaking);

                    /**
                     * 判断参数 Breaking 是否已赋值
                     * @return Breaking 是否已赋值
                     * 
                     */
                    bool BreakingHasBeenSet() const;

                    /**
                     * 获取<p>兼容性变更数</p>
                     * @return Compatible <p>兼容性变更数</p>
                     * 
                     */
                    uint64_t GetCompatible() const;

                    /**
                     * 设置<p>兼容性变更数</p>
                     * @param _compatible <p>兼容性变更数</p>
                     * 
                     */
                    void SetCompatible(const uint64_t& _compatible);

                    /**
                     * 判断参数 Compatible 是否已赋值
                     * @return Compatible 是否已赋值
                     * 
                     */
                    bool CompatibleHasBeenSet() const;

                private:

                    /**
                     * <p>破坏性变更数</p>
                     */
                    uint64_t m_breaking;
                    bool m_breakingHasBeenSet;

                    /**
                     * <p>兼容性变更数</p>
                     */
                    uint64_t m_compatible;
                    bool m_compatibleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWCHANGESUMMARY_H_
