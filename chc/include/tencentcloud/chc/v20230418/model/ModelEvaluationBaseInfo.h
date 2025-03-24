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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_MODELEVALUATIONBASEINFO_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_MODELEVALUATIONBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 设备评估工单基本信息
                */
                class ModelEvaluationBaseInfo : public AbstractModel
                {
                public:
                    ModelEvaluationBaseInfo();
                    ~ModelEvaluationBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户名称
                     * @return CustomerName 客户名称
                     * 
                     */
                    std::string GetCustomerName() const;

                    /**
                     * 设置客户名称
                     * @param _customerName 客户名称
                     * 
                     */
                    void SetCustomerName(const std::string& _customerName);

                    /**
                     * 判断参数 CustomerName 是否已赋值
                     * @return CustomerName 是否已赋值
                     * 
                     */
                    bool CustomerNameHasBeenSet() const;

                    /**
                     * 获取server 服务器  netDevice 网络设备
                     * @return DeviceType server 服务器  netDevice 网络设备
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置server 服务器  netDevice 网络设备
                     * @param _deviceType server 服务器  netDevice 网络设备
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
                     * 获取园区名称
                     * @return CampusName 园区名称
                     * 
                     */
                    std::string GetCampusName() const;

                    /**
                     * 设置园区名称
                     * @param _campusName 园区名称
                     * 
                     */
                    void SetCampusName(const std::string& _campusName);

                    /**
                     * 判断参数 CampusName 是否已赋值
                     * @return CampusName 是否已赋值
                     * 
                     */
                    bool CampusNameHasBeenSet() const;

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
                     * 客户名称
                     */
                    std::string m_customerName;
                    bool m_customerNameHasBeenSet;

                    /**
                     * server 服务器  netDevice 网络设备
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 园区名称
                     */
                    std::string m_campusName;
                    bool m_campusNameHasBeenSet;

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

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_MODELEVALUATIONBASEINFO_H_
