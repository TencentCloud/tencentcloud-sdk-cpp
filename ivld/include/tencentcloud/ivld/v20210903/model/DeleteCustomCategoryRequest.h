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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_DELETECUSTOMCATEGORYREQUEST_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_DELETECUSTOMCATEGORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * DeleteCustomCategory请求参数结构体
                */
                class DeleteCustomCategoryRequest : public AbstractModel
                {
                public:
                    DeleteCustomCategoryRequest();
                    ~DeleteCustomCategoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义分类ID
                     * @return CategoryId 自定义分类ID
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置自定义分类ID
                     * @param _categoryId 自定义分类ID
                     * 
                     */
                    void SetCategoryId(const std::string& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                private:

                    /**
                     * 自定义分类ID
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_DELETECUSTOMCATEGORYREQUEST_H_
