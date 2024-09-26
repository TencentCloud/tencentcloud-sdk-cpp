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
                     * 获取路径缓存遵循源站配置开关，取值有：
on：开启
off：关闭
                     * @return Switch 路径缓存遵循源站配置开关，取值有：
on：开启
off：关闭
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置路径缓存遵循源站配置开关，取值有：
on：开启
off：关闭
                     * @param _switch 路径缓存遵循源站配置开关，取值有：
on：开启
off：关闭
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取启发式缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeuristicCache 启发式缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HeuristicCache GetHeuristicCache() const;

                    /**
                     * 设置启发式缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _heuristicCache 启发式缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeuristicCache(const HeuristicCache& _heuristicCache);

                    /**
                     * 判断参数 HeuristicCache 是否已赋值
                     * @return HeuristicCache 是否已赋值
                     * 
                     */
                    bool HeuristicCacheHasBeenSet() const;

                    /**
                     * 获取当缓存过期后，是否开启源站 mtime 校验，配置值为equal、since、none 和 null。默认配置值为equal，会校验源站文件的mtime与长度。2024-09-12 18:00 之前创建的域名默认值 null，行为保持不变。
equal：源站响应mtime必须和缓存mtime一致，若mtime值不一致，清除缓存。
since：若源站响应mtime大于缓存mtime，清除缓存。
none： 缓存过期回源重新获取文件mtime和长度后，不会校验源站响应mtime，若源站响应携带Content-Length头部，只有文件大小改变时才会更新缓存；若源站响应不携带Content-Length头部，会更新缓存。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginMtimeCheckType 当缓存过期后，是否开启源站 mtime 校验，配置值为equal、since、none 和 null。默认配置值为equal，会校验源站文件的mtime与长度。2024-09-12 18:00 之前创建的域名默认值 null，行为保持不变。
equal：源站响应mtime必须和缓存mtime一致，若mtime值不一致，清除缓存。
since：若源站响应mtime大于缓存mtime，清除缓存。
none： 缓存过期回源重新获取文件mtime和长度后，不会校验源站响应mtime，若源站响应携带Content-Length头部，只有文件大小改变时才会更新缓存；若源站响应不携带Content-Length头部，会更新缓存。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginMtimeCheckType() const;

                    /**
                     * 设置当缓存过期后，是否开启源站 mtime 校验，配置值为equal、since、none 和 null。默认配置值为equal，会校验源站文件的mtime与长度。2024-09-12 18:00 之前创建的域名默认值 null，行为保持不变。
equal：源站响应mtime必须和缓存mtime一致，若mtime值不一致，清除缓存。
since：若源站响应mtime大于缓存mtime，清除缓存。
none： 缓存过期回源重新获取文件mtime和长度后，不会校验源站响应mtime，若源站响应携带Content-Length头部，只有文件大小改变时才会更新缓存；若源站响应不携带Content-Length头部，会更新缓存。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originMtimeCheckType 当缓存过期后，是否开启源站 mtime 校验，配置值为equal、since、none 和 null。默认配置值为equal，会校验源站文件的mtime与长度。2024-09-12 18:00 之前创建的域名默认值 null，行为保持不变。
equal：源站响应mtime必须和缓存mtime一致，若mtime值不一致，清除缓存。
since：若源站响应mtime大于缓存mtime，清除缓存。
none： 缓存过期回源重新获取文件mtime和长度后，不会校验源站响应mtime，若源站响应携带Content-Length头部，只有文件大小改变时才会更新缓存；若源站响应不携带Content-Length头部，会更新缓存。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginMtimeCheckType(const std::string& _originMtimeCheckType);

                    /**
                     * 判断参数 OriginMtimeCheckType 是否已赋值
                     * @return OriginMtimeCheckType 是否已赋值
                     * 
                     */
                    bool OriginMtimeCheckTypeHasBeenSet() const;

                private:

                    /**
                     * 路径缓存遵循源站配置开关，取值有：
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

                    /**
                     * 当缓存过期后，是否开启源站 mtime 校验，配置值为equal、since、none 和 null。默认配置值为equal，会校验源站文件的mtime与长度。2024-09-12 18:00 之前创建的域名默认值 null，行为保持不变。
equal：源站响应mtime必须和缓存mtime一致，若mtime值不一致，清除缓存。
since：若源站响应mtime大于缓存mtime，清除缓存。
none： 缓存过期回源重新获取文件mtime和长度后，不会校验源站响应mtime，若源站响应携带Content-Length头部，只有文件大小改变时才会更新缓存；若源站响应不携带Content-Length头部，会更新缓存。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originMtimeCheckType;
                    bool m_originMtimeCheckTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CACHECONFIGFOLLOWORIGIN_H_
