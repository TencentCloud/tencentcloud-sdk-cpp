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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCREENBROADCASTS_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCREENBROADCASTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 大屏可视化安全播报内容
                */
                class ScreenBroadcasts : public AbstractModel
                {
                public:
                    ScreenBroadcasts();
                    ~ScreenBroadcasts() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取播报文章标题
                     * @return Title 播报文章标题
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置播报文章标题
                     * @param _title 播报文章标题
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取播报文章危险程度  0：无， 1：严重， 2: 高危， 3:中危， 4: 低危
                     * @return Level 播报文章危险程度  0：无， 1：严重， 2: 高危， 3:中危， 4: 低危
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置播报文章危险程度  0：无， 1：严重， 2: 高危， 3:中危， 4: 低危
                     * @param _level 播报文章危险程度  0：无， 1：严重， 2: 高危， 3:中危， 4: 低危
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取发布时间
                     * @return Time 发布时间
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置发布时间
                     * @param _time 发布时间
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取文章ID
                     * @return Id 文章ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置文章ID
                     * @param _id 文章ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 播报文章标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 播报文章危险程度  0：无， 1：严重， 2: 高危， 3:中危， 4: 低危
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 发布时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 文章ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCREENBROADCASTS_H_
