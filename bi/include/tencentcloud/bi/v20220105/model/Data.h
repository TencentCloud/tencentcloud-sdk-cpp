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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_DATA_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_DATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 数据
                */
                class Data : public AbstractModel
                {
                public:
                    Data();
                    ~Data() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目Id
                     * @return Id 项目Id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置项目Id
                     * @param _id 项目Id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EditUrl url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEditUrl() const;

                    /**
                     * 设置url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _editUrl url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEditUrl(const std::string& _editUrl);

                    /**
                     * 判断参数 EditUrl 是否已赋值
                     * @return EditUrl 是否已赋值
                     * 
                     */
                    bool EditUrlHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_editUrl;
                    bool m_editUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DATA_H_
