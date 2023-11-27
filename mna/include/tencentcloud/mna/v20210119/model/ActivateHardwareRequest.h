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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_ACTIVATEHARDWAREREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_ACTIVATEHARDWAREREQUEST_H_

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
                * ActivateHardware请求参数结构体
                */
                class ActivateHardwareRequest : public AbstractModel
                {
                public:
                    ActivateHardwareRequest();
                    ~ActivateHardwareRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待激活的设备列表
                     * @return Hardware 待激活的设备列表
                     * 
                     */
                    std::vector<ActivateHardware> GetHardware() const;

                    /**
                     * 设置待激活的设备列表
                     * @param _hardware 待激活的设备列表
                     * 
                     */
                    void SetHardware(const std::vector<ActivateHardware>& _hardware);

                    /**
                     * 判断参数 Hardware 是否已赋值
                     * @return Hardware 是否已赋值
                     * 
                     */
                    bool HardwareHasBeenSet() const;

                private:

                    /**
                     * 待激活的设备列表
                     */
                    std::vector<ActivateHardware> m_hardware;
                    bool m_hardwareHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_ACTIVATEHARDWAREREQUEST_H_
