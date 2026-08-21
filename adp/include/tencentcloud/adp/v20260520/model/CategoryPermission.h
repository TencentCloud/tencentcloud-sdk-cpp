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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CATEGORYPERMISSION_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CATEGORYPERMISSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CategoryPermission
                */
                class CategoryPermission : public AbstractModel
                {
                public:
                    CategoryPermission();
                    ~CategoryPermission() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>当前用户是否可新增子分类</p>
                     * @return CanAdd <p>当前用户是否可新增子分类</p>
                     * 
                     */
                    bool GetCanAdd() const;

                    /**
                     * 设置<p>当前用户是否可新增子分类</p>
                     * @param _canAdd <p>当前用户是否可新增子分类</p>
                     * 
                     */
                    void SetCanAdd(const bool& _canAdd);

                    /**
                     * 判断参数 CanAdd 是否已赋值
                     * @return CanAdd 是否已赋值
                     * 
                     */
                    bool CanAddHasBeenSet() const;

                    /**
                     * 获取<p>当前用户是否可删除该分类</p>
                     * @return CanDelete <p>当前用户是否可删除该分类</p>
                     * 
                     */
                    bool GetCanDelete() const;

                    /**
                     * 设置<p>当前用户是否可删除该分类</p>
                     * @param _canDelete <p>当前用户是否可删除该分类</p>
                     * 
                     */
                    void SetCanDelete(const bool& _canDelete);

                    /**
                     * 判断参数 CanDelete 是否已赋值
                     * @return CanDelete 是否已赋值
                     * 
                     */
                    bool CanDeleteHasBeenSet() const;

                    /**
                     * 获取<p>当前用户是否可编辑该分类</p>
                     * @return CanEdit <p>当前用户是否可编辑该分类</p>
                     * 
                     */
                    bool GetCanEdit() const;

                    /**
                     * 设置<p>当前用户是否可编辑该分类</p>
                     * @param _canEdit <p>当前用户是否可编辑该分类</p>
                     * 
                     */
                    void SetCanEdit(const bool& _canEdit);

                    /**
                     * 判断参数 CanEdit 是否已赋值
                     * @return CanEdit 是否已赋值
                     * 
                     */
                    bool CanEditHasBeenSet() const;

                private:

                    /**
                     * <p>当前用户是否可新增子分类</p>
                     */
                    bool m_canAdd;
                    bool m_canAddHasBeenSet;

                    /**
                     * <p>当前用户是否可删除该分类</p>
                     */
                    bool m_canDelete;
                    bool m_canDeleteHasBeenSet;

                    /**
                     * <p>当前用户是否可编辑该分类</p>
                     */
                    bool m_canEdit;
                    bool m_canEditHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CATEGORYPERMISSION_H_
