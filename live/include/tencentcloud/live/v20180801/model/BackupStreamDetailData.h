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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_BACKUPSTREAMDETAILDATA_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_BACKUPSTREAMDETAILDATA_H_

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
                * 主备流详细信息。
                */
                class BackupStreamDetailData : public AbstractModel
                {
                public:
                    BackupStreamDetailData();
                    ~BackupStreamDetailData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取推流路径。
                     * @return AppName 推流路径。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置推流路径。
                     * @param _appName 推流路径。
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
                     * 获取 UTC 格式，例如：2018-06-29T19:00:00Z。
注意：和北京时间相差8小时。
                     * @return PublishTime  UTC 格式，例如：2018-06-29T19:00:00Z。
注意：和北京时间相差8小时。
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置 UTC 格式，例如：2018-06-29T19:00:00Z。
注意：和北京时间相差8小时。
                     * @param _publishTime  UTC 格式，例如：2018-06-29T19:00:00Z。
注意：和北京时间相差8小时。
                     * 
                     */
                    void SetPublishTime(const std::string& _publishTime);

                    /**
                     * 判断参数 PublishTime 是否已赋值
                     * @return PublishTime 是否已赋值
                     * 
                     */
                    bool PublishTimeHasBeenSet() const;

                    /**
                     * 获取推流唯一标识。
                     * @return UpstreamSequence 推流唯一标识。
                     * 
                     */
                    std::string GetUpstreamSequence() const;

                    /**
                     * 设置推流唯一标识。
                     * @param _upstreamSequence 推流唯一标识。
                     * 
                     */
                    void SetUpstreamSequence(const std::string& _upstreamSequence);

                    /**
                     * 判断参数 UpstreamSequence 是否已赋值
                     * @return UpstreamSequence 是否已赋值
                     * 
                     */
                    bool UpstreamSequenceHasBeenSet() const;

                    /**
                     * 获取推流来源。示例：
直推流；
拉流转推(1234)；
注意：拉流转推来源括号中为拉流转推的任务 
 ID。
                     * @return SourceFrom 推流来源。示例：
直推流；
拉流转推(1234)；
注意：拉流转推来源括号中为拉流转推的任务 
 ID。
                     * 
                     */
                    std::string GetSourceFrom() const;

                    /**
                     * 设置推流来源。示例：
直推流；
拉流转推(1234)；
注意：拉流转推来源括号中为拉流转推的任务 
 ID。
                     * @param _sourceFrom 推流来源。示例：
直推流；
拉流转推(1234)；
注意：拉流转推来源括号中为拉流转推的任务 
 ID。
                     * 
                     */
                    void SetSourceFrom(const std::string& _sourceFrom);

                    /**
                     * 判断参数 SourceFrom 是否已赋值
                     * @return SourceFrom 是否已赋值
                     * 
                     */
                    bool SourceFromHasBeenSet() const;

                    /**
                     * 获取主备标识。
当前流为主流：1，
当前流为备流: 0。
                     * @return MasterFlag 主备标识。
当前流为主流：1，
当前流为备流: 0。
                     * 
                     */
                    int64_t GetMasterFlag() const;

                    /**
                     * 设置主备标识。
当前流为主流：1，
当前流为备流: 0。
                     * @param _masterFlag 主备标识。
当前流为主流：1，
当前流为备流: 0。
                     * 
                     */
                    void SetMasterFlag(const int64_t& _masterFlag);

                    /**
                     * 判断参数 MasterFlag 是否已赋值
                     * @return MasterFlag 是否已赋值
                     * 
                     */
                    bool MasterFlagHasBeenSet() const;

                private:

                    /**
                     * 推流域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 推流路径。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     *  UTC 格式，例如：2018-06-29T19:00:00Z。
注意：和北京时间相差8小时。
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * 推流唯一标识。
                     */
                    std::string m_upstreamSequence;
                    bool m_upstreamSequenceHasBeenSet;

                    /**
                     * 推流来源。示例：
直推流；
拉流转推(1234)；
注意：拉流转推来源括号中为拉流转推的任务 
 ID。
                     */
                    std::string m_sourceFrom;
                    bool m_sourceFromHasBeenSet;

                    /**
                     * 主备标识。
当前流为主流：1，
当前流为备流: 0。
                     */
                    int64_t m_masterFlag;
                    bool m_masterFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_BACKUPSTREAMDETAILDATA_H_
