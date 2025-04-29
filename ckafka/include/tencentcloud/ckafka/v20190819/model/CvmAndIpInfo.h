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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CVMANDIPINFO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CVMANDIPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * CVM和IP信息
                */
                class CvmAndIpInfo : public AbstractModel
                {
                public:
                    CvmAndIpInfo();
                    ~CvmAndIpInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ckafka集群实例Id
                     * @return CkafkaInstanceId ckafka集群实例Id
                     * 
                     */
                    std::string GetCkafkaInstanceId() const;

                    /**
                     * 设置ckafka集群实例Id
                     * @param _ckafkaInstanceId ckafka集群实例Id
                     * 
                     */
                    void SetCkafkaInstanceId(const std::string& _ckafkaInstanceId);

                    /**
                     * 判断参数 CkafkaInstanceId 是否已赋值
                     * @return CkafkaInstanceId 是否已赋值
                     * 
                     */
                    bool CkafkaInstanceIdHasBeenSet() const;

                    /**
                     * 获取CVM实例ID
                     * @return InstanceId CVM实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置CVM实例ID
                     * @param _instanceId CVM实例ID
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
                     * 获取IP地址
                     * @return Ip IP地址
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP地址
                     * @param _ip IP地址
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                private:

                    /**
                     * ckafka集群实例Id
                     */
                    std::string m_ckafkaInstanceId;
                    bool m_ckafkaInstanceIdHasBeenSet;

                    /**
                     * CVM实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * IP地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CVMANDIPINFO_H_
