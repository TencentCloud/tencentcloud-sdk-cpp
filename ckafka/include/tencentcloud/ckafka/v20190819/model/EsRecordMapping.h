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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ESRECORDMAPPING_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ESRECORDMAPPING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 消息字段与 es 索引的映射关系
                */
                class EsRecordMapping : public AbstractModel
                {
                public:
                    EsRecordMapping();
                    ~EsRecordMapping() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取es 索引成员名称
                     * @return ColumnName es 索引成员名称
                     * 
                     */
                    std::string GetColumnName() const;

                    /**
                     * 设置es 索引成员名称
                     * @param _columnName es 索引成员名称
                     * 
                     */
                    void SetColumnName(const std::string& _columnName);

                    /**
                     * 判断参数 ColumnName 是否已赋值
                     * @return ColumnName 是否已赋值
                     * 
                     */
                    bool ColumnNameHasBeenSet() const;

                    /**
                     * 获取消息字段名称
                     * @return JsonKey 消息字段名称
                     * 
                     */
                    std::string GetJsonKey() const;

                    /**
                     * 设置消息字段名称
                     * @param _jsonKey 消息字段名称
                     * 
                     */
                    void SetJsonKey(const std::string& _jsonKey);

                    /**
                     * 判断参数 JsonKey 是否已赋值
                     * @return JsonKey 是否已赋值
                     * 
                     */
                    bool JsonKeyHasBeenSet() const;

                private:

                    /**
                     * es 索引成员名称
                     */
                    std::string m_columnName;
                    bool m_columnNameHasBeenSet;

                    /**
                     * 消息字段名称
                     */
                    std::string m_jsonKey;
                    bool m_jsonKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ESRECORDMAPPING_H_
