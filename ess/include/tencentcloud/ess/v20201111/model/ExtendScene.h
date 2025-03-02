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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_EXTENDSCENE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_EXTENDSCENE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 印章扩展信息
                */
                class ExtendScene : public AbstractModel
                {
                public:
                    ExtendScene();
                    ~ExtendScene() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取印章来源类型
                     * @return GenerateType 印章来源类型
                     * 
                     */
                    std::string GetGenerateType() const;

                    /**
                     * 设置印章来源类型
                     * @param _generateType 印章来源类型
                     * 
                     */
                    void SetGenerateType(const std::string& _generateType);

                    /**
                     * 判断参数 GenerateType 是否已赋值
                     * @return GenerateType 是否已赋值
                     * 
                     */
                    bool GenerateTypeHasBeenSet() const;

                    /**
                     * 获取印章来源类型描述
                     * @return GenerateTypeDesc 印章来源类型描述
                     * 
                     */
                    std::string GetGenerateTypeDesc() const;

                    /**
                     * 设置印章来源类型描述
                     * @param _generateTypeDesc 印章来源类型描述
                     * 
                     */
                    void SetGenerateTypeDesc(const std::string& _generateTypeDesc);

                    /**
                     * 判断参数 GenerateTypeDesc 是否已赋值
                     * @return GenerateTypeDesc 是否已赋值
                     * 
                     */
                    bool GenerateTypeDescHasBeenSet() const;

                    /**
                     * 获取印章来源logo
                     * @return GenerateTypeLogo 印章来源logo
                     * 
                     */
                    std::string GetGenerateTypeLogo() const;

                    /**
                     * 设置印章来源logo
                     * @param _generateTypeLogo 印章来源logo
                     * 
                     */
                    void SetGenerateTypeLogo(const std::string& _generateTypeLogo);

                    /**
                     * 判断参数 GenerateTypeLogo 是否已赋值
                     * @return GenerateTypeLogo 是否已赋值
                     * 
                     */
                    bool GenerateTypeLogoHasBeenSet() const;

                private:

                    /**
                     * 印章来源类型
                     */
                    std::string m_generateType;
                    bool m_generateTypeHasBeenSet;

                    /**
                     * 印章来源类型描述
                     */
                    std::string m_generateTypeDesc;
                    bool m_generateTypeDescHasBeenSet;

                    /**
                     * 印章来源logo
                     */
                    std::string m_generateTypeLogo;
                    bool m_generateTypeLogoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_EXTENDSCENE_H_
