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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_OPENPORTSTATISTICS_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_OPENPORTSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 端口统计列表
                */
                class OpenPortStatistics : public AbstractModel
                {
                public:
                    OpenPortStatistics();
                    ~OpenPortStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取端口号
                     * @return Port 端口号
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置端口号
                     * @param _port 端口号
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取主机数量
                     * @return MachineNum 主机数量
                     * 
                     */
                    uint64_t GetMachineNum() const;

                    /**
                     * 设置主机数量
                     * @param _machineNum 主机数量
                     * 
                     */
                    void SetMachineNum(const uint64_t& _machineNum);

                    /**
                     * 判断参数 MachineNum 是否已赋值
                     * @return MachineNum 是否已赋值
                     * 
                     */
                    bool MachineNumHasBeenSet() const;

                private:

                    /**
                     * 端口号
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 主机数量
                     */
                    uint64_t m_machineNum;
                    bool m_machineNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_OPENPORTSTATISTICS_H_
