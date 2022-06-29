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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CACHECONFIGFOLLOWORIGIN_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CACHECONFIGFOLLOWORIGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/HeuristicCache.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 路径缓存遵循源站配置
                */
                class CacheConfigFollowOrigin : public AbstractModel
                {
                public:
                    CacheConfigFollowOrigin();
                    ~CacheConfigFollowOrigin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取遵循源站配置开关
on：开启
off：关闭
                     * @return Switch 遵循源站配置开关
on：开启
off：关闭
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置遵循源站配置开关
on：开启
off：关闭
                     * @param Switch 遵循源站配置开关
on：开启
off：关闭
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取启发式缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeuristicCache 启发式缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HeuristicCache GetHeuristicCache() const;

                    /**
                     * 设置启发式缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HeuristicCache 启发式缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHeuristicCache(const HeuristicCache& _heuristicCache);

                    /**
                     * 判断参数 HeuristicCache 是否已赋值
                     * @return HeuristicCache 是否已赋值
                     */
                    bool HeuristicCacheHasBeenSet() const;

                private:

                    /**
                     * 遵循源站配置开关
on：开启
off：关闭
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 启发式缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HeuristicCache m_heuristicCache;
                    bool m_heuristicCacheHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CACHECONFIGFOLLOWORIGIN_H_
