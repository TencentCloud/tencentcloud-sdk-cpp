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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_ACTIVATEHARDWARERESPONSE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_ACTIVATEHARDWARERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mna/v20210119/model/ActivateHardware.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * ActivateHardware返回参数结构体
                */
                class ActivateHardwareResponse : public AbstractModel
                {
                public:
                    ActivateHardwareResponse();
                    ~ActivateHardwareResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取完成激活的设备信息
                     * @return HardwareInfo 完成激活的设备信息
                     * 
                     */
                    std::vector<ActivateHardware> GetHardwareInfo() const;

                    /**
                     * 判断参数 HardwareInfo 是否已赋值
                     * @return HardwareInfo 是否已赋值
                     * 
                     */
                    bool HardwareInfoHasBeenSet() const;

                private:

                    /**
                     * 完成激活的设备信息
                     */
                    std::vector<ActivateHardware> m_hardwareInfo;
                    bool m_hardwareInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_ACTIVATEHARDWARERESPONSE_H_
