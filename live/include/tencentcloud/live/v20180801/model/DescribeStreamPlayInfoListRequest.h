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
                     * 获取开始时间，北京时间，格式为yyyy-mm-dd HH:MM:SS
                     * @return StartTime 开始时间，北京时间，格式为yyyy-mm-dd HH:MM:SS
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，北京时间，格式为yyyy-mm-dd HH:MM:SS
                     * @param StartTime 开始时间，北京时间，格式为yyyy-mm-dd HH:MM:SS
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，北京时间，格式为yyyy-mm-dd HH:MM:SS，
结束时间 和 开始时间跨度不支持超过24小时，支持距当前时间15天内的数据查询。
                     * @return EndTime 结束时间，北京时间，格式为yyyy-mm-dd HH:MM:SS，
结束时间 和 开始时间跨度不支持超过24小时，支持距当前时间15天内的数据查询。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，北京时间，格式为yyyy-mm-dd HH:MM:SS，
结束时间 和 开始时间跨度不支持超过24小时，支持距当前时间15天内的数据查询。
                     * @param EndTime 结束时间，北京时间，格式为yyyy-mm-dd HH:MM:SS，
结束时间 和 开始时间跨度不支持超过24小时，支持距当前时间15天内的数据查询。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取播放域名，
若不填，则为查询所有播放域名的在线流数据。
                     * @return PlayDomain 播放域名，
若不填，则为查询所有播放域名的在线流数据。
                     */
                    std::string GetPlayDomain() const;

                    /**
                     * 设置播放域名，
若不填，则为查询所有播放域名的在线流数据。
                     * @param PlayDomain 播放域名，
若不填，则为查询所有播放域名的在线流数据。
                     */
                    void SetPlayDomain(const std::string& _playDomain);

                    /**
                     * 判断参数 PlayDomain 是否已赋值
                     * @return PlayDomain 是否已赋值
                     */
                    bool PlayDomainHasBeenSet() const;

                    /**
                     * 获取流名称，精确匹配。
若不填，则为查询总体播放数据。
                     * @return StreamName 流名称，精确匹配。
若不填，则为查询总体播放数据。
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流名称，精确匹配。
若不填，则为查询总体播放数据。
                     * @param StreamName 流名称，精确匹配。
若不填，则为查询总体播放数据。
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取推流路径，与播放地址中的AppName保持一致，会精确匹配，在同时传递了StreamName时生效。
若不填，则为查询总体播放数据。
注意：按AppName查询请先联系工单申请，开通后配置生效预计需要5个工作日左右，具体时间以最终回复为准。
                     * @return AppName 推流路径，与播放地址中的AppName保持一致，会精确匹配，在同时传递了StreamName时生效。
若不填，则为查询总体播放数据。
注意：按AppName查询请先联系工单申请，开通后配置生效预计需要5个工作日左右，具体时间以最终回复为准。
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置推流路径，与播放地址中的AppName保持一致，会精确匹配，在同时传递了StreamName时生效。
若不填，则为查询总体播放数据。
注意：按AppName查询请先联系工单申请，开通后配置生效预计需要5个工作日左右，具体时间以最终回复为准。
                     * @param AppName 推流路径，与播放地址中的AppName保持一致，会精确匹配，在同时传递了StreamName时生效。
若不填，则为查询总体播放数据。
注意：按AppName查询请先联系工单申请，开通后配置生效预计需要5个工作日左右，具体时间以最终回复为准。
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取服务名称，可选值包括LVB(标准直播)，LEB(快直播)，不填则查LVB+LEB总值。
                     * @return ServiceName 服务名称，可选值包括LVB(标准直播)，LEB(快直播)，不填则查LVB+LEB总值。
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务名称，可选值包括LVB(标准直播)，LEB(快直播)，不填则查LVB+LEB总值。
                     * @param ServiceName 服务名称，可选值包括LVB(标准直播)，LEB(快直播)，不填则查LVB+LEB总值。
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     */
                    bool ServiceNameHasBeenSet() const;

                private:

                    /**
                     * 开始时间，北京时间，格式为yyyy-mm-dd HH:MM:SS
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，北京时间，格式为yyyy-mm-dd HH:MM:SS，
结束时间 和 开始时间跨度不支持超过24小时，支持距当前时间15天内的数据查询。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 播放域名，
若不填，则为查询所有播放域名的在线流数据。
                     */
                    std::string m_playDomain;
                    bool m_playDomainHasBeenSet;

                    /**
                     * 流名称，精确匹配。
若不填，则为查询总体播放数据。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 推流路径，与播放地址中的AppName保持一致，会精确匹配，在同时传递了StreamName时生效。
若不填，则为查询总体播放数据。
注意：按AppName查询请先联系工单申请，开通后配置生效预计需要5个工作日左右，具体时间以最终回复为准。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 服务名称，可选值包括LVB(标准直播)，LEB(快直播)，不填则查LVB+LEB总值。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESTREAMPLAYINFOLISTREQUEST_H_
