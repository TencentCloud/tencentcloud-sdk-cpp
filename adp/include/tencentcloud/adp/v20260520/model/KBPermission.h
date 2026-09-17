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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_KBPERMISSION_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_KBPERMISSION_H_

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
                * 知识库操作权限信息
                */
                class KBPermission : public AbstractModel
                {
                public:
                    KBPermission();
                    ~KBPermission() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否可删除</p>
                     * @return CanDelete <p>是否可删除</p>
                     * 
                     */
                    bool GetCanDelete() const;

                    /**
                     * 设置<p>是否可删除</p>
                     * @param _canDelete <p>是否可删除</p>
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
                     * 获取<p>是否可编辑</p>
                     * @return CanEdit <p>是否可编辑</p>
                     * 
                     */
                    bool GetCanEdit() const;

                    /**
                     * 设置<p>是否可编辑</p>
                     * @param _canEdit <p>是否可编辑</p>
                     * 
                     */
                    void SetCanEdit(const bool& _canEdit);

                    /**
                     * 判断参数 CanEdit 是否已赋值
                     * @return CanEdit 是否已赋值
                     * 
                     */
                    bool CanEditHasBeenSet() const;

                    /**
                     * 获取<p>是否可查看</p>
                     * @return CanView <p>是否可查看</p>
                     * 
                     */
                    bool GetCanView() const;

                    /**
                     * 设置<p>是否可查看</p>
                     * @param _canView <p>是否可查看</p>
                     * 
                     */
                    void SetCanView(const bool& _canView);

                    /**
                     * 判断参数 CanView 是否已赋值
                     * @return CanView 是否已赋值
                     * 
                     */
                    bool CanViewHasBeenSet() const;

                private:

                    /**
                     * <p>是否可删除</p>
                     */
                    bool m_canDelete;
                    bool m_canDeleteHasBeenSet;

                    /**
                     * <p>是否可编辑</p>
                     */
                    bool m_canEdit;
                    bool m_canEditHasBeenSet;

                    /**
                     * <p>是否可查看</p>
                     */
                    bool m_canView;
                    bool m_canViewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_KBPERMISSION_H_
