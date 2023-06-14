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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATESECURITYAUDITLOGEXPORTTASKREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATESECURITYAUDITLOGEXPORTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateSecurityAuditLogExportTask请求参数结构体
                */
                class CreateSecurityAuditLogExportTaskRequest : public AbstractModel
                {
                public:
                    CreateSecurityAuditLogExportTaskRequest();
                    ~CreateSecurityAuditLogExportTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安全审计组Id。
                     * @return SecAuditGroupId 安全审计组Id。
                     * 
                     */
                    std::string GetSecAuditGroupId() const;

                    /**
                     * 设置安全审计组Id。
                     * @param _secAuditGroupId 安全审计组Id。
                     * 
                     */
                    void SetSecAuditGroupId(const std::string& _secAuditGroupId);

                    /**
                     * 判断参数 SecAuditGroupId 是否已赋值
                     * @return SecAuditGroupId 是否已赋值
                     * 
                     */
                    bool SecAuditGroupIdHasBeenSet() const;

                    /**
                     * 获取导出日志开始时间，例如2020-12-28 00:00:00。
                     * @return StartTime 导出日志开始时间，例如2020-12-28 00:00:00。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置导出日志开始时间，例如2020-12-28 00:00:00。
                     * @param _startTime 导出日志开始时间，例如2020-12-28 00:00:00。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取导出日志结束时间，例如2020-12-28 01:00:00。
                     * @return EndTime 导出日志结束时间，例如2020-12-28 01:00:00。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置导出日志结束时间，例如2020-12-28 01:00:00。
                     * @param _endTime 导出日志结束时间，例如2020-12-28 01:00:00。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取服务产品类型，支持值："mysql" - 云数据库 MySQL。
                     * @return Product 服务产品类型，支持值："mysql" - 云数据库 MySQL。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值："mysql" - 云数据库 MySQL。
                     * @param _product 服务产品类型，支持值："mysql" - 云数据库 MySQL。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取日志风险等级列表，支持值包括：0 无风险；1 低风险；2 中风险；3 高风险。
                     * @return DangerLevels 日志风险等级列表，支持值包括：0 无风险；1 低风险；2 中风险；3 高风险。
                     * 
                     */
                    std::vector<int64_t> GetDangerLevels() const;

                    /**
                     * 设置日志风险等级列表，支持值包括：0 无风险；1 低风险；2 中风险；3 高风险。
                     * @param _dangerLevels 日志风险等级列表，支持值包括：0 无风险；1 低风险；2 中风险；3 高风险。
                     * 
                     */
                    void SetDangerLevels(const std::vector<int64_t>& _dangerLevels);

                    /**
                     * 判断参数 DangerLevels 是否已赋值
                     * @return DangerLevels 是否已赋值
                     * 
                     */
                    bool DangerLevelsHasBeenSet() const;

                private:

                    /**
                     * 安全审计组Id。
                     */
                    std::string m_secAuditGroupId;
                    bool m_secAuditGroupIdHasBeenSet;

                    /**
                     * 导出日志开始时间，例如2020-12-28 00:00:00。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 导出日志结束时间，例如2020-12-28 01:00:00。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 服务产品类型，支持值："mysql" - 云数据库 MySQL。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 日志风险等级列表，支持值包括：0 无风险；1 低风险；2 中风险；3 高风险。
                     */
                    std::vector<int64_t> m_dangerLevels;
                    bool m_dangerLevelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATESECURITYAUDITLOGEXPORTTASKREQUEST_H_
