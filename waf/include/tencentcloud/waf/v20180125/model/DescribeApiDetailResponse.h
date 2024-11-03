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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAPIDETAILRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAPIDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ApiParameterType.h>
#include <tencentcloud/waf/v20180125/model/ApiDetailSampleHistory.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeApiDetail返回参数结构体
                */
                class DescribeApiDetailResponse : public AbstractModel
                {
                public:
                    DescribeApiDetailResponse();
                    ~DescribeApiDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取请求样例，json字符串格式
                     * @return Log 请求样例，json字符串格式
                     * 
                     */
                    std::string GetLog() const;

                    /**
                     * 判断参数 Log 是否已赋值
                     * @return Log 是否已赋值
                     * 
                     */
                    bool LogHasBeenSet() const;

                    /**
                     * 获取请求参数样例列表
                     * @return ParameterList 请求参数样例列表
                     * 
                     */
                    std::vector<ApiParameterType> GetParameterList() const;

                    /**
                     * 判断参数 ParameterList 是否已赋值
                     * @return ParameterList 是否已赋值
                     * 
                     */
                    bool ParameterListHasBeenSet() const;

                    /**
                     * 获取当前场景标签
                     * @return Scene 当前场景标签
                     * 
                     */
                    std::string GetScene() const;

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取敏感字段
                     * @return SensitiveFields 敏感字段
                     * 
                     */
                    std::vector<std::string> GetSensitiveFields() const;

                    /**
                     * 判断参数 SensitiveFields 是否已赋值
                     * @return SensitiveFields 是否已赋值
                     * 
                     */
                    bool SensitiveFieldsHasBeenSet() const;

                    /**
                     * 获取7天内是否活跃
                     * @return IsActive 7天内是否活跃
                     * 
                     */
                    bool GetIsActive() const;

                    /**
                     * 判断参数 IsActive 是否已赋值
                     * @return IsActive 是否已赋值
                     * 
                     */
                    bool IsActiveHasBeenSet() const;

                    /**
                     * 获取访问ip数
                     * @return IpCount 访问ip数
                     * 
                     */
                    int64_t GetIpCount() const;

                    /**
                     * 判断参数 IpCount 是否已赋值
                     * @return IpCount 是否已赋值
                     * 
                     */
                    bool IpCountHasBeenSet() const;

                    /**
                     * 获取访问地域数量
                     * @return RegionCount 访问地域数量
                     * 
                     */
                    int64_t GetRegionCount() const;

                    /**
                     * 判断参数 RegionCount 是否已赋值
                     * @return RegionCount 是否已赋值
                     * 
                     */
                    bool RegionCountHasBeenSet() const;

                    /**
                     * 获取关联事件数
                     * @return EventCount 关联事件数
                     * 
                     */
                    int64_t GetEventCount() const;

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     * 
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取涉敏数据条数
                     * @return SensitiveCount 涉敏数据条数
                     * 
                     */
                    uint64_t GetSensitiveCount() const;

                    /**
                     * 判断参数 SensitiveCount 是否已赋值
                     * @return SensitiveCount 是否已赋值
                     * 
                     */
                    bool SensitiveCountHasBeenSet() const;

                    /**
                     * 获取风险等级
                     * @return Level 风险等级
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取响应体
                     * @return RspLog 响应体
                     * 
                     */
                    std::string GetRspLog() const;

                    /**
                     * 判断参数 RspLog 是否已赋值
                     * @return RspLog 是否已赋值
                     * 
                     */
                    bool RspLogHasBeenSet() const;

                    /**
                     * 获取昨日访问峰值QPS
                     * @return MaxQPS 昨日访问峰值QPS
                     * 
                     */
                    uint64_t GetMaxQPS() const;

                    /**
                     * 判断参数 MaxQPS 是否已赋值
                     * @return MaxQPS 是否已赋值
                     * 
                     */
                    bool MaxQPSHasBeenSet() const;

                    /**
                     * 获取历史样例
                     * @return ApiDetailSampleHistory 历史样例
                     * 
                     */
                    std::vector<ApiDetailSampleHistory> GetApiDetailSampleHistory() const;

                    /**
                     * 判断参数 ApiDetailSampleHistory 是否已赋值
                     * @return ApiDetailSampleHistory 是否已赋值
                     * 
                     */
                    bool ApiDetailSampleHistoryHasBeenSet() const;

                private:

                    /**
                     * 请求样例，json字符串格式
                     */
                    std::string m_log;
                    bool m_logHasBeenSet;

                    /**
                     * 请求参数样例列表
                     */
                    std::vector<ApiParameterType> m_parameterList;
                    bool m_parameterListHasBeenSet;

                    /**
                     * 当前场景标签
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * 敏感字段
                     */
                    std::vector<std::string> m_sensitiveFields;
                    bool m_sensitiveFieldsHasBeenSet;

                    /**
                     * 7天内是否活跃
                     */
                    bool m_isActive;
                    bool m_isActiveHasBeenSet;

                    /**
                     * 访问ip数
                     */
                    int64_t m_ipCount;
                    bool m_ipCountHasBeenSet;

                    /**
                     * 访问地域数量
                     */
                    int64_t m_regionCount;
                    bool m_regionCountHasBeenSet;

                    /**
                     * 关联事件数
                     */
                    int64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * 涉敏数据条数
                     */
                    uint64_t m_sensitiveCount;
                    bool m_sensitiveCountHasBeenSet;

                    /**
                     * 风险等级
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 响应体
                     */
                    std::string m_rspLog;
                    bool m_rspLogHasBeenSet;

                    /**
                     * 昨日访问峰值QPS
                     */
                    uint64_t m_maxQPS;
                    bool m_maxQPSHasBeenSet;

                    /**
                     * 历史样例
                     */
                    std::vector<ApiDetailSampleHistory> m_apiDetailSampleHistory;
                    bool m_apiDetailSampleHistoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAPIDETAILRESPONSE_H_
