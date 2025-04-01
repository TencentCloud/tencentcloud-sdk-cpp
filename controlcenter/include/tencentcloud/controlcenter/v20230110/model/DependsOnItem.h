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

#ifndef TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_DEPENDSONITEM_H_
#define TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_DEPENDSONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Controlcenter
    {
        namespace V20230110
        {
            namespace Model
            {
                /**
                * 依赖项
                */
                class DependsOnItem : public AbstractModel
                {
                public:
                    DependsOnItem();
                    ~DependsOnItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取依赖项类型，只有LandingZoneSetUp或AccountFactorySetUp。LandingZoneSetUp表示landingZone的依赖项；AccountFactorySetUp表示账号工厂的依赖项
                     * @return Type 依赖项类型，只有LandingZoneSetUp或AccountFactorySetUp。LandingZoneSetUp表示landingZone的依赖项；AccountFactorySetUp表示账号工厂的依赖项
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置依赖项类型，只有LandingZoneSetUp或AccountFactorySetUp。LandingZoneSetUp表示landingZone的依赖项；AccountFactorySetUp表示账号工厂的依赖项
                     * @param _type 依赖项类型，只有LandingZoneSetUp或AccountFactorySetUp。LandingZoneSetUp表示landingZone的依赖项；AccountFactorySetUp表示账号工厂的依赖项
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取功能项唯一标识，只能包含英文字母、数字和@、,._[]-:()（）【】+=，。，长度2-128个字符。
                     * @return Identifier 功能项唯一标识，只能包含英文字母、数字和@、,._[]-:()（）【】+=，。，长度2-128个字符。
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置功能项唯一标识，只能包含英文字母、数字和@、,._[]-:()（）【】+=，。，长度2-128个字符。
                     * @param _identifier 功能项唯一标识，只能包含英文字母、数字和@、,._[]-:()（）【】+=，。，长度2-128个字符。
                     * 
                     */
                    void SetIdentifier(const std::string& _identifier);

                    /**
                     * 判断参数 Identifier 是否已赋值
                     * @return Identifier 是否已赋值
                     * 
                     */
                    bool IdentifierHasBeenSet() const;

                private:

                    /**
                     * 依赖项类型，只有LandingZoneSetUp或AccountFactorySetUp。LandingZoneSetUp表示landingZone的依赖项；AccountFactorySetUp表示账号工厂的依赖项
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 功能项唯一标识，只能包含英文字母、数字和@、,._[]-:()（）【】+=，。，长度2-128个字符。
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_DEPENDSONITEM_H_
