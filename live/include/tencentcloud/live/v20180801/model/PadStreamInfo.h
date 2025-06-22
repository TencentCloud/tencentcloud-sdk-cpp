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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_PADSTREAMINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_PADSTREAMINFO_H_

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
                * 查询当前垫片流的信息
                */
                class PadStreamInfo : public AbstractModel
                {
                public:
                    PadStreamInfo();
                    ~PadStreamInfo() = default;
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
                     * 获取应用名称。
                     * @return AppName 应用名称。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称。
                     * @param _appName 应用名称。
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
                     * @return DomainName 推流域名。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置推流域名。
                     * @param _domainName 推流域名。
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取垫片流类型。
0-自动垫片；
1-手动切入垫片。
                     * @return PadStreamType 垫片流类型。
0-自动垫片；
1-手动切入垫片。
                     * 
                     */
                    std::string GetPadStreamType() const;

                    /**
                     * 设置垫片流类型。
0-自动垫片；
1-手动切入垫片。
                     * @param _padStreamType 垫片流类型。
0-自动垫片；
1-手动切入垫片。
                     * 
                     */
                    void SetPadStreamType(const std::string& _padStreamType);

                    /**
                     * 判断参数 PadStreamType 是否已赋值
                     * @return PadStreamType 是否已赋值
                     * 
                     */
                    bool PadStreamTypeHasBeenSet() const;

                    /**
                     * 获取垫片流开始时间。UTC时间，示例：2025-04-10T00:01:00Z。注意：该时间与北京时间相差八小时。
                     * @return PublishTime 垫片流开始时间。UTC时间，示例：2025-04-10T00:01:00Z。注意：该时间与北京时间相差八小时。
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置垫片流开始时间。UTC时间，示例：2025-04-10T00:01:00Z。注意：该时间与北京时间相差八小时。
                     * @param _publishTime 垫片流开始时间。UTC时间，示例：2025-04-10T00:01:00Z。注意：该时间与北京时间相差八小时。
                     * 
                     */
                    void SetPublishTime(const std::string& _publishTime);

                    /**
                     * 判断参数 PublishTime 是否已赋值
                     * @return PublishTime 是否已赋值
                     * 
                     */
                    bool PublishTimeHasBeenSet() const;

                private:

                    /**
                     * 流名称。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 应用名称。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 推流域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 垫片流类型。
0-自动垫片；
1-手动切入垫片。
                     */
                    std::string m_padStreamType;
                    bool m_padStreamTypeHasBeenSet;

                    /**
                     * 垫片流开始时间。UTC时间，示例：2025-04-10T00:01:00Z。注意：该时间与北京时间相差八小时。
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_PADSTREAMINFO_H_
