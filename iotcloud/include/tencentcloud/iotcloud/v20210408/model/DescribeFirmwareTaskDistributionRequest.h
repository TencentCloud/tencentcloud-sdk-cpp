/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEFIRMWARETASKDISTRIBUTIONREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEFIRMWARETASKDISTRIBUTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * DescribeFirmwareTaskDistribution请求参数结构体
                */
                class DescribeFirmwareTaskDistributionRequest : public AbstractModel
                {
                public:
                    DescribeFirmwareTaskDistributionRequest();
                    ~DescribeFirmwareTaskDistributionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取固件版本号
                     * @return FirmwareVersion 固件版本号
                     * 
                     */
                    std::string GetFirmwareVersion() const;

                    /**
                     * 设置固件版本号
                     * @param _firmwareVersion 固件版本号
                     * 
                     */
                    void SetFirmwareVersion(const std::string& _firmwareVersion);

                    /**
                     * 判断参数 FirmwareVersion 是否已赋值
                     * @return FirmwareVersion 是否已赋值
                     * 
                     */
                    bool FirmwareVersionHasBeenSet() const;

                    /**
                     * 获取固件升级任务ID
                     * @return TaskId 固件升级任务ID
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置固件升级任务ID
                     * @param _taskId 固件升级任务ID
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 固件版本号
                     */
                    std::string m_firmwareVersion;
                    bool m_firmwareVersionHasBeenSet;

                    /**
                     * 固件升级任务ID
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEFIRMWARETASKDISTRIBUTIONREQUEST_H_
