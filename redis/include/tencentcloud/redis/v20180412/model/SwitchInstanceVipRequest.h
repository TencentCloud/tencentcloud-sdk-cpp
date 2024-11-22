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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_SWITCHINSTANCEVIPREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_SWITCHINSTANCEVIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * SwitchInstanceVip请求参数结构体
                */
                class SwitchInstanceVipRequest : public AbstractModel
                {
                public:
                    SwitchInstanceVipRequest();
                    ~SwitchInstanceVipRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取源实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * @return SrcInstanceId 源实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetSrcInstanceId() const;

                    /**
                     * 设置源实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * @param _srcInstanceId 源实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * 
                     */
                    void SetSrcInstanceId(const std::string& _srcInstanceId);

                    /**
                     * 判断参数 SrcInstanceId 是否已赋值
                     * @return SrcInstanceId 是否已赋值
                     * 
                     */
                    bool SrcInstanceIdHasBeenSet() const;

                    /**
                     * 获取目标实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * @return DstInstanceId 目标实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetDstInstanceId() const;

                    /**
                     * 设置目标实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * @param _dstInstanceId 目标实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * 
                     */
                    void SetDstInstanceId(const std::string& _dstInstanceId);

                    /**
                     * 判断参数 DstInstanceId 是否已赋值
                     * @return DstInstanceId 是否已赋值
                     * 
                     */
                    bool DstInstanceIdHasBeenSet() const;

                    /**
                     * 获取单位为秒。源实例与目标实例间DTS已断开时间。如果 DTS 断开时间大于TimeDelay，则不切换VIP，建议尽量根据业务设置一个可接受的值。
                     * @return TimeDelay 单位为秒。源实例与目标实例间DTS已断开时间。如果 DTS 断开时间大于TimeDelay，则不切换VIP，建议尽量根据业务设置一个可接受的值。
                     * 
                     */
                    int64_t GetTimeDelay() const;

                    /**
                     * 设置单位为秒。源实例与目标实例间DTS已断开时间。如果 DTS 断开时间大于TimeDelay，则不切换VIP，建议尽量根据业务设置一个可接受的值。
                     * @param _timeDelay 单位为秒。源实例与目标实例间DTS已断开时间。如果 DTS 断开时间大于TimeDelay，则不切换VIP，建议尽量根据业务设置一个可接受的值。
                     * 
                     */
                    void SetTimeDelay(const int64_t& _timeDelay);

                    /**
                     * 判断参数 TimeDelay 是否已赋值
                     * @return TimeDelay 是否已赋值
                     * 
                     */
                    bool TimeDelayHasBeenSet() const;

                    /**
                     * 获取在 DTS 断开的情况下是否强制切换。
- 1：强制切换。
- 0：不强制切换。
                     * @return ForceSwitch 在 DTS 断开的情况下是否强制切换。
- 1：强制切换。
- 0：不强制切换。
                     * 
                     */
                    int64_t GetForceSwitch() const;

                    /**
                     * 设置在 DTS 断开的情况下是否强制切换。
- 1：强制切换。
- 0：不强制切换。
                     * @param _forceSwitch 在 DTS 断开的情况下是否强制切换。
- 1：强制切换。
- 0：不强制切换。
                     * 
                     */
                    void SetForceSwitch(const int64_t& _forceSwitch);

                    /**
                     * 判断参数 ForceSwitch 是否已赋值
                     * @return ForceSwitch 是否已赋值
                     * 
                     */
                    bool ForceSwitchHasBeenSet() const;

                    /**
                     * 获取now: 立即切换，syncComplete：等待同步完成后切换
                     * @return SwitchTime now: 立即切换，syncComplete：等待同步完成后切换
                     * 
                     */
                    std::string GetSwitchTime() const;

                    /**
                     * 设置now: 立即切换，syncComplete：等待同步完成后切换
                     * @param _switchTime now: 立即切换，syncComplete：等待同步完成后切换
                     * 
                     */
                    void SetSwitchTime(const std::string& _switchTime);

                    /**
                     * 判断参数 SwitchTime 是否已赋值
                     * @return SwitchTime 是否已赋值
                     * 
                     */
                    bool SwitchTimeHasBeenSet() const;

                private:

                    /**
                     * 源实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     */
                    std::string m_srcInstanceId;
                    bool m_srcInstanceIdHasBeenSet;

                    /**
                     * 目标实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     */
                    std::string m_dstInstanceId;
                    bool m_dstInstanceIdHasBeenSet;

                    /**
                     * 单位为秒。源实例与目标实例间DTS已断开时间。如果 DTS 断开时间大于TimeDelay，则不切换VIP，建议尽量根据业务设置一个可接受的值。
                     */
                    int64_t m_timeDelay;
                    bool m_timeDelayHasBeenSet;

                    /**
                     * 在 DTS 断开的情况下是否强制切换。
- 1：强制切换。
- 0：不强制切换。
                     */
                    int64_t m_forceSwitch;
                    bool m_forceSwitchHasBeenSet;

                    /**
                     * now: 立即切换，syncComplete：等待同步完成后切换
                     */
                    std::string m_switchTime;
                    bool m_switchTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_SWITCHINSTANCEVIPREQUEST_H_
