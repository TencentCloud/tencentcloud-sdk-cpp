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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_GETDIAGNOSESETTINGSRESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_GETDIAGNOSESETTINGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/DiagnoseJobMeta.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetDiagnoseSettings返回参数结构体
                */
                class GetDiagnoseSettingsResponse : public AbstractModel
                {
                public:
                    GetDiagnoseSettingsResponse();
                    ~GetDiagnoseSettingsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取智能运维诊断项和元信息
                     * @return DiagnoseJobMetas 智能运维诊断项和元信息
                     * 
                     */
                    std::vector<DiagnoseJobMeta> GetDiagnoseJobMetas() const;

                    /**
                     * 判断参数 DiagnoseJobMetas 是否已赋值
                     * @return DiagnoseJobMetas 是否已赋值
                     * 
                     */
                    bool DiagnoseJobMetasHasBeenSet() const;

                    /**
                     * 获取0：开启智能运维；-1：关闭智能运维
                     * @return Status 0：开启智能运维；-1：关闭智能运维
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
                     * 获取智能运维每天定时巡检时间
                     * @return CronTime 智能运维每天定时巡检时间
                     * 
                     */
                    std::string GetCronTime() const;

                    /**
                     * 判断参数 CronTime 是否已赋值
                     * @return CronTime 是否已赋值
                     * 
                     */
                    bool CronTimeHasBeenSet() const;

                    /**
                     * 获取智能运维当天已手动触发诊断次数
                     * @return Count 智能运维当天已手动触发诊断次数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取智能运维每天最大可手动触发次数
                     * @return MaxCount 智能运维每天最大可手动触发次数
                     * 
                     */
                    int64_t GetMaxCount() const;

                    /**
                     * 判断参数 MaxCount 是否已赋值
                     * @return MaxCount 是否已赋值
                     * 
                     */
                    bool MaxCountHasBeenSet() const;

                private:

                    /**
                     * 智能运维诊断项和元信息
                     */
                    std::vector<DiagnoseJobMeta> m_diagnoseJobMetas;
                    bool m_diagnoseJobMetasHasBeenSet;

                    /**
                     * 0：开启智能运维；-1：关闭智能运维
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 智能运维每天定时巡检时间
                     */
                    std::string m_cronTime;
                    bool m_cronTimeHasBeenSet;

                    /**
                     * 智能运维当天已手动触发诊断次数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 智能运维每天最大可手动触发次数
                     */
                    int64_t m_maxCount;
                    bool m_maxCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_GETDIAGNOSESETTINGSRESPONSE_H_
