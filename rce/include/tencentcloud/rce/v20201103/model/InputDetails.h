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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_INPUTDETAILS_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_INPUTDETAILS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * 入参的详细参数信息
                */
                class InputDetails : public AbstractModel
                {
                public:
                    InputDetails();
                    ~InputDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段名称
                     * @return FieldName 字段名称
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置字段名称
                     * @param _fieldName 字段名称
                     * 
                     */
                    void SetFieldName(const std::string& _fieldName);

                    /**
                     * 判断参数 FieldName 是否已赋值
                     * @return FieldName 是否已赋值
                     * 
                     */
                    bool FieldNameHasBeenSet() const;

                    /**
                     * 获取字段值
                     * @return FieldValue 字段值
                     * 
                     */
                    std::string GetFieldValue() const;

                    /**
                     * 设置字段值
                     * @param _fieldValue 字段值
                     * 
                     */
                    void SetFieldValue(const std::string& _fieldValue);

                    /**
                     * 判断参数 FieldValue 是否已赋值
                     * @return FieldValue 是否已赋值
                     * 
                     */
                    bool FieldValueHasBeenSet() const;

                private:

                    /**
                     * 字段名称
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * 字段值
                     */
                    std::string m_fieldValue;
                    bool m_fieldValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_INPUTDETAILS_H_
