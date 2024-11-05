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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAREABANAREASRSP_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAREABANAREASRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/JobDateTime.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeAreaBanAreas接口的回包
                */
                class DescribeAreaBanAreasRsp : public AbstractModel
                {
                public:
                    DescribeAreaBanAreasRsp();
                    ~DescribeAreaBanAreasRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取状态 "0"：未开启地域封禁 "1"：开启地域封禁
                     * @return Status 状态 "0"：未开启地域封禁 "1"：开启地域封禁
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态 "0"：未开启地域封禁 "1"：开启地域封禁
                     * @param _status 状态 "0"：未开启地域封禁 "1"：开启地域封禁
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取数据来源 custom-自定义(默认)、batch-批量防护
                     * @return Source 数据来源 custom-自定义(默认)、batch-批量防护
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置数据来源 custom-自定义(默认)、batch-批量防护
                     * @param _source 数据来源 custom-自定义(默认)、batch-批量防护
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取字符串数据，配置的地域列表
                     * @return Areas 字符串数据，配置的地域列表
                     * 
                     */
                    std::vector<std::string> GetAreas() const;

                    /**
                     * 设置字符串数据，配置的地域列表
                     * @param _areas 字符串数据，配置的地域列表
                     * 
                     */
                    void SetAreas(const std::vector<std::string>& _areas);

                    /**
                     * 判断参数 Areas 是否已赋值
                     * @return Areas 是否已赋值
                     * 
                     */
                    bool AreasHasBeenSet() const;

                    /**
                     * 获取定时任务类型
                     * @return JobType 定时任务类型
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置定时任务类型
                     * @param _jobType 定时任务类型
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取定时任务详细配置
                     * @return JobDateTime 定时任务详细配置
                     * 
                     */
                    JobDateTime GetJobDateTime() const;

                    /**
                     * 设置定时任务详细配置
                     * @param _jobDateTime 定时任务详细配置
                     * 
                     */
                    void SetJobDateTime(const JobDateTime& _jobDateTime);

                    /**
                     * 判断参数 JobDateTime 是否已赋值
                     * @return JobDateTime 是否已赋值
                     * 
                     */
                    bool JobDateTimeHasBeenSet() const;

                    /**
                     * 获取周期任务配置
                     * @return CronType 周期任务配置
                     * 
                     */
                    std::string GetCronType() const;

                    /**
                     * 设置周期任务配置
                     * @param _cronType 周期任务配置
                     * 
                     */
                    void SetCronType(const std::string& _cronType);

                    /**
                     * 判断参数 CronType 是否已赋值
                     * @return CronType 是否已赋值
                     * 
                     */
                    bool CronTypeHasBeenSet() const;

                private:

                    /**
                     * 状态 "0"：未开启地域封禁 "1"：开启地域封禁
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 数据来源 custom-自定义(默认)、batch-批量防护
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 字符串数据，配置的地域列表
                     */
                    std::vector<std::string> m_areas;
                    bool m_areasHasBeenSet;

                    /**
                     * 定时任务类型
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * 定时任务详细配置
                     */
                    JobDateTime m_jobDateTime;
                    bool m_jobDateTimeHasBeenSet;

                    /**
                     * 周期任务配置
                     */
                    std::string m_cronType;
                    bool m_cronTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAREABANAREASRSP_H_
