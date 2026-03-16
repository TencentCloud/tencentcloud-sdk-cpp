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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKACTIVATIONINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKACTIVATIONINFO_H_

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
                * Talk设备激活信息。
                */
                class TalkActivationInfo : public AbstractModel
                {
                public:
                    TalkActivationInfo();
                    ~TalkActivationInfo() = default;
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
                     * 获取设备激活状态，0：激活成功；60001：激活码类型不匹配；60002：激活码数量不足；60003：设备不存在；60004：产品不存在；60005：权限不足；60006：设备已激活；60007：无效的参数；60008：系统错误；60009：产品不是码音视频类型
                     * @return ErrCode 设备激活状态，0：激活成功；60001：激活码类型不匹配；60002：激活码数量不足；60003：设备不存在；60004：产品不存在；60005：权限不足；60006：设备已激活；60007：无效的参数；60008：系统错误；60009：产品不是码音视频类型
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置设备激活状态，0：激活成功；60001：激活码类型不匹配；60002：激活码数量不足；60003：设备不存在；60004：产品不存在；60005：权限不足；60006：设备已激活；60007：无效的参数；60008：系统错误；60009：产品不是码音视频类型
                     * @param _errCode 设备激活状态，0：激活成功；60001：激活码类型不匹配；60002：激活码数量不足；60003：设备不存在；60004：产品不存在；60005：权限不足；60006：设备已激活；60007：无效的参数；60008：系统错误；60009：产品不是码音视频类型
                     * 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取激活错误信息
                     * @return ErrMessage 激活错误信息
                     * 
                     */
                    std::string GetErrMessage() const;

                    /**
                     * 设置激活错误信息
                     * @param _errMessage 激活错误信息
                     * 
                     */
                    void SetErrMessage(const std::string& _errMessage);

                    /**
                     * 判断参数 ErrMessage 是否已赋值
                     * @return ErrMessage 是否已赋值
                     * 
                     */
                    bool ErrMessageHasBeenSet() const;

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

                private:

                    /**
                     * 设备ID，产品ID_设备名称
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 设备激活状态，0：激活成功；60001：激活码类型不匹配；60002：激活码数量不足；60003：设备不存在；60004：产品不存在；60005：权限不足；60006：设备已激活；60007：无效的参数；60008：系统错误；60009：产品不是码音视频类型
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 激活错误信息
                     */
                    std::string m_errMessage;
                    bool m_errMessageHasBeenSet;

                    /**
                     * 过期时间，秒级时间戳
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKACTIVATIONINFO_H_
