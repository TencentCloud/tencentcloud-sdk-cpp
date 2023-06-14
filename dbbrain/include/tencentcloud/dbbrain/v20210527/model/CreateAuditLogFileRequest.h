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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEAUDITLOGFILEREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEAUDITLOGFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/AuditLogFilter.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * CreateAuditLogFile请求参数结构体
                */
                class CreateAuditLogFileRequest : public AbstractModel
                {
                public:
                    CreateAuditLogFileRequest();
                    ~CreateAuditLogFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务产品类型，支持值包括： "dcdb" - 云数据库 Tdsql， "mariadb" - 云数据库 MariaDB for MariaDB。
                     * @return Product 服务产品类型，支持值包括： "dcdb" - 云数据库 Tdsql， "mariadb" - 云数据库 MariaDB for MariaDB。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值包括： "dcdb" - 云数据库 Tdsql， "mariadb" - 云数据库 MariaDB for MariaDB。
                     * @param _product 服务产品类型，支持值包括： "dcdb" - 云数据库 Tdsql， "mariadb" - 云数据库 MariaDB for MariaDB。
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
                     * 获取与Product保持一致。如："dcdb" ,"mariadb"
                     * @return NodeRequestType 与Product保持一致。如："dcdb" ,"mariadb"
                     * 
                     */
                    std::string GetNodeRequestType() const;

                    /**
                     * 设置与Product保持一致。如："dcdb" ,"mariadb"
                     * @param _nodeRequestType 与Product保持一致。如："dcdb" ,"mariadb"
                     * 
                     */
                    void SetNodeRequestType(const std::string& _nodeRequestType);

                    /**
                     * 判断参数 NodeRequestType 是否已赋值
                     * @return NodeRequestType 是否已赋值
                     * 
                     */
                    bool NodeRequestTypeHasBeenSet() const;

                    /**
                     * 获取实例 ID 。
                     * @return InstanceId 实例 ID 。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID 。
                     * @param _instanceId 实例 ID 。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取开始时间，如“2019-09-10 12:13:14”。	
                     * @return StartTime 开始时间，如“2019-09-10 12:13:14”。	
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，如“2019-09-10 12:13:14”。	
                     * @param _startTime 开始时间，如“2019-09-10 12:13:14”。	
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
                     * 获取截止时间，如“2019-09-11 10:13:14”。
                     * @return EndTime 截止时间，如“2019-09-11 10:13:14”。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置截止时间，如“2019-09-11 10:13:14”。
                     * @param _endTime 截止时间，如“2019-09-11 10:13:14”。
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
                     * 获取过滤条件。可按设置的过滤条件过滤日志。
                     * @return Filter 过滤条件。可按设置的过滤条件过滤日志。
                     * 
                     */
                    AuditLogFilter GetFilter() const;

                    /**
                     * 设置过滤条件。可按设置的过滤条件过滤日志。
                     * @param _filter 过滤条件。可按设置的过滤条件过滤日志。
                     * 
                     */
                    void SetFilter(const AuditLogFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * 服务产品类型，支持值包括： "dcdb" - 云数据库 Tdsql， "mariadb" - 云数据库 MariaDB for MariaDB。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 与Product保持一致。如："dcdb" ,"mariadb"
                     */
                    std::string m_nodeRequestType;
                    bool m_nodeRequestTypeHasBeenSet;

                    /**
                     * 实例 ID 。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 开始时间，如“2019-09-10 12:13:14”。	
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 截止时间，如“2019-09-11 10:13:14”。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 过滤条件。可按设置的过滤条件过滤日志。
                     */
                    AuditLogFilter m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEAUDITLOGFILEREQUEST_H_
