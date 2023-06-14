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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 命名空间
                */
                class Namespace : public AbstractModel
                {
                public:
                    Namespace();
                    ~Namespace() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间创建时间
                     * @return ModTime 命名空间创建时间
                     * 
                     */
                    std::string GetModTime() const;

                    /**
                     * 设置命名空间创建时间
                     * @param _modTime 命名空间创建时间
                     * 
                     */
                    void SetModTime(const std::string& _modTime);

                    /**
                     * 判断参数 ModTime 是否已赋值
                     * @return ModTime 是否已赋值
                     * 
                     */
                    bool ModTimeHasBeenSet() const;

                    /**
                     * 获取命名空间修改时间
                     * @return AddTime 命名空间修改时间
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置命名空间修改时间
                     * @param _addTime 命名空间修改时间
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取命名空间描述
                     * @return Description 命名空间描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置命名空间描述
                     * @param _description 命名空间描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取命名空间名称
                     * @return Name 命名空间名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置命名空间名称
                     * @param _name 命名空间名称
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
                     * 获取默认default，TCB表示是小程序云开发创建的
                     * @return Type 默认default，TCB表示是小程序云开发创建的
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置默认default，TCB表示是小程序云开发创建的
                     * @param _type 默认default，TCB表示是小程序云开发创建的
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
                     * 命名空间创建时间
                     */
                    std::string m_modTime;
                    bool m_modTimeHasBeenSet;

                    /**
                     * 命名空间修改时间
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 命名空间描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 命名空间名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 默认default，TCB表示是小程序云开发创建的
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_NAMESPACE_H_
