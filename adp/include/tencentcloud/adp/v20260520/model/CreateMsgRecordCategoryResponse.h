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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATEMSGRECORDCATEGORYRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATEMSGRECORDCATEGORYRESPONSE_H_

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
                * CreateMsgRecordCategory返回参数结构体
                */
                class CreateMsgRecordCategoryResponse : public AbstractModel
                {
                public:
                    CreateMsgRecordCategoryResponse();
                    ~CreateMsgRecordCategoryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>新建分类的业务 ID</p>
                     * @return CategoryId <p>新建分类的业务 ID</p>
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
                     * <p>新建分类的业务 ID</p>
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATEMSGRECORDCATEGORYRESPONSE_H_
