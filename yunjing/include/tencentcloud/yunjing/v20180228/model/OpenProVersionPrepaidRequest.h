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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_OPENPROVERSIONPREPAIDREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_OPENPROVERSIONPREPAIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yunjing/v20180228/model/ChargePrepaid.h>
#include <tencentcloud/yunjing/v20180228/model/ProVersionMachine.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * OpenProVersionPrepaid请求参数结构体
                */
                class OpenProVersionPrepaidRequest : public AbstractModel
                {
                public:
                    OpenProVersionPrepaidRequest();
                    ~OpenProVersionPrepaidRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取购买相关参数。
                     * @return ChargePrepaid 购买相关参数。
                     * 
                     */
                    ChargePrepaid GetChargePrepaid() const;

                    /**
                     * 设置购买相关参数。
                     * @param _chargePrepaid 购买相关参数。
                     * 
                     */
                    void SetChargePrepaid(const ChargePrepaid& _chargePrepaid);

                    /**
                     * 判断参数 ChargePrepaid 是否已赋值
                     * @return ChargePrepaid 是否已赋值
                     * 
                     */
                    bool ChargePrepaidHasBeenSet() const;

                    /**
                     * 获取需要开通专业版主机信息数组。
                     * @return Machines 需要开通专业版主机信息数组。
                     * 
                     */
                    std::vector<ProVersionMachine> GetMachines() const;

                    /**
                     * 设置需要开通专业版主机信息数组。
                     * @param _machines 需要开通专业版主机信息数组。
                     * 
                     */
                    void SetMachines(const std::vector<ProVersionMachine>& _machines);

                    /**
                     * 判断参数 Machines 是否已赋值
                     * @return Machines 是否已赋值
                     * 
                     */
                    bool MachinesHasBeenSet() const;

                private:

                    /**
                     * 购买相关参数。
                     */
                    ChargePrepaid m_chargePrepaid;
                    bool m_chargePrepaidHasBeenSet;

                    /**
                     * 需要开通专业版主机信息数组。
                     */
                    std::vector<ProVersionMachine> m_machines;
                    bool m_machinesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_OPENPROVERSIONPREPAIDREQUEST_H_
