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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPADISCOVERYRULEREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPADISCOVERYRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/ScanTaskRDBRules.h>
#include <tencentcloud/dsgc/v20190723/model/ScanTaskCOSRules.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * ModifyDSPADiscoveryRule请求参数结构体
                */
                class ModifyDSPADiscoveryRuleRequest : public AbstractModel
                {
                public:
                    ModifyDSPADiscoveryRuleRequest();
                    ~ModifyDSPADiscoveryRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例ID
                     * @return DspaId DSPA实例ID
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例ID
                     * @param _dspaId DSPA实例ID
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取规则名称，1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     * @return Name 规则名称，1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名称，1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     * @param _name 规则名称，1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
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
                     * 获取规则ID
                     * @return RuleId 规则ID
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _ruleId 规则ID
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取规则描述，最大长度为1024个字符
                     * @return Description 规则描述，最大长度为1024个字符
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述，最大长度为1024个字符
                     * @param _description 规则描述，最大长度为1024个字符
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
                     * 获取RDB类敏感数据识别规则
                     * @return RDBRules RDB类敏感数据识别规则
                     * 
                     */
                    ScanTaskRDBRules GetRDBRules() const;

                    /**
                     * 设置RDB类敏感数据识别规则
                     * @param _rDBRules RDB类敏感数据识别规则
                     * 
                     */
                    void SetRDBRules(const ScanTaskRDBRules& _rDBRules);

                    /**
                     * 判断参数 RDBRules 是否已赋值
                     * @return RDBRules 是否已赋值
                     * 
                     */
                    bool RDBRulesHasBeenSet() const;

                    /**
                     * 获取COS类敏感数据识别规则
                     * @return COSRules COS类敏感数据识别规则
                     * 
                     */
                    ScanTaskCOSRules GetCOSRules() const;

                    /**
                     * 设置COS类敏感数据识别规则
                     * @param _cOSRules COS类敏感数据识别规则
                     * 
                     */
                    void SetCOSRules(const ScanTaskCOSRules& _cOSRules);

                    /**
                     * 判断参数 COSRules 是否已赋值
                     * @return COSRules 是否已赋值
                     * 
                     */
                    bool COSRulesHasBeenSet() const;

                    /**
                     * 获取规则状态
                     * @return Status 规则状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置规则状态
                     * @param _status 规则状态
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * DSPA实例ID
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 规则名称，1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规则ID
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则描述，最大长度为1024个字符
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * RDB类敏感数据识别规则
                     */
                    ScanTaskRDBRules m_rDBRules;
                    bool m_rDBRulesHasBeenSet;

                    /**
                     * COS类敏感数据识别规则
                     */
                    ScanTaskCOSRules m_cOSRules;
                    bool m_cOSRulesHasBeenSet;

                    /**
                     * 规则状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPADISCOVERYRULEREQUEST_H_
