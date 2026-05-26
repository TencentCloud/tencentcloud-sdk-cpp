/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_VDBDOCUMENT_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_VDBDOCUMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdai/v20250717/model/VDBFieldMap.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * vdb数据库文档结构
                */
                class VDBDocument : public AbstractModel
                {
                public:
                    VDBDocument();
                    ~VDBDocument() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>vdb document数据id</p>
                     * @return Id <p>vdb document数据id</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>vdb document数据id</p>
                     * @param _id <p>vdb document数据id</p>
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
                     * 获取<p>vdb document数据标量字段</p>
                     * @return Fields <p>vdb document数据标量字段</p>
                     * 
                     */
                    std::vector<VDBFieldMap> GetFields() const;

                    /**
                     * 设置<p>vdb document数据标量字段</p>
                     * @param _fields <p>vdb document数据标量字段</p>
                     * 
                     */
                    void SetFields(const std::vector<VDBFieldMap>& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                private:

                    /**
                     * <p>vdb document数据id</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>vdb document数据标量字段</p>
                     */
                    std::vector<VDBFieldMap> m_fields;
                    bool m_fieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_VDBDOCUMENT_H_
