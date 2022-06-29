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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEDELIVERYCONFIGREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEDELIVERYCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeDeliveryConfig请求参数结构体
                */
                class DescribeDeliveryConfigRequest : public AbstractModel
                {
                public:
                    DescribeDeliveryConfigRequest();
                    ~DescribeDeliveryConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取投递配置id
                     * @return ConfigId 投递配置id
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置投递配置id
                     * @param ConfigId 投递配置id
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     */
                    bool ConfigIdHasBeenSet() const;

                private:

                    /**
                     * 投递配置id
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEDELIVERYCONFIGREQUEST_H_
