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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPFILESIZERANGE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPFILESIZERANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 文件大小限制区间，单位 Byte；Min/Max 为 0 表示该侧无限制
                */
                class TrafficSandboxDLPFileSizeRange : public AbstractModel
                {
                public:
                    TrafficSandboxDLPFileSizeRange();
                    ~TrafficSandboxDLPFileSizeRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取下限，单位 Byte；0 表示无下限
                     * @return Min 下限，单位 Byte；0 表示无下限
                     * 
                     */
                    uint64_t GetMin() const;

                    /**
                     * 设置下限，单位 Byte；0 表示无下限
                     * @param _min 下限，单位 Byte；0 表示无下限
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
                     * 获取上限，单位 Byte；0 表示无上限
                     * @return Max 上限，单位 Byte；0 表示无上限
                     * 
                     */
                    uint64_t GetMax() const;

                    /**
                     * 设置上限，单位 Byte；0 表示无上限
                     * @param _max 上限，单位 Byte；0 表示无上限
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
                     * 下限，单位 Byte；0 表示无下限
                     */
                    uint64_t m_min;
                    bool m_minHasBeenSet;

                    /**
                     * 上限，单位 Byte；0 表示无上限
                     */
                    uint64_t m_max;
                    bool m_maxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXDLPFILESIZERANGE_H_
