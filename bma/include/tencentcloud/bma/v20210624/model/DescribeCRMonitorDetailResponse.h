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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_DESCRIBECRMONITORDETAILRESPONSE_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_DESCRIBECRMONITORDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bma/v20210624/model/MonitorTort.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * DescribeCRMonitorDetail返回参数结构体
                */
                class DescribeCRMonitorDetailResponse : public AbstractModel
                {
                public:
                    DescribeCRMonitorDetailResponse();
                    ~DescribeCRMonitorDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取侵权数组
                     * @return Torts 侵权数组
                     * 
                     */
                    std::vector<MonitorTort> GetTorts() const;

                    /**
                     * 判断参数 Torts 是否已赋值
                     * @return Torts 是否已赋值
                     * 
                     */
                    bool TortsHasBeenSet() const;

                    /**
                     * 获取总记录数
                     * @return TotalCount 总记录数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取监测状态
                     * @return MonitorStatus 监测状态
                     * 
                     */
                    int64_t GetMonitorStatus() const;

                    /**
                     * 判断参数 MonitorStatus 是否已赋值
                     * @return MonitorStatus 是否已赋值
                     * 
                     */
                    bool MonitorStatusHasBeenSet() const;

                    /**
                     * 获取导出地址
                     * @return ExportURL 导出地址
                     * 
                     */
                    std::string GetExportURL() const;

                    /**
                     * 判断参数 ExportURL 是否已赋值
                     * @return ExportURL 是否已赋值
                     * 
                     */
                    bool ExportURLHasBeenSet() const;

                private:

                    /**
                     * 侵权数组
                     */
                    std::vector<MonitorTort> m_torts;
                    bool m_tortsHasBeenSet;

                    /**
                     * 总记录数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 监测状态
                     */
                    int64_t m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                    /**
                     * 导出地址
                     */
                    std::string m_exportURL;
                    bool m_exportURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_DESCRIBECRMONITORDETAILRESPONSE_H_
