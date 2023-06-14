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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_AUDITLOG_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_AUDITLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/AuditLogInfo.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * 操作日志
                */
                class AuditLog : public AbstractModel
                {
                public:
                    AuditLog();
                    ~AuditLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志类型
                     * @return Resource 日志类型
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置日志类型
                     * @param _resource 日志类型
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取日志表名
                     * @return Metric 日志表名
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置日志表名
                     * @param _metric 日志表名
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取日志总数
                     * @return TotalCount 日志总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置日志总数
                     * @param _totalCount 日志总数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取日志列表
                     * @return DataSet 日志列表
                     * 
                     */
                    std::vector<AuditLogInfo> GetDataSet() const;

                    /**
                     * 设置日志列表
                     * @param _dataSet 日志列表
                     * 
                     */
                    void SetDataSet(const std::vector<AuditLogInfo>& _dataSet);

                    /**
                     * 判断参数 DataSet 是否已赋值
                     * @return DataSet 是否已赋值
                     * 
                     */
                    bool DataSetHasBeenSet() const;

                private:

                    /**
                     * 日志类型
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 日志表名
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 日志总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 日志列表
                     */
                    std::vector<AuditLogInfo> m_dataSet;
                    bool m_dataSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_AUDITLOG_H_
