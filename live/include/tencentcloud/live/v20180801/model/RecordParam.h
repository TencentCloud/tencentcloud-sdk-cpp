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
                * 录制模板参数
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
单位秒，默认值1800。
取值范围:300-7200。
此参数对 HLS 无效，当录制 HLS 时从推流到断流生成一个文件。
                     * @return RecordInterval 录制间隔。
单位秒，默认值1800。
取值范围:300-7200。
此参数对 HLS 无效，当录制 HLS 时从推流到断流生成一个文件。
                     */
                    int64_t GetRecordInterval() const;

                    /**
                     * 设置录制间隔。
单位秒，默认值1800。
取值范围:300-7200。
此参数对 HLS 无效，当录制 HLS 时从推流到断流生成一个文件。
                     * @param RecordInterval 录制间隔。
单位秒，默认值1800。
取值范围:300-7200。
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
单位秒，取值范围： 0-5184000。
0表示永久存储。
                     * @return StorageTime 录制存储时长。
单位秒，取值范围： 0-5184000。
0表示永久存储。
                     */
                    int64_t GetStorageTime() const;

                    /**
                     * 设置录制存储时长。
单位秒，取值范围： 0-5184000。
0表示永久存储。
                     * @param StorageTime 录制存储时长。
单位秒，取值范围： 0-5184000。
0表示永久存储。
                     */
                    void SetStorageTime(const int64_t& _storageTime);

                    /**
                     * 判断参数 StorageTime 是否已赋值
                     * @return StorageTime 是否已赋值
                     */
                    bool StorageTimeHasBeenSet() const;

                    /**
                     * 获取是否开启当前格式录制，0 否 1是。默认值0。
                     * @return Enable 是否开启当前格式录制，0 否 1是。默认值0。
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置是否开启当前格式录制，0 否 1是。默认值0。
                     * @param Enable 是否开启当前格式录制，0 否 1是。默认值0。
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * 录制间隔。
单位秒，默认值1800。
取值范围:300-7200。
此参数对 HLS 无效，当录制 HLS 时从推流到断流生成一个文件。
                     */
                    int64_t m_recordInterval;
                    bool m_recordIntervalHasBeenSet;

                    /**
                     * 录制存储时长。
单位秒，取值范围： 0-5184000。
0表示永久存储。
                     */
                    int64_t m_storageTime;
                    bool m_storageTimeHasBeenSet;

                    /**
                     * 是否开启当前格式录制，0 否 1是。默认值0。
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_RECORDPARAM_H_
