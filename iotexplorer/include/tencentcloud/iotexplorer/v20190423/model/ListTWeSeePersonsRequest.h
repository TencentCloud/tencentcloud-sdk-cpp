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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LISTTWESEEPERSONSREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LISTTWESEEPERSONSREQUEST_H_

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
                * ListTWeSeePersons请求参数结构体
                */
                class ListTWeSeePersonsRequest : public AbstractModel
                {
                public:
                    ListTWeSeePersonsRequest();
                    ~ListTWeSeePersonsRequest() = default;
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
                     * 获取分页拉取数量，取值范围为 1 到 100
                     * @return Limit 分页拉取数量，取值范围为 1 到 100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页拉取数量，取值范围为 1 到 100
                     * @param _limit 分页拉取数量，取值范围为 1 到 100
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页拉取偏移，默认值为 0
                     * @return Offset 分页拉取偏移，默认值为 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页拉取偏移，默认值为 0
                     * @param _offset 分页拉取偏移，默认值为 0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

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
                     * 获取每个人员返回的代表人脸数量，取值范围为 1 到 5，默认值为 1
                     * @return FaceLimit 每个人员返回的代表人脸数量，取值范围为 1 到 5，默认值为 1
                     * 
                     */
                    uint64_t GetFaceLimit() const;

                    /**
                     * 设置每个人员返回的代表人脸数量，取值范围为 1 到 5，默认值为 1
                     * @param _faceLimit 每个人员返回的代表人脸数量，取值范围为 1 到 5，默认值为 1
                     * 
                     */
                    void SetFaceLimit(const uint64_t& _faceLimit);

                    /**
                     * 判断参数 FaceLimit 是否已赋值
                     * @return FaceLimit 是否已赋值
                     * 
                     */
                    bool FaceLimitHasBeenSet() const;

                    /**
                     * 获取人员记忆状态。true：仅查询持久记忆人员；false：仅查询非持久记忆人员；不传时查询全部人员
                     * @return IsRemembered 人员记忆状态。true：仅查询持久记忆人员；false：仅查询非持久记忆人员；不传时查询全部人员
                     * 
                     */
                    bool GetIsRemembered() const;

                    /**
                     * 设置人员记忆状态。true：仅查询持久记忆人员；false：仅查询非持久记忆人员；不传时查询全部人员
                     * @param _isRemembered 人员记忆状态。true：仅查询持久记忆人员；false：仅查询非持久记忆人员；不传时查询全部人员
                     * 
                     */
                    void SetIsRemembered(const bool& _isRemembered);

                    /**
                     * 判断参数 IsRemembered 是否已赋值
                     * @return IsRemembered 是否已赋值
                     * 
                     */
                    bool IsRememberedHasBeenSet() const;

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
                     * 分页拉取数量，取值范围为 1 到 100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页拉取偏移，默认值为 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 通道 ID，默认值为 0
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 每个人员返回的代表人脸数量，取值范围为 1 到 5，默认值为 1
                     */
                    uint64_t m_faceLimit;
                    bool m_faceLimitHasBeenSet;

                    /**
                     * 人员记忆状态。true：仅查询持久记忆人员；false：仅查询非持久记忆人员；不传时查询全部人员
                     */
                    bool m_isRemembered;
                    bool m_isRememberedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LISTTWESEEPERSONSREQUEST_H_
