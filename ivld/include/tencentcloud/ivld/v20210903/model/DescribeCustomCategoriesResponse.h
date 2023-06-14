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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBECUSTOMCATEGORIESRESPONSE_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBECUSTOMCATEGORIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/CustomCategory.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * DescribeCustomCategories返回参数结构体
                */
                class DescribeCustomCategoriesResponse : public AbstractModel
                {
                public:
                    DescribeCustomCategoriesResponse();
                    ~DescribeCustomCategoriesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义人物类型数组
                     * @return CategorySet 自定义人物类型数组
                     * 
                     */
                    std::vector<CustomCategory> GetCategorySet() const;

                    /**
                     * 判断参数 CategorySet 是否已赋值
                     * @return CategorySet 是否已赋值
                     * 
                     */
                    bool CategorySetHasBeenSet() const;

                private:

                    /**
                     * 自定义人物类型数组
                     */
                    std::vector<CustomCategory> m_categorySet;
                    bool m_categorySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBECUSTOMCATEGORIESRESPONSE_H_
