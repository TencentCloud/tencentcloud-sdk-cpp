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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_APPLICATIONBASICINFO_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_APPLICATIONBASICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 应用基本信息
                */
                class ApplicationBasicInfo : public AbstractModel
                {
                public:
                    ApplicationBasicInfo();
                    ~ApplicationBasicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取管理URL地址
                     * @return ManageUrl 管理URL地址
                     * 
                     */
                    std::string GetManageUrl() const;

                    /**
                     * 设置管理URL地址
                     * @param _manageUrl 管理URL地址
                     * 
                     */
                    void SetManageUrl(const std::string& _manageUrl);

                    /**
                     * 判断参数 ManageUrl 是否已赋值
                     * @return ManageUrl 是否已赋值
                     * 
                     */
                    bool ManageUrlHasBeenSet() const;

                    /**
                     * 获取描述信息
                     * @return Description 描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息
                     * @param _description 描述信息
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取是否允许可视化修改
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllowVisualModify 是否允许可视化修改
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAllowVisualModify() const;

                    /**
                     * 设置是否允许可视化修改
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allowVisualModify 是否允许可视化修改
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllowVisualModify(const bool& _allowVisualModify);

                    /**
                     * 判断参数 AllowVisualModify 是否已赋值
                     * @return AllowVisualModify 是否已赋值
                     * 
                     */
                    bool AllowVisualModifyHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 管理URL地址
                     */
                    std::string m_manageUrl;
                    bool m_manageUrlHasBeenSet;

                    /**
                     * 描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否允许可视化修改
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_allowVisualModify;
                    bool m_allowVisualModifyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_APPLICATIONBASICINFO_H_
