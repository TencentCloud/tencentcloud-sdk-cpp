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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_PARTDESC_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_PARTDESC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 部位描述
                */
                class PartDesc : public AbstractModel
                {
                public:
                    PartDesc();
                    ~PartDesc() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主要部位
                     * @return MainDir 主要部位
                     * 
                     */
                    std::string GetMainDir() const;

                    /**
                     * 设置主要部位
                     * @param _mainDir 主要部位
                     * 
                     */
                    void SetMainDir(const std::string& _mainDir);

                    /**
                     * 判断参数 MainDir 是否已赋值
                     * @return MainDir 是否已赋值
                     * 
                     */
                    bool MainDirHasBeenSet() const;

                    /**
                     * 获取部位
                     * @return Part 部位
                     * 
                     */
                    std::string GetPart() const;

                    /**
                     * 设置部位
                     * @param _part 部位
                     * 
                     */
                    void SetPart(const std::string& _part);

                    /**
                     * 判断参数 Part 是否已赋值
                     * @return Part 是否已赋值
                     * 
                     */
                    bool PartHasBeenSet() const;

                    /**
                     * 获取次要部位
                     * @return SecondaryDir 次要部位
                     * 
                     */
                    std::string GetSecondaryDir() const;

                    /**
                     * 设置次要部位
                     * @param _secondaryDir 次要部位
                     * 
                     */
                    void SetSecondaryDir(const std::string& _secondaryDir);

                    /**
                     * 判断参数 SecondaryDir 是否已赋值
                     * @return SecondaryDir 是否已赋值
                     * 
                     */
                    bool SecondaryDirHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return Type 类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
                     * @param _type 类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 主要部位
                     */
                    std::string m_mainDir;
                    bool m_mainDirHasBeenSet;

                    /**
                     * 部位
                     */
                    std::string m_part;
                    bool m_partHasBeenSet;

                    /**
                     * 次要部位
                     */
                    std::string m_secondaryDir;
                    bool m_secondaryDirHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_PARTDESC_H_
