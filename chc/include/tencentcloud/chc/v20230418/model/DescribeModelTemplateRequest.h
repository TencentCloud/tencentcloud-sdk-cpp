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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEMODELTEMPLATEREQUEST_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEMODELTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeModelTemplate请求参数结构体
                */
                class DescribeModelTemplateRequest : public AbstractModel
                {
                public:
                    DescribeModelTemplateRequest();
                    ~DescribeModelTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取型号类型，只支持传入 server 和 netDevice
                     * @return DeviceType 型号类型，只支持传入 server 和 netDevice
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置型号类型，只支持传入 server 和 netDevice
                     * @param _deviceType 型号类型，只支持传入 server 和 netDevice
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                private:

                    /**
                     * 型号类型，只支持传入 server 和 netDevice
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEMODELTEMPLATEREQUEST_H_
