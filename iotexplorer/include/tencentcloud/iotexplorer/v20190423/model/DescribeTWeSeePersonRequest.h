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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWESEEPERSONREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWESEEPERSONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DescribeTWeSeePerson请求参数结构体
                */
                class DescribeTWeSeePersonRequest : public AbstractModel
                {
                public:
                    DescribeTWeSeePersonRequest();
                    ~DescribeTWeSeePersonRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取人员 ID
                     * @return PersonId 人员 ID
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置人员 ID
                     * @param _personId 人员 ID
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取产品 ID
                     * @return ProductId 产品 ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品 ID
                     * @param _productId 产品 ID
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
                     * 获取通道 ID，默认值为 0
                     * @return ChannelId 通道 ID，默认值为 0
                     * 
                     */
                    uint64_t GetChannelId() const;

                    /**
                     * 设置通道 ID，默认值为 0
                     * @param _channelId 通道 ID，默认值为 0
                     * 
                     */
                    void SetChannelId(const uint64_t& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取返回的代表人脸数量，取值范围为 1 到 5，默认值为 1
                     * @return FaceLimit 返回的代表人脸数量，取值范围为 1 到 5，默认值为 1
                     * 
                     */
                    uint64_t GetFaceLimit() const;

                    /**
                     * 设置返回的代表人脸数量，取值范围为 1 到 5，默认值为 1
                     * @param _faceLimit 返回的代表人脸数量，取值范围为 1 到 5，默认值为 1
                     * 
                     */
                    void SetFaceLimit(const uint64_t& _faceLimit);

                    /**
                     * 判断参数 FaceLimit 是否已赋值
                     * @return FaceLimit 是否已赋值
                     * 
                     */
                    bool FaceLimitHasBeenSet() const;

                private:

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 人员 ID
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 产品 ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 通道 ID，默认值为 0
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 返回的代表人脸数量，取值范围为 1 到 5，默认值为 1
                     */
                    uint64_t m_faceLimit;
                    bool m_faceLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWESEEPERSONREQUEST_H_
