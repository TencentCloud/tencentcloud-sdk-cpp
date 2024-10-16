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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_OPENPOLICYSWITCH_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_OPENPOLICYSWITCH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/OpenConstraintInfo.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * opa策略开关
                */
                class OpenPolicySwitch : public AbstractModel
                {
                public:
                    OpenPolicySwitch();
                    ~OpenPolicySwitch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略运行模式：dryrun空跑不生效，deny拦截生效
                     * @return EnforcementAction 策略运行模式：dryrun空跑不生效，deny拦截生效
                     * 
                     */
                    std::string GetEnforcementAction() const;

                    /**
                     * 设置策略运行模式：dryrun空跑不生效，deny拦截生效
                     * @param _enforcementAction 策略运行模式：dryrun空跑不生效，deny拦截生效
                     * 
                     */
                    void SetEnforcementAction(const std::string& _enforcementAction);

                    /**
                     * 判断参数 EnforcementAction 是否已赋值
                     * @return EnforcementAction 是否已赋值
                     * 
                     */
                    bool EnforcementActionHasBeenSet() const;

                    /**
                     * 获取策略英文名称
                     * @return Name 策略英文名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置策略英文名称
                     * @param _name 策略英文名称
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
                     * 获取策略模板类型
                     * @return Kind 策略模板类型
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置策略模板类型
                     * @param _kind 策略模板类型
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取策略开关状态：open打开，close关闭
                     * @return EnabledStatus 策略开关状态：open打开，close关闭
                     * 
                     */
                    std::string GetEnabledStatus() const;

                    /**
                     * 设置策略开关状态：open打开，close关闭
                     * @param _enabledStatus 策略开关状态：open打开，close关闭
                     * 
                     */
                    void SetEnabledStatus(const std::string& _enabledStatus);

                    /**
                     * 判断参数 EnabledStatus 是否已赋值
                     * @return EnabledStatus 是否已赋值
                     * 
                     */
                    bool EnabledStatusHasBeenSet() const;

                    /**
                     * 获取策略关联的实例列表
                     * @return OpenConstraintInfoList 策略关联的实例列表
                     * 
                     */
                    std::vector<OpenConstraintInfo> GetOpenConstraintInfoList() const;

                    /**
                     * 设置策略关联的实例列表
                     * @param _openConstraintInfoList 策略关联的实例列表
                     * 
                     */
                    void SetOpenConstraintInfoList(const std::vector<OpenConstraintInfo>& _openConstraintInfoList);

                    /**
                     * 判断参数 OpenConstraintInfoList 是否已赋值
                     * @return OpenConstraintInfoList 是否已赋值
                     * 
                     */
                    bool OpenConstraintInfoListHasBeenSet() const;

                private:

                    /**
                     * 策略运行模式：dryrun空跑不生效，deny拦截生效
                     */
                    std::string m_enforcementAction;
                    bool m_enforcementActionHasBeenSet;

                    /**
                     * 策略英文名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 策略模板类型
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 策略开关状态：open打开，close关闭
                     */
                    std::string m_enabledStatus;
                    bool m_enabledStatusHasBeenSet;

                    /**
                     * 策略关联的实例列表
                     */
                    std::vector<OpenConstraintInfo> m_openConstraintInfoList;
                    bool m_openConstraintInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_OPENPOLICYSWITCH_H_
