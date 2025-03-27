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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MATERIALTAGINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MATERIALTAGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 素材标签信息
                */
                class MaterialTagInfo : public AbstractModel
                {
                public:
                    MaterialTagInfo();
                    ~MaterialTagInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签类型，取值为：
<li>PRESET：预置标签。</li>
                     * @return Type 标签类型，取值为：
<li>PRESET：预置标签。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置标签类型，取值为：
<li>PRESET：预置标签。</li>
                     * @param _type 标签类型，取值为：
<li>PRESET：预置标签。</li>
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
                     * 获取标签 Id 。当标签类型为 PRESET 时，标签 Id 为预置标签 Id 。
                     * @return Id 标签 Id 。当标签类型为 PRESET 时，标签 Id 为预置标签 Id 。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置标签 Id 。当标签类型为 PRESET 时，标签 Id 为预置标签 Id 。
                     * @param _id 标签 Id 。当标签类型为 PRESET 时，标签 Id 为预置标签 Id 。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取标签名称。
                     * @return Name 标签名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置标签名称。
                     * @param _name 标签名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 标签类型，取值为：
<li>PRESET：预置标签。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 标签 Id 。当标签类型为 PRESET 时，标签 Id 为预置标签 Id 。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 标签名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MATERIALTAGINFO_H_
