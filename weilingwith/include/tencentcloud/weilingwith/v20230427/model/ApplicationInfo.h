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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_APPLICATIONINFO_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_APPLICATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/ApplicationLogo.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 应用描述
                */
                class ApplicationInfo : public AbstractModel
                {
                public:
                    ApplicationInfo();
                    ~ApplicationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用分配的appId
                     * @return ApplicationId 应用分配的appId
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用分配的appId
                     * @param _applicationId 应用分配的appId
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取应用中文名
                     * @return Name 应用中文名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置应用中文名
                     * @param _name 应用中文名
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
                     * 获取应用地址
                     * @return Address 应用地址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置应用地址
                     * @param _address 应用地址
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取应用logo
                     * @return ApplicationLogo 应用logo
                     * 
                     */
                    ApplicationLogo GetApplicationLogo() const;

                    /**
                     * 设置应用logo
                     * @param _applicationLogo 应用logo
                     * 
                     */
                    void SetApplicationLogo(const ApplicationLogo& _applicationLogo);

                    /**
                     * 判断参数 ApplicationLogo 是否已赋值
                     * @return ApplicationLogo 是否已赋值
                     * 
                     */
                    bool ApplicationLogoHasBeenSet() const;

                    /**
                     * 获取应用类型，0:saas应用 1:平台应用
                     * @return Type 应用类型，0:saas应用 1:平台应用
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置应用类型，0:saas应用 1:平台应用
                     * @param _type 应用类型，0:saas应用 1:平台应用
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取engine
                     * @return EnglishName engine
                     * 
                     */
                    std::string GetEnglishName() const;

                    /**
                     * 设置engine
                     * @param _englishName engine
                     * 
                     */
                    void SetEnglishName(const std::string& _englishName);

                    /**
                     * 判断参数 EnglishName 是否已赋值
                     * @return EnglishName 是否已赋值
                     * 
                     */
                    bool EnglishNameHasBeenSet() const;

                    /**
                     * 获取能源管理应用
                     * @return Description 能源管理应用
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置能源管理应用
                     * @param _description 能源管理应用
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 应用分配的appId
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 应用中文名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 应用地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 应用logo
                     */
                    ApplicationLogo m_applicationLogo;
                    bool m_applicationLogoHasBeenSet;

                    /**
                     * 应用类型，0:saas应用 1:平台应用
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * engine
                     */
                    std::string m_englishName;
                    bool m_englishNameHasBeenSet;

                    /**
                     * 能源管理应用
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_APPLICATIONINFO_H_
