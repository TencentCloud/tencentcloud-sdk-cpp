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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_SMSFREEQUOTA_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_SMSFREEQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 短信免费量
                */
                class SmsFreeQuota : public AbstractModel
                {
                public:
                    SmsFreeQuota();
                    ~SmsFreeQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取免费量总条数
                     * @return FreeQuota 免费量总条数
                     * 
                     */
                    uint64_t GetFreeQuota() const;

                    /**
                     * 设置免费量总条数
                     * @param _freeQuota 免费量总条数
                     * 
                     */
                    void SetFreeQuota(const uint64_t& _freeQuota);

                    /**
                     * 判断参数 FreeQuota 是否已赋值
                     * @return FreeQuota 是否已赋值
                     * 
                     */
                    bool FreeQuotaHasBeenSet() const;

                    /**
                     * 获取共计已使用总条数
                     * @return TotalUsedQuota 共计已使用总条数
                     * 
                     */
                    uint64_t GetTotalUsedQuota() const;

                    /**
                     * 设置共计已使用总条数
                     * @param _totalUsedQuota 共计已使用总条数
                     * 
                     */
                    void SetTotalUsedQuota(const uint64_t& _totalUsedQuota);

                    /**
                     * 判断参数 TotalUsedQuota 是否已赋值
                     * @return TotalUsedQuota 是否已赋值
                     * 
                     */
                    bool TotalUsedQuotaHasBeenSet() const;

                    /**
                     * 获取免费周期起点，0000-00-00 00:00:00 形式
                     * @return CycleStart 免费周期起点，0000-00-00 00:00:00 形式
                     * 
                     */
                    std::string GetCycleStart() const;

                    /**
                     * 设置免费周期起点，0000-00-00 00:00:00 形式
                     * @param _cycleStart 免费周期起点，0000-00-00 00:00:00 形式
                     * 
                     */
                    void SetCycleStart(const std::string& _cycleStart);

                    /**
                     * 判断参数 CycleStart 是否已赋值
                     * @return CycleStart 是否已赋值
                     * 
                     */
                    bool CycleStartHasBeenSet() const;

                    /**
                     * 获取免费周期终点，0000-00-00 00:00:00 形式
                     * @return CycleEnd 免费周期终点，0000-00-00 00:00:00 形式
                     * 
                     */
                    std::string GetCycleEnd() const;

                    /**
                     * 设置免费周期终点，0000-00-00 00:00:00 形式
                     * @param _cycleEnd 免费周期终点，0000-00-00 00:00:00 形式
                     * 
                     */
                    void SetCycleEnd(const std::string& _cycleEnd);

                    /**
                     * 判断参数 CycleEnd 是否已赋值
                     * @return CycleEnd 是否已赋值
                     * 
                     */
                    bool CycleEndHasBeenSet() const;

                    /**
                     * 获取今天已使用总条数
                     * @return TodayUsedQuota 今天已使用总条数
                     * 
                     */
                    uint64_t GetTodayUsedQuota() const;

                    /**
                     * 设置今天已使用总条数
                     * @param _todayUsedQuota 今天已使用总条数
                     * 
                     */
                    void SetTodayUsedQuota(const uint64_t& _todayUsedQuota);

                    /**
                     * 判断参数 TodayUsedQuota 是否已赋值
                     * @return TodayUsedQuota 是否已赋值
                     * 
                     */
                    bool TodayUsedQuotaHasBeenSet() const;

                private:

                    /**
                     * 免费量总条数
                     */
                    uint64_t m_freeQuota;
                    bool m_freeQuotaHasBeenSet;

                    /**
                     * 共计已使用总条数
                     */
                    uint64_t m_totalUsedQuota;
                    bool m_totalUsedQuotaHasBeenSet;

                    /**
                     * 免费周期起点，0000-00-00 00:00:00 形式
                     */
                    std::string m_cycleStart;
                    bool m_cycleStartHasBeenSet;

                    /**
                     * 免费周期终点，0000-00-00 00:00:00 形式
                     */
                    std::string m_cycleEnd;
                    bool m_cycleEndHasBeenSet;

                    /**
                     * 今天已使用总条数
                     */
                    uint64_t m_todayUsedQuota;
                    bool m_todayUsedQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_SMSFREEQUOTA_H_
