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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEEVENTIDFILTERCONFIG_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEEVENTIDFILTERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeSee 处理云存事件的触发条件配置
                */
                class SeeEventIdFilterConfig : public AbstractModel
                {
                public:
                    SeeEventIdFilterConfig();
                    ~SeeEventIdFilterConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>包含的云存事件 ID 集合</p>
                     * @return IncludeOnly <p>包含的云存事件 ID 集合</p>
                     * 
                     */
                    std::vector<std::string> GetIncludeOnly() const;

                    /**
                     * 设置<p>包含的云存事件 ID 集合</p>
                     * @param _includeOnly <p>包含的云存事件 ID 集合</p>
                     * 
                     */
                    void SetIncludeOnly(const std::vector<std::string>& _includeOnly);

                    /**
                     * 判断参数 IncludeOnly 是否已赋值
                     * @return IncludeOnly 是否已赋值
                     * 
                     */
                    bool IncludeOnlyHasBeenSet() const;

                    /**
                     * 获取<p>排除的云存事件 ID 集合</p>
                     * @return Exclude <p>排除的云存事件 ID 集合</p>
                     * 
                     */
                    std::vector<std::string> GetExclude() const;

                    /**
                     * 设置<p>排除的云存事件 ID 集合</p>
                     * @param _exclude <p>排除的云存事件 ID 集合</p>
                     * 
                     */
                    void SetExclude(const std::vector<std::string>& _exclude);

                    /**
                     * 判断参数 Exclude 是否已赋值
                     * @return Exclude 是否已赋值
                     * 
                     */
                    bool ExcludeHasBeenSet() const;

                    /**
                     * 获取<p>触发分析的时机</p><p>枚举值：</p><ul><li>end： 在云存事件结束时触发视频理解</li><li>start： 在云存事件开始时触发视频理解</li><li>image_and_video： 上传云存事件缩略图后触发图片理解，并且在云存事件结束时触发视频理解</li></ul><p>默认值：end</p>
                     * @return TriggerAt <p>触发分析的时机</p><p>枚举值：</p><ul><li>end： 在云存事件结束时触发视频理解</li><li>start： 在云存事件开始时触发视频理解</li><li>image_and_video： 上传云存事件缩略图后触发图片理解，并且在云存事件结束时触发视频理解</li></ul><p>默认值：end</p>
                     * 
                     */
                    std::string GetTriggerAt() const;

                    /**
                     * 设置<p>触发分析的时机</p><p>枚举值：</p><ul><li>end： 在云存事件结束时触发视频理解</li><li>start： 在云存事件开始时触发视频理解</li><li>image_and_video： 上传云存事件缩略图后触发图片理解，并且在云存事件结束时触发视频理解</li></ul><p>默认值：end</p>
                     * @param _triggerAt <p>触发分析的时机</p><p>枚举值：</p><ul><li>end： 在云存事件结束时触发视频理解</li><li>start： 在云存事件开始时触发视频理解</li><li>image_and_video： 上传云存事件缩略图后触发图片理解，并且在云存事件结束时触发视频理解</li></ul><p>默认值：end</p>
                     * 
                     */
                    void SetTriggerAt(const std::string& _triggerAt);

                    /**
                     * 判断参数 TriggerAt 是否已赋值
                     * @return TriggerAt 是否已赋值
                     * 
                     */
                    bool TriggerAtHasBeenSet() const;

                private:

                    /**
                     * <p>包含的云存事件 ID 集合</p>
                     */
                    std::vector<std::string> m_includeOnly;
                    bool m_includeOnlyHasBeenSet;

                    /**
                     * <p>排除的云存事件 ID 集合</p>
                     */
                    std::vector<std::string> m_exclude;
                    bool m_excludeHasBeenSet;

                    /**
                     * <p>触发分析的时机</p><p>枚举值：</p><ul><li>end： 在云存事件结束时触发视频理解</li><li>start： 在云存事件开始时触发视频理解</li><li>image_and_video： 上传云存事件缩略图后触发图片理解，并且在云存事件结束时触发视频理解</li></ul><p>默认值：end</p>
                     */
                    std::string m_triggerAt;
                    bool m_triggerAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEEVENTIDFILTERCONFIG_H_
