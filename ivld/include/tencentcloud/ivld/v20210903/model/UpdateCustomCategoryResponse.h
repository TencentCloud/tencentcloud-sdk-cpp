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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_UPDATECUSTOMCATEGORYRESPONSE_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_UPDATECUSTOMCATEGORYRESPONSE_H_

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
                * UpdateCustomCategory返回参数结构体
                */
                class UpdateCustomCategoryResponse : public AbstractModel
                {
                public:
                    UpdateCustomCategoryResponse();
                    ~UpdateCustomCategoryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取成功更新的自定义人物类型Id
                     * @return CategoryId 成功更新的自定义人物类型Id
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                private:

                    /**
                     * 成功更新的自定义人物类型Id
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_UPDATECUSTOMCATEGORYRESPONSE_H_
