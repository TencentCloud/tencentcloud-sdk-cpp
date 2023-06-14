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

#ifndef TENCENTCLOUD_MSP_V20180319_MODEL_DSTINFO_H_
#define TENCENTCLOUD_MSP_V20180319_MODEL_DSTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Msp
    {
        namespace V20180319
        {
            namespace Model
            {
                /**
                * 迁移目的信息
                */
                class DstInfo : public AbstractModel
                {
                public:
                    DstInfo();
                    ~DstInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取迁移目的地域
                     * @return Region 迁移目的地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置迁移目的地域
                     * @param _region 迁移目的地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取迁移目的Ip
                     * @return Ip 迁移目的Ip
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置迁移目的Ip
                     * @param _ip 迁移目的Ip
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取迁移目的端口
                     * @return Port 迁移目的端口
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置迁移目的端口
                     * @param _port 迁移目的端口
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取迁移目的实例Id
                     * @return InstanceId 迁移目的实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置迁移目的实例Id
                     * @param _instanceId 迁移目的实例Id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 迁移目的地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 迁移目的Ip
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 迁移目的端口
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 迁移目的实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MSP_V20180319_MODEL_DSTINFO_H_
