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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESTREAMPLAYINFOLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESTREAMPLAYINFOLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeStreamPlayInfoList请求参数结构体
                */
                class DescribeStreamPlayInfoListRequest : public AbstractModel
                {
                public:
                    DescribeStreamPlayInfoListRequest();
                    ~DescribeStreamPlayInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>起始时间点，接口查询支持两种时间格式：<br>1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I<br>2）yyyy-MM-dd HH:mm:ss：使用此格式时，默认代表北京时间。<br>开始时间和结束时间的格式需要保持一致。</p>
                     * @return StartTime <p>起始时间点，接口查询支持两种时间格式：<br>1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I<br>2）yyyy-MM-dd HH:mm:ss：使用此格式时，默认代表北京时间。<br>开始时间和结束时间的格式需要保持一致。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>起始时间点，接口查询支持两种时间格式：<br>1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I<br>2）yyyy-MM-dd HH:mm:ss：使用此格式时，默认代表北京时间。<br>开始时间和结束时间的格式需要保持一致。</p>
                     * @param _startTime <p>起始时间点，接口查询支持两种时间格式：<br>1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I<br>2）yyyy-MM-dd HH:mm:ss：使用此格式时，默认代表北京时间。<br>开始时间和结束时间的格式需要保持一致。</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间点，接口查询支持两种时间格式：<br>1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I<br>2）yyyy-MM-dd HH:mm:ss：使用此格式时，默认代表北京时间。<br>开始时间和结束时间的格式需要保持一致。结束时间和开始时间跨度不支持超过24小时，支持距当前时间一个月内的数据查询。</p>
                     * @return EndTime <p>结束时间点，接口查询支持两种时间格式：<br>1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I<br>2）yyyy-MM-dd HH:mm:ss：使用此格式时，默认代表北京时间。<br>开始时间和结束时间的格式需要保持一致。结束时间和开始时间跨度不支持超过24小时，支持距当前时间一个月内的数据查询。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间点，接口查询支持两种时间格式：<br>1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I<br>2）yyyy-MM-dd HH:mm:ss：使用此格式时，默认代表北京时间。<br>开始时间和结束时间的格式需要保持一致。结束时间和开始时间跨度不支持超过24小时，支持距当前时间一个月内的数据查询。</p>
                     * @param _endTime <p>结束时间点，接口查询支持两种时间格式：<br>1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I<br>2）yyyy-MM-dd HH:mm:ss：使用此格式时，默认代表北京时间。<br>开始时间和结束时间的格式需要保持一致。结束时间和开始时间跨度不支持超过24小时，支持距当前时间一个月内的数据查询。</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>播放域名，<br>若不填，则为查询所有播放域名的在线流数据。</p>
                     * @return PlayDomain <p>播放域名，<br>若不填，则为查询所有播放域名的在线流数据。</p>
                     * 
                     */
                    std::string GetPlayDomain() const;

                    /**
                     * 设置<p>播放域名，<br>若不填，则为查询所有播放域名的在线流数据。</p>
                     * @param _playDomain <p>播放域名，<br>若不填，则为查询所有播放域名的在线流数据。</p>
                     * 
                     */
                    void SetPlayDomain(const std::string& _playDomain);

                    /**
                     * 判断参数 PlayDomain 是否已赋值
                     * @return PlayDomain 是否已赋值
                     * 
                     */
                    bool PlayDomainHasBeenSet() const;

                    /**
                     * 获取<p>流名称，精确匹配。<br>若不填，则为查询总体播放数据。</p>
                     * @return StreamName <p>流名称，精确匹配。<br>若不填，则为查询总体播放数据。</p>
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置<p>流名称，精确匹配。<br>若不填，则为查询总体播放数据。</p>
                     * @param _streamName <p>流名称，精确匹配。<br>若不填，则为查询总体播放数据。</p>
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取<p>该参数暂不可用。</p>
                     * @return AppName <p>该参数暂不可用。</p>
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置<p>该参数暂不可用。</p>
                     * @param _appName <p>该参数暂不可用。</p>
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取<p>服务名称，可选值包括LVB(标准直播)，LEB(快直播)，不填则查LVB+LEB总值。</p>
                     * @return ServiceName <p>服务名称，可选值包括LVB(标准直播)，LEB(快直播)，不填则查LVB+LEB总值。</p>
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>服务名称，可选值包括LVB(标准直播)，LEB(快直播)，不填则查LVB+LEB总值。</p>
                     * @param _serviceName <p>服务名称，可选值包括LVB(标准直播)，LEB(快直播)，不填则查LVB+LEB总值。</p>
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                private:

                    /**
                     * <p>起始时间点，接口查询支持两种时间格式：<br>1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I<br>2）yyyy-MM-dd HH:mm:ss：使用此格式时，默认代表北京时间。<br>开始时间和结束时间的格式需要保持一致。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间点，接口查询支持两种时间格式：<br>1）YYYY-MM-DDThh:mm:ssZ：UTC时间格式，详见IOS日期格式说明文档: https://cloud.tencent.com/document/product/266/11732#I<br>2）yyyy-MM-dd HH:mm:ss：使用此格式时，默认代表北京时间。<br>开始时间和结束时间的格式需要保持一致。结束时间和开始时间跨度不支持超过24小时，支持距当前时间一个月内的数据查询。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>播放域名，<br>若不填，则为查询所有播放域名的在线流数据。</p>
                     */
                    std::string m_playDomain;
                    bool m_playDomainHasBeenSet;

                    /**
                     * <p>流名称，精确匹配。<br>若不填，则为查询总体播放数据。</p>
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * <p>该参数暂不可用。</p>
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * <p>服务名称，可选值包括LVB(标准直播)，LEB(快直播)，不填则查LVB+LEB总值。</p>
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESTREAMPLAYINFOLISTREQUEST_H_
