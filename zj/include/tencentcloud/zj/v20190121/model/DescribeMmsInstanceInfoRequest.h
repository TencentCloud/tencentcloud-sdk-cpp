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

#ifndef TENCENTCLOUD_ZJ_V20190121_MODEL_DESCRIBEMMSINSTANCEINFOREQUEST_H_
#define TENCENTCLOUD_ZJ_V20190121_MODEL_DESCRIBEMMSINSTANCEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Zj
    {
        namespace V20190121
        {
            namespace Model
            {
                /**
                * DescribeMmsInstanceInfo请求参数结构体
                */
                class DescribeMmsInstanceInfoRequest : public AbstractModel
                {
                public:
                    DescribeMmsInstanceInfoRequest();
                    ~DescribeMmsInstanceInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取商户证书
                     * @return License 商户证书
                     */
                    std::string GetLicense() const;

                    /**
                     * 设置商户证书
                     * @param License 商户证书
                     */
                    void SetLicense(const std::string& _license);

                    /**
                     * 判断参数 License 是否已赋值
                     * @return License 是否已赋值
                     */
                    bool LicenseHasBeenSet() const;

                    /**
                     * 获取彩信实例id
                     * @return InstanceId 彩信实例id
                     */
                    int64_t GetInstanceId() const;

                    /**
                     * 设置彩信实例id
                     * @param InstanceId 彩信实例id
                     */
                    void SetInstanceId(const int64_t& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 商户证书
                     */
                    std::string m_license;
                    bool m_licenseHasBeenSet;

                    /**
                     * 彩信实例id
                     */
                    int64_t m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ZJ_V20190121_MODEL_DESCRIBEMMSINSTANCEINFOREQUEST_H_
