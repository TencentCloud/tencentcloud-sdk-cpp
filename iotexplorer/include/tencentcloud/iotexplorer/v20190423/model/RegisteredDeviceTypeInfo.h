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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_REGISTEREDDEVICETYPEINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_REGISTEREDDEVICETYPEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 已注册设备类型信息
                */
                class RegisteredDeviceTypeInfo : public AbstractModel
                {
                public:
                    RegisteredDeviceTypeInfo();
                    ~RegisteredDeviceTypeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取已注册设备数
                     * @return NormalDeviceNum 已注册设备数
                     * 
                     */
                    int64_t GetNormalDeviceNum() const;

                    /**
                     * 设置已注册设备数
                     * @param _normalDeviceNum 已注册设备数
                     * 
                     */
                    void SetNormalDeviceNum(const int64_t& _normalDeviceNum);

                    /**
                     * 判断参数 NormalDeviceNum 是否已赋值
                     * @return NormalDeviceNum 是否已赋值
                     * 
                     */
                    bool NormalDeviceNumHasBeenSet() const;

                    /**
                     * 获取已注册网关数
                     * @return GatewayDeviceNum 已注册网关数
                     * 
                     */
                    int64_t GetGatewayDeviceNum() const;

                    /**
                     * 设置已注册网关数
                     * @param _gatewayDeviceNum 已注册网关数
                     * 
                     */
                    void SetGatewayDeviceNum(const int64_t& _gatewayDeviceNum);

                    /**
                     * 判断参数 GatewayDeviceNum 是否已赋值
                     * @return GatewayDeviceNum 是否已赋值
                     * 
                     */
                    bool GatewayDeviceNumHasBeenSet() const;

                    /**
                     * 获取已注册子设备数
                     * @return SubDeviceNum 已注册子设备数
                     * 
                     */
                    int64_t GetSubDeviceNum() const;

                    /**
                     * 设置已注册子设备数
                     * @param _subDeviceNum 已注册子设备数
                     * 
                     */
                    void SetSubDeviceNum(const int64_t& _subDeviceNum);

                    /**
                     * 判断参数 SubDeviceNum 是否已赋值
                     * @return SubDeviceNum 是否已赋值
                     * 
                     */
                    bool SubDeviceNumHasBeenSet() const;

                    /**
                     * 获取已注册视频设备数
                     * @return VideoDeviceNum 已注册视频设备数
                     * 
                     */
                    int64_t GetVideoDeviceNum() const;

                    /**
                     * 设置已注册视频设备数
                     * @param _videoDeviceNum 已注册视频设备数
                     * 
                     */
                    void SetVideoDeviceNum(const int64_t& _videoDeviceNum);

                    /**
                     * 判断参数 VideoDeviceNum 是否已赋值
                     * @return VideoDeviceNum 是否已赋值
                     * 
                     */
                    bool VideoDeviceNumHasBeenSet() const;

                private:

                    /**
                     * 已注册设备数
                     */
                    int64_t m_normalDeviceNum;
                    bool m_normalDeviceNumHasBeenSet;

                    /**
                     * 已注册网关数
                     */
                    int64_t m_gatewayDeviceNum;
                    bool m_gatewayDeviceNumHasBeenSet;

                    /**
                     * 已注册子设备数
                     */
                    int64_t m_subDeviceNum;
                    bool m_subDeviceNumHasBeenSet;

                    /**
                     * 已注册视频设备数
                     */
                    int64_t m_videoDeviceNum;
                    bool m_videoDeviceNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_REGISTEREDDEVICETYPEINFO_H_
