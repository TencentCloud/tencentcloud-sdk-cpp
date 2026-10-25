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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TAGINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TAGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 标签信息，入参时用于指定打标标签，出参时返回资产已打的标签（入参+出参共用）
                */
                class TagInfo : public AbstractModel
                {
                public:
                    TagInfo();
                    ~TagInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签ID（入参必填）
                     * @return LabelId 标签ID（入参必填）
                     * 
                     */
                    std::string GetLabelId() const;

                    /**
                     * 设置标签ID（入参必填）
                     * @param _labelId 标签ID（入参必填）
                     * 
                     */
                    void SetLabelId(const std::string& _labelId);

                    /**
                     * 判断参数 LabelId 是否已赋值
                     * @return LabelId 是否已赋值
                     * 
                     */
                    bool LabelIdHasBeenSet() const;

                    /**
                     * 获取标签名称（入参必填）
                     * @return LabelName 标签名称（入参必填）
                     * 
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置标签名称（入参必填）
                     * @param _labelName 标签名称（入参必填）
                     * 
                     */
                    void SetLabelName(const std::string& _labelName);

                    /**
                     * 判断参数 LabelName 是否已赋值
                     * @return LabelName 是否已赋值
                     * 
                     */
                    bool LabelNameHasBeenSet() const;

                    /**
                     * 获取<p>标签类型（入参必填）</p><p>枚举值：</p><ul><li>1：GOVERNANCE_LABEL：治理标签（标签管理页手动创建）</li><li>2：CUSTOM_LABEL：自定义标签（打标时自动创建）</li><li>3：PROPERTY_LABEL：属性标签（Key-Value键值对）</li><li>4：DESENSITIZATION_LABEL：脱敏标签（与脱敏策略绑定）</li></ul>
                     * @return Type <p>标签类型（入参必填）</p><p>枚举值：</p><ul><li>1：GOVERNANCE_LABEL：治理标签（标签管理页手动创建）</li><li>2：CUSTOM_LABEL：自定义标签（打标时自动创建）</li><li>3：PROPERTY_LABEL：属性标签（Key-Value键值对）</li><li>4：DESENSITIZATION_LABEL：脱敏标签（与脱敏策略绑定）</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>标签类型（入参必填）</p><p>枚举值：</p><ul><li>1：GOVERNANCE_LABEL：治理标签（标签管理页手动创建）</li><li>2：CUSTOM_LABEL：自定义标签（打标时自动创建）</li><li>3：PROPERTY_LABEL：属性标签（Key-Value键值对）</li><li>4：DESENSITIZATION_LABEL：脱敏标签（与脱敏策略绑定）</li></ul>
                     * @param _type <p>标签类型（入参必填）</p><p>枚举值：</p><ul><li>1：GOVERNANCE_LABEL：治理标签（标签管理页手动创建）</li><li>2：CUSTOM_LABEL：自定义标签（打标时自动创建）</li><li>3：PROPERTY_LABEL：属性标签（Key-Value键值对）</li><li>4：DESENSITIZATION_LABEL：脱敏标签（与脱敏策略绑定）</li></ul>
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
                     * 获取标签值ID（可选）；属性标签可为0；LabelType=4（脱敏标签）时非必填
                     * @return LabelValueId 标签值ID（可选）；属性标签可为0；LabelType=4（脱敏标签）时非必填
                     * 
                     */
                    std::string GetLabelValueId() const;

                    /**
                     * 设置标签值ID（可选）；属性标签可为0；LabelType=4（脱敏标签）时非必填
                     * @param _labelValueId 标签值ID（可选）；属性标签可为0；LabelType=4（脱敏标签）时非必填
                     * 
                     */
                    void SetLabelValueId(const std::string& _labelValueId);

                    /**
                     * 判断参数 LabelValueId 是否已赋值
                     * @return LabelValueId 是否已赋值
                     * 
                     */
                    bool LabelValueIdHasBeenSet() const;

                    /**
                     * 获取标签值（可选）；LabelType=4（脱敏标签）时非必填
                     * @return LabelValue 标签值（可选）；LabelType=4（脱敏标签）时非必填
                     * 
                     */
                    std::string GetLabelValue() const;

                    /**
                     * 设置标签值（可选）；LabelType=4（脱敏标签）时非必填
                     * @param _labelValue 标签值（可选）；LabelType=4（脱敏标签）时非必填
                     * 
                     */
                    void SetLabelValue(const std::string& _labelValue);

                    /**
                     * 判断参数 LabelValue 是否已赋值
                     * @return LabelValue 是否已赋值
                     * 
                     */
                    bool LabelValueHasBeenSet() const;

                    /**
                     * 获取【仅出参，入参无需填写】标签是否已被物理删除（true=已删除）
                     * @return IsDeleted 【仅出参，入参无需填写】标签是否已被物理删除（true=已删除）
                     * 
                     */
                    bool GetIsDeleted() const;

                    /**
                     * 设置【仅出参，入参无需填写】标签是否已被物理删除（true=已删除）
                     * @param _isDeleted 【仅出参，入参无需填写】标签是否已被物理删除（true=已删除）
                     * 
                     */
                    void SetIsDeleted(const bool& _isDeleted);

                    /**
                     * 判断参数 IsDeleted 是否已赋值
                     * @return IsDeleted 是否已赋值
                     * 
                     */
                    bool IsDeletedHasBeenSet() const;

                    /**
                     * 获取【仅入参，出参不返回】是否自动创建自定义标签（可选，默认 false）；true=当 LabelName 非空且标签不存在时，自动创建 LabelType=2（CUSTOM_LABEL）的自定义标签；false=仅使用已有标签打标，标签不存在时报错
                     * @return CreateCustomLabel 【仅入参，出参不返回】是否自动创建自定义标签（可选，默认 false）；true=当 LabelName 非空且标签不存在时，自动创建 LabelType=2（CUSTOM_LABEL）的自定义标签；false=仅使用已有标签打标，标签不存在时报错
                     * 
                     */
                    bool GetCreateCustomLabel() const;

                    /**
                     * 设置【仅入参，出参不返回】是否自动创建自定义标签（可选，默认 false）；true=当 LabelName 非空且标签不存在时，自动创建 LabelType=2（CUSTOM_LABEL）的自定义标签；false=仅使用已有标签打标，标签不存在时报错
                     * @param _createCustomLabel 【仅入参，出参不返回】是否自动创建自定义标签（可选，默认 false）；true=当 LabelName 非空且标签不存在时，自动创建 LabelType=2（CUSTOM_LABEL）的自定义标签；false=仅使用已有标签打标，标签不存在时报错
                     * 
                     */
                    void SetCreateCustomLabel(const bool& _createCustomLabel);

                    /**
                     * 判断参数 CreateCustomLabel 是否已赋值
                     * @return CreateCustomLabel 是否已赋值
                     * 
                     */
                    bool CreateCustomLabelHasBeenSet() const;

                private:

                    /**
                     * 标签ID（入参必填）
                     */
                    std::string m_labelId;
                    bool m_labelIdHasBeenSet;

                    /**
                     * 标签名称（入参必填）
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                    /**
                     * <p>标签类型（入参必填）</p><p>枚举值：</p><ul><li>1：GOVERNANCE_LABEL：治理标签（标签管理页手动创建）</li><li>2：CUSTOM_LABEL：自定义标签（打标时自动创建）</li><li>3：PROPERTY_LABEL：属性标签（Key-Value键值对）</li><li>4：DESENSITIZATION_LABEL：脱敏标签（与脱敏策略绑定）</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 标签值ID（可选）；属性标签可为0；LabelType=4（脱敏标签）时非必填
                     */
                    std::string m_labelValueId;
                    bool m_labelValueIdHasBeenSet;

                    /**
                     * 标签值（可选）；LabelType=4（脱敏标签）时非必填
                     */
                    std::string m_labelValue;
                    bool m_labelValueHasBeenSet;

                    /**
                     * 【仅出参，入参无需填写】标签是否已被物理删除（true=已删除）
                     */
                    bool m_isDeleted;
                    bool m_isDeletedHasBeenSet;

                    /**
                     * 【仅入参，出参不返回】是否自动创建自定义标签（可选，默认 false）；true=当 LabelName 非空且标签不存在时，自动创建 LabelType=2（CUSTOM_LABEL）的自定义标签；false=仅使用已有标签打标，标签不存在时报错
                     */
                    bool m_createCustomLabel;
                    bool m_createCustomLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TAGINFO_H_
