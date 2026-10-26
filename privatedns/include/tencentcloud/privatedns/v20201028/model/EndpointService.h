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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ENDPOINTSERVICE_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ENDPOINTSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * PrivateDNS出站终端节点转发IP
                */
                class EndpointService : public AbstractModel
                {
                public:
                    EndpointService();
                    ~EndpointService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>子网剩余IP数</p>
                     * @return SubnetLessIp <p>子网剩余IP数</p>
                     * 
                     */
                    uint64_t GetSubnetLessIp() const;

                    /**
                     * 设置<p>子网剩余IP数</p>
                     * @param _subnetLessIp <p>子网剩余IP数</p>
                     * 
                     */
                    void SetSubnetLessIp(const uint64_t& _subnetLessIp);

                    /**
                     * 判断参数 SubnetLessIp 是否已赋值
                     * @return SubnetLessIp 是否已赋值
                     * 
                     */
                    bool SubnetLessIpHasBeenSet() const;

                private:

                    /**
                     * <p>子网剩余IP数</p>
                     */
                    uint64_t m_subnetLessIp;
                    bool m_subnetLessIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ENDPOINTSERVICE_H_
