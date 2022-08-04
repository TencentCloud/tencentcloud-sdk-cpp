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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_BOTMANAGEDRULE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_BOTMANAGEDRULE_H_

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
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Bot 规则，下列规则ID可参考接口 DescribeBotManagedRules返回的ID信息
                */
                class BotManagedRule : public AbstractModel
                {
                public:
                    BotManagedRule();
                    ~BotManagedRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取想开启的规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ManagedIds 想开启的规则id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> GetManagedIds() const;

                    /**
                     * 设置想开启的规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ManagedIds 想开启的规则id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetManagedIds(const std::vector<int64_t>& _managedIds);

                    /**
                     * 判断参数 ManagedIds 是否已赋值
                     * @return ManagedIds 是否已赋值
                     */
                    bool ManagedIdsHasBeenSet() const;

                    /**
                     * 获取本规则的id
                     * @return RuleID 本规则的id
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置本规则的id
                     * @param RuleID 本规则的id
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取drop/trans/monitor/alg
                     * @return Action drop/trans/monitor/alg
                     */
                    std::string GetAction() const;

                    /**
                     * 设置drop/trans/monitor/alg
                     * @param Action drop/trans/monitor/alg
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取ip封禁的惩罚时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PunishTime ip封禁的惩罚时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPunishTime() const;

                    /**
                     * 设置ip封禁的惩罚时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PunishTime ip封禁的惩罚时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPunishTime(const int64_t& _punishTime);

                    /**
                     * 判断参数 PunishTime 是否已赋值
                     * @return PunishTime 是否已赋值
                     */
                    bool PunishTimeHasBeenSet() const;

                    /**
                     * 获取单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PunishTimeUnit 单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPunishTimeUnit() const;

                    /**
                     * 设置单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PunishTimeUnit 单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPunishTimeUnit(const std::string& _punishTimeUnit);

                    /**
                     * 判断参数 PunishTimeUnit 是否已赋值
                     * @return PunishTimeUnit 是否已赋值
                     */
                    bool PunishTimeUnitHasBeenSet() const;

                    /**
                     * 获取自定义返回页面的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 自定义返回页面的名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置自定义返回页面的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 自定义返回页面的名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取自定义返回页面的实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageId 自定义返回页面的实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPageId() const;

                    /**
                     * 设置自定义返回页面的实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PageId 自定义返回页面的实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPageId(const int64_t& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取重定向时候的地址，必须为本用户接入的站点子域名，使用URLENCODE
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedirectUrl 重定向时候的地址，必须为本用户接入的站点子域名，使用URLENCODE
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置重定向时候的地址，必须为本用户接入的站点子域名，使用URLENCODE
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RedirectUrl 重定向时候的地址，必须为本用户接入的站点子域名，使用URLENCODE
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRedirectUrl(const std::string& _redirectUrl);

                    /**
                     * 判断参数 RedirectUrl 是否已赋值
                     * @return RedirectUrl 是否已赋值
                     */
                    bool RedirectUrlHasBeenSet() const;

                    /**
                     * 获取重定向时候的返回码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseCode 重定向时候的返回码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetResponseCode() const;

                    /**
                     * 设置重定向时候的返回码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResponseCode 重定向时候的返回码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResponseCode(const int64_t& _responseCode);

                    /**
                     * 判断参数 ResponseCode 是否已赋值
                     * @return ResponseCode 是否已赋值
                     */
                    bool ResponseCodeHasBeenSet() const;

                    /**
                     * 获取放行的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransManagedIds 放行的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> GetTransManagedIds() const;

                    /**
                     * 设置放行的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TransManagedIds 放行的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTransManagedIds(const std::vector<int64_t>& _transManagedIds);

                    /**
                     * 判断参数 TransManagedIds 是否已赋值
                     * @return TransManagedIds 是否已赋值
                     */
                    bool TransManagedIdsHasBeenSet() const;

                    /**
                     * 获取JS挑战的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlgManagedIds JS挑战的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> GetAlgManagedIds() const;

                    /**
                     * 设置JS挑战的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AlgManagedIds JS挑战的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAlgManagedIds(const std::vector<int64_t>& _algManagedIds);

                    /**
                     * 判断参数 AlgManagedIds 是否已赋值
                     * @return AlgManagedIds 是否已赋值
                     */
                    bool AlgManagedIdsHasBeenSet() const;

                    /**
                     * 获取数字验证码的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CapManagedIds 数字验证码的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> GetCapManagedIds() const;

                    /**
                     * 设置数字验证码的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CapManagedIds 数字验证码的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCapManagedIds(const std::vector<int64_t>& _capManagedIds);

                    /**
                     * 判断参数 CapManagedIds 是否已赋值
                     * @return CapManagedIds 是否已赋值
                     */
                    bool CapManagedIdsHasBeenSet() const;

                    /**
                     * 获取观察的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonManagedIds 观察的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> GetMonManagedIds() const;

                    /**
                     * 设置观察的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MonManagedIds 观察的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMonManagedIds(const std::vector<int64_t>& _monManagedIds);

                    /**
                     * 判断参数 MonManagedIds 是否已赋值
                     * @return MonManagedIds 是否已赋值
                     */
                    bool MonManagedIdsHasBeenSet() const;

                    /**
                     * 获取拦截的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DropManagedIds 拦截的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> GetDropManagedIds() const;

                    /**
                     * 设置拦截的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DropManagedIds 拦截的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDropManagedIds(const std::vector<int64_t>& _dropManagedIds);

                    /**
                     * 判断参数 DropManagedIds 是否已赋值
                     * @return DropManagedIds 是否已赋值
                     */
                    bool DropManagedIdsHasBeenSet() const;

                private:

                    /**
                     * 想开启的规则id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_managedIds;
                    bool m_managedIdsHasBeenSet;

                    /**
                     * 本规则的id
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * drop/trans/monitor/alg
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * ip封禁的惩罚时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_punishTime;
                    bool m_punishTimeHasBeenSet;

                    /**
                     * 单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_punishTimeUnit;
                    bool m_punishTimeUnitHasBeenSet;

                    /**
                     * 自定义返回页面的名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 自定义返回页面的实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * 重定向时候的地址，必须为本用户接入的站点子域名，使用URLENCODE
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

                    /**
                     * 重定向时候的返回码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_responseCode;
                    bool m_responseCodeHasBeenSet;

                    /**
                     * 放行的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_transManagedIds;
                    bool m_transManagedIdsHasBeenSet;

                    /**
                     * JS挑战的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_algManagedIds;
                    bool m_algManagedIdsHasBeenSet;

                    /**
                     * 数字验证码的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_capManagedIds;
                    bool m_capManagedIdsHasBeenSet;

                    /**
                     * 观察的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_monManagedIds;
                    bool m_monManagedIdsHasBeenSet;

                    /**
                     * 拦截的规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_dropManagedIds;
                    bool m_dropManagedIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_BOTMANAGEDRULE_H_
