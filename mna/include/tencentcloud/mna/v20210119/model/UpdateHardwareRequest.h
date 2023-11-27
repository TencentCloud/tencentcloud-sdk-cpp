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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_UPDATEHARDWAREREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_UPDATEHARDWAREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * UpdateHardware请求参数结构体
                */
                class UpdateHardwareRequest : public AbstractModel
                {
                public:
                    UpdateHardwareRequest();
                    ~UpdateHardwareRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取硬件ID
                     * @return HardwareId 硬件ID
                     * 
                     */
                    std::string GetHardwareId() const;

                    /**
                     * 设置硬件ID
                     * @param _hardwareId 硬件ID
                     * 
                     */
                    void SetHardwareId(const std::string& _hardwareId);

                    /**
                     * 判断参数 HardwareId 是否已赋值
                     * @return HardwareId 是否已赋值
                     * 
                     */
                    bool HardwareIdHasBeenSet() const;

                    /**
                     * 获取硬件序列号
                     * @return SN 硬件序列号
                     * 
                     */
                    std::string GetSN() const;

                    /**
                     * 设置硬件序列号
                     * @param _sN 硬件序列号
                     * 
                     */
                    void SetSN(const std::string& _sN);

                    /**
                     * 判断参数 SN 是否已赋值
                     * @return SN 是否已赋值
                     * 
                     */
                    bool SNHasBeenSet() const;

                    /**
                     * 获取设备备注
                     * @return Description 设备备注
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置设备备注
                     * @param _description 设备备注
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 硬件ID
                     */
                    std::string m_hardwareId;
                    bool m_hardwareIdHasBeenSet;

                    /**
                     * 硬件序列号
                     */
                    std::string m_sN;
                    bool m_sNHasBeenSet;

                    /**
                     * 设备备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_UPDATEHARDWAREREQUEST_H_
