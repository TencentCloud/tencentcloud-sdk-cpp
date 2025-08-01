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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CACHEPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CACHEPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/FollowOrigin.h>
#include <tencentcloud/teo/v20220901/model/NoCache.h>
#include <tencentcloud/teo/v20220901/model/CustomTime.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 节点缓存 TTL 配置参数。
                */
                class CacheParameters : public AbstractModel
                {
                public:
                    CacheParameters();
                    ~CacheParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取缓存遵循源站。不填表示不设置该配置，FollowOrigin、NoCache、CustomTime 最多只能配置一个 Switch 为 on。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FollowOrigin 缓存遵循源站。不填表示不设置该配置，FollowOrigin、NoCache、CustomTime 最多只能配置一个 Switch 为 on。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FollowOrigin GetFollowOrigin() const;

                    /**
                     * 设置缓存遵循源站。不填表示不设置该配置，FollowOrigin、NoCache、CustomTime 最多只能配置一个 Switch 为 on。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _followOrigin 缓存遵循源站。不填表示不设置该配置，FollowOrigin、NoCache、CustomTime 最多只能配置一个 Switch 为 on。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFollowOrigin(const FollowOrigin& _followOrigin);

                    /**
                     * 判断参数 FollowOrigin 是否已赋值
                     * @return FollowOrigin 是否已赋值
                     * 
                     */
                    bool FollowOriginHasBeenSet() const;

                    /**
                     * 获取不缓存。不填表示不设置该配置，FollowOrigin、NoCache、CustomTime 最多只能配置一个 Switch 为 on。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoCache 不缓存。不填表示不设置该配置，FollowOrigin、NoCache、CustomTime 最多只能配置一个 Switch 为 on。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NoCache GetNoCache() const;

                    /**
                     * 设置不缓存。不填表示不设置该配置，FollowOrigin、NoCache、CustomTime 最多只能配置一个 Switch 为 on。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _noCache 不缓存。不填表示不设置该配置，FollowOrigin、NoCache、CustomTime 最多只能配置一个 Switch 为 on。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNoCache(const NoCache& _noCache);

                    /**
                     * 判断参数 NoCache 是否已赋值
                     * @return NoCache 是否已赋值
                     * 
                     */
                    bool NoCacheHasBeenSet() const;

                    /**
                     * 获取自定义缓存时间。不填表示不设置该配置，FollowOrigin、NoCache、CustomTime 最多只能配置一个 Switch 为 on。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomTime 自定义缓存时间。不填表示不设置该配置，FollowOrigin、NoCache、CustomTime 最多只能配置一个 Switch 为 on。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CustomTime GetCustomTime() const;

                    /**
                     * 设置自定义缓存时间。不填表示不设置该配置，FollowOrigin、NoCache、CustomTime 最多只能配置一个 Switch 为 on。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customTime 自定义缓存时间。不填表示不设置该配置，FollowOrigin、NoCache、CustomTime 最多只能配置一个 Switch 为 on。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomTime(const CustomTime& _customTime);

                    /**
                     * 判断参数 CustomTime 是否已赋值
                     * @return CustomTime 是否已赋值
                     * 
                     */
                    bool CustomTimeHasBeenSet() const;

                private:

                    /**
                     * 缓存遵循源站。不填表示不设置该配置，FollowOrigin、NoCache、CustomTime 最多只能配置一个 Switch 为 on。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FollowOrigin m_followOrigin;
                    bool m_followOriginHasBeenSet;

                    /**
                     * 不缓存。不填表示不设置该配置，FollowOrigin、NoCache、CustomTime 最多只能配置一个 Switch 为 on。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NoCache m_noCache;
                    bool m_noCacheHasBeenSet;

                    /**
                     * 自定义缓存时间。不填表示不设置该配置，FollowOrigin、NoCache、CustomTime 最多只能配置一个 Switch 为 on。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CustomTime m_customTime;
                    bool m_customTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CACHEPARAMETERS_H_
