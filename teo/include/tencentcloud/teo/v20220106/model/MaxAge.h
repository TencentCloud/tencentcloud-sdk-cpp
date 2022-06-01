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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_MAXAGE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_MAXAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 浏览器缓存规则配置，用于设置 MaxAge 默认值，默认为关闭状态
                */
                class MaxAge : public AbstractModel
                {
                public:
                    MaxAge();
                    ~MaxAge() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MaxAge 时间设置，单位秒，最大365天
注意：时间为0，即不缓存。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxAgeTime MaxAge 时间设置，单位秒，最大365天
注意：时间为0，即不缓存。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMaxAgeTime() const;

                    /**
                     * 设置MaxAge 时间设置，单位秒，最大365天
注意：时间为0，即不缓存。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxAgeTime MaxAge 时间设置，单位秒，最大365天
注意：时间为0，即不缓存。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxAgeTime(const int64_t& _maxAgeTime);

                    /**
                     * 判断参数 MaxAgeTime 是否已赋值
                     * @return MaxAgeTime 是否已赋值
                     */
                    bool MaxAgeTimeHasBeenSet() const;

                    /**
                     * 获取是否遵循源站，on或off，开启时忽略时间设置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FollowOrigin 是否遵循源站，on或off，开启时忽略时间设置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFollowOrigin() const;

                    /**
                     * 设置是否遵循源站，on或off，开启时忽略时间设置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FollowOrigin 是否遵循源站，on或off，开启时忽略时间设置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFollowOrigin(const std::string& _followOrigin);

                    /**
                     * 判断参数 FollowOrigin 是否已赋值
                     * @return FollowOrigin 是否已赋值
                     */
                    bool FollowOriginHasBeenSet() const;

                private:

                    /**
                     * MaxAge 时间设置，单位秒，最大365天
注意：时间为0，即不缓存。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxAgeTime;
                    bool m_maxAgeTimeHasBeenSet;

                    /**
                     * 是否遵循源站，on或off，开启时忽略时间设置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_followOrigin;
                    bool m_followOriginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_MAXAGE_H_
