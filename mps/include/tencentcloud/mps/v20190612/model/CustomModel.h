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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CUSTOMMODEL_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CUSTOMMODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 商品裂变模特信息
                */
                class CustomModel : public AbstractModel
                {
                public:
                    CustomModel();
                    ~CustomModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>性别</p><p>枚举值：</p><ul><li>male： 男性</li><li>female： 女性</li><li>any： 不限</li></ul>
                     * @return Gender <p>性别</p><p>枚举值：</p><ul><li>male： 男性</li><li>female： 女性</li><li>any： 不限</li></ul>
                     * 
                     */
                    std::string GetGender() const;

                    /**
                     * 设置<p>性别</p><p>枚举值：</p><ul><li>male： 男性</li><li>female： 女性</li><li>any： 不限</li></ul>
                     * @param _gender <p>性别</p><p>枚举值：</p><ul><li>male： 男性</li><li>female： 女性</li><li>any： 不限</li></ul>
                     * 
                     */
                    void SetGender(const std::string& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取<p>年龄范围</p><p>枚举值：</p><ul><li>teen： 青年</li><li>young_adult： 成年</li><li>middle_aged： 中年</li><li>mature： 成熟</li></ul>
                     * @return Age <p>年龄范围</p><p>枚举值：</p><ul><li>teen： 青年</li><li>young_adult： 成年</li><li>middle_aged： 中年</li><li>mature： 成熟</li></ul>
                     * 
                     */
                    std::string GetAge() const;

                    /**
                     * 设置<p>年龄范围</p><p>枚举值：</p><ul><li>teen： 青年</li><li>young_adult： 成年</li><li>middle_aged： 中年</li><li>mature： 成熟</li></ul>
                     * @param _age <p>年龄范围</p><p>枚举值：</p><ul><li>teen： 青年</li><li>young_adult： 成年</li><li>middle_aged： 中年</li><li>mature： 成熟</li></ul>
                     * 
                     */
                    void SetAge(const std::string& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * 
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取<p>外貌</p><p>枚举值：</p><ul><li>caucasian： 白人</li><li>asian： 亚裔</li><li>latino： 拉丁裔</li><li>african： 非裔</li><li>middle_eastern： 中东</li></ul>
                     * @return Appearance <p>外貌</p><p>枚举值：</p><ul><li>caucasian： 白人</li><li>asian： 亚裔</li><li>latino： 拉丁裔</li><li>african： 非裔</li><li>middle_eastern： 中东</li></ul>
                     * 
                     */
                    std::string GetAppearance() const;

                    /**
                     * 设置<p>外貌</p><p>枚举值：</p><ul><li>caucasian： 白人</li><li>asian： 亚裔</li><li>latino： 拉丁裔</li><li>african： 非裔</li><li>middle_eastern： 中东</li></ul>
                     * @param _appearance <p>外貌</p><p>枚举值：</p><ul><li>caucasian： 白人</li><li>asian： 亚裔</li><li>latino： 拉丁裔</li><li>african： 非裔</li><li>middle_eastern： 中东</li></ul>
                     * 
                     */
                    void SetAppearance(const std::string& _appearance);

                    /**
                     * 判断参数 Appearance 是否已赋值
                     * @return Appearance 是否已赋值
                     * 
                     */
                    bool AppearanceHasBeenSet() const;

                    /**
                     * 获取<p>身材</p><p>枚举值：</p><ul><li>slim： 苗条</li><li>standard： 标准</li><li>athletic： 健壮</li><li>chubby： 丰满</li></ul>
                     * @return BodyType <p>身材</p><p>枚举值：</p><ul><li>slim： 苗条</li><li>standard： 标准</li><li>athletic： 健壮</li><li>chubby： 丰满</li></ul>
                     * 
                     */
                    std::string GetBodyType() const;

                    /**
                     * 设置<p>身材</p><p>枚举值：</p><ul><li>slim： 苗条</li><li>standard： 标准</li><li>athletic： 健壮</li><li>chubby： 丰满</li></ul>
                     * @param _bodyType <p>身材</p><p>枚举值：</p><ul><li>slim： 苗条</li><li>standard： 标准</li><li>athletic： 健壮</li><li>chubby： 丰满</li></ul>
                     * 
                     */
                    void SetBodyType(const std::string& _bodyType);

                    /**
                     * 判断参数 BodyType 是否已赋值
                     * @return BodyType 是否已赋值
                     * 
                     */
                    bool BodyTypeHasBeenSet() const;

                private:

                    /**
                     * <p>性别</p><p>枚举值：</p><ul><li>male： 男性</li><li>female： 女性</li><li>any： 不限</li></ul>
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * <p>年龄范围</p><p>枚举值：</p><ul><li>teen： 青年</li><li>young_adult： 成年</li><li>middle_aged： 中年</li><li>mature： 成熟</li></ul>
                     */
                    std::string m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * <p>外貌</p><p>枚举值：</p><ul><li>caucasian： 白人</li><li>asian： 亚裔</li><li>latino： 拉丁裔</li><li>african： 非裔</li><li>middle_eastern： 中东</li></ul>
                     */
                    std::string m_appearance;
                    bool m_appearanceHasBeenSet;

                    /**
                     * <p>身材</p><p>枚举值：</p><ul><li>slim： 苗条</li><li>standard： 标准</li><li>athletic： 健壮</li><li>chubby： 丰满</li></ul>
                     */
                    std::string m_bodyType;
                    bool m_bodyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CUSTOMMODEL_H_
