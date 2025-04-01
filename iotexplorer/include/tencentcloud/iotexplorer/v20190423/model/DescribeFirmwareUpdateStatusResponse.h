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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEFIRMWAREUPDATESTATUSRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEFIRMWAREUPDATESTATUSRESPONSE_H_

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
                * DescribeFirmwareUpdateStatus返回参数结构体
                */
                class DescribeFirmwareUpdateStatusResponse : public AbstractModel
                {
                public:
                    DescribeFirmwareUpdateStatusResponse();
                    ~DescribeFirmwareUpdateStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取升级任务源版本。
                     * @return OriVersion 升级任务源版本。
                     * 
                     */
                    std::string GetOriVersion() const;

                    /**
                     * 判断参数 OriVersion 是否已赋值
                     * @return OriVersion 是否已赋值
                     * 
                     */
                    bool OriVersionHasBeenSet() const;

                    /**
                     * 获取升级任务目标版本。
                     * @return DstVersion 升级任务目标版本。
                     * 
                     */
                    std::string GetDstVersion() const;

                    /**
                     * 判断参数 DstVersion 是否已赋值
                     * @return DstVersion 是否已赋值
                     * 
                     */
                    bool DstVersionHasBeenSet() const;

                    /**
                     * 获取升级状态：- 0：设备离线。- 1：待处理。- 2：消息下发成功。- 3：下载中。- 4：烧录中。- 5：失败。- 6：升级完成。- 7：正在处理中。- 8：等待用户确认。- 10：升级超时。- 20：下载完成。
                     * @return Status 升级状态：- 0：设备离线。- 1：待处理。- 2：消息下发成功。- 3：下载中。- 4：烧录中。- 5：失败。- 6：升级完成。- 7：正在处理中。- 8：等待用户确认。- 10：升级超时。- 20：下载完成。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取进度
                     * @return Percent 进度
                     * 
                     */
                    int64_t GetPercent() const;

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                private:

                    /**
                     * 升级任务源版本。
                     */
                    std::string m_oriVersion;
                    bool m_oriVersionHasBeenSet;

                    /**
                     * 升级任务目标版本。
                     */
                    std::string m_dstVersion;
                    bool m_dstVersionHasBeenSet;

                    /**
                     * 升级状态：- 0：设备离线。- 1：待处理。- 2：消息下发成功。- 3：下载中。- 4：烧录中。- 5：失败。- 6：升级完成。- 7：正在处理中。- 8：等待用户确认。- 10：升级超时。- 20：下载完成。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 进度
                     */
                    int64_t m_percent;
                    bool m_percentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEFIRMWAREUPDATESTATUSRESPONSE_H_
