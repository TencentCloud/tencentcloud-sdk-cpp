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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_AUDITLOGAGGREGATIONRESULT_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_AUDITLOGAGGREGATIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/Bucket.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 审计日志分析结果
                */
                class AuditLogAggregationResult : public AbstractModel
                {
                public:
                    AuditLogAggregationResult();
                    ~AuditLogAggregationResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取聚合维度
                     * @return AggregationField 聚合维度
                     * 
                     */
                    std::string GetAggregationField() const;

                    /**
                     * 设置聚合维度
                     * @param _aggregationField 聚合维度
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
                     * 获取聚合桶的结果集
                     * @return Buckets 聚合桶的结果集
                     * 
                     */
                    std::vector<Bucket> GetBuckets() const;

                    /**
                     * 设置聚合桶的结果集
                     * @param _buckets 聚合桶的结果集
                     * 
                     */
                    void SetBuckets(const std::vector<Bucket>& _buckets);

                    /**
                     * 判断参数 Buckets 是否已赋值
                     * @return Buckets 是否已赋值
                     * 
                     */
                    bool BucketsHasBeenSet() const;

                private:

                    /**
                     * 聚合维度
                     */
                    std::string m_aggregationField;
                    bool m_aggregationFieldHasBeenSet;

                    /**
                     * 聚合桶的结果集
                     */
                    std::vector<Bucket> m_buckets;
                    bool m_bucketsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_AUDITLOGAGGREGATIONRESULT_H_
