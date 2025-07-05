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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_REALTIMETASKSPEED_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_REALTIMETASKSPEED_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RecordsSpeed.h>
#include <tencentcloud/wedata/v20210820/model/BytesSpeed.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 实时任务同步速度趋势
                */
                class RealTimeTaskSpeed : public AbstractModel
                {
                public:
                    RealTimeTaskSpeed();
                    ~RealTimeTaskSpeed() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取同步速度条/s列表
                     * @return RecordsSpeedList 同步速度条/s列表
                     * 
                     */
                    std::vector<RecordsSpeed> GetRecordsSpeedList() const;

                    /**
                     * 设置同步速度条/s列表
                     * @param _recordsSpeedList 同步速度条/s列表
                     * 
                     */
                    void SetRecordsSpeedList(const std::vector<RecordsSpeed>& _recordsSpeedList);

                    /**
                     * 判断参数 RecordsSpeedList 是否已赋值
                     * @return RecordsSpeedList 是否已赋值
                     * 
                     */
                    bool RecordsSpeedListHasBeenSet() const;

                    /**
                     * 获取同步速度字节/s列表
                     * @return BytesSpeedList 同步速度字节/s列表
                     * 
                     */
                    std::vector<BytesSpeed> GetBytesSpeedList() const;

                    /**
                     * 设置同步速度字节/s列表
                     * @param _bytesSpeedList 同步速度字节/s列表
                     * 
                     */
                    void SetBytesSpeedList(const std::vector<BytesSpeed>& _bytesSpeedList);

                    /**
                     * 判断参数 BytesSpeedList 是否已赋值
                     * @return BytesSpeedList 是否已赋值
                     * 
                     */
                    bool BytesSpeedListHasBeenSet() const;

                private:

                    /**
                     * 同步速度条/s列表
                     */
                    std::vector<RecordsSpeed> m_recordsSpeedList;
                    bool m_recordsSpeedListHasBeenSet;

                    /**
                     * 同步速度字节/s列表
                     */
                    std::vector<BytesSpeed> m_bytesSpeedList;
                    bool m_bytesSpeedListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_REALTIMETASKSPEED_H_
