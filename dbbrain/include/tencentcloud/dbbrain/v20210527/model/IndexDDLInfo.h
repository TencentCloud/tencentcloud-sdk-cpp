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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_INDEXDDLINFO_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_INDEXDDLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 索引详细信息
                */
                class IndexDDLInfo : public AbstractModel
                {
                public:
                    IndexDDLInfo();
                    ~IndexDDLInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>索引名称。</p>
                     * @return IndexName <p>索引名称。</p>
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置<p>索引名称。</p>
                     * @param _indexName <p>索引名称。</p>
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
                     * 获取<p>创建索引语句。</p>
                     * @return DDL <p>创建索引语句。</p>
                     * 
                     */
                    std::string GetDDL() const;

                    /**
                     * 设置<p>创建索引语句。</p>
                     * @param _dDL <p>创建索引语句。</p>
                     * 
                     */
                    void SetDDL(const std::string& _dDL);

                    /**
                     * 判断参数 DDL 是否已赋值
                     * @return DDL 是否已赋值
                     * 
                     */
                    bool DDLHasBeenSet() const;

                private:

                    /**
                     * <p>索引名称。</p>
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * <p>创建索引语句。</p>
                     */
                    std::string m_dDL;
                    bool m_dDLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_INDEXDDLINFO_H_
