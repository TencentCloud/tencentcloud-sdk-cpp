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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CDNLOGINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CDNLOGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CDN 日志信息
                */
                class CdnLogInfo : public AbstractModel
                {
                public:
                    CdnLogInfo();
                    ~CdnLogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志所属日期， 格式为：yyyy-MM-dd ，如2018-03-01。
                     * @return Date 日志所属日期， 格式为：yyyy-MM-dd ，如2018-03-01。
                     */
                    std::string GetDate() const;

                    /**
                     * 设置日志所属日期， 格式为：yyyy-MM-dd ，如2018-03-01。
                     * @param Date 日志所属日期， 格式为：yyyy-MM-dd ，如2018-03-01。
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取日志名称，格式为：日期小时-域名
如 2018120101-test.vod2.mqcloud.com。
                     * @return Name 日志名称，格式为：日期小时-域名
如 2018120101-test.vod2.mqcloud.com。
                     */
                    std::string GetName() const;

                    /**
                     * 设置日志名称，格式为：日期小时-域名
如 2018120101-test.vod2.mqcloud.com。
                     * @param Name 日志名称，格式为：日期小时-域名
如 2018120101-test.vod2.mqcloud.com。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取日志下载链接，24小时内下载有效。
                     * @return Url 日志下载链接，24小时内下载有效。
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置日志下载链接，24小时内下载有效。
                     * @param Url 日志下载链接，24小时内下载有效。
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 日志所属日期， 格式为：yyyy-MM-dd ，如2018-03-01。
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 日志名称，格式为：日期小时-域名
如 2018120101-test.vod2.mqcloud.com。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 日志下载链接，24小时内下载有效。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CDNLOGINFO_H_
