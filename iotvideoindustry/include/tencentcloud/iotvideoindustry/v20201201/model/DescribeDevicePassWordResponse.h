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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEDEVICEPASSWORDRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEDEVICEPASSWORDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeDevicePassWord返回参数结构体
                */
                class DescribeDevicePassWordResponse : public AbstractModel
                {
                public:
                    DescribeDevicePassWordResponse();
                    ~DescribeDevicePassWordResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设备密码
                     * @return PassWord 设备密码
                     * 
                     */
                    std::string GetPassWord() const;

                    /**
                     * 判断参数 PassWord 是否已赋值
                     * @return PassWord 是否已赋值
                     * 
                     */
                    bool PassWordHasBeenSet() const;

                private:

                    /**
                     * 设备密码
                     */
                    std::string m_passWord;
                    bool m_passWordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEDEVICEPASSWORDRESPONSE_H_
