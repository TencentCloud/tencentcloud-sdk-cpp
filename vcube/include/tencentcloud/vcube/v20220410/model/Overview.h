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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_OVERVIEW_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_OVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            namespace Model
            {
                /**
                * 总览统计数据
                */
                class Overview : public AbstractModel
                {
                public:
                    Overview();
                    ~Overview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过期license数量
                     * @return Expired 过期license数量
                     * 
                     */
                    uint64_t GetExpired() const;

                    /**
                     * 设置过期license数量
                     * @param _expired 过期license数量
                     * 
                     */
                    void SetExpired(const uint64_t& _expired);

                    /**
                     * 判断参数 Expired 是否已赋值
                     * @return Expired 是否已赋值
                     * 
                     */
                    bool ExpiredHasBeenSet() const;

                    /**
                     * 获取有效license数量
                     * @return Valid 有效license数量
                     * 
                     */
                    uint64_t GetValid() const;

                    /**
                     * 设置有效license数量
                     * @param _valid 有效license数量
                     * 
                     */
                    void SetValid(const uint64_t& _valid);

                    /**
                     * 判断参数 Valid 是否已赋值
                     * @return Valid 是否已赋值
                     * 
                     */
                    bool ValidHasBeenSet() const;

                    /**
                     * 获取临期license数量
                     * @return Near 临期license数量
                     * 
                     */
                    uint64_t GetNear() const;

                    /**
                     * 设置临期license数量
                     * @param _near 临期license数量
                     * 
                     */
                    void SetNear(const uint64_t& _near);

                    /**
                     * 判断参数 Near 是否已赋值
                     * @return Near 是否已赋值
                     * 
                     */
                    bool NearHasBeenSet() const;

                private:

                    /**
                     * 过期license数量
                     */
                    uint64_t m_expired;
                    bool m_expiredHasBeenSet;

                    /**
                     * 有效license数量
                     */
                    uint64_t m_valid;
                    bool m_validHasBeenSet;

                    /**
                     * 临期license数量
                     */
                    uint64_t m_near;
                    bool m_nearHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_OVERVIEW_H_
