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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICEPRICEINFORESPONSE_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICEPRICEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bm/v20180423/model/DevicePriceInfo.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * DescribeDevicePriceInfo返回参数结构体
                */
                class DescribeDevicePriceInfoResponse : public AbstractModel
                {
                public:
                    DescribeDevicePriceInfoResponse();
                    ~DescribeDevicePriceInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取服务器价格信息列表
                     * @return DevicePriceInfoSet 服务器价格信息列表
                     * 
                     */
                    std::vector<DevicePriceInfo> GetDevicePriceInfoSet() const;

                    /**
                     * 判断参数 DevicePriceInfoSet 是否已赋值
                     * @return DevicePriceInfoSet 是否已赋值
                     * 
                     */
                    bool DevicePriceInfoSetHasBeenSet() const;

                private:

                    /**
                     * 服务器价格信息列表
                     */
                    std::vector<DevicePriceInfo> m_devicePriceInfoSet;
                    bool m_devicePriceInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICEPRICEINFORESPONSE_H_
