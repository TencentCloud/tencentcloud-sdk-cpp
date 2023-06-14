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

#ifndef TENCENTCLOUD_HASIM_V20210716_MODEL_TELEOPERATORCARD_H_
#define TENCENTCLOUD_HASIM_V20210716_MODEL_TELEOPERATORCARD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hasim
    {
        namespace V20210716
        {
            namespace Model
            {
                /**
                * 运营商卡片信息
                */
                class TeleOperatorCard : public AbstractModel
                {
                public:
                    TeleOperatorCard();
                    ~TeleOperatorCard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开户时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountTime 开户时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountTime() const;

                    /**
                     * 设置开户时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountTime 开户时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountTime(const std::string& _accountTime);

                    /**
                     * 判断参数 AccountTime 是否已赋值
                     * @return AccountTime 是否已赋值
                     * 
                     */
                    bool AccountTimeHasBeenSet() const;

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
                     * 获取运营商ICCID
                     * @return ICCID 运营商ICCID
                     * 
                     */
                    std::string GetICCID() const;

                    /**
                     * 设置运营商ICCID
                     * @param _iCCID 运营商ICCID
                     * 
                     */
                    void SetICCID(const std::string& _iCCID);

                    /**
                     * 判断参数 ICCID 是否已赋值
                     * @return ICCID 是否已赋值
                     * 
                     */
                    bool ICCIDHasBeenSet() const;

                    /**
                     * 获取云兔卡ID
                     * @return LinkID 云兔卡ID
                     * 
                     */
                    int64_t GetLinkID() const;

                    /**
                     * 设置云兔卡ID
                     * @param _linkID 云兔卡ID
                     * 
                     */
                    void SetLinkID(const int64_t& _linkID);

                    /**
                     * 判断参数 LinkID 是否已赋值
                     * @return LinkID 是否已赋值
                     * 
                     */
                    bool LinkIDHasBeenSet() const;

                    /**
                     * 获取电话号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Msisdn 电话号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsisdn() const;

                    /**
                     * 设置电话号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msisdn 电话号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsisdn(const std::string& _msisdn);

                    /**
                     * 判断参数 Msisdn 是否已赋值
                     * @return Msisdn 是否已赋值
                     * 
                     */
                    bool MsisdnHasBeenSet() const;

                    /**
                     * 获取移动用户识别码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IMSI 移动用户识别码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIMSI() const;

                    /**
                     * 设置移动用户识别码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iMSI 移动用户识别码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIMSI(const std::string& _iMSI);

                    /**
                     * 判断参数 IMSI 是否已赋值
                     * @return IMSI 是否已赋值
                     * 
                     */
                    bool IMSIHasBeenSet() const;

                    /**
                     * 获取运营商: 1 移动 2 联通 3 电信
                     * @return TeleOperator 运营商: 1 移动 2 联通 3 电信
                     * 
                     */
                    int64_t GetTeleOperator() const;

                    /**
                     * 设置运营商: 1 移动 2 联通 3 电信
                     * @param _teleOperator 运营商: 1 移动 2 联通 3 电信
                     * 
                     */
                    void SetTeleOperator(const int64_t& _teleOperator);

                    /**
                     * 判断参数 TeleOperator 是否已赋值
                     * @return TeleOperator 是否已赋值
                     * 
                     */
                    bool TeleOperatorHasBeenSet() const;

                private:

                    /**
                     * 开户时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountTime;
                    bool m_accountTimeHasBeenSet;

                    /**
                     * 激活时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_activeTime;
                    bool m_activeTimeHasBeenSet;

                    /**
                     * 运营商ICCID
                     */
                    std::string m_iCCID;
                    bool m_iCCIDHasBeenSet;

                    /**
                     * 云兔卡ID
                     */
                    int64_t m_linkID;
                    bool m_linkIDHasBeenSet;

                    /**
                     * 电话号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msisdn;
                    bool m_msisdnHasBeenSet;

                    /**
                     * 移动用户识别码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iMSI;
                    bool m_iMSIHasBeenSet;

                    /**
                     * 运营商: 1 移动 2 联通 3 电信
                     */
                    int64_t m_teleOperator;
                    bool m_teleOperatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HASIM_V20210716_MODEL_TELEOPERATORCARD_H_
