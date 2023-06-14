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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBDIAGHISTORYREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBDIAGHISTORYREQUEST_H_

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
                * DescribeDBDiagHistory请求参数结构体
                */
                class DescribeDBDiagHistoryRequest : public AbstractModel
                {
                public:
                    DescribeDBDiagHistoryRequest();
                    ~DescribeDBDiagHistoryRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取结束时间，如“2019-09-11 12:13:14”，结束时间与开始时间的间隔最大可为2天。
                     * @return EndTime 结束时间，如“2019-09-11 12:13:14”，结束时间与开始时间的间隔最大可为2天。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，如“2019-09-11 12:13:14”，结束时间与开始时间的间隔最大可为2天。
                     * @param _endTime 结束时间，如“2019-09-11 12:13:14”，结束时间与开始时间的间隔最大可为2天。
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
                     * 获取服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，默认为"mysql"。
                     * @return Product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，默认为"mysql"。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，默认为"mysql"。
                     * @param _product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，默认为"mysql"。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

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
                     * 结束时间，如“2019-09-11 12:13:14”，结束时间与开始时间的间隔最大可为2天。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，默认为"mysql"。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBDIAGHISTORYREQUEST_H_
