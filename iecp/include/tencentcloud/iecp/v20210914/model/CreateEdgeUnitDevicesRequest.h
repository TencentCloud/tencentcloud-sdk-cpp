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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_CREATEEDGEUNITDEVICESREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_CREATEEDGEUNITDEVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * CreateEdgeUnitDevices请求参数结构体
                */
                class CreateEdgeUnitDevicesRequest : public AbstractModel
                {
                public:
                    CreateEdgeUnitDevicesRequest();
                    ~CreateEdgeUnitDevicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取无
                     * @return EdgeUnitId 无
                     * 
                     */
                    int64_t GetEdgeUnitId() const;

                    /**
                     * 设置无
                     * @param _edgeUnitId 无
                     * 
                     */
                    void SetEdgeUnitId(const int64_t& _edgeUnitId);

                    /**
                     * 判断参数 EdgeUnitId 是否已赋值
                     * @return EdgeUnitId 是否已赋值
                     * 
                     */
                    bool EdgeUnitIdHasBeenSet() const;

                    /**
                     * 获取无
                     * @return ProductId 无
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置无
                     * @param _productId 无
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
                     * 获取无
                     * @return DeviceNames 无
                     * 
                     */
                    std::vector<std::string> GetDeviceNames() const;

                    /**
                     * 设置无
                     * @param _deviceNames 无
                     * 
                     */
                    void SetDeviceNames(const std::vector<std::string>& _deviceNames);

                    /**
                     * 判断参数 DeviceNames 是否已赋值
                     * @return DeviceNames 是否已赋值
                     * 
                     */
                    bool DeviceNamesHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    int64_t m_edgeUnitId;
                    bool m_edgeUnitIdHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 无
                     */
                    std::vector<std::string> m_deviceNames;
                    bool m_deviceNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_CREATEEDGEUNITDEVICESREQUEST_H_
