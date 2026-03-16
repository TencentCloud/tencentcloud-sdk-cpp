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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKACTIVATERECORDLOGINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKACTIVATERECORDLOGINFO_H_

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
                * Talk激活审计信息。
                */
                class TalkActivateRecordLogInfo : public AbstractModel
                {
                public:
                    TalkActivateRecordLogInfo();
                    ~TalkActivateRecordLogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取激活时间，秒级时间戳
                     * @return ActiveTime 激活时间，秒级时间戳
                     * 
                     */
                    int64_t GetActiveTime() const;

                    /**
                     * 设置激活时间，秒级时间戳
                     * @param _activeTime 激活时间，秒级时间戳
                     * 
                     */
                    void SetActiveTime(const int64_t& _activeTime);

                    /**
                     * 判断参数 ActiveTime 是否已赋值
                     * @return ActiveTime 是否已赋值
                     * 
                     */
                    bool ActiveTimeHasBeenSet() const;

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

                    /**
                     * 获取状态: 0-未激活, 1-已激活, 2-已过期, 3-已作废
                     * @return Status 状态: 0-未激活, 1-已激活, 2-已过期, 3-已作废
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态: 0-未激活, 1-已激活, 2-已过期, 3-已作废
                     * @param _status 状态: 0-未激活, 1-已激活, 2-已过期, 3-已作废
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return ErrorMsg 错误信息
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置错误信息
                     * @param _errorMsg 错误信息
                     * 
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 激活时间，秒级时间戳
                     */
                    int64_t m_activeTime;
                    bool m_activeTimeHasBeenSet;

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

                    /**
                     * 状态: 0-未激活, 1-已激活, 2-已过期, 3-已作废
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKACTIVATERECORDLOGINFO_H_
