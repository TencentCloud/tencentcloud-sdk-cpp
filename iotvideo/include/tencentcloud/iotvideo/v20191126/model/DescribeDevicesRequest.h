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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBEDEVICESREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBEDEVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * DescribeDevices请求参数结构体
                */
                class DescribeDevicesRequest : public AbstractModel
                {
                public:
                    DescribeDevicesRequest();
                    ~DescribeDevicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
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
                     * 获取是否返回全量数据
当该值为false时，返回值中的设备物模型、固件版本、在线状态、最后在线时间字段等字段，都将返回数据类型的零值。
                     * @return ReturnModel 是否返回全量数据
当该值为false时，返回值中的设备物模型、固件版本、在线状态、最后在线时间字段等字段，都将返回数据类型的零值。
                     * 
                     */
                    bool GetReturnModel() const;

                    /**
                     * 设置是否返回全量数据
当该值为false时，返回值中的设备物模型、固件版本、在线状态、最后在线时间字段等字段，都将返回数据类型的零值。
                     * @param _returnModel 是否返回全量数据
当该值为false时，返回值中的设备物模型、固件版本、在线状态、最后在线时间字段等字段，都将返回数据类型的零值。
                     * 
                     */
                    void SetReturnModel(const bool& _returnModel);

                    /**
                     * 判断参数 ReturnModel 是否已赋值
                     * @return ReturnModel 是否已赋值
                     * 
                     */
                    bool ReturnModelHasBeenSet() const;

                    /**
                     * 获取分页数量,0<取值范围<=100
                     * @return Limit 分页数量,0<取值范围<=100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页数量,0<取值范围<=100
                     * @param _limit 分页数量,0<取值范围<=100
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
                     * 获取分页偏移，取值＞0
                     * @return Offset 分页偏移，取值＞0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移，取值＞0
                     * @param _offset 分页偏移，取值＞0
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
                     * 获取指定固件版本号，为空查询此产品下所有设备
                     * @return OtaVersion 指定固件版本号，为空查询此产品下所有设备
                     * 
                     */
                    std::string GetOtaVersion() const;

                    /**
                     * 设置指定固件版本号，为空查询此产品下所有设备
                     * @param _otaVersion 指定固件版本号，为空查询此产品下所有设备
                     * 
                     */
                    void SetOtaVersion(const std::string& _otaVersion);

                    /**
                     * 判断参数 OtaVersion 是否已赋值
                     * @return OtaVersion 是否已赋值
                     * 
                     */
                    bool OtaVersionHasBeenSet() const;

                    /**
                     * 获取设备名称，支持左前缀模糊匹配
                     * @return DeviceName 设备名称，支持左前缀模糊匹配
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称，支持左前缀模糊匹配
                     * @param _deviceName 设备名称，支持左前缀模糊匹配
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 是否返回全量数据
当该值为false时，返回值中的设备物模型、固件版本、在线状态、最后在线时间字段等字段，都将返回数据类型的零值。
                     */
                    bool m_returnModel;
                    bool m_returnModelHasBeenSet;

                    /**
                     * 分页数量,0<取值范围<=100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移，取值＞0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 指定固件版本号，为空查询此产品下所有设备
                     */
                    std::string m_otaVersion;
                    bool m_otaVersionHasBeenSet;

                    /**
                     * 设备名称，支持左前缀模糊匹配
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBEDEVICESREQUEST_H_
