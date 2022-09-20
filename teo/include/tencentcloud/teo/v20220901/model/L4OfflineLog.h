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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_L4OFFLINELOG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_L4OFFLINELOG_H_

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
                * 离线日志详细信息
                */
                class L4OfflineLog : public AbstractModel
                {
                public:
                    L4OfflineLog();
                    ~L4OfflineLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志打包开始时间。
                     * @return LogTime 日志打包开始时间。
                     */
                    int64_t GetLogTime() const;

                    /**
                     * 设置日志打包开始时间。
                     * @param LogTime 日志打包开始时间。
                     */
                    void SetLogTime(const int64_t& _logTime);

                    /**
                     * 判断参数 LogTime 是否已赋值
                     * @return LogTime 是否已赋值
                     */
                    bool LogTimeHasBeenSet() const;

                    /**
                     * 获取四层实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyId 四层实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置四层实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProxyId 四层实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取原始大小 单位byte。
                     * @return Size 原始大小 单位byte。
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置原始大小 单位byte。
                     * @param Size 原始大小 单位byte。
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取下载地址。
                     * @return Url 下载地址。
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置下载地址。
                     * @param Url 下载地址。
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取日志数据包名。
                     * @return LogPacketName 日志数据包名。
                     */
                    std::string GetLogPacketName() const;

                    /**
                     * 设置日志数据包名。
                     * @param LogPacketName 日志数据包名。
                     */
                    void SetLogPacketName(const std::string& _logPacketName);

                    /**
                     * 判断参数 LogPacketName 是否已赋值
                     * @return LogPacketName 是否已赋值
                     */
                    bool LogPacketNameHasBeenSet() const;

                    /**
                     * 获取加速区域，取值有：
<li>mainland：中国大陆境内;</li>
<li>overseas：全球（不含中国大陆）。</li>
                     * @return Area 加速区域，取值有：
<li>mainland：中国大陆境内;</li>
<li>overseas：全球（不含中国大陆）。</li>
                     */
                    std::string GetArea() const;

                    /**
                     * 设置加速区域，取值有：
<li>mainland：中国大陆境内;</li>
<li>overseas：全球（不含中国大陆）。</li>
                     * @param Area 加速区域，取值有：
<li>mainland：中国大陆境内;</li>
<li>overseas：全球（不含中国大陆）。</li>
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * 日志打包开始时间。
                     */
                    int64_t m_logTime;
                    bool m_logTimeHasBeenSet;

                    /**
                     * 四层实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 原始大小 单位byte。
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 下载地址。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 日志数据包名。
                     */
                    std::string m_logPacketName;
                    bool m_logPacketNameHasBeenSet;

                    /**
                     * 加速区域，取值有：
<li>mainland：中国大陆境内;</li>
<li>overseas：全球（不含中国大陆）。</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_L4OFFLINELOG_H_
