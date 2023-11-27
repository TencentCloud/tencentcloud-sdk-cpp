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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_ADDHARDWAREREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_ADDHARDWAREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mna/v20210119/model/Hardware.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * AddHardware请求参数结构体
                */
                class AddHardwareRequest : public AbstractModel
                {
                public:
                    AddHardwareRequest();
                    ~AddHardwareRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取硬件列表
                     * @return Hardware 硬件列表
                     * 
                     */
                    std::vector<Hardware> GetHardware() const;

                    /**
                     * 设置硬件列表
                     * @param _hardware 硬件列表
                     * 
                     */
                    void SetHardware(const std::vector<Hardware>& _hardware);

                    /**
                     * 判断参数 Hardware 是否已赋值
                     * @return Hardware 是否已赋值
                     * 
                     */
                    bool HardwareHasBeenSet() const;

                private:

                    /**
                     * 硬件列表
                     */
                    std::vector<Hardware> m_hardware;
                    bool m_hardwareHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_ADDHARDWAREREQUEST_H_
