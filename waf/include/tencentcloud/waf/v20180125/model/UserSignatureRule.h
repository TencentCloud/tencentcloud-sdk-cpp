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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_USERSIGNATURERULE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_USERSIGNATURERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 用户特征规则描述
                */
                class UserSignatureRule : public AbstractModel
                {
                public:
                    UserSignatureRule();
                    ~UserSignatureRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取特征ID
                     * @return ID 特征ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置特征ID
                     * @param _iD 特征ID
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取规则开关
                     * @return Status 规则开关
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置规则开关
                     * @param _status 规则开关
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
                     * 获取主类ID
                     * @return MainClassID 主类ID
                     * 
                     */
                    std::string GetMainClassID() const;

                    /**
                     * 设置主类ID
                     * @param _mainClassID 主类ID
                     * 
                     */
                    void SetMainClassID(const std::string& _mainClassID);

                    /**
                     * 判断参数 MainClassID 是否已赋值
                     * @return MainClassID 是否已赋值
                     * 
                     */
                    bool MainClassIDHasBeenSet() const;

                    /**
                     * 获取子类ID
                     * @return SubClassID 子类ID
                     * 
                     */
                    std::string GetSubClassID() const;

                    /**
                     * 设置子类ID
                     * @param _subClassID 子类ID
                     * 
                     */
                    void SetSubClassID(const std::string& _subClassID);

                    /**
                     * 判断参数 SubClassID 是否已赋值
                     * @return SubClassID 是否已赋值
                     * 
                     */
                    bool SubClassIDHasBeenSet() const;

                    /**
                     * 获取CVE ID
                     * @return CveID CVE ID
                     * 
                     */
                    std::string GetCveID() const;

                    /**
                     * 设置CVE ID
                     * @param _cveID CVE ID
                     * 
                     */
                    void SetCveID(const std::string& _cveID);

                    /**
                     * 判断参数 CveID 是否已赋值
                     * @return CveID 是否已赋值
                     * 
                     */
                    bool CveIDHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return ModifyTime 更新时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置更新时间
                     * @param _modifyTime 更新时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取主类名字，根据Language字段输出中文/英文
                     * @return MainClassName 主类名字，根据Language字段输出中文/英文
                     * 
                     */
                    std::string GetMainClassName() const;

                    /**
                     * 设置主类名字，根据Language字段输出中文/英文
                     * @param _mainClassName 主类名字，根据Language字段输出中文/英文
                     * 
                     */
                    void SetMainClassName(const std::string& _mainClassName);

                    /**
                     * 判断参数 MainClassName 是否已赋值
                     * @return MainClassName 是否已赋值
                     * 
                     */
                    bool MainClassNameHasBeenSet() const;

                    /**
                     * 获取子类名字，根据Language字段输出中文/英文，若子类id为00000000，此字段为空
                     * @return SubClassName 子类名字，根据Language字段输出中文/英文，若子类id为00000000，此字段为空
                     * 
                     */
                    std::string GetSubClassName() const;

                    /**
                     * 设置子类名字，根据Language字段输出中文/英文，若子类id为00000000，此字段为空
                     * @param _subClassName 子类名字，根据Language字段输出中文/英文，若子类id为00000000，此字段为空
                     * 
                     */
                    void SetSubClassName(const std::string& _subClassName);

                    /**
                     * 判断参数 SubClassName 是否已赋值
                     * @return SubClassName 是否已赋值
                     * 
                     */
                    bool SubClassNameHasBeenSet() const;

                    /**
                     * 获取规则描述
                     * @return Description 规则描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述
                     * @param _description 规则描述
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
                     * 获取0/1
                     * @return Reason 0/1
                     * 
                     */
                    int64_t GetReason() const;

                    /**
                     * 设置0/1
                     * @param _reason 0/1
                     * 
                     */
                    void SetReason(const int64_t& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取1: 高危 2:中危 3:低危
                     * @return RiskLevel 1: 高危 2:中危 3:低危
                     * 
                     */
                    int64_t GetRiskLevel() const;

                    /**
                     * 设置1: 高危 2:中危 3:低危
                     * @param _riskLevel 1: 高危 2:中危 3:低危
                     * 
                     */
                    void SetRiskLevel(const int64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                private:

                    /**
                     * 特征ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 规则开关
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 主类ID
                     */
                    std::string m_mainClassID;
                    bool m_mainClassIDHasBeenSet;

                    /**
                     * 子类ID
                     */
                    std::string m_subClassID;
                    bool m_subClassIDHasBeenSet;

                    /**
                     * CVE ID
                     */
                    std::string m_cveID;
                    bool m_cveIDHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 主类名字，根据Language字段输出中文/英文
                     */
                    std::string m_mainClassName;
                    bool m_mainClassNameHasBeenSet;

                    /**
                     * 子类名字，根据Language字段输出中文/英文，若子类id为00000000，此字段为空
                     */
                    std::string m_subClassName;
                    bool m_subClassNameHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 0/1
                     */
                    int64_t m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 1: 高危 2:中危 3:低危
                     */
                    int64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_USERSIGNATURERULE_H_
