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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_PERMISSION_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_PERMISSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/Permission.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 权限树节点权限
                */
                class Permission : public AbstractModel
                {
                public:
                    Permission();
                    ~Permission() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取权限名称
                     * @return Name 权限名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置权限名称
                     * @param _name 权限名称
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
                     * 获取权限key
                     * @return Key 权限key
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置权限key
                     * @param _key 权限key
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
                     * 获取权限类型 1前端，2后端
                     * @return Type 权限类型 1前端，2后端
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置权限类型 1前端，2后端
                     * @param _type 权限类型 1前端，2后端
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
                     * 获取是否隐藏
                     * @return Hide 是否隐藏
                     * 
                     */
                    int64_t GetHide() const;

                    /**
                     * 设置是否隐藏
                     * @param _hide 是否隐藏
                     * 
                     */
                    void SetHide(const int64_t& _hide);

                    /**
                     * 判断参数 Hide 是否已赋值
                     * @return Hide 是否已赋值
                     * 
                     */
                    bool HideHasBeenSet() const;

                    /**
                     * 获取数据权限标签 1:表示根节点，2:表示叶子结点
                     * @return DataLabel 数据权限标签 1:表示根节点，2:表示叶子结点
                     * 
                     */
                    int64_t GetDataLabel() const;

                    /**
                     * 设置数据权限标签 1:表示根节点，2:表示叶子结点
                     * @param _dataLabel 数据权限标签 1:表示根节点，2:表示叶子结点
                     * 
                     */
                    void SetDataLabel(const int64_t& _dataLabel);

                    /**
                     * 判断参数 DataLabel 是否已赋值
                     * @return DataLabel 是否已赋值
                     * 
                     */
                    bool DataLabelHasBeenSet() const;

                    /**
                     * 获取数据权限独有，1:关联其他模块鉴权，2:表示关联自己模块鉴权
                     * @return DataType 数据权限独有，1:关联其他模块鉴权，2:表示关联自己模块鉴权
                     * 
                     */
                    int64_t GetDataType() const;

                    /**
                     * 设置数据权限独有，1:关联其他模块鉴权，2:表示关联自己模块鉴权
                     * @param _dataType 数据权限独有，1:关联其他模块鉴权，2:表示关联自己模块鉴权
                     * 
                     */
                    void SetDataType(const int64_t& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     * 
                     */
                    bool DataTypeHasBeenSet() const;

                    /**
                     * 获取数据权限独有，表示数据范围，1：全公司，2:部门及下级部门，3:自己
                     * @return DataRange 数据权限独有，表示数据范围，1：全公司，2:部门及下级部门，3:自己
                     * 
                     */
                    int64_t GetDataRange() const;

                    /**
                     * 设置数据权限独有，表示数据范围，1：全公司，2:部门及下级部门，3:自己
                     * @param _dataRange 数据权限独有，表示数据范围，1：全公司，2:部门及下级部门，3:自己
                     * 
                     */
                    void SetDataRange(const int64_t& _dataRange);

                    /**
                     * 判断参数 DataRange 是否已赋值
                     * @return DataRange 是否已赋值
                     * 
                     */
                    bool DataRangeHasBeenSet() const;

                    /**
                     * 获取关联权限, 表示这个功能权限要受哪个数据权限管控
                     * @return DataTo 关联权限, 表示这个功能权限要受哪个数据权限管控
                     * 
                     */
                    std::string GetDataTo() const;

                    /**
                     * 设置关联权限, 表示这个功能权限要受哪个数据权限管控
                     * @param _dataTo 关联权限, 表示这个功能权限要受哪个数据权限管控
                     * 
                     */
                    void SetDataTo(const std::string& _dataTo);

                    /**
                     * 判断参数 DataTo 是否已赋值
                     * @return DataTo 是否已赋值
                     * 
                     */
                    bool DataToHasBeenSet() const;

                    /**
                     * 获取父级权限key
                     * @return ParentKey 父级权限key
                     * 
                     */
                    std::string GetParentKey() const;

                    /**
                     * 设置父级权限key
                     * @param _parentKey 父级权限key
                     * 
                     */
                    void SetParentKey(const std::string& _parentKey);

                    /**
                     * 判断参数 ParentKey 是否已赋值
                     * @return ParentKey 是否已赋值
                     * 
                     */
                    bool ParentKeyHasBeenSet() const;

                    /**
                     * 获取是否选中
                     * @return IsChecked 是否选中
                     * 
                     */
                    bool GetIsChecked() const;

                    /**
                     * 设置是否选中
                     * @param _isChecked 是否选中
                     * 
                     */
                    void SetIsChecked(const bool& _isChecked);

                    /**
                     * 判断参数 IsChecked 是否已赋值
                     * @return IsChecked 是否已赋值
                     * 
                     */
                    bool IsCheckedHasBeenSet() const;

                    /**
                     * 获取子权限集合
                     * @return Children 子权限集合
                     * 
                     */
                    std::vector<Permission> GetChildren() const;

                    /**
                     * 设置子权限集合
                     * @param _children 子权限集合
                     * 
                     */
                    void SetChildren(const std::vector<Permission>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                private:

                    /**
                     * 权限名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 权限key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 权限类型 1前端，2后端
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 是否隐藏
                     */
                    int64_t m_hide;
                    bool m_hideHasBeenSet;

                    /**
                     * 数据权限标签 1:表示根节点，2:表示叶子结点
                     */
                    int64_t m_dataLabel;
                    bool m_dataLabelHasBeenSet;

                    /**
                     * 数据权限独有，1:关联其他模块鉴权，2:表示关联自己模块鉴权
                     */
                    int64_t m_dataType;
                    bool m_dataTypeHasBeenSet;

                    /**
                     * 数据权限独有，表示数据范围，1：全公司，2:部门及下级部门，3:自己
                     */
                    int64_t m_dataRange;
                    bool m_dataRangeHasBeenSet;

                    /**
                     * 关联权限, 表示这个功能权限要受哪个数据权限管控
                     */
                    std::string m_dataTo;
                    bool m_dataToHasBeenSet;

                    /**
                     * 父级权限key
                     */
                    std::string m_parentKey;
                    bool m_parentKeyHasBeenSet;

                    /**
                     * 是否选中
                     */
                    bool m_isChecked;
                    bool m_isCheckedHasBeenSet;

                    /**
                     * 子权限集合
                     */
                    std::vector<Permission> m_children;
                    bool m_childrenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_PERMISSION_H_
