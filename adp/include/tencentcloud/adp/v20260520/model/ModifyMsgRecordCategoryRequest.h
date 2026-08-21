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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYMSGRECORDCATEGORYREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYMSGRECORDCATEGORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyMsgRecordCategory请求参数结构体
                */
                class ModifyMsgRecordCategoryRequest : public AbstractModel
                {
                public:
                    ModifyMsgRecordCategoryRequest();
                    ~ModifyMsgRecordCategoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用 ID</p>
                     * @return AppId <p>应用 ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID</p>
                     * @param _appId <p>应用 ID</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>待修改的分类业务 ID</p>
                     * @return CategoryId <p>待修改的分类业务 ID</p>
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置<p>待修改的分类业务 ID</p>
                     * @param _categoryId <p>待修改的分类业务 ID</p>
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
                     * 获取<p>修改后的分类名称</p>
                     * @return Name <p>修改后的分类名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>修改后的分类名称</p>
                     * @param _name <p>修改后的分类名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>待修改的分类业务 ID</p>
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * <p>修改后的分类名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYMSGRECORDCATEGORYREQUEST_H_
