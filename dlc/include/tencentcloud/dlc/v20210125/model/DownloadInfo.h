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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DOWNLOADINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DOWNLOADINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 入站下载信息（结果集 / 日志通用）.
                */
                class DownloadInfo : public AbstractModel
                {
                public:
                    DownloadInfo();
                    ~DownloadInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>下载链接地址.</p>
                     * @return Url <p>下载链接地址.</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>下载链接地址.</p>
                     * @param _url <p>下载链接地址.</p>
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
                     * 获取<p>文件格式（如 CSV / JSON）.</p>
                     * @return Format <p>文件格式（如 CSV / JSON）.</p>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置<p>文件格式（如 CSV / JSON）.</p>
                     * @param _format <p>文件格式（如 CSV / JSON）.</p>
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取<p>文件大小（字节）.</p>
                     * @return Size <p>文件大小（字节）.</p>
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置<p>文件大小（字节）.</p>
                     * @param _size <p>文件大小（字节）.</p>
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取<p>链接有效时长（秒）.</p>
                     * @return ExpireSeconds <p>链接有效时长（秒）.</p>
                     * 
                     */
                    int64_t GetExpireSeconds() const;

                    /**
                     * 设置<p>链接有效时长（秒）.</p>
                     * @param _expireSeconds <p>链接有效时长（秒）.</p>
                     * 
                     */
                    void SetExpireSeconds(const int64_t& _expireSeconds);

                    /**
                     * 判断参数 ExpireSeconds 是否已赋值
                     * @return ExpireSeconds 是否已赋值
                     * 
                     */
                    bool ExpireSecondsHasBeenSet() const;

                private:

                    /**
                     * <p>下载链接地址.</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>文件格式（如 CSV / JSON）.</p>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * <p>文件大小（字节）.</p>
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>链接有效时长（秒）.</p>
                     */
                    int64_t m_expireSeconds;
                    bool m_expireSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DOWNLOADINFO_H_
