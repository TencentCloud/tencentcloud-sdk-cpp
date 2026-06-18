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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_USERTAGINFO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_USERTAGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 用户标签信息
                */
                class UserTagInfo : public AbstractModel
                {
                public:
                    UserTagInfo();
                    ~UserTagInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取标签名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 标签名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置标签名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 标签名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取是否被托管
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsExternalManage 是否被托管
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsExternalManage() const;

                    /**
                     * 设置是否被托管
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isExternalManage 是否被托管
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsExternalManage(const bool& _isExternalManage);

                    /**
                     * 判断参数 IsExternalManage 是否已赋值
                     * @return IsExternalManage 是否已赋值
                     * 
                     */
                    bool IsExternalManageHasBeenSet() const;

                    /**
                     * 获取标签托管平台
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ManagePlatform 标签托管平台
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetManagePlatform() const;

                    /**
                     * 设置标签托管平台
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _managePlatform 标签托管平台
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetManagePlatform(const std::string& _managePlatform);

                    /**
                     * 判断参数 ManagePlatform 是否已赋值
                     * @return ManagePlatform 是否已赋值
                     * 
                     */
                    bool ManagePlatformHasBeenSet() const;

                    /**
                     * 获取导入类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImportType 导入类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImportType() const;

                    /**
                     * 设置导入类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _importType 导入类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImportType(const std::string& _importType);

                    /**
                     * 判断参数 ImportType 是否已赋值
                     * @return ImportType 是否已赋值
                     * 
                     */
                    bool ImportTypeHasBeenSet() const;

                private:

                    /**
                     * 标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 标签名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 标签值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 是否被托管
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isExternalManage;
                    bool m_isExternalManageHasBeenSet;

                    /**
                     * 标签托管平台
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_managePlatform;
                    bool m_managePlatformHasBeenSet;

                    /**
                     * 导入类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_importType;
                    bool m_importTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_USERTAGINFO_H_
