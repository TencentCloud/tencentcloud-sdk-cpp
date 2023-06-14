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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_UPLOADTAXLISTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_UPLOADTAXLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * UploadTaxList请求参数结构体
                */
                class UploadTaxListRequest : public AbstractModel
                {
                public:
                    UploadTaxListRequest();
                    ~UploadTaxListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台渠道
                     * @return Channel 平台渠道
                     * 
                     */
                    int64_t GetChannel() const;

                    /**
                     * 设置平台渠道
                     * @param _channel 平台渠道
                     * 
                     */
                    void SetChannel(const int64_t& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取起始月份，YYYY-MM
                     * @return BeginMonth 起始月份，YYYY-MM
                     * 
                     */
                    std::string GetBeginMonth() const;

                    /**
                     * 设置起始月份，YYYY-MM
                     * @param _beginMonth 起始月份，YYYY-MM
                     * 
                     */
                    void SetBeginMonth(const std::string& _beginMonth);

                    /**
                     * 判断参数 BeginMonth 是否已赋值
                     * @return BeginMonth 是否已赋值
                     * 
                     */
                    bool BeginMonthHasBeenSet() const;

                    /**
                     * 获取结束月份。如果只上传一个月，结束月份等于起始月份
                     * @return EndMonth 结束月份。如果只上传一个月，结束月份等于起始月份
                     * 
                     */
                    std::string GetEndMonth() const;

                    /**
                     * 设置结束月份。如果只上传一个月，结束月份等于起始月份
                     * @param _endMonth 结束月份。如果只上传一个月，结束月份等于起始月份
                     * 
                     */
                    void SetEndMonth(const std::string& _endMonth);

                    /**
                     * 判断参数 EndMonth 是否已赋值
                     * @return EndMonth 是否已赋值
                     * 
                     */
                    bool EndMonthHasBeenSet() const;

                    /**
                     * 获取完税列表下载地址
                     * @return FileUrl 完税列表下载地址
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置完税列表下载地址
                     * @param _fileUrl 完税列表下载地址
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                private:

                    /**
                     * 平台渠道
                     */
                    int64_t m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 起始月份，YYYY-MM
                     */
                    std::string m_beginMonth;
                    bool m_beginMonthHasBeenSet;

                    /**
                     * 结束月份。如果只上传一个月，结束月份等于起始月份
                     */
                    std::string m_endMonth;
                    bool m_endMonthHasBeenSet;

                    /**
                     * 完税列表下载地址
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_UPLOADTAXLISTREQUEST_H_
