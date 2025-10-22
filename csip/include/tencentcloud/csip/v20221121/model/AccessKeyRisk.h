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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYRISK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYRISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 访问密钥风险记录
                */
                class AccessKeyRisk : public AbstractModel
                {
                public:
                    AccessKeyRisk();
                    ~AccessKeyRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取风险名称
                     * @return Name 风险名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置风险名称
                     * @param _name 风险名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取风险等级
0-无效 1-提示 2-低危 3-中危 4-高危 5-严重
                     * @return Level 风险等级
0-无效 1-提示 2-低危 3-中危 4-高危 5-严重
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置风险等级
0-无效 1-提示 2-低危 3-中危 4-高危 5-严重
                     * @param _level 风险等级
0-无效 1-提示 2-低危 3-中危 4-高危 5-严重
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
                     * 获取风险记录ID
                     * @return ID 风险记录ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置风险记录ID
                     * @param _iD 风险记录ID
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
                     * 获取风险规则ID
                     * @return RiskRuleID 风险规则ID
                     * 
                     */
                    int64_t GetRiskRuleID() const;

                    /**
                     * 设置风险规则ID
                     * @param _riskRuleID 风险规则ID
                     * 
                     */
                    void SetRiskRuleID(const int64_t& _riskRuleID);

                    /**
                     * 判断参数 RiskRuleID 是否已赋值
                     * @return RiskRuleID 是否已赋值
                     * 
                     */
                    bool RiskRuleIDHasBeenSet() const;

                    /**
                     * 获取风险类型
0-配置风险
                     * @return RiskType 风险类型
0-配置风险
                     * 
                     */
                    int64_t GetRiskType() const;

                    /**
                     * 设置风险类型
0-配置风险
                     * @param _riskType 风险类型
0-配置风险
                     * 
                     */
                    void SetRiskType(const int64_t& _riskType);

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取访问密钥
                     * @return AccessKey 访问密钥
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置访问密钥
                     * @param _accessKey 访问密钥
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取访问密钥ID
                     * @return AccessKeyID 访问密钥ID
                     * 
                     */
                    uint64_t GetAccessKeyID() const;

                    /**
                     * 设置访问密钥ID
                     * @param _accessKeyID 访问密钥ID
                     * 
                     */
                    void SetAccessKeyID(const uint64_t& _accessKeyID);

                    /**
                     * 判断参数 AccessKeyID 是否已赋值
                     * @return AccessKeyID 是否已赋值
                     * 
                     */
                    bool AccessKeyIDHasBeenSet() const;

                    /**
                     * 获取访问密钥备注
                     * @return AccessKeyRemark 访问密钥备注
                     * 
                     */
                    std::string GetAccessKeyRemark() const;

                    /**
                     * 设置访问密钥备注
                     * @param _accessKeyRemark 访问密钥备注
                     * 
                     */
                    void SetAccessKeyRemark(const std::string& _accessKeyRemark);

                    /**
                     * 判断参数 AccessKeyRemark 是否已赋值
                     * @return AccessKeyRemark 是否已赋值
                     * 
                     */
                    bool AccessKeyRemarkHasBeenSet() const;

                    /**
                     * 获取风险检出时间
                     * @return RiskTime 风险检出时间
                     * 
                     */
                    std::string GetRiskTime() const;

                    /**
                     * 设置风险检出时间
                     * @param _riskTime 风险检出时间
                     * 
                     */
                    void SetRiskTime(const std::string& _riskTime);

                    /**
                     * 判断参数 RiskTime 是否已赋值
                     * @return RiskTime 是否已赋值
                     * 
                     */
                    bool RiskTimeHasBeenSet() const;

                    /**
                     * 获取风险状态
0-未处理 2-已忽略 3-已收敛
                     * @return Status 风险状态
0-未处理 2-已忽略 3-已收敛
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置风险状态
0-未处理 2-已忽略 3-已收敛
                     * @param _status 风险状态
0-未处理 2-已忽略 3-已收敛
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
                     * 获取风险标签
                     * @return Tag 风险标签
                     * 
                     */
                    std::vector<std::string> GetTag() const;

                    /**
                     * 设置风险标签
                     * @param _tag 风险标签
                     * 
                     */
                    void SetTag(const std::vector<std::string>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取风险证据
                     * @return Evidence 风险证据
                     * 
                     */
                    std::string GetEvidence() const;

                    /**
                     * 设置风险证据
                     * @param _evidence 风险证据
                     * 
                     */
                    void SetEvidence(const std::string& _evidence);

                    /**
                     * 判断参数 Evidence 是否已赋值
                     * @return Evidence 是否已赋值
                     * 
                     */
                    bool EvidenceHasBeenSet() const;

                    /**
                     * 获取风险描述
                     * @return Description 风险描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置风险描述
                     * @param _description 风险描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取所属主账号Uin
                     * @return Uin 所属主账号Uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置所属主账号Uin
                     * @param _uin 所属主账号Uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取所属主账号昵称
                     * @return Nickname 所属主账号昵称
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置所属主账号昵称
                     * @param _nickname 所属主账号昵称
                     * 
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取所属子账号Uin
                     * @return SubUin 所属子账号Uin
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置所属子账号Uin
                     * @param _subUin 所属子账号Uin
                     * 
                     */
                    void SetSubUin(const std::string& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取所属子账号昵称
                     * @return SubNickname 所属子账号昵称
                     * 
                     */
                    std::string GetSubNickname() const;

                    /**
                     * 设置所属子账号昵称
                     * @param _subNickname 所属子账号昵称
                     * 
                     */
                    void SetSubNickname(const std::string& _subNickname);

                    /**
                     * 判断参数 SubNickname 是否已赋值
                     * @return SubNickname 是否已赋值
                     * 
                     */
                    bool SubNicknameHasBeenSet() const;

                    /**
                     * 获取账号类型
0 主账号AK 1子账号AK
2 临时密钥
                     * @return Type 账号类型
0 主账号AK 1子账号AK
2 临时密钥
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置账号类型
0 主账号AK 1子账号AK
2 临时密钥
                     * @param _type 账号类型
0 主账号AK 1子账号AK
2 临时密钥
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取检测状态
0表示 已检测
1表示 检测中
                     * @return CheckStatus 检测状态
0表示 已检测
1表示 检测中
                     * 
                     */
                    int64_t GetCheckStatus() const;

                    /**
                     * 设置检测状态
0表示 已检测
1表示 检测中
                     * @param _checkStatus 检测状态
0表示 已检测
1表示 检测中
                     * 
                     */
                    void SetCheckStatus(const int64_t& _checkStatus);

                    /**
                     * 判断参数 CheckStatus 是否已赋值
                     * @return CheckStatus 是否已赋值
                     * 
                     */
                    bool CheckStatusHasBeenSet() const;

                    /**
                     * 获取所属appid
                     * @return AppID 所属appid
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置所属appid
                     * @param _appID 所属appid
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取对应风险的查询参数
                     * @return QueryParam 对应风险的查询参数
                     * 
                     */
                    std::string GetQueryParam() const;

                    /**
                     * 设置对应风险的查询参数
                     * @param _queryParam 对应风险的查询参数
                     * 
                     */
                    void SetQueryParam(const std::string& _queryParam);

                    /**
                     * 判断参数 QueryParam 是否已赋值
                     * @return QueryParam 是否已赋值
                     * 
                     */
                    bool QueryParamHasBeenSet() const;

                private:

                    /**
                     * 风险名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 风险等级
0-无效 1-提示 2-低危 3-中危 4-高危 5-严重
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 风险记录ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 风险规则ID
                     */
                    int64_t m_riskRuleID;
                    bool m_riskRuleIDHasBeenSet;

                    /**
                     * 风险类型
0-配置风险
                     */
                    int64_t m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * 访问密钥
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * 访问密钥ID
                     */
                    uint64_t m_accessKeyID;
                    bool m_accessKeyIDHasBeenSet;

                    /**
                     * 访问密钥备注
                     */
                    std::string m_accessKeyRemark;
                    bool m_accessKeyRemarkHasBeenSet;

                    /**
                     * 风险检出时间
                     */
                    std::string m_riskTime;
                    bool m_riskTimeHasBeenSet;

                    /**
                     * 风险状态
0-未处理 2-已忽略 3-已收敛
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 风险标签
                     */
                    std::vector<std::string> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 风险证据
                     */
                    std::string m_evidence;
                    bool m_evidenceHasBeenSet;

                    /**
                     * 风险描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 所属主账号Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 所属主账号昵称
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 所属子账号Uin
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * 所属子账号昵称
                     */
                    std::string m_subNickname;
                    bool m_subNicknameHasBeenSet;

                    /**
                     * 账号类型
0 主账号AK 1子账号AK
2 临时密钥
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 检测状态
0表示 已检测
1表示 检测中
                     */
                    int64_t m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                    /**
                     * 所属appid
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * 对应风险的查询参数
                     */
                    std::string m_queryParam;
                    bool m_queryParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYRISK_H_
