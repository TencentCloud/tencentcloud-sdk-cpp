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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CREATEAREABANRULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CREATEAREABANRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/Area.h>
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
                * CreateAreaBanRule请求参数结构体
                */
                class CreateAreaBanRuleRequest : public AbstractModel
                {
                public:
                    CreateAreaBanRuleRequest();
                    ~CreateAreaBanRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要修改的域名
                     * @return Domain 需要修改的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置需要修改的域名
                     * @param _domain 需要修改的域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取需要新增的封禁地域
                     * @return Areas 需要新增的封禁地域
                     * 
                     */
                    std::vector<Area> GetAreas() const;

                    /**
                     * 设置需要新增的封禁地域
                     * @param _areas 需要新增的封禁地域
                     * 
                     */
                    void SetAreas(const std::vector<Area>& _areas);

                    /**
                     * 判断参数 Areas 是否已赋值
                     * @return Areas 是否已赋值
                     * 
                     */
                    bool AreasHasBeenSet() const;

                    /**
                     * 获取规则执行的方式，TimedJob为定时执行，CronJob为周期执行
                     * @return JobType 规则执行的方式，TimedJob为定时执行，CronJob为周期执行
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置规则执行的方式，TimedJob为定时执行，CronJob为周期执行
                     * @param _jobType 规则执行的方式，TimedJob为定时执行，CronJob为周期执行
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
                     * 获取定时任务配置
                     * @return JobDateTime 定时任务配置
                     * 
                     */
                    JobDateTime GetJobDateTime() const;

                    /**
                     * 设置定时任务配置
                     * @param _jobDateTime 定时任务配置
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
                     * 获取地域信息的语言，支持cn、en，默认为中文cn
                     * @return Lang 地域信息的语言，支持cn、en，默认为中文cn
                     * 
                     */
                    std::string GetLang() const;

                    /**
                     * 设置地域信息的语言，支持cn、en，默认为中文cn
                     * @param _lang 地域信息的语言，支持cn、en，默认为中文cn
                     * 
                     */
                    void SetLang(const std::string& _lang);

                    /**
                     * 判断参数 Lang 是否已赋值
                     * @return Lang 是否已赋值
                     * 
                     */
                    bool LangHasBeenSet() const;

                private:

                    /**
                     * 需要修改的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 需要新增的封禁地域
                     */
                    std::vector<Area> m_areas;
                    bool m_areasHasBeenSet;

                    /**
                     * 规则执行的方式，TimedJob为定时执行，CronJob为周期执行
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * 定时任务配置
                     */
                    JobDateTime m_jobDateTime;
                    bool m_jobDateTimeHasBeenSet;

                    /**
                     * 地域信息的语言，支持cn、en，默认为中文cn
                     */
                    std::string m_lang;
                    bool m_langHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CREATEAREABANRULEREQUEST_H_
