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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_CREATEMODELEVALUATIONWORKORDERREQUEST_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_CREATEMODELEVALUATIONWORKORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/ModelVersion.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * CreateModelEvaluationWorkOrder请求参数结构体
                */
                class CreateModelEvaluationWorkOrderRequest : public AbstractModel
                {
                public:
                    CreateModelEvaluationWorkOrderRequest();
                    ~CreateModelEvaluationWorkOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备名称及型号
                     * @return ModelSet 设备名称及型号
                     * 
                     */
                    std::vector<ModelVersion> GetModelSet() const;

                    /**
                     * 设置设备名称及型号
                     * @param _modelSet 设备名称及型号
                     * 
                     */
                    void SetModelSet(const std::vector<ModelVersion>& _modelSet);

                    /**
                     * 判断参数 ModelSet 是否已赋值
                     * @return ModelSet 是否已赋值
                     * 
                     */
                    bool ModelSetHasBeenSet() const;

                    /**
                     * 获取园区ID
                     * @return CampusId 园区ID
                     * 
                     */
                    uint64_t GetCampusId() const;

                    /**
                     * 设置园区ID
                     * @param _campusId 园区ID
                     * 
                     */
                    void SetCampusId(const uint64_t& _campusId);

                    /**
                     * 判断参数 CampusId 是否已赋值
                     * @return CampusId 是否已赋值
                     * 
                     */
                    bool CampusIdHasBeenSet() const;

                    /**
                     * 获取只支持传入 server 和 netDevice
                     * @return DeviceType 只支持传入 server 和 netDevice
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置只支持传入 server 和 netDevice
                     * @param _deviceType 只支持传入 server 和 netDevice
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 设备名称及型号
                     */
                    std::vector<ModelVersion> m_modelSet;
                    bool m_modelSetHasBeenSet;

                    /**
                     * 园区ID
                     */
                    uint64_t m_campusId;
                    bool m_campusIdHasBeenSet;

                    /**
                     * 只支持传入 server 和 netDevice
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_CREATEMODELEVALUATIONWORKORDERREQUEST_H_
