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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEMONGODBPROCESSLISTREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEMONGODBPROCESSLISTREQUEST_H_

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
                * DescribeMongoDBProcessList请求参数结构体
                */
                class DescribeMongoDBProcessListRequest : public AbstractModel
                {
                public:
                    DescribeMongoDBProcessListRequest();
                    ~DescribeMongoDBProcessListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。可通过 [DescribeDiagDBInstances](https://cloud.tencent.com/document/api/1130/57798) 接口获取。
                     * @return InstanceId 实例 ID。可通过 [DescribeDiagDBInstances](https://cloud.tencent.com/document/api/1130/57798) 接口获取。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。可通过 [DescribeDiagDBInstances](https://cloud.tencent.com/document/api/1130/57798) 接口获取。
                     * @param _instanceId 实例 ID。可通过 [DescribeDiagDBInstances](https://cloud.tencent.com/document/api/1130/57798) 接口获取。
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
                     * 获取服务产品类型，支持值：mongodb
                     * @return Product 服务产品类型，支持值：mongodb
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值：mongodb
                     * @param _product 服务产品类型，支持值：mongodb
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
                     * 获取线程的ID，用于筛选线程列表。
                     * @return ID 线程的ID，用于筛选线程列表。
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置线程的ID，用于筛选线程列表。
                     * @param _iD 线程的ID，用于筛选线程列表。
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取线程的操作主机地址，用于筛选线程列表。
                     * @return Host 线程的操作主机地址，用于筛选线程列表。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置线程的操作主机地址，用于筛选线程列表。
                     * @param _host 线程的操作主机地址，用于筛选线程列表。
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取线程的操作数据库，用于筛选线程列表,如果是多个 使用 ','  分割
                     * @return DB 线程的操作数据库，用于筛选线程列表,如果是多个 使用 ','  分割
                     * 
                     */
                    std::string GetDB() const;

                    /**
                     * 设置线程的操作数据库，用于筛选线程列表,如果是多个 使用 ','  分割
                     * @param _dB 线程的操作数据库，用于筛选线程列表,如果是多个 使用 ','  分割
                     * 
                     */
                    void SetDB(const std::string& _dB);

                    /**
                     * 判断参数 DB 是否已赋值
                     * @return DB 是否已赋值
                     * 
                     */
                    bool DBHasBeenSet() const;

                    /**
                     * 获取命令类型 ,如果是多个 使用 ','  分割
                     * @return Type 命令类型 ,如果是多个 使用 ','  分割
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置命令类型 ,如果是多个 使用 ','  分割
                     * @param _type 命令类型 ,如果是多个 使用 ','  分割
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取线程的操作时长最小值，单位秒，用于筛选操作时长大于该值的线程列表。
                     * @return Time 线程的操作时长最小值，单位秒，用于筛选操作时长大于该值的线程列表。
                     * 
                     */
                    uint64_t GetTime() const;

                    /**
                     * 设置线程的操作时长最小值，单位秒，用于筛选操作时长大于该值的线程列表。
                     * @param _time 线程的操作时长最小值，单位秒，用于筛选操作时长大于该值的线程列表。
                     * 
                     */
                    void SetTime(const uint64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取返回数量，默认20。
                     * @return Limit 返回数量，默认20。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认20。
                     * @param _limit 返回数量，默认20。
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
                     * 实例 ID。可通过 [DescribeDiagDBInstances](https://cloud.tencent.com/document/api/1130/57798) 接口获取。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 服务产品类型，支持值：mongodb
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 线程的ID，用于筛选线程列表。
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 线程的操作主机地址，用于筛选线程列表。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 线程的操作数据库，用于筛选线程列表,如果是多个 使用 ','  分割
                     */
                    std::string m_dB;
                    bool m_dBHasBeenSet;

                    /**
                     * 命令类型 ,如果是多个 使用 ','  分割
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 线程的操作时长最小值，单位秒，用于筛选操作时长大于该值的线程列表。
                     */
                    uint64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 返回数量，默认20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEMONGODBPROCESSLISTREQUEST_H_
