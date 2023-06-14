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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_VSMINFO_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_VSMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 支持的Vsm类型信息
                */
                class VsmInfo : public AbstractModel
                {
                public:
                    VsmInfo();
                    ~VsmInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VSM类型名称
                     * @return TypeName VSM类型名称
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置VSM类型名称
                     * @param _typeName VSM类型名称
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
                     * 获取VSM类型值
                     * @return TypeID VSM类型值
                     * 
                     */
                    int64_t GetTypeID() const;

                    /**
                     * 设置VSM类型值
                     * @param _typeID VSM类型值
                     * 
                     */
                    void SetTypeID(const int64_t& _typeID);

                    /**
                     * 判断参数 TypeID 是否已赋值
                     * @return TypeID 是否已赋值
                     * 
                     */
                    bool TypeIDHasBeenSet() const;

                private:

                    /**
                     * VSM类型名称
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * VSM类型值
                     */
                    int64_t m_typeID;
                    bool m_typeIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_VSMINFO_H_
