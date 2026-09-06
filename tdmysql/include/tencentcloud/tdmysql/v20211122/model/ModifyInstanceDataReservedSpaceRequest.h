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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYINSTANCEDATARESERVEDSPACEREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYINSTANCEDATARESERVEDSPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * ModifyInstanceDataReservedSpace请求参数结构体
                */
                class ModifyInstanceDataReservedSpaceRequest : public AbstractModel
                {
                public:
                    ModifyInstanceDataReservedSpaceRequest();
                    ~ModifyInstanceDataReservedSpaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>拟修改的目标保留空间大小</p><p>单位：GB</p>
                     * @return ReservedSpaceGB <p>拟修改的目标保留空间大小</p><p>单位：GB</p>
                     * 
                     */
                    double GetReservedSpaceGB() const;

                    /**
                     * 设置<p>拟修改的目标保留空间大小</p><p>单位：GB</p>
                     * @param _reservedSpaceGB <p>拟修改的目标保留空间大小</p><p>单位：GB</p>
                     * 
                     */
                    void SetReservedSpaceGB(const double& _reservedSpaceGB);

                    /**
                     * 判断参数 ReservedSpaceGB 是否已赋值
                     * @return ReservedSpaceGB 是否已赋值
                     * 
                     */
                    bool ReservedSpaceGBHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>拟修改的目标保留空间大小</p><p>单位：GB</p>
                     */
                    double m_reservedSpaceGB;
                    bool m_reservedSpaceGBHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYINSTANCEDATARESERVEDSPACEREQUEST_H_
