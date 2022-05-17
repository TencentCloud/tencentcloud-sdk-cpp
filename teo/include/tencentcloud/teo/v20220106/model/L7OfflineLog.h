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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_L7OFFLINELOG_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_L7OFFLINELOG_H_

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
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 离线日志详细信息
                */
                class L7OfflineLog : public AbstractModel
                {
                public:
                    L7OfflineLog();
                    ~L7OfflineLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志打包开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogTime 日志打包开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetLogTime() const;

                    /**
                     * 设置日志打包开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LogTime 日志打包开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogTime(const int64_t& _logTime);

                    /**
                     * 判断参数 LogTime 是否已赋值
                     * @return LogTime 是否已赋值
                     */
                    bool LogTimeHasBeenSet() const;

                    /**
                     * 获取站点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 站点名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置站点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Domain 站点名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取原始大小 单位byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Size 原始大小 单位byte
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置原始大小 单位byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Size 原始大小 单位byte
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Url 下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取日志数据包名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogPacketName 日志数据包名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLogPacketName() const;

                    /**
                     * 设置日志数据包名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LogPacketName 日志数据包名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogPacketName(const std::string& _logPacketName);

                    /**
                     * 判断参数 LogPacketName 是否已赋值
                     * @return LogPacketName 是否已赋值
                     */
                    bool LogPacketNameHasBeenSet() const;

                private:

                    /**
                     * 日志打包开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_logTime;
                    bool m_logTimeHasBeenSet;

                    /**
                     * 站点名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 原始大小 单位byte
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 日志数据包名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logPacketName;
                    bool m_logPacketNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_L7OFFLINELOG_H_
