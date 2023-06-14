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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_VIEWRESPONSEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_VIEWRESPONSEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/ViewBaseInfo.h>
#include <tencentcloud/dlc/v20210125/model/Column.h>
#include <tencentcloud/dlc/v20210125/model/Property.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 查询视图信息对象
                */
                class ViewResponseInfo : public AbstractModel
                {
                public:
                    ViewResponseInfo();
                    ~ViewResponseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视图基本信息。
                     * @return ViewBaseInfo 视图基本信息。
                     * 
                     */
                    ViewBaseInfo GetViewBaseInfo() const;

                    /**
                     * 设置视图基本信息。
                     * @param _viewBaseInfo 视图基本信息。
                     * 
                     */
                    void SetViewBaseInfo(const ViewBaseInfo& _viewBaseInfo);

                    /**
                     * 判断参数 ViewBaseInfo 是否已赋值
                     * @return ViewBaseInfo 是否已赋值
                     * 
                     */
                    bool ViewBaseInfoHasBeenSet() const;

                    /**
                     * 获取视图列信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Columns 视图列信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Column> GetColumns() const;

                    /**
                     * 设置视图列信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columns 视图列信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumns(const std::vector<Column>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取视图属性信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Properties 视图属性信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Property> GetProperties() const;

                    /**
                     * 设置视图属性信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _properties 视图属性信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProperties(const std::vector<Property>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取视图创建时间。
                     * @return CreateTime 视图创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置视图创建时间。
                     * @param _createTime 视图创建时间。
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
                     * 获取视图更新时间。
                     * @return ModifiedTime 视图更新时间。
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置视图更新时间。
                     * @param _modifiedTime 视图更新时间。
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                private:

                    /**
                     * 视图基本信息。
                     */
                    ViewBaseInfo m_viewBaseInfo;
                    bool m_viewBaseInfoHasBeenSet;

                    /**
                     * 视图列信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Column> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * 视图属性信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Property> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * 视图创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 视图更新时间。
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_VIEWRESPONSEINFO_H_
