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

#ifndef TENCENTCLOUD_ZJ_V20190121_MODEL_DELETEMMSINSTANCEREQUEST_H_
#define TENCENTCLOUD_ZJ_V20190121_MODEL_DELETEMMSINSTANCEREQUEST_H_

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
                * DeleteMmsInstance请求参数结构体
                */
                class DeleteMmsInstanceRequest : public AbstractModel
                {
                public:
                    DeleteMmsInstanceRequest();
                    ~DeleteMmsInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取商户证书
                     * @return License 商户证书
                     * 
                     */
                    std::string GetLicense() const;

                    /**
                     * 设置商户证书
                     * @param _license 商户证书
                     * 
                     */
                    void SetLicense(const std::string& _license);

                    /**
                     * 判断参数 License 是否已赋值
                     * @return License 是否已赋值
                     * 
                     */
                    bool LicenseHasBeenSet() const;

                    /**
                     * 获取超级短信样例id
                     * @return InstanceId 超级短信样例id
                     * 
                     */
                    uint64_t GetInstanceId() const;

                    /**
                     * 设置超级短信样例id
                     * @param _instanceId 超级短信样例id
                     * 
                     */
                    void SetInstanceId(const uint64_t& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 商户证书
                     */
                    std::string m_license;
                    bool m_licenseHasBeenSet;

                    /**
                     * 超级短信样例id
                     */
                    uint64_t m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ZJ_V20190121_MODEL_DELETEMMSINSTANCEREQUEST_H_
