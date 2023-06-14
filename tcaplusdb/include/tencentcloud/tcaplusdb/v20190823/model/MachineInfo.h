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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MACHINEINFO_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MACHINEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 机器类型和数量
                */
                class MachineInfo : public AbstractModel
                {
                public:
                    MachineInfo();
                    ~MachineInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机器类型
                     * @return MachineType 机器类型
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置机器类型
                     * @param _machineType 机器类型
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
                     * 获取机器数量
                     * @return MachineNum 机器数量
                     * 
                     */
                    int64_t GetMachineNum() const;

                    /**
                     * 设置机器数量
                     * @param _machineNum 机器数量
                     * 
                     */
                    void SetMachineNum(const int64_t& _machineNum);

                    /**
                     * 判断参数 MachineNum 是否已赋值
                     * @return MachineNum 是否已赋值
                     * 
                     */
                    bool MachineNumHasBeenSet() const;

                private:

                    /**
                     * 机器类型
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * 机器数量
                     */
                    int64_t m_machineNum;
                    bool m_machineNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MACHINEINFO_H_
