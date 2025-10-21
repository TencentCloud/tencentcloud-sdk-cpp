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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DDOSBLOCKDATA_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DDOSBLOCKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DDoS封禁解封信息
                */
                class DDoSBlockData : public AbstractModel
                {
                public:
                    DDoSBlockData();
                    ~DDoSBlockData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开始时间，采用unix时间戳。
                     * @return StartTime 开始时间，采用unix时间戳。
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间，采用unix时间戳。
                     * @param _startTime 开始时间，采用unix时间戳。
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，采用unix时间戳, 为0表示还处于封禁中。
                     * @return EndTime 结束时间，采用unix时间戳, 为0表示还处于封禁中。
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间，采用unix时间戳, 为0表示还处于封禁中。
                     * @param _endTime 结束时间，采用unix时间戳, 为0表示还处于封禁中。
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取封禁受影响区域。
                     * @return BlockArea 封禁受影响区域。
                     * 
                     */
                    std::string GetBlockArea() const;

                    /**
                     * 设置封禁受影响区域。
                     * @param _blockArea 封禁受影响区域。
                     * 
                     */
                    void SetBlockArea(const std::string& _blockArea);

                    /**
                     * 判断参数 BlockArea 是否已赋值
                     * @return BlockArea 是否已赋值
                     * 
                     */
                    bool BlockAreaHasBeenSet() const;

                private:

                    /**
                     * 开始时间，采用unix时间戳。
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，采用unix时间戳, 为0表示还处于封禁中。
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 封禁受影响区域。
                     */
                    std::string m_blockArea;
                    bool m_blockAreaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSBLOCKDATA_H_
