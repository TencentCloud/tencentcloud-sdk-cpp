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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ALARMSHIELDCOUNT_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ALARMSHIELDCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 告警屏蔽统计信息
                */
                class AlarmShieldCount : public AbstractModel
                {
                public:
                    AlarmShieldCount();
                    ~AlarmShieldCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取符合检索条件的告警屏蔽总数量
                     * @return TotalCount 符合检索条件的告警屏蔽总数量
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置符合检索条件的告警屏蔽总数量
                     * @param _totalCount 符合检索条件的告警屏蔽总数量
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取告警屏蔽未生效数量
                     * @return InvalidCount 告警屏蔽未生效数量
                     * 
                     */
                    uint64_t GetInvalidCount() const;

                    /**
                     * 设置告警屏蔽未生效数量
                     * @param _invalidCount 告警屏蔽未生效数量
                     * 
                     */
                    void SetInvalidCount(const uint64_t& _invalidCount);

                    /**
                     * 判断参数 InvalidCount 是否已赋值
                     * @return InvalidCount 是否已赋值
                     * 
                     */
                    bool InvalidCountHasBeenSet() const;

                    /**
                     * 获取告警屏蔽生效中数量
                     * @return ValidCount 告警屏蔽生效中数量
                     * 
                     */
                    uint64_t GetValidCount() const;

                    /**
                     * 设置告警屏蔽生效中数量
                     * @param _validCount 告警屏蔽生效中数量
                     * 
                     */
                    void SetValidCount(const uint64_t& _validCount);

                    /**
                     * 判断参数 ValidCount 是否已赋值
                     * @return ValidCount 是否已赋值
                     * 
                     */
                    bool ValidCountHasBeenSet() const;

                    /**
                     * 获取告警屏蔽已过期数量
                     * @return ExpireCount 告警屏蔽已过期数量
                     * 
                     */
                    uint64_t GetExpireCount() const;

                    /**
                     * 设置告警屏蔽已过期数量
                     * @param _expireCount 告警屏蔽已过期数量
                     * 
                     */
                    void SetExpireCount(const uint64_t& _expireCount);

                    /**
                     * 判断参数 ExpireCount 是否已赋值
                     * @return ExpireCount 是否已赋值
                     * 
                     */
                    bool ExpireCountHasBeenSet() const;

                private:

                    /**
                     * 符合检索条件的告警屏蔽总数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 告警屏蔽未生效数量
                     */
                    uint64_t m_invalidCount;
                    bool m_invalidCountHasBeenSet;

                    /**
                     * 告警屏蔽生效中数量
                     */
                    uint64_t m_validCount;
                    bool m_validCountHasBeenSet;

                    /**
                     * 告警屏蔽已过期数量
                     */
                    uint64_t m_expireCount;
                    bool m_expireCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ALARMSHIELDCOUNT_H_
