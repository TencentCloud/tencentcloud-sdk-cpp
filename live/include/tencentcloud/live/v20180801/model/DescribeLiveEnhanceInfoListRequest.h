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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEENHANCEINFOLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEENHANCEINFOLISTREQUEST_H_

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
                * DescribeLiveEnhanceInfoList请求参数结构体
                */
                class DescribeLiveEnhanceInfoListRequest : public AbstractModel
                {
                public:
                    DescribeLiveEnhanceInfoListRequest();
                    ~DescribeLiveEnhanceInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始时间点，使用ISO格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见[ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)。
接口支持最近三个月的查询，开始时间和结束时间查询跨度不能超过三十天。
                     * @return StartTime 起始时间点，使用ISO格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见[ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)。
接口支持最近三个月的查询，开始时间和结束时间查询跨度不能超过三十天。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间点，使用ISO格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见[ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)。
接口支持最近三个月的查询，开始时间和结束时间查询跨度不能超过三十天。
                     * @param _startTime 起始时间点，使用ISO格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见[ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)。
接口支持最近三个月的查询，开始时间和结束时间查询跨度不能超过三十天。
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
                     * 获取结束时间点，使用ISO格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见[ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)。
接口支持最近三个月的查询，开始时间和结束时间查询跨度不能超过三十天。
                     * @return EndTime 结束时间点，使用ISO格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见[ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)。
接口支持最近三个月的查询，开始时间和结束时间查询跨度不能超过三十天。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间点，使用ISO格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见[ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)。
接口支持最近三个月的查询，开始时间和结束时间查询跨度不能超过三十天。
                     * @param _endTime 结束时间点，使用ISO格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见[ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)。
接口支持最近三个月的查询，开始时间和结束时间查询跨度不能超过三十天。
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
                     * 获取查询粒度，支持5，60分钟。
                     * @return Granularity 查询粒度，支持5，60分钟。
                     * 
                     */
                    int64_t GetGranularity() const;

                    /**
                     * 设置查询粒度，支持5，60分钟。
                     * @param _granularity 查询粒度，支持5，60分钟。
                     * 
                     */
                    void SetGranularity(const int64_t& _granularity);

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     * 
                     */
                    bool GranularityHasBeenSet() const;

                    /**
                     * 获取查询域名，如果不填则默认查全部的数据。
                     * @return DomainNames 查询域名，如果不填则默认查全部的数据。
                     * 
                     */
                    std::vector<std::string> GetDomainNames() const;

                    /**
                     * 设置查询域名，如果不填则默认查全部的数据。
                     * @param _domainNames 查询域名，如果不填则默认查全部的数据。
                     * 
                     */
                    void SetDomainNames(const std::vector<std::string>& _domainNames);

                    /**
                     * 判断参数 DomainNames 是否已赋值
                     * @return DomainNames 是否已赋值
                     * 
                     */
                    bool DomainNamesHasBeenSet() const;

                    /**
                     * 获取增强服务类型，如果不填则默认查全部的数据。
                     * @return Type 增强服务类型，如果不填则默认查全部的数据。
                     * 
                     */
                    std::vector<std::string> GetType() const;

                    /**
                     * 设置增强服务类型，如果不填则默认查全部的数据。
                     * @param _type 增强服务类型，如果不填则默认查全部的数据。
                     * 
                     */
                    void SetType(const std::vector<std::string>& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取分辨率，如果不填则默认查全部的数据。
                     * @return Resolution 分辨率，如果不填则默认查全部的数据。
                     * 
                     */
                    std::vector<std::string> GetResolution() const;

                    /**
                     * 设置分辨率，如果不填则默认查全部的数据。
                     * @param _resolution 分辨率，如果不填则默认查全部的数据。
                     * 
                     */
                    void SetResolution(const std::vector<std::string>& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取帧率，如果不填则默认查全部的数据。
                     * @return Fps 帧率，如果不填则默认查全部的数据。
                     * 
                     */
                    std::vector<std::string> GetFps() const;

                    /**
                     * 设置帧率，如果不填则默认查全部的数据。
                     * @param _fps 帧率，如果不填则默认查全部的数据。
                     * 
                     */
                    void SetFps(const std::vector<std::string>& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                private:

                    /**
                     * 起始时间点，使用ISO格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见[ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)。
接口支持最近三个月的查询，开始时间和结束时间查询跨度不能超过三十天。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间点，使用ISO格式时间，
例如：2019-01-08T10:00:00Z。
注意：北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见[ISO 日期格式说明](https://cloud.tencent.com/document/product/267/38543#:~:text=I-,ISO,-%E6%97%A5%E6%9C%9F%E6%A0%BC%E5%BC%8F)。
接口支持最近三个月的查询，开始时间和结束时间查询跨度不能超过三十天。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 查询粒度，支持5，60分钟。
                     */
                    int64_t m_granularity;
                    bool m_granularityHasBeenSet;

                    /**
                     * 查询域名，如果不填则默认查全部的数据。
                     */
                    std::vector<std::string> m_domainNames;
                    bool m_domainNamesHasBeenSet;

                    /**
                     * 增强服务类型，如果不填则默认查全部的数据。
                     */
                    std::vector<std::string> m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 分辨率，如果不填则默认查全部的数据。
                     */
                    std::vector<std::string> m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 帧率，如果不填则默认查全部的数据。
                     */
                    std::vector<std::string> m_fps;
                    bool m_fpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEENHANCEINFOLISTREQUEST_H_
