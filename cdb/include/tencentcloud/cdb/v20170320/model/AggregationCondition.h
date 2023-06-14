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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_AGGREGATIONCONDITION_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_AGGREGATIONCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 审计日志聚合条件
                */
                class AggregationCondition : public AbstractModel
                {
                public:
                    AggregationCondition();
                    ~AggregationCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取聚合字段。目前仅支持host-源IP、user-用户名、dbName-数据库名、sqlType-sql类型。
                     * @return AggregationField 聚合字段。目前仅支持host-源IP、user-用户名、dbName-数据库名、sqlType-sql类型。
                     * 
                     */
                    std::string GetAggregationField() const;

                    /**
                     * 设置聚合字段。目前仅支持host-源IP、user-用户名、dbName-数据库名、sqlType-sql类型。
                     * @param _aggregationField 聚合字段。目前仅支持host-源IP、user-用户名、dbName-数据库名、sqlType-sql类型。
                     * 
                     */
                    void SetAggregationField(const std::string& _aggregationField);

                    /**
                     * 判断参数 AggregationField 是否已赋值
                     * @return AggregationField 是否已赋值
                     * 
                     */
                    bool AggregationFieldHasBeenSet() const;

                    /**
                     * 获取偏移量。
                     * @return Offset 偏移量。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量。
                     * @param _offset 偏移量。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取该聚合字段下要返回聚合桶的数量，最大100。
                     * @return Limit 该聚合字段下要返回聚合桶的数量，最大100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置该聚合字段下要返回聚合桶的数量，最大100。
                     * @param _limit 该聚合字段下要返回聚合桶的数量，最大100。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 聚合字段。目前仅支持host-源IP、user-用户名、dbName-数据库名、sqlType-sql类型。
                     */
                    std::string m_aggregationField;
                    bool m_aggregationFieldHasBeenSet;

                    /**
                     * 偏移量。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 该聚合字段下要返回聚合桶的数量，最大100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_AGGREGATIONCONDITION_H_
