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

#ifndef TENCENTCLOUD_IRP_V20220324_MODEL_DISLIKEINFO_H_
#define TENCENTCLOUD_IRP_V20220324_MODEL_DISLIKEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Irp
    {
        namespace V20220324
        {
            namespace Model
            {
                /**
                * 不喜欢信息
                */
                class DislikeInfo : public AbstractModel
                {
                public:
                    DislikeInfo();
                    ~DislikeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取不喜欢的物料类别，对应物料上传协议中的字段名，如authorId，keyword，topic等
                     * @return Type 不喜欢的物料类别，对应物料上传协议中的字段名，如authorId，keyword，topic等
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置不喜欢的物料类别，对应物料上传协议中的字段名，如authorId，keyword，topic等
                     * @param _type 不喜欢的物料类别，对应物料上传协议中的字段名，如authorId，keyword，topic等
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
                     * 获取type对应字段名的值，如具体的topic名，作者id等
                     * @return Value type对应字段名的值，如具体的topic名，作者id等
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置type对应字段名的值，如具体的topic名，作者id等
                     * @param _value type对应字段名的值，如具体的topic名，作者id等
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 不喜欢的物料类别，对应物料上传协议中的字段名，如authorId，keyword，topic等
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * type对应字段名的值，如具体的topic名，作者id等
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220324_MODEL_DISLIKEINFO_H_
