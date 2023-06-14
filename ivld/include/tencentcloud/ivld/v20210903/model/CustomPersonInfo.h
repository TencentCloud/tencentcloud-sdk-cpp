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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_CUSTOMPERSONINFO_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_CUSTOMPERSONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/PersonImageInfo.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 自定义人物信息
                */
                class CustomPersonInfo : public AbstractModel
                {
                public:
                    CustomPersonInfo();
                    ~CustomPersonInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义人物Id
                     * @return PersonId 自定义人物Id
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置自定义人物Id
                     * @param _personId 自定义人物Id
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
                     * 获取自定义人物姓名
                     * @return Name 自定义人物姓名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置自定义人物姓名
                     * @param _name 自定义人物姓名
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
                     * 获取自定义人物简介信息
                     * @return BasicInfo 自定义人物简介信息
                     * 
                     */
                    std::string GetBasicInfo() const;

                    /**
                     * 设置自定义人物简介信息
                     * @param _basicInfo 自定义人物简介信息
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
                     * 获取一级自定义人物类型
                     * @return L1Category 一级自定义人物类型
                     * 
                     */
                    std::string GetL1Category() const;

                    /**
                     * 设置一级自定义人物类型
                     * @param _l1Category 一级自定义人物类型
                     * 
                     */
                    void SetL1Category(const std::string& _l1Category);

                    /**
                     * 判断参数 L1Category 是否已赋值
                     * @return L1Category 是否已赋值
                     * 
                     */
                    bool L1CategoryHasBeenSet() const;

                    /**
                     * 获取二级自定义人物类型
                     * @return L2Category 二级自定义人物类型
                     * 
                     */
                    std::string GetL2Category() const;

                    /**
                     * 设置二级自定义人物类型
                     * @param _l2Category 二级自定义人物类型
                     * 
                     */
                    void SetL2Category(const std::string& _l2Category);

                    /**
                     * 判断参数 L2Category 是否已赋值
                     * @return L2Category 是否已赋值
                     * 
                     */
                    bool L2CategoryHasBeenSet() const;

                    /**
                     * 获取自定义人物图片信息
                     * @return ImageInfoSet 自定义人物图片信息
                     * 
                     */
                    std::vector<PersonImageInfo> GetImageInfoSet() const;

                    /**
                     * 设置自定义人物图片信息
                     * @param _imageInfoSet 自定义人物图片信息
                     * 
                     */
                    void SetImageInfoSet(const std::vector<PersonImageInfo>& _imageInfoSet);

                    /**
                     * 判断参数 ImageInfoSet 是否已赋值
                     * @return ImageInfoSet 是否已赋值
                     * 
                     */
                    bool ImageInfoSetHasBeenSet() const;

                    /**
                     * 获取自定义人物创建时间
                     * @return CreateTime 自定义人物创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置自定义人物创建时间
                     * @param _createTime 自定义人物创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 自定义人物Id
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 自定义人物姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 自定义人物简介信息
                     */
                    std::string m_basicInfo;
                    bool m_basicInfoHasBeenSet;

                    /**
                     * 一级自定义人物类型
                     */
                    std::string m_l1Category;
                    bool m_l1CategoryHasBeenSet;

                    /**
                     * 二级自定义人物类型
                     */
                    std::string m_l2Category;
                    bool m_l2CategoryHasBeenSet;

                    /**
                     * 自定义人物图片信息
                     */
                    std::vector<PersonImageInfo> m_imageInfoSet;
                    bool m_imageInfoSetHasBeenSet;

                    /**
                     * 自定义人物创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_CUSTOMPERSONINFO_H_
