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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_RESETDEVICESTATERESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_RESETDEVICESTATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20180614/model/ResetDeviceResult.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * ResetDeviceState返回参数结构体
                */
                class ResetDeviceStateResponse : public AbstractModel
                {
                public:
                    ResetDeviceStateResponse();
                    ~ResetDeviceStateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取批量重置设备成功数
                     * @return SuccessCount 批量重置设备成功数
                     * 
                     */
                    uint64_t GetSuccessCount() const;

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取批量重置设备结果
                     * @return ResetDeviceResults 批量重置设备结果
                     * 
                     */
                    std::vector<ResetDeviceResult> GetResetDeviceResults() const;

                    /**
                     * 判断参数 ResetDeviceResults 是否已赋值
                     * @return ResetDeviceResults 是否已赋值
                     * 
                     */
                    bool ResetDeviceResultsHasBeenSet() const;

                private:

                    /**
                     * 批量重置设备成功数
                     */
                    uint64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 批量重置设备结果
                     */
                    std::vector<ResetDeviceResult> m_resetDeviceResults;
                    bool m_resetDeviceResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_RESETDEVICESTATERESPONSE_H_
