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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPADISCOVERYTASKTABLESREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPADISCOVERYTASKTABLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeDSPADiscoveryTaskTables请求参数结构体
                */
                class DescribeDSPADiscoveryTaskTablesRequest : public AbstractModel
                {
                public:
                    DescribeDSPADiscoveryTaskTablesRequest();
                    ~DescribeDSPADiscoveryTaskTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例ID
                     * @return DspaId DSPA实例ID
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例ID
                     * @param _dspaId DSPA实例ID
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取数据库扫描结果ID
                     * @return DbResultId 数据库扫描结果ID
                     * @deprecated
                     */
                    int64_t GetDbResultId() const;

                    /**
                     * 设置数据库扫描结果ID
                     * @param _dbResultId 数据库扫描结果ID
                     * @deprecated
                     */
                    void SetDbResultId(const int64_t& _dbResultId);

                    /**
                     * 判断参数 DbResultId 是否已赋值
                     * @return DbResultId 是否已赋值
                     * @deprecated
                     */
                    bool DbResultIdHasBeenSet() const;

                    /**
                     * 获取db名称
                     * @return DbName db名称
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置db名称
                     * @param _dbName db名称
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取任务扫描id
                     * @return ScanResultId 任务扫描id
                     * 
                     */
                    int64_t GetScanResultId() const;

                    /**
                     * 设置任务扫描id
                     * @param _scanResultId 任务扫描id
                     * 
                     */
                    void SetScanResultId(const int64_t& _scanResultId);

                    /**
                     * 判断参数 ScanResultId 是否已赋值
                     * @return ScanResultId 是否已赋值
                     * 
                     */
                    bool ScanResultIdHasBeenSet() const;

                private:

                    /**
                     * DSPA实例ID
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 任务ID
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 数据库扫描结果ID
                     */
                    int64_t m_dbResultId;
                    bool m_dbResultIdHasBeenSet;

                    /**
                     * db名称
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 任务扫描id
                     */
                    int64_t m_scanResultId;
                    bool m_scanResultIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPADISCOVERYTASKTABLESREQUEST_H_
