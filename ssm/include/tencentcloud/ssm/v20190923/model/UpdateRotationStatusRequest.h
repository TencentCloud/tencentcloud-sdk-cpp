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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_UPDATEROTATIONSTATUSREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_UPDATEROTATIONSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * UpdateRotationStatus请求参数结构体
                */
                class UpdateRotationStatusRequest : public AbstractModel
                {
                public:
                    UpdateRotationStatusRequest();
                    ~UpdateRotationStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云产品凭据名称。
                     * @return SecretName 云产品凭据名称。
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置云产品凭据名称。
                     * @param _secretName 云产品凭据名称。
                     * 
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取是否开启轮转。
true -- 开启轮转；
false -- 禁止轮转。
                     * @return EnableRotation 是否开启轮转。
true -- 开启轮转；
false -- 禁止轮转。
                     * 
                     */
                    bool GetEnableRotation() const;

                    /**
                     * 设置是否开启轮转。
true -- 开启轮转；
false -- 禁止轮转。
                     * @param _enableRotation 是否开启轮转。
true -- 开启轮转；
false -- 禁止轮转。
                     * 
                     */
                    void SetEnableRotation(const bool& _enableRotation);

                    /**
                     * 判断参数 EnableRotation 是否已赋值
                     * @return EnableRotation 是否已赋值
                     * 
                     */
                    bool EnableRotationHasBeenSet() const;

                    /**
                     * 获取轮转周期，以天为单位，最小为30天，最大为365天。
                     * @return Frequency 轮转周期，以天为单位，最小为30天，最大为365天。
                     * 
                     */
                    int64_t GetFrequency() const;

                    /**
                     * 设置轮转周期，以天为单位，最小为30天，最大为365天。
                     * @param _frequency 轮转周期，以天为单位，最小为30天，最大为365天。
                     * 
                     */
                    void SetFrequency(const int64_t& _frequency);

                    /**
                     * 判断参数 Frequency 是否已赋值
                     * @return Frequency 是否已赋值
                     * 
                     */
                    bool FrequencyHasBeenSet() const;

                    /**
                     * 获取用户设置的期望开始轮转时间，格式为：2006-01-02 15:04:05。
当EnableRotation为true时，如果不填RotationBeginTime，则默认填充为当前时间。
                     * @return RotationBeginTime 用户设置的期望开始轮转时间，格式为：2006-01-02 15:04:05。
当EnableRotation为true时，如果不填RotationBeginTime，则默认填充为当前时间。
                     * 
                     */
                    std::string GetRotationBeginTime() const;

                    /**
                     * 设置用户设置的期望开始轮转时间，格式为：2006-01-02 15:04:05。
当EnableRotation为true时，如果不填RotationBeginTime，则默认填充为当前时间。
                     * @param _rotationBeginTime 用户设置的期望开始轮转时间，格式为：2006-01-02 15:04:05。
当EnableRotation为true时，如果不填RotationBeginTime，则默认填充为当前时间。
                     * 
                     */
                    void SetRotationBeginTime(const std::string& _rotationBeginTime);

                    /**
                     * 判断参数 RotationBeginTime 是否已赋值
                     * @return RotationBeginTime 是否已赋值
                     * 
                     */
                    bool RotationBeginTimeHasBeenSet() const;

                private:

                    /**
                     * 云产品凭据名称。
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * 是否开启轮转。
true -- 开启轮转；
false -- 禁止轮转。
                     */
                    bool m_enableRotation;
                    bool m_enableRotationHasBeenSet;

                    /**
                     * 轮转周期，以天为单位，最小为30天，最大为365天。
                     */
                    int64_t m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * 用户设置的期望开始轮转时间，格式为：2006-01-02 15:04:05。
当EnableRotation为true时，如果不填RotationBeginTime，则默认填充为当前时间。
                     */
                    std::string m_rotationBeginTime;
                    bool m_rotationBeginTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_UPDATEROTATIONSTATUSREQUEST_H_
