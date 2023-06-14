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

#ifndef TENCENTCLOUD_CWS_V20180312_MODEL_CREATEMONITORSREQUEST_H_
#define TENCENTCLOUD_CWS_V20180312_MODEL_CREATEMONITORSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cws
    {
        namespace V20180312
        {
            namespace Model
            {
                /**
                * CreateMonitors请求参数结构体
                */
                class CreateMonitorsRequest : public AbstractModel
                {
                public:
                    CreateMonitorsRequest();
                    ~CreateMonitorsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点的url列表
                     * @return Urls 站点的url列表
                     * 
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置站点的url列表
                     * @param _urls 站点的url列表
                     * 
                     */
                    void SetUrls(const std::vector<std::string>& _urls);

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     * 
                     */
                    bool UrlsHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return Name 任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名称
                     * @param _name 任务名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取扫描模式，normal-正常扫描；deep-深度扫描
                     * @return ScannerType 扫描模式，normal-正常扫描；deep-深度扫描
                     * 
                     */
                    std::string GetScannerType() const;

                    /**
                     * 设置扫描模式，normal-正常扫描；deep-深度扫描
                     * @param _scannerType 扫描模式，normal-正常扫描；deep-深度扫描
                     * 
                     */
                    void SetScannerType(const std::string& _scannerType);

                    /**
                     * 判断参数 ScannerType 是否已赋值
                     * @return ScannerType 是否已赋值
                     * 
                     */
                    bool ScannerTypeHasBeenSet() const;

                    /**
                     * 获取扫描周期，单位小时，每X小时执行一次
                     * @return Crontab 扫描周期，单位小时，每X小时执行一次
                     * 
                     */
                    uint64_t GetCrontab() const;

                    /**
                     * 设置扫描周期，单位小时，每X小时执行一次
                     * @param _crontab 扫描周期，单位小时，每X小时执行一次
                     * 
                     */
                    void SetCrontab(const uint64_t& _crontab);

                    /**
                     * 判断参数 Crontab 是否已赋值
                     * @return Crontab 是否已赋值
                     * 
                     */
                    bool CrontabHasBeenSet() const;

                    /**
                     * 获取扫描速率限制，每秒发送X个HTTP请求
                     * @return RateLimit 扫描速率限制，每秒发送X个HTTP请求
                     * 
                     */
                    uint64_t GetRateLimit() const;

                    /**
                     * 设置扫描速率限制，每秒发送X个HTTP请求
                     * @param _rateLimit 扫描速率限制，每秒发送X个HTTP请求
                     * 
                     */
                    void SetRateLimit(const uint64_t& _rateLimit);

                    /**
                     * 判断参数 RateLimit 是否已赋值
                     * @return RateLimit 是否已赋值
                     * 
                     */
                    bool RateLimitHasBeenSet() const;

                    /**
                     * 获取首次扫描开始时间
                     * @return FirstScanStartTime 首次扫描开始时间
                     * 
                     */
                    std::string GetFirstScanStartTime() const;

                    /**
                     * 设置首次扫描开始时间
                     * @param _firstScanStartTime 首次扫描开始时间
                     * 
                     */
                    void SetFirstScanStartTime(const std::string& _firstScanStartTime);

                    /**
                     * 判断参数 FirstScanStartTime 是否已赋值
                     * @return FirstScanStartTime 是否已赋值
                     * 
                     */
                    bool FirstScanStartTimeHasBeenSet() const;

                private:

                    /**
                     * 站点的url列表
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 扫描模式，normal-正常扫描；deep-深度扫描
                     */
                    std::string m_scannerType;
                    bool m_scannerTypeHasBeenSet;

                    /**
                     * 扫描周期，单位小时，每X小时执行一次
                     */
                    uint64_t m_crontab;
                    bool m_crontabHasBeenSet;

                    /**
                     * 扫描速率限制，每秒发送X个HTTP请求
                     */
                    uint64_t m_rateLimit;
                    bool m_rateLimitHasBeenSet;

                    /**
                     * 首次扫描开始时间
                     */
                    std::string m_firstScanStartTime;
                    bool m_firstScanStartTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWS_V20180312_MODEL_CREATEMONITORSREQUEST_H_
