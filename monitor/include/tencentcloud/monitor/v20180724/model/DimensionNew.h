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
                     * 获取<p>维度 key 标示，后台英文名</p>
                     * @return Key <p>维度 key 标示，后台英文名</p>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>维度 key 标示，后台英文名</p>
                     * @param _key <p>维度 key 标示，后台英文名</p>
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
                     * 获取<p>维度 key 名称，中英文前台展示名</p>
                     * @return Name <p>维度 key 名称，中英文前台展示名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>维度 key 名称，中英文前台展示名</p>
                     * @param _name <p>维度 key 名称，中英文前台展示名</p>
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
                     * 获取<p>是否必选</p>
                     * @return IsRequired <p>是否必选</p>
                     * 
                     */
                    bool GetIsRequired() const;

                    /**
                     * 设置<p>是否必选</p>
                     * @param _isRequired <p>是否必选</p>
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
                     * 获取<p>支持的操作符列表</p>
                     * @return Operators <p>支持的操作符列表</p>
                     * 
                     */
                    std::vector<Operator> GetOperators() const;

                    /**
                     * 设置<p>支持的操作符列表</p>
                     * @param _operators <p>支持的操作符列表</p>
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
                     * 获取<p>是否支持多选</p>
                     * @return IsMultiple <p>是否支持多选</p>
                     * 
                     */
                    bool GetIsMultiple() const;

                    /**
                     * 设置<p>是否支持多选</p>
                     * @param _isMultiple <p>是否支持多选</p>
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
                     * 获取<p>创建后是否可以修改</p>
                     * @return IsMutable <p>创建后是否可以修改</p>
                     * 
                     */
                    bool GetIsMutable() const;

                    /**
                     * 设置<p>创建后是否可以修改</p>
                     * @param _isMutable <p>创建后是否可以修改</p>
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
                     * 获取<p>是否展示给用户</p>
                     * @return IsVisible <p>是否展示给用户</p>
                     * 
                     */
                    bool GetIsVisible() const;

                    /**
                     * 设置<p>是否展示给用户</p>
                     * @param _isVisible <p>是否展示给用户</p>
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
                     * 获取<p>能否用来过滤策略列表</p>
                     * @return CanFilterPolicy <p>能否用来过滤策略列表</p>
                     * 
                     */
                    bool GetCanFilterPolicy() const;

                    /**
                     * 设置<p>能否用来过滤策略列表</p>
                     * @param _canFilterPolicy <p>能否用来过滤策略列表</p>
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
                     * 获取<p>能否用来过滤告警历史</p>
                     * @return CanFilterHistory <p>能否用来过滤告警历史</p>
                     * 
                     */
                    bool GetCanFilterHistory() const;

                    /**
                     * 设置<p>能否用来过滤告警历史</p>
                     * @param _canFilterHistory <p>能否用来过滤告警历史</p>
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
                     * 获取<p>能否作为聚合维度</p>
                     * @return CanGroupBy <p>能否作为聚合维度</p>
                     * 
                     */
                    bool GetCanGroupBy() const;

                    /**
                     * 设置<p>能否作为聚合维度</p>
                     * @param _canGroupBy <p>能否作为聚合维度</p>
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
                     * 获取<p>是否必须作为聚合维度</p>
                     * @return MustGroupBy <p>是否必须作为聚合维度</p>
                     * 
                     */
                    bool GetMustGroupBy() const;

                    /**
                     * 设置<p>是否必须作为聚合维度</p>
                     * @param _mustGroupBy <p>是否必须作为聚合维度</p>
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
                     * 获取<p>前端翻译要替换的 key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShowValueReplace <p>前端翻译要替换的 key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShowValueReplace() const;

                    /**
                     * 设置<p>前端翻译要替换的 key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _showValueReplace <p>前端翻译要替换的 key</p>
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
                     * <p>维度 key 标示，后台英文名</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>维度 key 名称，中英文前台展示名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>是否必选</p>
                     */
                    bool m_isRequired;
                    bool m_isRequiredHasBeenSet;

                    /**
                     * <p>支持的操作符列表</p>
                     */
                    std::vector<Operator> m_operators;
                    bool m_operatorsHasBeenSet;

                    /**
                     * <p>是否支持多选</p>
                     */
                    bool m_isMultiple;
                    bool m_isMultipleHasBeenSet;

                    /**
                     * <p>创建后是否可以修改</p>
                     */
                    bool m_isMutable;
                    bool m_isMutableHasBeenSet;

                    /**
                     * <p>是否展示给用户</p>
                     */
                    bool m_isVisible;
                    bool m_isVisibleHasBeenSet;

                    /**
                     * <p>能否用来过滤策略列表</p>
                     */
                    bool m_canFilterPolicy;
                    bool m_canFilterPolicyHasBeenSet;

                    /**
                     * <p>能否用来过滤告警历史</p>
                     */
                    bool m_canFilterHistory;
                    bool m_canFilterHistoryHasBeenSet;

                    /**
                     * <p>能否作为聚合维度</p>
                     */
                    bool m_canGroupBy;
                    bool m_canGroupByHasBeenSet;

                    /**
                     * <p>是否必须作为聚合维度</p>
                     */
                    bool m_mustGroupBy;
                    bool m_mustGroupByHasBeenSet;

                    /**
                     * <p>前端翻译要替换的 key</p>
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
