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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDEXTERNALPROMPTGROUP_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDEXTERNALPROMPTGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/CloudExternalPromptInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 渠道扩展促销信息
                */
                class CloudExternalPromptGroup : public AbstractModel
                {
                public:
                    CloudExternalPromptGroup();
                    ~CloudExternalPromptGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取渠道名。
为米大师定义的枚举值：
wechat 微信渠道
                     * @return ChannelName 渠道名。
为米大师定义的枚举值：
wechat 微信渠道
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置渠道名。
为米大师定义的枚举值：
wechat 微信渠道
                     * @param _channelName 渠道名。
为米大师定义的枚举值：
wechat 微信渠道
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取渠道扩展促销信息列表，由各个渠道自行定义。
ChannelName为wechat时，组成为 <Wechat-ExternalPromptInfo>
                     * @return ExternalPromptInfoList 渠道扩展促销信息列表，由各个渠道自行定义。
ChannelName为wechat时，组成为 <Wechat-ExternalPromptInfo>
                     * 
                     */
                    std::vector<CloudExternalPromptInfo> GetExternalPromptInfoList() const;

                    /**
                     * 设置渠道扩展促销信息列表，由各个渠道自行定义。
ChannelName为wechat时，组成为 <Wechat-ExternalPromptInfo>
                     * @param _externalPromptInfoList 渠道扩展促销信息列表，由各个渠道自行定义。
ChannelName为wechat时，组成为 <Wechat-ExternalPromptInfo>
                     * 
                     */
                    void SetExternalPromptInfoList(const std::vector<CloudExternalPromptInfo>& _externalPromptInfoList);

                    /**
                     * 判断参数 ExternalPromptInfoList 是否已赋值
                     * @return ExternalPromptInfoList 是否已赋值
                     * 
                     */
                    bool ExternalPromptInfoListHasBeenSet() const;

                private:

                    /**
                     * 渠道名。
为米大师定义的枚举值：
wechat 微信渠道
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 渠道扩展促销信息列表，由各个渠道自行定义。
ChannelName为wechat时，组成为 <Wechat-ExternalPromptInfo>
                     */
                    std::vector<CloudExternalPromptInfo> m_externalPromptInfoList;
                    bool m_externalPromptInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDEXTERNALPROMPTGROUP_H_
