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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYRULEDETAIL_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYRULEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/DspaDiscoveryRDBRules.h>
#include <tencentcloud/dsgc/v20190723/model/DspaDiscoveryCOSRules.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 敏感数据扫描任务识别规则详情
                */
                class DspaDiscoveryRuleDetail : public AbstractModel
                {
                public:
                    DspaDiscoveryRuleDetail();
                    ~DspaDiscoveryRuleDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取规则名称
                     * @return Name 规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名称
                     * @param _name 规则名称
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
                     * 获取规则来源，取值：0 内置, 1 自定义
                     * @return Source 规则来源，取值：0 内置, 1 自定义
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置规则来源，取值：0 内置, 1 自定义
                     * @param _source 规则来源，取值：0 内置, 1 自定义
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取RDB规则详情
                     * @return RDBRules RDB规则详情
                     * 
                     */
                    DspaDiscoveryRDBRules GetRDBRules() const;

                    /**
                     * 设置RDB规则详情
                     * @param _rDBRules RDB规则详情
                     * 
                     */
                    void SetRDBRules(const DspaDiscoveryRDBRules& _rDBRules);

                    /**
                     * 判断参数 RDBRules 是否已赋值
                     * @return RDBRules 是否已赋值
                     * 
                     */
                    bool RDBRulesHasBeenSet() const;

                    /**
                     * 获取COS规则详情
                     * @return COSRules COS规则详情
                     * 
                     */
                    DspaDiscoveryCOSRules GetCOSRules() const;

                    /**
                     * 设置COS规则详情
                     * @param _cOSRules COS规则详情
                     * 
                     */
                    void SetCOSRules(const DspaDiscoveryCOSRules& _cOSRules);

                    /**
                     * 判断参数 COSRules 是否已赋值
                     * @return COSRules 是否已赋值
                     * 
                     */
                    bool COSRulesHasBeenSet() const;

                    /**
                     * 获取0关闭，1开启
                     * @return Status 0关闭，1开启
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置0关闭，1开启
                     * @param _status 0关闭，1开启
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
                     * 规则ID
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 规则来源，取值：0 内置, 1 自定义
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * RDB规则详情
                     */
                    DspaDiscoveryRDBRules m_rDBRules;
                    bool m_rDBRulesHasBeenSet;

                    /**
                     * COS规则详情
                     */
                    DspaDiscoveryCOSRules m_cOSRules;
                    bool m_cOSRulesHasBeenSet;

                    /**
                     * 0关闭，1开启
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYRULEDETAIL_H_
