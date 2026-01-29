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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATEINDEX_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATEINDEX_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/MgoKeySchema.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 本类型用于UpdateTable接口中描述待创建索引信息
                */
                class CreateIndex : public AbstractModel
                {
                public:
                    CreateIndex();
                    ~CreateIndex() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取索引名称
                     * @return IndexName 索引名称
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置索引名称
                     * @param _indexName 索引名称
                     * 
                     */
                    void SetIndexName(const std::string& _indexName);

                    /**
                     * 判断参数 IndexName 是否已赋值
                     * @return IndexName 是否已赋值
                     * 
                     */
                    bool IndexNameHasBeenSet() const;

                    /**
                     * 获取索引结构
                     * @return MgoKeySchema 索引结构
                     * 
                     */
                    MgoKeySchema GetMgoKeySchema() const;

                    /**
                     * 设置索引结构
                     * @param _mgoKeySchema 索引结构
                     * 
                     */
                    void SetMgoKeySchema(const MgoKeySchema& _mgoKeySchema);

                    /**
                     * 判断参数 MgoKeySchema 是否已赋值
                     * @return MgoKeySchema 是否已赋值
                     * 
                     */
                    bool MgoKeySchemaHasBeenSet() const;

                private:

                    /**
                     * 索引名称
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * 索引结构
                     */
                    MgoKeySchema m_mgoKeySchema;
                    bool m_mgoKeySchemaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATEINDEX_H_
