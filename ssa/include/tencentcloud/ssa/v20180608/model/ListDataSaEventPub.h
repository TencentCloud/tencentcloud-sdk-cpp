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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_LISTDATASAEVENTPUB_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_LISTDATASAEVENTPUB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * DataSaEventPub
                */
                class ListDataSaEventPub : public AbstractModel
                {
                public:
                    ListDataSaEventPub();
                    ~ListDataSaEventPub() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间
                     * @return Time 时间
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置时间
                     * @param _time 时间
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
                     * 获取安全事件1级分类
                     * @return EventType1 安全事件1级分类
                     * 
                     */
                    int64_t GetEventType1() const;

                    /**
                     * 设置安全事件1级分类
                     * @param _eventType1 安全事件1级分类
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
                     * 获取安全事件2级分类
                     * @return EventType2 安全事件2级分类
                     * 
                     */
                    int64_t GetEventType2() const;

                    /**
                     * 设置安全事件2级分类
                     * @param _eventType2 安全事件2级分类
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
                     * 获取风险等级
                     * @return Level 风险等级
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置风险等级
                     * @param _level 风险等级
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取安全事件状态
                     * @return Status 安全事件状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置安全事件状态
                     * @param _status 安全事件状态
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
                     * 获取攻击源ip
                     * @return SrcIp 攻击源ip
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置攻击源ip
                     * @param _srcIp 攻击源ip
                     * 
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取攻击目标ip
                     * @return DstIp 攻击目标ip
                     * 
                     */
                    std::string GetDstIp() const;

                    /**
                     * 设置攻击目标ip
                     * @param _dstIp 攻击目标ip
                     * 
                     */
                    void SetDstIp(const std::string& _dstIp);

                    /**
                     * 判断参数 DstIp 是否已赋值
                     * @return DstIp 是否已赋值
                     * 
                     */
                    bool DstIpHasBeenSet() const;

                    /**
                     * 获取攻击目标端口
                     * @return DstPort 攻击目标端口
                     * 
                     */
                    int64_t GetDstPort() const;

                    /**
                     * 设置攻击目标端口
                     * @param _dstPort 攻击目标端口
                     * 
                     */
                    void SetDstPort(const int64_t& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     * 
                     */
                    bool DstPortHasBeenSet() const;

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
                     * 时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 安全事件1级分类
                     */
                    int64_t m_eventType1;
                    bool m_eventType1HasBeenSet;

                    /**
                     * 安全事件2级分类
                     */
                    int64_t m_eventType2;
                    bool m_eventType2HasBeenSet;

                    /**
                     * 安全事件名称
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * 风险等级
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 安全事件状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 攻击源ip
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * 攻击目标ip
                     */
                    std::string m_dstIp;
                    bool m_dstIpHasBeenSet;

                    /**
                     * 攻击目标端口
                     */
                    int64_t m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * 受影响资产
                     */
                    std::string m_asset;
                    bool m_assetHasBeenSet;

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

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_LISTDATASAEVENTPUB_H_
