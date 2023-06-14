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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_MODIFYCRMONITORREQUEST_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_MODIFYCRMONITORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * ModifyCRMonitor请求参数结构体
                */
                class ModifyCRMonitorRequest : public AbstractModel
                {
                public:
                    ModifyCRMonitorRequest();
                    ~ModifyCRMonitorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作品ID
                     * @return WorkId 作品ID
                     * 
                     */
                    int64_t GetWorkId() const;

                    /**
                     * 设置作品ID
                     * @param _workId 作品ID
                     * 
                     */
                    void SetWorkId(const int64_t& _workId);

                    /**
                     * 判断参数 WorkId 是否已赋值
                     * @return WorkId 是否已赋值
                     * 
                     */
                    bool WorkIdHasBeenSet() const;

                    /**
                     * 获取监测状态：1-开启监测 2-关闭监测
                     * @return MonitorStatus 监测状态：1-开启监测 2-关闭监测
                     * 
                     */
                    std::string GetMonitorStatus() const;

                    /**
                     * 设置监测状态：1-开启监测 2-关闭监测
                     * @param _monitorStatus 监测状态：1-开启监测 2-关闭监测
                     * 
                     */
                    void SetMonitorStatus(const std::string& _monitorStatus);

                    /**
                     * 判断参数 MonitorStatus 是否已赋值
                     * @return MonitorStatus 是否已赋值
                     * 
                     */
                    bool MonitorStatusHasBeenSet() const;

                    /**
                     * 获取监测截止时间
                     * @return MonitorEnd 监测截止时间
                     * 
                     */
                    std::string GetMonitorEnd() const;

                    /**
                     * 设置监测截止时间
                     * @param _monitorEnd 监测截止时间
                     * 
                     */
                    void SetMonitorEnd(const std::string& _monitorEnd);

                    /**
                     * 判断参数 MonitorEnd 是否已赋值
                     * @return MonitorEnd 是否已赋值
                     * 
                     */
                    bool MonitorEndHasBeenSet() const;

                private:

                    /**
                     * 作品ID
                     */
                    int64_t m_workId;
                    bool m_workIdHasBeenSet;

                    /**
                     * 监测状态：1-开启监测 2-关闭监测
                     */
                    std::string m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                    /**
                     * 监测截止时间
                     */
                    std::string m_monitorEnd;
                    bool m_monitorEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_MODIFYCRMONITORREQUEST_H_
