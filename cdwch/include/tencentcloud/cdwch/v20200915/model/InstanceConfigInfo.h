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
                     * 获取配置项名称
                     * @return ConfKey 配置项名称
                     * 
                     */
                    std::string GetConfKey() const;

                    /**
                     * 设置配置项名称
                     * @param _confKey 配置项名称
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
                     * 获取配置项内容
                     * @return ConfValue 配置项内容
                     * 
                     */
                    std::string GetConfValue() const;

                    /**
                     * 设置配置项内容
                     * @param _confValue 配置项内容
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
                     * 获取默认值
                     * @return DefaultValue 默认值
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置默认值
                     * @param _defaultValue 默认值
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
                     * 获取是否需要重启
                     * @return NeedRestart 是否需要重启
                     * 
                     */
                    bool GetNeedRestart() const;

                    /**
                     * 设置是否需要重启
                     * @param _needRestart 是否需要重启
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
                     * 获取是否可编辑
                     * @return Editable 是否可编辑
                     * 
                     */
                    bool GetEditable() const;

                    /**
                     * 设置是否可编辑
                     * @param _editable 是否可编辑
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
                     * 获取配置项解释
                     * @return ConfDesc 配置项解释
                     * 
                     */
                    std::string GetConfDesc() const;

                    /**
                     * 设置配置项解释
                     * @param _confDesc 配置项解释
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
                     * 获取文件名称
                     * @return FileName 文件名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名称
                     * @param _fileName 文件名称
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
                     * 获取规则名称类型
                     * @return ModifyRuleType 规则名称类型
                     * 
                     */
                    std::string GetModifyRuleType() const;

                    /**
                     * 设置规则名称类型
                     * @param _modifyRuleType 规则名称类型
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
                     * 获取规则名称内容
                     * @return ModifyRuleValue 规则名称内容
                     * 
                     */
                    std::string GetModifyRuleValue() const;

                    /**
                     * 设置规则名称内容
                     * @param _modifyRuleValue 规则名称内容
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
                     * 获取修改人的uin
                     * @return Uin 修改人的uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置修改人的uin
                     * @param _uin 修改人的uin
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
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 配置项名称
                     */
                    std::string m_confKey;
                    bool m_confKeyHasBeenSet;

                    /**
                     * 配置项内容
                     */
                    std::string m_confValue;
                    bool m_confValueHasBeenSet;

                    /**
                     * 默认值
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * 是否需要重启
                     */
                    bool m_needRestart;
                    bool m_needRestartHasBeenSet;

                    /**
                     * 是否可编辑
                     */
                    bool m_editable;
                    bool m_editableHasBeenSet;

                    /**
                     * 配置项解释
                     */
                    std::string m_confDesc;
                    bool m_confDescHasBeenSet;

                    /**
                     * 文件名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 规则名称类型
                     */
                    std::string m_modifyRuleType;
                    bool m_modifyRuleTypeHasBeenSet;

                    /**
                     * 规则名称内容
                     */
                    std::string m_modifyRuleValue;
                    bool m_modifyRuleValueHasBeenSet;

                    /**
                     * 修改人的uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_INSTANCECONFIGINFO_H_
