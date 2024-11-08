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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_CHANGEPWDTASKDETAIL_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_CHANGEPWDTASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dasb/v20191018/model/Device.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * 查询改密计划详情
                */
                class ChangePwdTaskDetail : public AbstractModel
                {
                public:
                    ChangePwdTaskDetail();
                    ~ChangePwdTaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产信息
                     * @return Device 资产信息
                     * 
                     */
                    Device GetDevice() const;

                    /**
                     * 设置资产信息
                     * @param _device 资产信息
                     * 
                     */
                    void SetDevice(const Device& _device);

                    /**
                     * 判断参数 Device 是否已赋值
                     * @return Device 是否已赋值
                     * 
                     */
                    bool DeviceHasBeenSet() const;

                    /**
                     * 获取资产账号
                     * @return Account 资产账号
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置资产账号
                     * @param _account 资产账号
                     * 
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取上次改密结果。0-未改密  1-改密成功 2-改密失败
                     * @return LastChangeStatus 上次改密结果。0-未改密  1-改密成功 2-改密失败
                     * 
                     */
                    uint64_t GetLastChangeStatus() const;

                    /**
                     * 设置上次改密结果。0-未改密  1-改密成功 2-改密失败
                     * @param _lastChangeStatus 上次改密结果。0-未改密  1-改密成功 2-改密失败
                     * 
                     */
                    void SetLastChangeStatus(const uint64_t& _lastChangeStatus);

                    /**
                     * 判断参数 LastChangeStatus 是否已赋值
                     * @return LastChangeStatus 是否已赋值
                     * 
                     */
                    bool LastChangeStatusHasBeenSet() const;

                private:

                    /**
                     * 资产信息
                     */
                    Device m_device;
                    bool m_deviceHasBeenSet;

                    /**
                     * 资产账号
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 上次改密结果。0-未改密  1-改密成功 2-改密失败
                     */
                    uint64_t m_lastChangeStatus;
                    bool m_lastChangeStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_CHANGEPWDTASKDETAIL_H_
