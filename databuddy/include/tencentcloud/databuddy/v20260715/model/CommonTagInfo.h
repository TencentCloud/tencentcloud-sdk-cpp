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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_COMMONTAGINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_COMMONTAGINFO_H_

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
                * 通用标签信息（用于查询展示场景），适用于表标签、字段标签等各类资产标签的轻量展示，供GetTable等接口返回使用
                */
                class CommonTagInfo : public AbstractModel
                {
                public:
                    CommonTagInfo();
                    ~CommonTagInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签ID
                     * @return LabelId 标签ID
                     * 
                     */
                    std::string GetLabelId() const;

                    /**
                     * 设置标签ID
                     * @param _labelId 标签ID
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
                     * 获取标签名称
                     * @return LabelName 标签名称
                     * 
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置标签名称
                     * @param _labelName 标签名称
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
                     * 获取标签值ID，属性标签（LabelType=3）可为0
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelValueId 标签值ID，属性标签（LabelType=3）可为0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabelValueId() const;

                    /**
                     * 设置标签值ID，属性标签（LabelType=3）可为0
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelValueId 标签值ID，属性标签（LabelType=3）可为0
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取标签值，脱敏标签（LabelType=4）时可为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelValue 标签值，脱敏标签（LabelType=4）时可为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabelValue() const;

                    /**
                     * 设置标签值，脱敏标签（LabelType=4）时可为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelValue 标签值，脱敏标签（LabelType=4）时可为空
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取标签类型，取值参考LabelType枚举定义：1-治理标签，2-自定义标签，3-属性标签，4-脱敏标签
                     * @return Type 标签类型，取值参考LabelType枚举定义：1-治理标签，2-自定义标签，3-属性标签，4-脱敏标签
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置标签类型，取值参考LabelType枚举定义：1-治理标签，2-自定义标签，3-属性标签，4-脱敏标签
                     * @param _type 标签类型，取值参考LabelType枚举定义：1-治理标签，2-自定义标签，3-属性标签，4-脱敏标签
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
                     * 获取标签是否已删除。true表示该LabelId在meta_biz_label中查不到记录，标签已被物理删除；false（默认）表示标签仍存在
                     * @return Deleted 标签是否已删除。true表示该LabelId在meta_biz_label中查不到记录，标签已被物理删除；false（默认）表示标签仍存在
                     * 
                     */
                    bool GetDeleted() const;

                    /**
                     * 设置标签是否已删除。true表示该LabelId在meta_biz_label中查不到记录，标签已被物理删除；false（默认）表示标签仍存在
                     * @param _deleted 标签是否已删除。true表示该LabelId在meta_biz_label中查不到记录，标签已被物理删除；false（默认）表示标签仍存在
                     * 
                     */
                    void SetDeleted(const bool& _deleted);

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     * 
                     */
                    bool DeletedHasBeenSet() const;

                private:

                    /**
                     * 标签ID
                     */
                    std::string m_labelId;
                    bool m_labelIdHasBeenSet;

                    /**
                     * 标签名称
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                    /**
                     * 标签值ID，属性标签（LabelType=3）可为0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_labelValueId;
                    bool m_labelValueIdHasBeenSet;

                    /**
                     * 标签值，脱敏标签（LabelType=4）时可为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_labelValue;
                    bool m_labelValueHasBeenSet;

                    /**
                     * 标签类型，取值参考LabelType枚举定义：1-治理标签，2-自定义标签，3-属性标签，4-脱敏标签
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 标签是否已删除。true表示该LabelId在meta_biz_label中查不到记录，标签已被物理删除；false（默认）表示标签仍存在
                     */
                    bool m_deleted;
                    bool m_deletedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_COMMONTAGINFO_H_
