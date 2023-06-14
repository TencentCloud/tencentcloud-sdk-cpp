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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_SCRIPTORIGIN_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_SCRIPTORIGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 脚本内置压力模型
                */
                class ScriptOrigin : public AbstractModel
                {
                public:
                    ScriptOrigin();
                    ~ScriptOrigin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机器数量
                     * @return MachineNumber 机器数量
                     * 
                     */
                    int64_t GetMachineNumber() const;

                    /**
                     * 设置机器数量
                     * @param _machineNumber 机器数量
                     * 
                     */
                    void SetMachineNumber(const int64_t& _machineNumber);

                    /**
                     * 判断参数 MachineNumber 是否已赋值
                     * @return MachineNumber 是否已赋值
                     * 
                     */
                    bool MachineNumberHasBeenSet() const;

                    /**
                     * 获取机器规格
                     * @return MachineSpecification 机器规格
                     * 
                     */
                    std::string GetMachineSpecification() const;

                    /**
                     * 设置机器规格
                     * @param _machineSpecification 机器规格
                     * 
                     */
                    void SetMachineSpecification(const std::string& _machineSpecification);

                    /**
                     * 判断参数 MachineSpecification 是否已赋值
                     * @return MachineSpecification 是否已赋值
                     * 
                     */
                    bool MachineSpecificationHasBeenSet() const;

                    /**
                     * 获取压测时长
                     * @return DurationSeconds 压测时长
                     * 
                     */
                    int64_t GetDurationSeconds() const;

                    /**
                     * 设置压测时长
                     * @param _durationSeconds 压测时长
                     * 
                     */
                    void SetDurationSeconds(const int64_t& _durationSeconds);

                    /**
                     * 判断参数 DurationSeconds 是否已赋值
                     * @return DurationSeconds 是否已赋值
                     * 
                     */
                    bool DurationSecondsHasBeenSet() const;

                private:

                    /**
                     * 机器数量
                     */
                    int64_t m_machineNumber;
                    bool m_machineNumberHasBeenSet;

                    /**
                     * 机器规格
                     */
                    std::string m_machineSpecification;
                    bool m_machineSpecificationHasBeenSet;

                    /**
                     * 压测时长
                     */
                    int64_t m_durationSeconds;
                    bool m_durationSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_SCRIPTORIGIN_H_
