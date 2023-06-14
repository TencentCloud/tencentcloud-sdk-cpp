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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_UPDATECUSTOMPERSONREQUEST_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_UPDATECUSTOMPERSONREQUEST_H_

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
                * UpdateCustomPerson请求参数结构体
                */
                class UpdateCustomPersonRequest : public AbstractModel
                {
                public:
                    UpdateCustomPersonRequest();
                    ~UpdateCustomPersonRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待更新的自定义人物Id
                     * @return PersonId 待更新的自定义人物Id
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置待更新的自定义人物Id
                     * @param _personId 待更新的自定义人物Id
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取更新后的自定义人物名称，如为空则不更新
                     * @return Name 更新后的自定义人物名称，如为空则不更新
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置更新后的自定义人物名称，如为空则不更新
                     * @param _name 更新后的自定义人物名称，如为空则不更新
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
                     * 获取更新后的自定义人物简介，如为空则不更新
                     * @return BasicInfo 更新后的自定义人物简介，如为空则不更新
                     * 
                     */
                    std::string GetBasicInfo() const;

                    /**
                     * 设置更新后的自定义人物简介，如为空则不更新
                     * @param _basicInfo 更新后的自定义人物简介，如为空则不更新
                     * 
                     */
                    void SetBasicInfo(const std::string& _basicInfo);

                    /**
                     * 判断参数 BasicInfo 是否已赋值
                     * @return BasicInfo 是否已赋值
                     * 
                     */
                    bool BasicInfoHasBeenSet() const;

                    /**
                     * 获取更新后的分类信息，如为空则不更新
                     * @return CategoryId 更新后的分类信息，如为空则不更新
                     * 
                     */
                    std::string GetCategoryId() const;

                    /**
                     * 设置更新后的分类信息，如为空则不更新
                     * @param _categoryId 更新后的分类信息，如为空则不更新
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
                     * 待更新的自定义人物Id
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 更新后的自定义人物名称，如为空则不更新
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 更新后的自定义人物简介，如为空则不更新
                     */
                    std::string m_basicInfo;
                    bool m_basicInfoHasBeenSet;

                    /**
                     * 更新后的分类信息，如为空则不更新
                     */
                    std::string m_categoryId;
                    bool m_categoryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_UPDATECUSTOMPERSONREQUEST_H_
