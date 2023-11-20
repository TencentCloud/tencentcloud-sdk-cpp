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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_APPROVETYPE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_APPROVETYPE_H_

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
                * 审批分类
                */
                class ApproveType : public AbstractModel
                {
                public:
                    ApproveType();
                    ~ApproveType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取申请分类key
                     * @return Type 申请分类key
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置申请分类key
                     * @param _type 申请分类key
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
                     * 获取类型名称
                     * @return TypeName 类型名称
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置类型名称
                     * @param _typeName 类型名称
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取申请类型key
                     * @return Classification 申请类型key
                     * 
                     */
                    std::string GetClassification() const;

                    /**
                     * 设置申请类型key
                     * @param _classification 申请类型key
                     * 
                     */
                    void SetClassification(const std::string& _classification);

                    /**
                     * 判断参数 Classification 是否已赋值
                     * @return Classification 是否已赋值
                     * 
                     */
                    bool ClassificationHasBeenSet() const;

                private:

                    /**
                     * 申请分类key
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 类型名称
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * 申请类型key
                     */
                    std::string m_classification;
                    bool m_classificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_APPROVETYPE_H_
