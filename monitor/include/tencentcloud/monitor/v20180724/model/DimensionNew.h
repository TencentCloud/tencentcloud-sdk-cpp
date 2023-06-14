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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DIMENSIONNEW_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DIMENSIONNEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/Operator.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 策略类型的维度信息
                */
                class DimensionNew : public AbstractModel
                {
                public:
                    DimensionNew();
                    ~DimensionNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取维度 key 标示，后台英文名
                     * @return Key 维度 key 标示，后台英文名
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置维度 key 标示，后台英文名
                     * @param _key 维度 key 标示，后台英文名
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取维度 key 名称，中英文前台展示名
                     * @return Name 维度 key 名称，中英文前台展示名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置维度 key 名称，中英文前台展示名
                     * @param _name 维度 key 名称，中英文前台展示名
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
                     * 获取是否必选
                     * @return IsRequired 是否必选
                     * 
                     */
                    bool GetIsRequired() const;

                    /**
                     * 设置是否必选
                     * @param _isRequired 是否必选
                     * 
                     */
                    void SetIsRequired(const bool& _isRequired);

                    /**
                     * 判断参数 IsRequired 是否已赋值
                     * @return IsRequired 是否已赋值
                     * 
                     */
                    bool IsRequiredHasBeenSet() const;

                    /**
                     * 获取支持的操作符列表
                     * @return Operators 支持的操作符列表
                     * 
                     */
                    std::vector<Operator> GetOperators() const;

                    /**
                     * 设置支持的操作符列表
                     * @param _operators 支持的操作符列表
                     * 
                     */
                    void SetOperators(const std::vector<Operator>& _operators);

                    /**
                     * 判断参数 Operators 是否已赋值
                     * @return Operators 是否已赋值
                     * 
                     */
                    bool OperatorsHasBeenSet() const;

                    /**
                     * 获取是否支持多选
                     * @return IsMultiple 是否支持多选
                     * 
                     */
                    bool GetIsMultiple() const;

                    /**
                     * 设置是否支持多选
                     * @param _isMultiple 是否支持多选
                     * 
                     */
                    void SetIsMultiple(const bool& _isMultiple);

                    /**
                     * 判断参数 IsMultiple 是否已赋值
                     * @return IsMultiple 是否已赋值
                     * 
                     */
                    bool IsMultipleHasBeenSet() const;

                    /**
                     * 获取创建后是否可以修改
                     * @return IsMutable 创建后是否可以修改
                     * 
                     */
                    bool GetIsMutable() const;

                    /**
                     * 设置创建后是否可以修改
                     * @param _isMutable 创建后是否可以修改
                     * 
                     */
                    void SetIsMutable(const bool& _isMutable);

                    /**
                     * 判断参数 IsMutable 是否已赋值
                     * @return IsMutable 是否已赋值
                     * 
                     */
                    bool IsMutableHasBeenSet() const;

                    /**
                     * 获取是否展示给用户
                     * @return IsVisible 是否展示给用户
                     * 
                     */
                    bool GetIsVisible() const;

                    /**
                     * 设置是否展示给用户
                     * @param _isVisible 是否展示给用户
                     * 
                     */
                    void SetIsVisible(const bool& _isVisible);

                    /**
                     * 判断参数 IsVisible 是否已赋值
                     * @return IsVisible 是否已赋值
                     * 
                     */
                    bool IsVisibleHasBeenSet() const;

                    /**
                     * 获取能否用来过滤策略列表
                     * @return CanFilterPolicy 能否用来过滤策略列表
                     * 
                     */
                    bool GetCanFilterPolicy() const;

                    /**
                     * 设置能否用来过滤策略列表
                     * @param _canFilterPolicy 能否用来过滤策略列表
                     * 
                     */
                    void SetCanFilterPolicy(const bool& _canFilterPolicy);

                    /**
                     * 判断参数 CanFilterPolicy 是否已赋值
                     * @return CanFilterPolicy 是否已赋值
                     * 
                     */
                    bool CanFilterPolicyHasBeenSet() const;

                    /**
                     * 获取能否用来过滤告警历史
                     * @return CanFilterHistory 能否用来过滤告警历史
                     * 
                     */
                    bool GetCanFilterHistory() const;

                    /**
                     * 设置能否用来过滤告警历史
                     * @param _canFilterHistory 能否用来过滤告警历史
                     * 
                     */
                    void SetCanFilterHistory(const bool& _canFilterHistory);

                    /**
                     * 判断参数 CanFilterHistory 是否已赋值
                     * @return CanFilterHistory 是否已赋值
                     * 
                     */
                    bool CanFilterHistoryHasBeenSet() const;

                    /**
                     * 获取能否作为聚合维度
                     * @return CanGroupBy 能否作为聚合维度
                     * 
                     */
                    bool GetCanGroupBy() const;

                    /**
                     * 设置能否作为聚合维度
                     * @param _canGroupBy 能否作为聚合维度
                     * 
                     */
                    void SetCanGroupBy(const bool& _canGroupBy);

                    /**
                     * 判断参数 CanGroupBy 是否已赋值
                     * @return CanGroupBy 是否已赋值
                     * 
                     */
                    bool CanGroupByHasBeenSet() const;

                    /**
                     * 获取是否必须作为聚合维度
                     * @return MustGroupBy 是否必须作为聚合维度
                     * 
                     */
                    bool GetMustGroupBy() const;

                    /**
                     * 设置是否必须作为聚合维度
                     * @param _mustGroupBy 是否必须作为聚合维度
                     * 
                     */
                    void SetMustGroupBy(const bool& _mustGroupBy);

                    /**
                     * 判断参数 MustGroupBy 是否已赋值
                     * @return MustGroupBy 是否已赋值
                     * 
                     */
                    bool MustGroupByHasBeenSet() const;

                    /**
                     * 获取前端翻译要替换的 key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShowValueReplace 前端翻译要替换的 key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShowValueReplace() const;

                    /**
                     * 设置前端翻译要替换的 key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _showValueReplace 前端翻译要替换的 key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShowValueReplace(const std::string& _showValueReplace);

                    /**
                     * 判断参数 ShowValueReplace 是否已赋值
                     * @return ShowValueReplace 是否已赋值
                     * 
                     */
                    bool ShowValueReplaceHasBeenSet() const;

                private:

                    /**
                     * 维度 key 标示，后台英文名
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 维度 key 名称，中英文前台展示名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否必选
                     */
                    bool m_isRequired;
                    bool m_isRequiredHasBeenSet;

                    /**
                     * 支持的操作符列表
                     */
                    std::vector<Operator> m_operators;
                    bool m_operatorsHasBeenSet;

                    /**
                     * 是否支持多选
                     */
                    bool m_isMultiple;
                    bool m_isMultipleHasBeenSet;

                    /**
                     * 创建后是否可以修改
                     */
                    bool m_isMutable;
                    bool m_isMutableHasBeenSet;

                    /**
                     * 是否展示给用户
                     */
                    bool m_isVisible;
                    bool m_isVisibleHasBeenSet;

                    /**
                     * 能否用来过滤策略列表
                     */
                    bool m_canFilterPolicy;
                    bool m_canFilterPolicyHasBeenSet;

                    /**
                     * 能否用来过滤告警历史
                     */
                    bool m_canFilterHistory;
                    bool m_canFilterHistoryHasBeenSet;

                    /**
                     * 能否作为聚合维度
                     */
                    bool m_canGroupBy;
                    bool m_canGroupByHasBeenSet;

                    /**
                     * 是否必须作为聚合维度
                     */
                    bool m_mustGroupBy;
                    bool m_mustGroupByHasBeenSet;

                    /**
                     * 前端翻译要替换的 key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_showValueReplace;
                    bool m_showValueReplaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DIMENSIONNEW_H_
