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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_PROCESSSTATISTICS_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_PROCESSSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 进程数据统计数据。
                */
                class ProcessStatistics : public AbstractModel
                {
                public:
                    ProcessStatistics();
                    ~ProcessStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取进程名。
                     * @return ProcessName 进程名。
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置进程名。
                     * @param _processName 进程名。
                     * 
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取主机数量。
                     * @return MachineNum 主机数量。
                     * 
                     */
                    uint64_t GetMachineNum() const;

                    /**
                     * 设置主机数量。
                     * @param _machineNum 主机数量。
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
                     * 进程名。
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * 主机数量。
                     */
                    uint64_t m_machineNum;
                    bool m_machineNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_PROCESSSTATISTICS_H_
