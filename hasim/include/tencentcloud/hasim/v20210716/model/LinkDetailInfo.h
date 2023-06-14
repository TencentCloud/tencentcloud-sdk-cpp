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

#ifndef TENCENTCLOUD_HASIM_V20210716_MODEL_LINKDETAILINFO_H_
#define TENCENTCLOUD_HASIM_V20210716_MODEL_LINKDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hasim/v20210716/model/DeviceReport.h>
#include <tencentcloud/hasim/v20210716/model/Tag.h>
#include <tencentcloud/hasim/v20210716/model/TeleOperatorCard.h>


namespace TencentCloud
{
    namespace Hasim
    {
        namespace V20210716
        {
            namespace Model
            {
                /**
                * 云兔连接详细信息
                */
                class LinkDetailInfo : public AbstractModel
                {
                public:
                    LinkDetailInfo();
                    ~LinkDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云兔连接ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID 云兔连接ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置云兔连接ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iD 云兔连接ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取卡片状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 卡片状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置卡片状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 卡片状态
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取激活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActiveTime 激活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActiveTime() const;

                    /**
                     * 设置激活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activeTime 激活时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActiveTime(const std::string& _activeTime);

                    /**
                     * 判断参数 ActiveTime 是否已赋值
                     * @return ActiveTime 是否已赋值
                     * 
                     */
                    bool ActiveTimeHasBeenSet() const;

                    /**
                     * 获取过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取数据用量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataUse 数据用量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDataUse() const;

                    /**
                     * 设置数据用量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataUse 数据用量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataUse(const double& _dataUse);

                    /**
                     * 判断参数 DataUse 是否已赋值
                     * @return DataUse 是否已赋值
                     * 
                     */
                    bool DataUseHasBeenSet() const;

                    /**
                     * 获取语音用量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AudioUse 语音用量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAudioUse() const;

                    /**
                     * 设置语音用量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _audioUse 语音用量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAudioUse(const int64_t& _audioUse);

                    /**
                     * 判断参数 AudioUse 是否已赋值
                     * @return AudioUse 是否已赋值
                     * 
                     */
                    bool AudioUseHasBeenSet() const;

                    /**
                     * 获取短信用量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SmsUse 短信用量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSmsUse() const;

                    /**
                     * 设置短信用量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _smsUse 短信用量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSmsUse(const int64_t& _smsUse);

                    /**
                     * 判断参数 SmsUse 是否已赋值
                     * @return SmsUse 是否已赋值
                     * 
                     */
                    bool SmsUseHasBeenSet() const;

                    /**
                     * 获取在线状态 0 未激活 1 在线 2 离线
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LinkedState 在线状态 0 未激活 1 在线 2 离线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLinkedState() const;

                    /**
                     * 设置在线状态 0 未激活 1 在线 2 离线
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _linkedState 在线状态 0 未激活 1 在线 2 离线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLinkedState(const int64_t& _linkedState);

                    /**
                     * 判断参数 LinkedState 是否已赋值
                     * @return LinkedState 是否已赋值
                     * 
                     */
                    bool LinkedStateHasBeenSet() const;

                    /**
                     * 获取预期策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TacticID 预期策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTacticID() const;

                    /**
                     * 设置预期策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tacticID 预期策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTacticID(const int64_t& _tacticID);

                    /**
                     * 判断参数 TacticID 是否已赋值
                     * @return TacticID 是否已赋值
                     * 
                     */
                    bool TacticIDHasBeenSet() const;

                    /**
                     * 获取策略下发状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TacticStatus 策略下发状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTacticStatus() const;

                    /**
                     * 设置策略下发状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tacticStatus 策略下发状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTacticStatus(const int64_t& _tacticStatus);

                    /**
                     * 判断参数 TacticStatus 是否已赋值
                     * @return TacticStatus 是否已赋值
                     * 
                     */
                    bool TacticStatusHasBeenSet() const;

                    /**
                     * 获取策略下发成功过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TacticExpireTime 策略下发成功过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTacticExpireTime() const;

                    /**
                     * 设置策略下发成功过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tacticExpireTime 策略下发成功过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTacticExpireTime(const std::string& _tacticExpireTime);

                    /**
                     * 判断参数 TacticExpireTime 是否已赋值
                     * @return TacticExpireTime 是否已赋值
                     * 
                     */
                    bool TacticExpireTimeHasBeenSet() const;

                    /**
                     * 获取高级日志预期状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsActiveLog 高级日志预期状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsActiveLog() const;

                    /**
                     * 设置高级日志预期状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isActiveLog 高级日志预期状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsActiveLog(const bool& _isActiveLog);

                    /**
                     * 判断参数 IsActiveLog 是否已赋值
                     * @return IsActiveLog 是否已赋值
                     * 
                     */
                    bool IsActiveLogHasBeenSet() const;

                    /**
                     * 获取运营商 1移动 2联通 3电信
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TeleOperator 运营商 1移动 2联通 3电信
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTeleOperator() const;

                    /**
                     * 设置运营商 1移动 2联通 3电信
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _teleOperator 运营商 1移动 2联通 3电信
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTeleOperator(const int64_t& _teleOperator);

                    /**
                     * 判断参数 TeleOperator 是否已赋值
                     * @return TeleOperator 是否已赋值
                     * 
                     */
                    bool TeleOperatorHasBeenSet() const;

                    /**
                     * 获取设备最新上报信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Report 设备最新上报信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DeviceReport GetReport() const;

                    /**
                     * 设置设备最新上报信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _report 设备最新上报信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReport(const DeviceReport& _report);

                    /**
                     * 判断参数 Report 是否已赋值
                     * @return Report 是否已赋值
                     * 
                     */
                    bool ReportHasBeenSet() const;

                    /**
                     * 获取标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取运营商ICCID信息集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cards 运营商ICCID信息集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TeleOperatorCard> GetCards() const;

                    /**
                     * 设置运营商ICCID信息集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cards 运营商ICCID信息集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCards(const std::vector<TeleOperatorCard>& _cards);

                    /**
                     * 判断参数 Cards 是否已赋值
                     * @return Cards 是否已赋值
                     * 
                     */
                    bool CardsHasBeenSet() const;

                    /**
                     * 获取云兔实际卡片ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CardID 云兔实际卡片ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCardID() const;

                    /**
                     * 设置云兔实际卡片ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cardID 云兔实际卡片ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCardID(const std::string& _cardID);

                    /**
                     * 判断参数 CardID 是否已赋值
                     * @return CardID 是否已赋值
                     * 
                     */
                    bool CardIDHasBeenSet() const;

                private:

                    /**
                     * 云兔连接ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 卡片状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 激活时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_activeTime;
                    bool m_activeTimeHasBeenSet;

                    /**
                     * 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 数据用量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_dataUse;
                    bool m_dataUseHasBeenSet;

                    /**
                     * 语音用量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_audioUse;
                    bool m_audioUseHasBeenSet;

                    /**
                     * 短信用量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_smsUse;
                    bool m_smsUseHasBeenSet;

                    /**
                     * 在线状态 0 未激活 1 在线 2 离线
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_linkedState;
                    bool m_linkedStateHasBeenSet;

                    /**
                     * 预期策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tacticID;
                    bool m_tacticIDHasBeenSet;

                    /**
                     * 策略下发状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_tacticStatus;
                    bool m_tacticStatusHasBeenSet;

                    /**
                     * 策略下发成功过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tacticExpireTime;
                    bool m_tacticExpireTimeHasBeenSet;

                    /**
                     * 高级日志预期状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isActiveLog;
                    bool m_isActiveLogHasBeenSet;

                    /**
                     * 运营商 1移动 2联通 3电信
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_teleOperator;
                    bool m_teleOperatorHasBeenSet;

                    /**
                     * 设备最新上报信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DeviceReport m_report;
                    bool m_reportHasBeenSet;

                    /**
                     * 标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 运营商ICCID信息集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TeleOperatorCard> m_cards;
                    bool m_cardsHasBeenSet;

                    /**
                     * 云兔实际卡片ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cardID;
                    bool m_cardIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HASIM_V20210716_MODEL_LINKDETAILINFO_H_
