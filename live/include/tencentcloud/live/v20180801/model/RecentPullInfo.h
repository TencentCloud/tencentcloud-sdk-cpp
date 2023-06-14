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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_RECENTPULLINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_RECENTPULLINFO_H_

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
                * 直播拉流当前正在拉的文件信息。
                */
                class RecentPullInfo : public AbstractModel
                {
                public:
                    RecentPullInfo();
                    ~RecentPullInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前正在拉的文件地址。
                     * @return FileUrl 当前正在拉的文件地址。
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置当前正在拉的文件地址。
                     * @param _fileUrl 当前正在拉的文件地址。
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取当前正在拉的文件偏移，单位：秒。
                     * @return OffsetTime 当前正在拉的文件偏移，单位：秒。
                     * 
                     */
                    uint64_t GetOffsetTime() const;

                    /**
                     * 设置当前正在拉的文件偏移，单位：秒。
                     * @param _offsetTime 当前正在拉的文件偏移，单位：秒。
                     * 
                     */
                    void SetOffsetTime(const uint64_t& _offsetTime);

                    /**
                     * 判断参数 OffsetTime 是否已赋值
                     * @return OffsetTime 是否已赋值
                     * 
                     */
                    bool OffsetTimeHasBeenSet() const;

                    /**
                     * 获取最新上报偏移信息时间。UTC格式。
如：2020-07-23T03:20:39Z。
注意：与北京时间相差八小时。
                     * @return ReportTime 最新上报偏移信息时间。UTC格式。
如：2020-07-23T03:20:39Z。
注意：与北京时间相差八小时。
                     * 
                     */
                    std::string GetReportTime() const;

                    /**
                     * 设置最新上报偏移信息时间。UTC格式。
如：2020-07-23T03:20:39Z。
注意：与北京时间相差八小时。
                     * @param _reportTime 最新上报偏移信息时间。UTC格式。
如：2020-07-23T03:20:39Z。
注意：与北京时间相差八小时。
                     * 
                     */
                    void SetReportTime(const std::string& _reportTime);

                    /**
                     * 判断参数 ReportTime 是否已赋值
                     * @return ReportTime 是否已赋值
                     * 
                     */
                    bool ReportTimeHasBeenSet() const;

                    /**
                     * 获取已经轮播的次数。
                     * @return LoopedTimes 已经轮播的次数。
                     * 
                     */
                    int64_t GetLoopedTimes() const;

                    /**
                     * 设置已经轮播的次数。
                     * @param _loopedTimes 已经轮播的次数。
                     * 
                     */
                    void SetLoopedTimes(const int64_t& _loopedTimes);

                    /**
                     * 判断参数 LoopedTimes 是否已赋值
                     * @return LoopedTimes 是否已赋值
                     * 
                     */
                    bool LoopedTimesHasBeenSet() const;

                private:

                    /**
                     * 当前正在拉的文件地址。
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * 当前正在拉的文件偏移，单位：秒。
                     */
                    uint64_t m_offsetTime;
                    bool m_offsetTimeHasBeenSet;

                    /**
                     * 最新上报偏移信息时间。UTC格式。
如：2020-07-23T03:20:39Z。
注意：与北京时间相差八小时。
                     */
                    std::string m_reportTime;
                    bool m_reportTimeHasBeenSet;

                    /**
                     * 已经轮播的次数。
                     */
                    int64_t m_loopedTimes;
                    bool m_loopedTimesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_RECENTPULLINFO_H_
