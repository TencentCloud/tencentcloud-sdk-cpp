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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_INSTANCECONFIGINFO_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_INSTANCECONFIGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * 集群配置信息
                */
                class InstanceConfigInfo : public AbstractModel
                {
                public:
                    InstanceConfigInfo();
                    ~InstanceConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>配置项名称</p>
                     * @return ConfKey <p>配置项名称</p>
                     * 
                     */
                    std::string GetConfKey() const;

                    /**
                     * 设置<p>配置项名称</p>
                     * @param _confKey <p>配置项名称</p>
                     * 
                     */
                    void SetConfKey(const std::string& _confKey);

                    /**
                     * 判断参数 ConfKey 是否已赋值
                     * @return ConfKey 是否已赋值
                     * 
                     */
                    bool ConfKeyHasBeenSet() const;

                    /**
                     * 获取<p>配置项内容</p>
                     * @return ConfValue <p>配置项内容</p>
                     * 
                     */
                    std::string GetConfValue() const;

                    /**
                     * 设置<p>配置项内容</p>
                     * @param _confValue <p>配置项内容</p>
                     * 
                     */
                    void SetConfValue(const std::string& _confValue);

                    /**
                     * 判断参数 ConfValue 是否已赋值
                     * @return ConfValue 是否已赋值
                     * 
                     */
                    bool ConfValueHasBeenSet() const;

                    /**
                     * 获取<p>默认值</p>
                     * @return DefaultValue <p>默认值</p>
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置<p>默认值</p>
                     * @param _defaultValue <p>默认值</p>
                     * 
                     */
                    void SetDefaultValue(const std::string& _defaultValue);

                    /**
                     * 判断参数 DefaultValue 是否已赋值
                     * @return DefaultValue 是否已赋值
                     * 
                     */
                    bool DefaultValueHasBeenSet() const;

                    /**
                     * 获取<p>是否需要重启</p>
                     * @return NeedRestart <p>是否需要重启</p>
                     * 
                     */
                    bool GetNeedRestart() const;

                    /**
                     * 设置<p>是否需要重启</p>
                     * @param _needRestart <p>是否需要重启</p>
                     * 
                     */
                    void SetNeedRestart(const bool& _needRestart);

                    /**
                     * 判断参数 NeedRestart 是否已赋值
                     * @return NeedRestart 是否已赋值
                     * 
                     */
                    bool NeedRestartHasBeenSet() const;

                    /**
                     * 获取<p>是否可编辑</p>
                     * @return Editable <p>是否可编辑</p>
                     * 
                     */
                    bool GetEditable() const;

                    /**
                     * 设置<p>是否可编辑</p>
                     * @param _editable <p>是否可编辑</p>
                     * 
                     */
                    void SetEditable(const bool& _editable);

                    /**
                     * 判断参数 Editable 是否已赋值
                     * @return Editable 是否已赋值
                     * 
                     */
                    bool EditableHasBeenSet() const;

                    /**
                     * 获取<p>配置项解释</p>
                     * @return ConfDesc <p>配置项解释</p>
                     * 
                     */
                    std::string GetConfDesc() const;

                    /**
                     * 设置<p>配置项解释</p>
                     * @param _confDesc <p>配置项解释</p>
                     * 
                     */
                    void SetConfDesc(const std::string& _confDesc);

                    /**
                     * 判断参数 ConfDesc 是否已赋值
                     * @return ConfDesc 是否已赋值
                     * 
                     */
                    bool ConfDescHasBeenSet() const;

                    /**
                     * 获取<p>文件名称</p>
                     * @return FileName <p>文件名称</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>文件名称</p>
                     * @param _fileName <p>文件名称</p>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>规则名称类型</p>
                     * @return ModifyRuleType <p>规则名称类型</p>
                     * 
                     */
                    std::string GetModifyRuleType() const;

                    /**
                     * 设置<p>规则名称类型</p>
                     * @param _modifyRuleType <p>规则名称类型</p>
                     * 
                     */
                    void SetModifyRuleType(const std::string& _modifyRuleType);

                    /**
                     * 判断参数 ModifyRuleType 是否已赋值
                     * @return ModifyRuleType 是否已赋值
                     * 
                     */
                    bool ModifyRuleTypeHasBeenSet() const;

                    /**
                     * 获取<p>规则名称内容</p>
                     * @return ModifyRuleValue <p>规则名称内容</p>
                     * 
                     */
                    std::string GetModifyRuleValue() const;

                    /**
                     * 设置<p>规则名称内容</p>
                     * @param _modifyRuleValue <p>规则名称内容</p>
                     * 
                     */
                    void SetModifyRuleValue(const std::string& _modifyRuleValue);

                    /**
                     * 判断参数 ModifyRuleValue 是否已赋值
                     * @return ModifyRuleValue 是否已赋值
                     * 
                     */
                    bool ModifyRuleValueHasBeenSet() const;

                    /**
                     * 获取<p>修改人的uin</p>
                     * @return Uin <p>修改人的uin</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>修改人的uin</p>
                     * @param _uin <p>修改人的uin</p>
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
                     * 获取<p>修改时间</p>
                     * @return ModifyTime <p>修改时间</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>修改时间</p>
                     * @param _modifyTime <p>修改时间</p>
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
                     * 获取<p>取值范围</p>
                     * @return ValueRange <p>取值范围</p>
                     * 
                     */
                    std::string GetValueRange() const;

                    /**
                     * 设置<p>取值范围</p>
                     * @param _valueRange <p>取值范围</p>
                     * 
                     */
                    void SetValueRange(const std::string& _valueRange);

                    /**
                     * 判断参数 ValueRange 是否已赋值
                     * @return ValueRange 是否已赋值
                     * 
                     */
                    bool ValueRangeHasBeenSet() const;

                    /**
                     * 获取<p>标记异常</p>
                     * @return AbnormalParam <p>标记异常</p>
                     * 
                     */
                    std::string GetAbnormalParam() const;

                    /**
                     * 设置<p>标记异常</p>
                     * @param _abnormalParam <p>标记异常</p>
                     * 
                     */
                    void SetAbnormalParam(const std::string& _abnormalParam);

                    /**
                     * 判断参数 AbnormalParam 是否已赋值
                     * @return AbnormalParam 是否已赋值
                     * 
                     */
                    bool AbnormalParamHasBeenSet() const;

                    /**
                     * 获取<p>是否生效</p>
                     * @return ConfigEffective <p>是否生效</p>
                     * 
                     */
                    std::string GetConfigEffective() const;

                    /**
                     * 设置<p>是否生效</p>
                     * @param _configEffective <p>是否生效</p>
                     * 
                     */
                    void SetConfigEffective(const std::string& _configEffective);

                    /**
                     * 判断参数 ConfigEffective 是否已赋值
                     * @return ConfigEffective 是否已赋值
                     * 
                     */
                    bool ConfigEffectiveHasBeenSet() const;

                private:

                    /**
                     * <p>配置项名称</p>
                     */
                    std::string m_confKey;
                    bool m_confKeyHasBeenSet;

                    /**
                     * <p>配置项内容</p>
                     */
                    std::string m_confValue;
                    bool m_confValueHasBeenSet;

                    /**
                     * <p>默认值</p>
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * <p>是否需要重启</p>
                     */
                    bool m_needRestart;
                    bool m_needRestartHasBeenSet;

                    /**
                     * <p>是否可编辑</p>
                     */
                    bool m_editable;
                    bool m_editableHasBeenSet;

                    /**
                     * <p>配置项解释</p>
                     */
                    std::string m_confDesc;
                    bool m_confDescHasBeenSet;

                    /**
                     * <p>文件名称</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>规则名称类型</p>
                     */
                    std::string m_modifyRuleType;
                    bool m_modifyRuleTypeHasBeenSet;

                    /**
                     * <p>规则名称内容</p>
                     */
                    std::string m_modifyRuleValue;
                    bool m_modifyRuleValueHasBeenSet;

                    /**
                     * <p>修改人的uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>修改时间</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>取值范围</p>
                     */
                    std::string m_valueRange;
                    bool m_valueRangeHasBeenSet;

                    /**
                     * <p>标记异常</p>
                     */
                    std::string m_abnormalParam;
                    bool m_abnormalParamHasBeenSet;

                    /**
                     * <p>是否生效</p>
                     */
                    std::string m_configEffective;
                    bool m_configEffectiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_INSTANCECONFIGINFO_H_
