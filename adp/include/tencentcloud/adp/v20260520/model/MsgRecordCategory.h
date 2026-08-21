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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MSGRECORDCATEGORY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MSGRECORDCATEGORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/MsgRecordCategory.h>
#include <tencentcloud/adp/v20260520/model/CategoryPermission.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * MsgRecordCategory
                */
                class MsgRecordCategory : public AbstractModel
                {
                public:
                    MsgRecordCategory();
                    ~MsgRecordCategory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>分类的业务 ID</p>
                     * @return CategoryId <p>分类的业务 ID</p>
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置<p>分类的业务 ID</p>
                     * @param _categoryId <p>分类的业务 ID</p>
                     * 
                     */
                    void SetCategoryId(const std::string& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取<p>子分类列表，树形嵌套</p>
                     * @return Children <p>子分类列表，树形嵌套</p>
                     * 
                     */
                    std::vector<MsgRecordCategory> GetChildren() const;

                    /**
                     * 设置<p>子分类列表，树形嵌套</p>
                     * @param _children <p>子分类列表，树形嵌套</p>
                     * 
                     */
                    void SetChildren(const std::vector<MsgRecordCategory>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                    /**
                     * 获取<p>分类名称</p>
                     * @return Name <p>分类名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>分类名称</p>
                     * @param _name <p>分类名称</p>
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
                     * 获取<p>当前用户对该分类的操作权限</p>
                     * @return Permission <p>当前用户对该分类的操作权限</p>
                     * 
                     */
                    CategoryPermission GetPermission() const;

                    /**
                     * 设置<p>当前用户对该分类的操作权限</p>
                     * @param _permission <p>当前用户对该分类的操作权限</p>
                     * 
                     */
                    void SetPermission(const CategoryPermission& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取<p>该分类下消息记录的数量</p>
                     * @return TotalCount <p>该分类下消息记录的数量</p>
                     * 
                     */
                    std::string GetTotalCount() const;

                    /**
                     * 设置<p>该分类下消息记录的数量</p>
                     * @param _totalCount <p>该分类下消息记录的数量</p>
                     * 
                     */
                    void SetTotalCount(const std::string& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>分类的业务 ID</p>
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * <p>子分类列表，树形嵌套</p>
                     */
                    std::vector<MsgRecordCategory> m_children;
                    bool m_childrenHasBeenSet;

                    /**
                     * <p>分类名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>当前用户对该分类的操作权限</p>
                     */
                    CategoryPermission m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * <p>该分类下消息记录的数量</p>
                     */
                    std::string m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MSGRECORDCATEGORY_H_
