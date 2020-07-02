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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_RECORDPARAM_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_RECORDPARAM_H_

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
                * 录制模板参数。
                */
                class RecordParam : public AbstractModel
                {
                public:
                    RecordParam();
                    ~RecordParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取录制间隔。
单位秒，默认：1800。
取值范围：300-7200。
此参数对 HLS 无效，当录制 HLS 时从推流到断流生成一个文件。
                     * @return RecordInterval 录制间隔。
单位秒，默认：1800。
取值范围：300-7200。
此参数对 HLS 无效，当录制 HLS 时从推流到断流生成一个文件。
                     */
                    int64_t GetRecordInterval() const;

                    /**
                     * 设置录制间隔。
单位秒，默认：1800。
取值范围：300-7200。
此参数对 HLS 无效，当录制 HLS 时从推流到断流生成一个文件。
                     * @param RecordInterval 录制间隔。
单位秒，默认：1800。
取值范围：300-7200。
此参数对 HLS 无效，当录制 HLS 时从推流到断流生成一个文件。
                     */
                    void SetRecordInterval(const int64_t& _recordInterval);

                    /**
                     * 判断参数 RecordInterval 是否已赋值
                     * @return RecordInterval 是否已赋值
                     */
                    bool RecordIntervalHasBeenSet() const;

                    /**
                     * 获取录制存储时长。
单位秒，取值范围： 0 - 93312000。
0：表示永久存储。
                     * @return StorageTime 录制存储时长。
单位秒，取值范围： 0 - 93312000。
0：表示永久存储。
                     */
                    int64_t GetStorageTime() const;

                    /**
                     * 设置录制存储时长。
单位秒，取值范围： 0 - 93312000。
0：表示永久存储。
                     * @param StorageTime 录制存储时长。
单位秒，取值范围： 0 - 93312000。
0：表示永久存储。
                     */
                    void SetStorageTime(const int64_t& _storageTime);

                    /**
                     * 判断参数 StorageTime 是否已赋值
                     * @return StorageTime 是否已赋值
                     */
                    bool StorageTimeHasBeenSet() const;

                    /**
                     * 获取是否开启当前格式录制，默认值为0，0：否， 1：是。
                     * @return Enable 是否开启当前格式录制，默认值为0，0：否， 1：是。
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置是否开启当前格式录制，默认值为0，0：否， 1：是。
                     * @param Enable 是否开启当前格式录制，默认值为0，0：否， 1：是。
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取点播子应用 ID。
                     * @return VodSubAppId 点播子应用 ID。
                     */
                    int64_t GetVodSubAppId() const;

                    /**
                     * 设置点播子应用 ID。
                     * @param VodSubAppId 点播子应用 ID。
                     */
                    void SetVodSubAppId(const int64_t& _vodSubAppId);

                    /**
                     * 判断参数 VodSubAppId 是否已赋值
                     * @return VodSubAppId 是否已赋值
                     */
                    bool VodSubAppIdHasBeenSet() const;

                    /**
                     * 获取录制文件名。
支持的特殊占位符有：
{StreamID}: 流ID
{StartYear}: 开始时间-年
{StartMonth}: 开始时间-月
{StartDay}: 开始时间-日
{StartHour}: 开始时间-小时
{StartMinute}: 开始时间-分钟
{StartSecond}: 开始时间-秒
{StartMillisecond}: 开始时间-毫秒
{EndYear}: 结束时间-年
{EndMonth}: 结束时间-月
{EndDay}: 结束时间-日
{EndHour}: 结束时间-小时
{EndMinute}: 结束时间-分钟
{EndSecond}: 结束时间-秒
{EndMillisecond}: 结束时间-毫秒

若未设置默认录制文件名为{StreamID}_{StartYear}-{StartMonth}-{StartDay}-{StartHour}-{StartMinute}-{StartSecond}_{EndYear}-{EndMonth}-{EndDay}-{EndHour}-{EndMinute}-{EndSecond}
                     * @return VodFileName 录制文件名。
支持的特殊占位符有：
{StreamID}: 流ID
{StartYear}: 开始时间-年
{StartMonth}: 开始时间-月
{StartDay}: 开始时间-日
{StartHour}: 开始时间-小时
{StartMinute}: 开始时间-分钟
{StartSecond}: 开始时间-秒
{StartMillisecond}: 开始时间-毫秒
{EndYear}: 结束时间-年
{EndMonth}: 结束时间-月
{EndDay}: 结束时间-日
{EndHour}: 结束时间-小时
{EndMinute}: 结束时间-分钟
{EndSecond}: 结束时间-秒
{EndMillisecond}: 结束时间-毫秒

若未设置默认录制文件名为{StreamID}_{StartYear}-{StartMonth}-{StartDay}-{StartHour}-{StartMinute}-{StartSecond}_{EndYear}-{EndMonth}-{EndDay}-{EndHour}-{EndMinute}-{EndSecond}
                     */
                    std::string GetVodFileName() const;

                    /**
                     * 设置录制文件名。
支持的特殊占位符有：
{StreamID}: 流ID
{StartYear}: 开始时间-年
{StartMonth}: 开始时间-月
{StartDay}: 开始时间-日
{StartHour}: 开始时间-小时
{StartMinute}: 开始时间-分钟
{StartSecond}: 开始时间-秒
{StartMillisecond}: 开始时间-毫秒
{EndYear}: 结束时间-年
{EndMonth}: 结束时间-月
{EndDay}: 结束时间-日
{EndHour}: 结束时间-小时
{EndMinute}: 结束时间-分钟
{EndSecond}: 结束时间-秒
{EndMillisecond}: 结束时间-毫秒

若未设置默认录制文件名为{StreamID}_{StartYear}-{StartMonth}-{StartDay}-{StartHour}-{StartMinute}-{StartSecond}_{EndYear}-{EndMonth}-{EndDay}-{EndHour}-{EndMinute}-{EndSecond}
                     * @param VodFileName 录制文件名。
支持的特殊占位符有：
{StreamID}: 流ID
{StartYear}: 开始时间-年
{StartMonth}: 开始时间-月
{StartDay}: 开始时间-日
{StartHour}: 开始时间-小时
{StartMinute}: 开始时间-分钟
{StartSecond}: 开始时间-秒
{StartMillisecond}: 开始时间-毫秒
{EndYear}: 结束时间-年
{EndMonth}: 结束时间-月
{EndDay}: 结束时间-日
{EndHour}: 结束时间-小时
{EndMinute}: 结束时间-分钟
{EndSecond}: 结束时间-秒
{EndMillisecond}: 结束时间-毫秒

若未设置默认录制文件名为{StreamID}_{StartYear}-{StartMonth}-{StartDay}-{StartHour}-{StartMinute}-{StartSecond}_{EndYear}-{EndMonth}-{EndDay}-{EndHour}-{EndMinute}-{EndSecond}
                     */
                    void SetVodFileName(const std::string& _vodFileName);

                    /**
                     * 判断参数 VodFileName 是否已赋值
                     * @return VodFileName 是否已赋值
                     */
                    bool VodFileNameHasBeenSet() const;

                private:

                    /**
                     * 录制间隔。
单位秒，默认：1800。
取值范围：300-7200。
此参数对 HLS 无效，当录制 HLS 时从推流到断流生成一个文件。
                     */
                    int64_t m_recordInterval;
                    bool m_recordIntervalHasBeenSet;

                    /**
                     * 录制存储时长。
单位秒，取值范围： 0 - 93312000。
0：表示永久存储。
                     */
                    int64_t m_storageTime;
                    bool m_storageTimeHasBeenSet;

                    /**
                     * 是否开启当前格式录制，默认值为0，0：否， 1：是。
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 点播子应用 ID。
                     */
                    int64_t m_vodSubAppId;
                    bool m_vodSubAppIdHasBeenSet;

                    /**
                     * 录制文件名。
支持的特殊占位符有：
{StreamID}: 流ID
{StartYear}: 开始时间-年
{StartMonth}: 开始时间-月
{StartDay}: 开始时间-日
{StartHour}: 开始时间-小时
{StartMinute}: 开始时间-分钟
{StartSecond}: 开始时间-秒
{StartMillisecond}: 开始时间-毫秒
{EndYear}: 结束时间-年
{EndMonth}: 结束时间-月
{EndDay}: 结束时间-日
{EndHour}: 结束时间-小时
{EndMinute}: 结束时间-分钟
{EndSecond}: 结束时间-秒
{EndMillisecond}: 结束时间-毫秒

若未设置默认录制文件名为{StreamID}_{StartYear}-{StartMonth}-{StartDay}-{StartHour}-{StartMinute}-{StartSecond}_{EndYear}-{EndMonth}-{EndDay}-{EndHour}-{EndMinute}-{EndSecond}
                     */
                    std::string m_vodFileName;
                    bool m_vodFileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_RECORDPARAM_H_
