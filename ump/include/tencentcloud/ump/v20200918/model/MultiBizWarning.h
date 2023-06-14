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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_MULTIBIZWARNING_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_MULTIBIZWARNING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ump/v20200918/model/Point.h>
#include <tencentcloud/ump/v20200918/model/MultiBizWarningInfo.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * 多经点位告警
                */
                class MultiBizWarning : public AbstractModel
                {
                public:
                    MultiBizWarning();
                    ~MultiBizWarning() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取编号
                     * @return Id 编号
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置编号
                     * @param _id 编号
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取监控区域
                     * @return MonitoringArea 监控区域
                     * 
                     */
                    std::vector<Point> GetMonitoringArea() const;

                    /**
                     * 设置监控区域
                     * @param _monitoringArea 监控区域
                     * 
                     */
                    void SetMonitoringArea(const std::vector<Point>& _monitoringArea);

                    /**
                     * 判断参数 MonitoringArea 是否已赋值
                     * @return MonitoringArea 是否已赋值
                     * 
                     */
                    bool MonitoringAreaHasBeenSet() const;

                    /**
                     * 获取告警列表
                     * @return WarningInfos 告警列表
                     * 
                     */
                    std::vector<MultiBizWarningInfo> GetWarningInfos() const;

                    /**
                     * 设置告警列表
                     * @param _warningInfos 告警列表
                     * 
                     */
                    void SetWarningInfos(const std::vector<MultiBizWarningInfo>& _warningInfos);

                    /**
                     * 判断参数 WarningInfos 是否已赋值
                     * @return WarningInfos 是否已赋值
                     * 
                     */
                    bool WarningInfosHasBeenSet() const;

                private:

                    /**
                     * 编号
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 监控区域
                     */
                    std::vector<Point> m_monitoringArea;
                    bool m_monitoringAreaHasBeenSet;

                    /**
                     * 告警列表
                     */
                    std::vector<MultiBizWarningInfo> m_warningInfos;
                    bool m_warningInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_MULTIBIZWARNING_H_
