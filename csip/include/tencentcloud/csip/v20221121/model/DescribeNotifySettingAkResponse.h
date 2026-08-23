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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBENOTIFYSETTINGAKRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBENOTIFYSETTINGAKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/LevelOption.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeNotifySettingAk返回参数结构体
                */
                class DescribeNotifySettingAkResponse : public AbstractModel
                {
                public:
                    DescribeNotifySettingAkResponse();
                    ~DescribeNotifySettingAkResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>告警类型/等级 (类型: AbnBehavior-异常行为, LeakDetect-泄露监测; 等级: 1-提示, 2-低危, 3-中危, 4-高危, 5-严重)</p>
                     * @return Alert <p>告警类型/等级 (类型: AbnBehavior-异常行为, LeakDetect-泄露监测; 等级: 1-提示, 2-低危, 3-中危, 4-高危, 5-严重)</p>
                     * 
                     */
                    std::vector<LevelOption> GetAlert() const;

                    /**
                     * 判断参数 Alert 是否已赋值
                     * @return Alert 是否已赋值
                     * 
                     */
                    bool AlertHasBeenSet() const;

                    /**
                     * 获取<p>告警通知粒度</p><p>枚举值：</p><ul><li>0： 按告警聚合推送</li><li>1： 按调用记录推送</li></ul>
                     * @return AlertGranularity <p>告警通知粒度</p><p>枚举值：</p><ul><li>0： 按告警聚合推送</li><li>1： 按调用记录推送</li></ul>
                     * 
                     */
                    int64_t GetAlertGranularity() const;

                    /**
                     * 判断参数 AlertGranularity 是否已赋值
                     * @return AlertGranularity 是否已赋值
                     * 
                     */
                    bool AlertGranularityHasBeenSet() const;

                    /**
                     * 获取<p>资产事件</p><p>枚举值：</p><ul><li>NewAk： AK新增</li></ul>
                     * @return Asset <p>资产事件</p><p>枚举值：</p><ul><li>NewAk： AK新增</li></ul>
                     * 
                     */
                    std::vector<std::string> GetAsset() const;

                    /**
                     * 判断参数 Asset 是否已赋值
                     * @return Asset 是否已赋值
                     * 
                     */
                    bool AssetHasBeenSet() const;

                    /**
                     * 获取<p>通知开始时间</p><p>参数格式：hh:mm:ss</p>
                     * @return BeginTime <p>通知开始时间</p><p>参数格式：hh:mm:ss</p>
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>通知结束时间</p><p>参数格式：hh:mm:ss</p>
                     * @return EndTime <p>通知结束时间</p><p>参数格式：hh:mm:ss</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * <p>告警类型/等级 (类型: AbnBehavior-异常行为, LeakDetect-泄露监测; 等级: 1-提示, 2-低危, 3-中危, 4-高危, 5-严重)</p>
                     */
                    std::vector<LevelOption> m_alert;
                    bool m_alertHasBeenSet;

                    /**
                     * <p>告警通知粒度</p><p>枚举值：</p><ul><li>0： 按告警聚合推送</li><li>1： 按调用记录推送</li></ul>
                     */
                    int64_t m_alertGranularity;
                    bool m_alertGranularityHasBeenSet;

                    /**
                     * <p>资产事件</p><p>枚举值：</p><ul><li>NewAk： AK新增</li></ul>
                     */
                    std::vector<std::string> m_asset;
                    bool m_assetHasBeenSet;

                    /**
                     * <p>通知开始时间</p><p>参数格式：hh:mm:ss</p>
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>通知结束时间</p><p>参数格式：hh:mm:ss</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBENOTIFYSETTINGAKRESPONSE_H_
