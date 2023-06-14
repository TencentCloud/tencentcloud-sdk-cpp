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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_FORBIDSTREAMINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_FORBIDSTREAMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 禁推流列表
                */
                class ForbidStreamInfo : public AbstractModel
                {
                public:
                    ForbidStreamInfo();
                    ~ForbidStreamInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流名称。
                     * @return StreamName 流名称。
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流名称。
                     * @param _streamName 流名称。
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
                     * 获取创建时间。
注：此字段为北京时间（UTC+8时区）。
                     * @return CreateTime 创建时间。
注：此字段为北京时间（UTC+8时区）。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
注：此字段为北京时间（UTC+8时区）。
                     * @param _createTime 创建时间。
注：此字段为北京时间（UTC+8时区）。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取禁推过期时间。
注：此字段为北京时间（UTC+8时区）。
                     * @return ExpireTime 禁推过期时间。
注：此字段为北京时间（UTC+8时区）。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置禁推过期时间。
注：此字段为北京时间（UTC+8时区）。
                     * @param _expireTime 禁推过期时间。
注：此字段为北京时间（UTC+8时区）。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取推流路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppName 推流路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置推流路径。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appName 推流路径。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取推流域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainName 推流域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置推流域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domainName 推流域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                private:

                    /**
                     * 流名称。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 创建时间。
注：此字段为北京时间（UTC+8时区）。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 禁推过期时间。
注：此字段为北京时间（UTC+8时区）。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 推流路径。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 推流域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_FORBIDSTREAMINFO_H_
