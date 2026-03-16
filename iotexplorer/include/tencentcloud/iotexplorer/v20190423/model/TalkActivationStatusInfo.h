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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKACTIVATIONSTATUSINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKACTIVATIONSTATUSINFO_H_

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
                * Talk激活状态响应定义。
                */
                class TalkActivationStatusInfo : public AbstractModel
                {
                public:
                    TalkActivationStatusInfo();
                    ~TalkActivationStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备ID，产品ID_设备名称
                     * @return DeviceId 设备ID，产品ID_设备名称
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备ID，产品ID_设备名称
                     * @param _deviceId 设备ID，产品ID_设备名称
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取过期时间，秒级时间戳
                     * @return ExpireTime 过期时间，秒级时间戳
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置过期时间，秒级时间戳
                     * @param _expireTime 过期时间，秒级时间戳
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取TWeTalk类型：1-基础版；2-高级版；3-多模态；
                     * @return ServiceType TWeTalk类型：1-基础版；2-高级版；3-多模态；
                     * 
                     */
                    int64_t GetServiceType() const;

                    /**
                     * 设置TWeTalk类型：1-基础版；2-高级版；3-多模态；
                     * @param _serviceType TWeTalk类型：1-基础版；2-高级版；3-多模态；
                     * 
                     */
                    void SetServiceType(const int64_t& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                private:

                    /**
                     * 设备ID，产品ID_设备名称
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 过期时间，秒级时间戳
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * TWeTalk类型：1-基础版；2-高级版；3-多模态；
                     */
                    int64_t m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKACTIVATIONSTATUSINFO_H_
