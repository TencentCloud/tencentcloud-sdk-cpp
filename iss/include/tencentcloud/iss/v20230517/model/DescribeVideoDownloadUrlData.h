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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEVIDEODOWNLOADURLDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEVIDEODOWNLOADURLDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 获取云录像下载URL返回的数据
                */
                class DescribeVideoDownloadUrlData : public AbstractModel
                {
                public:
                    DescribeVideoDownloadUrlData();
                    ~DescribeVideoDownloadUrlData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取录像文件下载 URL
注意：
URL 有效期是10分钟，过期后将拒绝访问，若需再用请重新获取 
录像文件下载采用分块传输编码，响应头Transfer-Encoding:chunked 
下载文件命名格式为{ChannelId}-{BeginTime}-{EndTime}.{FileType} 
                     * @return Url 录像文件下载 URL
注意：
URL 有效期是10分钟，过期后将拒绝访问，若需再用请重新获取 
录像文件下载采用分块传输编码，响应头Transfer-Encoding:chunked 
下载文件命名格式为{ChannelId}-{BeginTime}-{EndTime}.{FileType} 
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置录像文件下载 URL
注意：
URL 有效期是10分钟，过期后将拒绝访问，若需再用请重新获取 
录像文件下载采用分块传输编码，响应头Transfer-Encoding:chunked 
下载文件命名格式为{ChannelId}-{BeginTime}-{EndTime}.{FileType} 
                     * @param _url 录像文件下载 URL
注意：
URL 有效期是10分钟，过期后将拒绝访问，若需再用请重新获取 
录像文件下载采用分块传输编码，响应头Transfer-Encoding:chunked 
下载文件命名格式为{ChannelId}-{BeginTime}-{EndTime}.{FileType} 
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取实际下载录像的开始时间
注意：当请求中指定IsRespActualTime参数为true时，才有该字段
                     * @return ActualBeginTime 实际下载录像的开始时间
注意：当请求中指定IsRespActualTime参数为true时，才有该字段
                     * 
                     */
                    std::string GetActualBeginTime() const;

                    /**
                     * 设置实际下载录像的开始时间
注意：当请求中指定IsRespActualTime参数为true时，才有该字段
                     * @param _actualBeginTime 实际下载录像的开始时间
注意：当请求中指定IsRespActualTime参数为true时，才有该字段
                     * 
                     */
                    void SetActualBeginTime(const std::string& _actualBeginTime);

                    /**
                     * 判断参数 ActualBeginTime 是否已赋值
                     * @return ActualBeginTime 是否已赋值
                     * 
                     */
                    bool ActualBeginTimeHasBeenSet() const;

                    /**
                     * 获取实际下载录像的结束时间
注意：当请求中指定IsRespActualTime参数为true时，才有该字段
                     * @return ActualEndTime 实际下载录像的结束时间
注意：当请求中指定IsRespActualTime参数为true时，才有该字段
                     * 
                     */
                    std::string GetActualEndTime() const;

                    /**
                     * 设置实际下载录像的结束时间
注意：当请求中指定IsRespActualTime参数为true时，才有该字段
                     * @param _actualEndTime 实际下载录像的结束时间
注意：当请求中指定IsRespActualTime参数为true时，才有该字段
                     * 
                     */
                    void SetActualEndTime(const std::string& _actualEndTime);

                    /**
                     * 判断参数 ActualEndTime 是否已赋值
                     * @return ActualEndTime 是否已赋值
                     * 
                     */
                    bool ActualEndTimeHasBeenSet() const;

                private:

                    /**
                     * 录像文件下载 URL
注意：
URL 有效期是10分钟，过期后将拒绝访问，若需再用请重新获取 
录像文件下载采用分块传输编码，响应头Transfer-Encoding:chunked 
下载文件命名格式为{ChannelId}-{BeginTime}-{EndTime}.{FileType} 
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 实际下载录像的开始时间
注意：当请求中指定IsRespActualTime参数为true时，才有该字段
                     */
                    std::string m_actualBeginTime;
                    bool m_actualBeginTimeHasBeenSet;

                    /**
                     * 实际下载录像的结束时间
注意：当请求中指定IsRespActualTime参数为true时，才有该字段
                     */
                    std::string m_actualEndTime;
                    bool m_actualEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEVIDEODOWNLOADURLDATA_H_
