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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_COREINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_COREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 任务 core 用量信息
                */
                class CoreInfo : public AbstractModel
                {
                public:
                    CoreInfo();
                    ~CoreInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间戳(毫秒)数组
                     * @return Timestamp 时间戳(毫秒)数组
                     * 
                     */
                    std::vector<int64_t> GetTimestamp() const;

                    /**
                     * 设置时间戳(毫秒)数组
                     * @param _timestamp 时间戳(毫秒)数组
                     * 
                     */
                    void SetTimestamp(const std::vector<int64_t>& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取core 用量
                     * @return CoreUsage core 用量
                     * 
                     */
                    std::vector<int64_t> GetCoreUsage() const;

                    /**
                     * 设置core 用量
                     * @param _coreUsage core 用量
                     * 
                     */
                    void SetCoreUsage(const std::vector<int64_t>& _coreUsage);

                    /**
                     * 判断参数 CoreUsage 是否已赋值
                     * @return CoreUsage 是否已赋值
                     * 
                     */
                    bool CoreUsageHasBeenSet() const;

                private:

                    /**
                     * 时间戳(毫秒)数组
                     */
                    std::vector<int64_t> m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * core 用量
                     */
                    std::vector<int64_t> m_coreUsage;
                    bool m_coreUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_COREINFO_H_
