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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_EFFECTIVEPOLICY_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_EFFECTIVEPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * 有效策略。
                */
                class EffectivePolicy : public AbstractModel
                {
                public:
                    EffectivePolicy();
                    ~EffectivePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目标ID。
                     * @return TargetId 目标ID。
                     * 
                     */
                    uint64_t GetTargetId() const;

                    /**
                     * 设置目标ID。
                     * @param _targetId 目标ID。
                     * 
                     */
                    void SetTargetId(const uint64_t& _targetId);

                    /**
                     * 判断参数 TargetId 是否已赋值
                     * @return TargetId 是否已赋值
                     * 
                     */
                    bool TargetIdHasBeenSet() const;

                    /**
                     * 获取有效策略内容。
                     * @return PolicyContent 有效策略内容。
                     * 
                     */
                    std::string GetPolicyContent() const;

                    /**
                     * 设置有效策略内容。
                     * @param _policyContent 有效策略内容。
                     * 
                     */
                    void SetPolicyContent(const std::string& _policyContent);

                    /**
                     * 判断参数 PolicyContent 是否已赋值
                     * @return PolicyContent 是否已赋值
                     * 
                     */
                    bool PolicyContentHasBeenSet() const;

                    /**
                     * 获取有效策略更新时间。
                     * @return LastUpdatedTimestamp 有效策略更新时间。
                     * 
                     */
                    uint64_t GetLastUpdatedTimestamp() const;

                    /**
                     * 设置有效策略更新时间。
                     * @param _lastUpdatedTimestamp 有效策略更新时间。
                     * 
                     */
                    void SetLastUpdatedTimestamp(const uint64_t& _lastUpdatedTimestamp);

                    /**
                     * 判断参数 LastUpdatedTimestamp 是否已赋值
                     * @return LastUpdatedTimestamp 是否已赋值
                     * 
                     */
                    bool LastUpdatedTimestampHasBeenSet() const;

                private:

                    /**
                     * 目标ID。
                     */
                    uint64_t m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * 有效策略内容。
                     */
                    std::string m_policyContent;
                    bool m_policyContentHasBeenSet;

                    /**
                     * 有效策略更新时间。
                     */
                    uint64_t m_lastUpdatedTimestamp;
                    bool m_lastUpdatedTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_EFFECTIVEPOLICY_H_
