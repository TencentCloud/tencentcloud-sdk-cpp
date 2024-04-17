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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_FUNCTIONTYPEORKIND_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_FUNCTIONTYPEORKIND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 函数类型或函数分类
                */
                class FunctionTypeOrKind : public AbstractModel
                {
                public:
                    FunctionTypeOrKind();
                    ~FunctionTypeOrKind() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取函数分类英文名
                     * @return ZhName 函数分类英文名
                     * 
                     */
                    std::string GetZhName() const;

                    /**
                     * 设置函数分类英文名
                     * @param _zhName 函数分类英文名
                     * 
                     */
                    void SetZhName(const std::string& _zhName);

                    /**
                     * 判断参数 ZhName 是否已赋值
                     * @return ZhName 是否已赋值
                     * 
                     */
                    bool ZhNameHasBeenSet() const;

                    /**
                     * 获取函数分类中文名
                     * @return EnName 函数分类中文名
                     * 
                     */
                    std::string GetEnName() const;

                    /**
                     * 设置函数分类中文名
                     * @param _enName 函数分类中文名
                     * 
                     */
                    void SetEnName(const std::string& _enName);

                    /**
                     * 判断参数 EnName 是否已赋值
                     * @return EnName 是否已赋值
                     * 
                     */
                    bool EnNameHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 函数分类英文名
                     */
                    std::string m_zhName;
                    bool m_zhNameHasBeenSet;

                    /**
                     * 函数分类中文名
                     */
                    std::string m_enName;
                    bool m_enNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_FUNCTIONTYPEORKIND_H_
