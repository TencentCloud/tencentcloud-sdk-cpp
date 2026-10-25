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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_EVENTRANKPOINT_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_EVENTRANKPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 事件排行时序点
                */
                class EventRankPoint : public AbstractModel
                {
                public:
                    EventRankPoint();
                    ~EventRankPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>时间戳 Unix 毫秒</p>
                     * @return Ts <p>时间戳 Unix 毫秒</p>
                     * 
                     */
                    int64_t GetTs() const;

                    /**
                     * 设置<p>时间戳 Unix 毫秒</p>
                     * @param _ts <p>时间戳 Unix 毫秒</p>
                     * 
                     */
                    void SetTs(const int64_t& _ts);

                    /**
                     * 判断参数 Ts 是否已赋值
                     * @return Ts 是否已赋值
                     * 
                     */
                    bool TsHasBeenSet() const;

                    /**
                     * 获取<p>次数</p>
                     * @return Count <p>次数</p>
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置<p>次数</p>
                     * @param _count <p>次数</p>
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取<p>失败次数</p>
                     * @return Fail <p>失败次数</p>
                     * 
                     */
                    int64_t GetFail() const;

                    /**
                     * 设置<p>失败次数</p>
                     * @param _fail <p>失败次数</p>
                     * 
                     */
                    void SetFail(const int64_t& _fail);

                    /**
                     * 判断参数 Fail 是否已赋值
                     * @return Fail 是否已赋值
                     * 
                     */
                    bool FailHasBeenSet() const;

                    /**
                     * 获取<p>耗时</p>
                     * @return Duration <p>耗时</p>
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置<p>耗时</p>
                     * @param _duration <p>耗时</p>
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * <p>时间戳 Unix 毫秒</p>
                     */
                    int64_t m_ts;
                    bool m_tsHasBeenSet;

                    /**
                     * <p>次数</p>
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>失败次数</p>
                     */
                    int64_t m_fail;
                    bool m_failHasBeenSet;

                    /**
                     * <p>耗时</p>
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_EVENTRANKPOINT_H_
