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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_CREATECOSSECKEYINSTANCEREQUEST_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_CREATECOSSECKEYINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * CreateCosSecKeyInstance请求参数结构体
                */
                class CreateCosSecKeyInstanceRequest : public AbstractModel
                {
                public:
                    CreateCosSecKeyInstanceRequest();
                    ~CreateCosSecKeyInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取地域信息，例如广州：ap-guangzhou，上海：ap-shanghai，默认为广州。
                     * @return CosRegion 地域信息，例如广州：ap-guangzhou，上海：ap-shanghai，默认为广州。
                     * 
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置地域信息，例如广州：ap-guangzhou，上海：ap-shanghai，默认为广州。
                     * @param _cosRegion 地域信息，例如广州：ap-guangzhou，上海：ap-shanghai，默认为广州。
                     * 
                     */
                    void SetCosRegion(const std::string& _cosRegion);

                    /**
                     * 判断参数 CosRegion 是否已赋值
                     * @return CosRegion 是否已赋值
                     * 
                     */
                    bool CosRegionHasBeenSet() const;

                    /**
                     * 获取密钥有效时间，默认为1小时。
                     * @return Duration 密钥有效时间，默认为1小时。
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置密钥有效时间，默认为1小时。
                     * @param _duration 密钥有效时间，默认为1小时。
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * 地域信息，例如广州：ap-guangzhou，上海：ap-shanghai，默认为广州。
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * 密钥有效时间，默认为1小时。
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_CREATECOSSECKEYINSTANCEREQUEST_H_
