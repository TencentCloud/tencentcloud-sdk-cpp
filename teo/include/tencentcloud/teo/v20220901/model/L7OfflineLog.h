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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_L7OFFLINELOG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_L7OFFLINELOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 七层离线日志详细信息。
                */
                class L7OfflineLog : public AbstractModel
                {
                public:
                    L7OfflineLog();
                    ~L7OfflineLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取离线日志域名。
                     * @return Domain 离线日志域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置离线日志域名。
                     * @param _domain 离线日志域名。
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
                     * 获取日志所属区域，取值有：
<li>mainland：中国大陆境内; </li>
<li>overseas：全球（不含中国大陆）。</li>
                     * @return Area 日志所属区域，取值有：
<li>mainland：中国大陆境内; </li>
<li>overseas：全球（不含中国大陆）。</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置日志所属区域，取值有：
<li>mainland：中国大陆境内; </li>
<li>overseas：全球（不含中国大陆）。</li>
                     * @param _area 日志所属区域，取值有：
<li>mainland：中国大陆境内; </li>
<li>overseas：全球（不含中国大陆）。</li>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取离线日志数据包名。	
                     * @return LogPacketName 离线日志数据包名。	
                     * 
                     */
                    std::string GetLogPacketName() const;

                    /**
                     * 设置离线日志数据包名。	
                     * @param _logPacketName 离线日志数据包名。	
                     * 
                     */
                    void SetLogPacketName(const std::string& _logPacketName);

                    /**
                     * 判断参数 LogPacketName 是否已赋值
                     * @return LogPacketName 是否已赋值
                     * 
                     */
                    bool LogPacketNameHasBeenSet() const;

                    /**
                     * 获取离线日志下载地址。	
                     * @return Url 离线日志下载地址。	
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置离线日志下载地址。	
                     * @param _url 离线日志下载地址。	
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
                     * 获取日志打包时间，此参数已经废弃。
                     * @return LogTime 日志打包时间，此参数已经废弃。
                     * 
                     */
                    int64_t GetLogTime() const;

                    /**
                     * 设置日志打包时间，此参数已经废弃。
                     * @param _logTime 日志打包时间，此参数已经废弃。
                     * 
                     */
                    void SetLogTime(const int64_t& _logTime);

                    /**
                     * 判断参数 LogTime 是否已赋值
                     * @return LogTime 是否已赋值
                     * 
                     */
                    bool LogTimeHasBeenSet() const;

                    /**
                     * 获取日志打包开始时间。
                     * @return LogStartTime 日志打包开始时间。
                     * 
                     */
                    std::string GetLogStartTime() const;

                    /**
                     * 设置日志打包开始时间。
                     * @param _logStartTime 日志打包开始时间。
                     * 
                     */
                    void SetLogStartTime(const std::string& _logStartTime);

                    /**
                     * 判断参数 LogStartTime 是否已赋值
                     * @return LogStartTime 是否已赋值
                     * 
                     */
                    bool LogStartTimeHasBeenSet() const;

                    /**
                     * 获取日志打包结束时间。
                     * @return LogEndTime 日志打包结束时间。
                     * 
                     */
                    std::string GetLogEndTime() const;

                    /**
                     * 设置日志打包结束时间。
                     * @param _logEndTime 日志打包结束时间。
                     * 
                     */
                    void SetLogEndTime(const std::string& _logEndTime);

                    /**
                     * 判断参数 LogEndTime 是否已赋值
                     * @return LogEndTime 是否已赋值
                     * 
                     */
                    bool LogEndTimeHasBeenSet() const;

                    /**
                     * 获取日志原始大小，单位 Byte。
                     * @return Size 日志原始大小，单位 Byte。
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置日志原始大小，单位 Byte。
                     * @param _size 日志原始大小，单位 Byte。
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                private:

                    /**
                     * 离线日志域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 日志所属区域，取值有：
<li>mainland：中国大陆境内; </li>
<li>overseas：全球（不含中国大陆）。</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 离线日志数据包名。	
                     */
                    std::string m_logPacketName;
                    bool m_logPacketNameHasBeenSet;

                    /**
                     * 离线日志下载地址。	
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 日志打包时间，此参数已经废弃。
                     */
                    int64_t m_logTime;
                    bool m_logTimeHasBeenSet;

                    /**
                     * 日志打包开始时间。
                     */
                    std::string m_logStartTime;
                    bool m_logStartTimeHasBeenSet;

                    /**
                     * 日志打包结束时间。
                     */
                    std::string m_logEndTime;
                    bool m_logEndTimeHasBeenSet;

                    /**
                     * 日志原始大小，单位 Byte。
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_L7OFFLINELOG_H_
