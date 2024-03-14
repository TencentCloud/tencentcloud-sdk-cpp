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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBECOLLATIONTIMEZONEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBECOLLATIONTIMEZONEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeCollationTimeZone请求参数结构体
                */
                class DescribeCollationTimeZoneRequest : public AbstractModel
                {
                public:
                    DescribeCollationTimeZoneRequest();
                    ~DescribeCollationTimeZoneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取购买实例的宿主机类型，PM-物理机, CLOUD_PREMIUM-云服务器高性能云盘，
CLOUD_SSD-云服务器SSD云盘,CLOUD_HSSD-云服务器加强型SSD云盘，CLOUD_TSSD-云服务器极速型SSD云盘，CLOUD_BSSD-云服务器通用型SSD云盘,CLOUD_BASIC-云服务器云硬盘，默认取值PM
                     * @return MachineType 购买实例的宿主机类型，PM-物理机, CLOUD_PREMIUM-云服务器高性能云盘，
CLOUD_SSD-云服务器SSD云盘,CLOUD_HSSD-云服务器加强型SSD云盘，CLOUD_TSSD-云服务器极速型SSD云盘，CLOUD_BSSD-云服务器通用型SSD云盘,CLOUD_BASIC-云服务器云硬盘，默认取值PM
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置购买实例的宿主机类型，PM-物理机, CLOUD_PREMIUM-云服务器高性能云盘，
CLOUD_SSD-云服务器SSD云盘,CLOUD_HSSD-云服务器加强型SSD云盘，CLOUD_TSSD-云服务器极速型SSD云盘，CLOUD_BSSD-云服务器通用型SSD云盘,CLOUD_BASIC-云服务器云硬盘，默认取值PM
                     * @param _machineType 购买实例的宿主机类型，PM-物理机, CLOUD_PREMIUM-云服务器高性能云盘，
CLOUD_SSD-云服务器SSD云盘,CLOUD_HSSD-云服务器加强型SSD云盘，CLOUD_TSSD-云服务器极速型SSD云盘，CLOUD_BSSD-云服务器通用型SSD云盘,CLOUD_BASIC-云服务器云硬盘，默认取值PM
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取购买实例版本号
                     * @return DBVersion 购买实例版本号
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置购买实例版本号
                     * @param _dBVersion 购买实例版本号
                     * 
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     * 
                     */
                    bool DBVersionHasBeenSet() const;

                private:

                    /**
                     * 购买实例的宿主机类型，PM-物理机, CLOUD_PREMIUM-云服务器高性能云盘，
CLOUD_SSD-云服务器SSD云盘,CLOUD_HSSD-云服务器加强型SSD云盘，CLOUD_TSSD-云服务器极速型SSD云盘，CLOUD_BSSD-云服务器通用型SSD云盘,CLOUD_BASIC-云服务器云硬盘，默认取值PM
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * 购买实例版本号
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBECOLLATIONTIMEZONEREQUEST_H_
