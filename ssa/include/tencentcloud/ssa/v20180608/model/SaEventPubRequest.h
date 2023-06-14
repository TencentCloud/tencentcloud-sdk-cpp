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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_SAEVENTPUBREQUEST_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_SAEVENTPUBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * SaEventPub请求参数结构体
                */
                class SaEventPubRequest : public AbstractModel
                {
                public:
                    SaEventPubRequest();
                    ~SaEventPubRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取受影响资产
                     * @return Asset 受影响资产
                     * 
                     */
                    std::string GetAsset() const;

                    /**
                     * 设置受影响资产
                     * @param _asset 受影响资产
                     * 
                     */
                    void SetAsset(const std::string& _asset);

                    /**
                     * 判断参数 Asset 是否已赋值
                     * @return Asset 是否已赋值
                     * 
                     */
                    bool AssetHasBeenSet() const;

                    /**
                     * 获取安全事件名称
                     * @return EventName 安全事件名称
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置安全事件名称
                     * @param _eventName 安全事件名称
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取安全事件1级分类，-1:未知 0:全部 1:攻击事件 2:侦查事件 3:僵木蠕毒 4:违规策略
                     * @return EventType1 安全事件1级分类，-1:未知 0:全部 1:攻击事件 2:侦查事件 3:僵木蠕毒 4:违规策略
                     * 
                     */
                    int64_t GetEventType1() const;

                    /**
                     * 设置安全事件1级分类，-1:未知 0:全部 1:攻击事件 2:侦查事件 3:僵木蠕毒 4:违规策略
                     * @param _eventType1 安全事件1级分类，-1:未知 0:全部 1:攻击事件 2:侦查事件 3:僵木蠕毒 4:违规策略
                     * 
                     */
                    void SetEventType1(const int64_t& _eventType1);

                    /**
                     * 判断参数 EventType1 是否已赋值
                     * @return EventType1 是否已赋值
                     * 
                     */
                    bool EventType1HasBeenSet() const;

                    /**
                     * 获取安全事件2级分类，-1:未知 0:全部 1:DDOS事件 2:Web攻击 3:木马 4:异地登录 5:密码破解
                     * @return EventType2 安全事件2级分类，-1:未知 0:全部 1:DDOS事件 2:Web攻击 3:木马 4:异地登录 5:密码破解
                     * 
                     */
                    int64_t GetEventType2() const;

                    /**
                     * 设置安全事件2级分类，-1:未知 0:全部 1:DDOS事件 2:Web攻击 3:木马 4:异地登录 5:密码破解
                     * @param _eventType2 安全事件2级分类，-1:未知 0:全部 1:DDOS事件 2:Web攻击 3:木马 4:异地登录 5:密码破解
                     * 
                     */
                    void SetEventType2(const int64_t& _eventType2);

                    /**
                     * 判断参数 EventType2 是否已赋值
                     * @return EventType2 是否已赋值
                     * 
                     */
                    bool EventType2HasBeenSet() const;

                    /**
                     * 获取风险等级，-1:未知 0:全部 1:低危 2:中危 3:高危 4:严重，可多选，如：1,2
                     * @return Level 风险等级，-1:未知 0:全部 1:低危 2:中危 3:高危 4:严重，可多选，如：1,2
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置风险等级，-1:未知 0:全部 1:低危 2:中危 3:高危 4:严重，可多选，如：1,2
                     * @param _level 风险等级，-1:未知 0:全部 1:低危 2:中危 3:高危 4:严重，可多选，如：1,2
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取安全事件状态，-1:未知 0:全部 1:待处理 2:已处理 3:误报 4:已忽略 5:已知晓 6:已信任
                     * @return Status 安全事件状态，-1:未知 0:全部 1:待处理 2:已处理 3:误报 4:已忽略 5:已知晓 6:已信任
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置安全事件状态，-1:未知 0:全部 1:待处理 2:已处理 3:误报 4:已忽略 5:已知晓 6:已信任
                     * @param _status 安全事件状态，-1:未知 0:全部 1:待处理 2:已处理 3:误报 4:已忽略 5:已知晓 6:已信任
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询起始地址
                     * @return Offset 查询起始地址
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询起始地址
                     * @param _offset 查询起始地址
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询个数
                     * @return Limit 查询个数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置查询个数
                     * @param _limit 查询个数
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取私有字段和公有字段映射的原始采集数据唯一标识的MD5值
                     * @return OldIdMd5 私有字段和公有字段映射的原始采集数据唯一标识的MD5值
                     * 
                     */
                    std::string GetOldIdMd5() const;

                    /**
                     * 设置私有字段和公有字段映射的原始采集数据唯一标识的MD5值
                     * @param _oldIdMd5 私有字段和公有字段映射的原始采集数据唯一标识的MD5值
                     * 
                     */
                    void SetOldIdMd5(const std::string& _oldIdMd5);

                    /**
                     * 判断参数 OldIdMd5 是否已赋值
                     * @return OldIdMd5 是否已赋值
                     * 
                     */
                    bool OldIdMd5HasBeenSet() const;

                private:

                    /**
                     * 受影响资产
                     */
                    std::string m_asset;
                    bool m_assetHasBeenSet;

                    /**
                     * 安全事件名称
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * 安全事件1级分类，-1:未知 0:全部 1:攻击事件 2:侦查事件 3:僵木蠕毒 4:违规策略
                     */
                    int64_t m_eventType1;
                    bool m_eventType1HasBeenSet;

                    /**
                     * 安全事件2级分类，-1:未知 0:全部 1:DDOS事件 2:Web攻击 3:木马 4:异地登录 5:密码破解
                     */
                    int64_t m_eventType2;
                    bool m_eventType2HasBeenSet;

                    /**
                     * 风险等级，-1:未知 0:全部 1:低危 2:中危 3:高危 4:严重，可多选，如：1,2
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 安全事件状态，-1:未知 0:全部 1:待处理 2:已处理 3:误报 4:已忽略 5:已知晓 6:已信任
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询起始地址
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询个数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 私有字段和公有字段映射的原始采集数据唯一标识的MD5值
                     */
                    std::string m_oldIdMd5;
                    bool m_oldIdMd5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_SAEVENTPUBREQUEST_H_
