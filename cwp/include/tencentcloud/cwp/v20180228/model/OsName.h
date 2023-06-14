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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_OSNAME_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_OSNAME_H_

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
                * 操作系统名称
                */
                class OsName : public AbstractModel
                {
                public:
                    OsName();
                    ~OsName() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取系统名称
                     * @return Name 系统名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置系统名称
                     * @param _name 系统名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取操作系统类型枚举值
                     * @return MachineOSType 操作系统类型枚举值
                     * 
                     */
                    uint64_t GetMachineOSType() const;

                    /**
                     * 设置操作系统类型枚举值
                     * @param _machineOSType 操作系统类型枚举值
                     * 
                     */
                    void SetMachineOSType(const uint64_t& _machineOSType);

                    /**
                     * 判断参数 MachineOSType 是否已赋值
                     * @return MachineOSType 是否已赋值
                     * 
                     */
                    bool MachineOSTypeHasBeenSet() const;

                private:

                    /**
                     * 系统名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 操作系统类型枚举值
                     */
                    uint64_t m_machineOSType;
                    bool m_machineOSTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_OSNAME_H_
