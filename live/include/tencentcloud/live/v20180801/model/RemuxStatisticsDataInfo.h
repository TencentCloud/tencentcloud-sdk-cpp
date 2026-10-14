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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_REMUXSTATISTICSDATAINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_REMUXSTATISTICSDATAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * RemuxStatisticsDataInfo
                */
                class RemuxStatisticsDataInfo : public AbstractModel
                {
                public:
                    RemuxStatisticsDataInfo();
                    ~RemuxStatisticsDataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>转封装用量</p>
                     * @return Remux <p>转封装用量</p>
                     * 
                     */
                    int64_t GetRemux() const;

                    /**
                     * 设置<p>转封装用量</p>
                     * @param _remux <p>转封装用量</p>
                     * 
                     */
                    void SetRemux(const int64_t& _remux);

                    /**
                     * 判断参数 Remux 是否已赋值
                     * @return Remux 是否已赋值
                     * 
                     */
                    bool RemuxHasBeenSet() const;

                    /**
                     * 获取<p>时间</p>
                     * @return Time <p>时间</p>
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置<p>时间</p>
                     * @param _time <p>时间</p>
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
                     * 获取<p>频道Id</p>
                     * @return ChannelId <p>频道Id</p>
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置<p>频道Id</p>
                     * @param _channelId <p>频道Id</p>
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                private:

                    /**
                     * <p>转封装用量</p>
                     */
                    int64_t m_remux;
                    bool m_remuxHasBeenSet;

                    /**
                     * <p>时间</p>
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * <p>频道Id</p>
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_REMUXSTATISTICSDATAINFO_H_
