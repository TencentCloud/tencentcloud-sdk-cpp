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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DELETETWESEEPERSONREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DELETETWESEEPERSONREQUEST_H_

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
                * DeleteTWeSeePerson请求参数结构体
                */
                class DeleteTWeSeePersonRequest : public AbstractModel
                {
                public:
                    DeleteTWeSeePersonRequest();
                    ~DeleteTWeSeePersonRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取是否同时删除关联人脸，默认值为 false。人员仍有关联人脸时可设为 true 同步删除
                     * @return DeleteFaces 是否同时删除关联人脸，默认值为 false。人员仍有关联人脸时可设为 true 同步删除
                     * 
                     */
                    bool GetDeleteFaces() const;

                    /**
                     * 设置是否同时删除关联人脸，默认值为 false。人员仍有关联人脸时可设为 true 同步删除
                     * @param _deleteFaces 是否同时删除关联人脸，默认值为 false。人员仍有关联人脸时可设为 true 同步删除
                     * 
                     */
                    void SetDeleteFaces(const bool& _deleteFaces);

                    /**
                     * 判断参数 DeleteFaces 是否已赋值
                     * @return DeleteFaces 是否已赋值
                     * 
                     */
                    bool DeleteFacesHasBeenSet() const;

                private:

                    /**
                     * 产品 ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

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
                     * 通道 ID，默认值为 0
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 是否同时删除关联人脸，默认值为 false。人员仍有关联人脸时可设为 true 同步删除
                     */
                    bool m_deleteFaces;
                    bool m_deleteFacesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DELETETWESEEPERSONREQUEST_H_
