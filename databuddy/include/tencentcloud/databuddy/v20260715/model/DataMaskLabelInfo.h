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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DATAMASKLABELINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DATAMASKLABELINFO_H_

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
                * 脱敏策略绑定的敏感标签（精简视图）。相比通用 CommonTagInfo，仅保留策略视角下必要的三字段，避免序列化冗余。Type 固定为 4（DESENSITIZATION_LABEL 脱敏标签）
                */
                class DataMaskLabelInfo : public AbstractModel
                {
                public:
                    DataMaskLabelInfo();
                    ~DataMaskLabelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取敏感标签 ID，对应 catalog-manager meta_biz_label.id
                     * @return LabelId 敏感标签 ID，对应 catalog-manager meta_biz_label.id
                     * 
                     */
                    std::string GetLabelId() const;

                    /**
                     * 设置敏感标签 ID，对应 catalog-manager meta_biz_label.id
                     * @param _labelId 敏感标签 ID，对应 catalog-manager meta_biz_label.id
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
                     * 获取敏感标签名称，对应 catalog-manager meta_biz_label.name
                     * @return LabelName 敏感标签名称，对应 catalog-manager meta_biz_label.name
                     * 
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置敏感标签名称，对应 catalog-manager meta_biz_label.name
                     * @param _labelName 敏感标签名称，对应 catalog-manager meta_biz_label.name
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
                     * 获取标签类型，固定值 4（DESENSITIZATION_LABEL 脱敏标签）。参考 enum LabelType：1=业务标签、2=技术标签、3=分类标签、4=脱敏标签
                     * @return Type 标签类型，固定值 4（DESENSITIZATION_LABEL 脱敏标签）。参考 enum LabelType：1=业务标签、2=技术标签、3=分类标签、4=脱敏标签
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置标签类型，固定值 4（DESENSITIZATION_LABEL 脱敏标签）。参考 enum LabelType：1=业务标签、2=技术标签、3=分类标签、4=脱敏标签
                     * @param _type 标签类型，固定值 4（DESENSITIZATION_LABEL 脱敏标签）。参考 enum LabelType：1=业务标签、2=技术标签、3=分类标签、4=脱敏标签
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 敏感标签 ID，对应 catalog-manager meta_biz_label.id
                     */
                    std::string m_labelId;
                    bool m_labelIdHasBeenSet;

                    /**
                     * 敏感标签名称，对应 catalog-manager meta_biz_label.name
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                    /**
                     * 标签类型，固定值 4（DESENSITIZATION_LABEL 脱敏标签）。参考 enum LabelType：1=业务标签、2=技术标签、3=分类标签、4=脱敏标签
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DATAMASKLABELINFO_H_
