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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_OPENAUDITSERVICEREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_OPENAUDITSERVICEREQUEST_H_

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
                * OpenAuditService请求参数结构体
                */
                class OpenAuditServiceRequest : public AbstractModel
                {
                public:
                    OpenAuditServiceRequest();
                    ~OpenAuditServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务产品类型，支持值包括： "dcdb" - 云数据库 Tdsql， "mariadb" - 云数据库 MariaDB。
                     * @return Product 服务产品类型，支持值包括： "dcdb" - 云数据库 Tdsql， "mariadb" - 云数据库 MariaDB。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值包括： "dcdb" - 云数据库 Tdsql， "mariadb" - 云数据库 MariaDB。
                     * @param _product 服务产品类型，支持值包括： "dcdb" - 云数据库 Tdsql， "mariadb" - 云数据库 MariaDB。
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
                     * 获取与Product保持一致。如："dcdb" ,"mariadb"。
                     * @return NodeRequestType 与Product保持一致。如："dcdb" ,"mariadb"。
                     * 
                     */
                    std::string GetNodeRequestType() const;

                    /**
                     * 设置与Product保持一致。如："dcdb" ,"mariadb"。
                     * @param _nodeRequestType 与Product保持一致。如："dcdb" ,"mariadb"。
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
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
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
                     * 获取日志保存总时长，只能是7,30,90,180,365,1095,1825。
                     * @return LogExpireDay 日志保存总时长，只能是7,30,90,180,365,1095,1825。
                     * 
                     */
                    int64_t GetLogExpireDay() const;

                    /**
                     * 设置日志保存总时长，只能是7,30,90,180,365,1095,1825。
                     * @param _logExpireDay 日志保存总时长，只能是7,30,90,180,365,1095,1825。
                     * 
                     */
                    void SetLogExpireDay(const int64_t& _logExpireDay);

                    /**
                     * 判断参数 LogExpireDay 是否已赋值
                     * @return LogExpireDay 是否已赋值
                     * 
                     */
                    bool LogExpireDayHasBeenSet() const;

                    /**
                     * 获取高频日志保存时长，只能是7,30,90,180,365,1095,1825。
                     * @return HotLogExpireDay 高频日志保存时长，只能是7,30,90,180,365,1095,1825。
                     * 
                     */
                    int64_t GetHotLogExpireDay() const;

                    /**
                     * 设置高频日志保存时长，只能是7,30,90,180,365,1095,1825。
                     * @param _hotLogExpireDay 高频日志保存时长，只能是7,30,90,180,365,1095,1825。
                     * 
                     */
                    void SetHotLogExpireDay(const int64_t& _hotLogExpireDay);

                    /**
                     * 判断参数 HotLogExpireDay 是否已赋值
                     * @return HotLogExpireDay 是否已赋值
                     * 
                     */
                    bool HotLogExpireDayHasBeenSet() const;

                private:

                    /**
                     * 服务产品类型，支持值包括： "dcdb" - 云数据库 Tdsql， "mariadb" - 云数据库 MariaDB。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 与Product保持一致。如："dcdb" ,"mariadb"。
                     */
                    std::string m_nodeRequestType;
                    bool m_nodeRequestTypeHasBeenSet;

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 日志保存总时长，只能是7,30,90,180,365,1095,1825。
                     */
                    int64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * 高频日志保存时长，只能是7,30,90,180,365,1095,1825。
                     */
                    int64_t m_hotLogExpireDay;
                    bool m_hotLogExpireDayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_OPENAUDITSERVICEREQUEST_H_
