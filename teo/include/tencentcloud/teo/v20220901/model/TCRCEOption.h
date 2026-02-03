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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_TCRCEOPTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_TCRCEOPTION_H_

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
                * RCE 认证选项实例信息。
                */
                class TCRCEOption : public AbstractModel
                {
                public:
                    TCRCEOption();
                    ~TCRCEOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Channel 信息。
                     * @return Channel Channel 信息。
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置Channel 信息。
                     * @param _channel Channel 信息。
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取RCE Channel 的开通地域，目前可选的取值范围：<li>ap-beijing：华北地区（北京）；</li><li>ap-jakarta：亚太东南（雅加达）；</li><li>ap-singapore：亚太东南（新加坡）；</li><li>eu-frankfurt：欧洲地区（法兰克福）；</li><li>na-siliconvalley：美国西部（硅谷）。</li>
                     * @return Region RCE Channel 的开通地域，目前可选的取值范围：<li>ap-beijing：华北地区（北京）；</li><li>ap-jakarta：亚太东南（雅加达）；</li><li>ap-singapore：亚太东南（新加坡）；</li><li>eu-frankfurt：欧洲地区（法兰克福）；</li><li>na-siliconvalley：美国西部（硅谷）。</li>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置RCE Channel 的开通地域，目前可选的取值范围：<li>ap-beijing：华北地区（北京）；</li><li>ap-jakarta：亚太东南（雅加达）；</li><li>ap-singapore：亚太东南（新加坡）；</li><li>eu-frankfurt：欧洲地区（法兰克福）；</li><li>na-siliconvalley：美国西部（硅谷）。</li>
                     * @param _region RCE Channel 的开通地域，目前可选的取值范围：<li>ap-beijing：华北地区（北京）；</li><li>ap-jakarta：亚太东南（雅加达）；</li><li>ap-singapore：亚太东南（新加坡）；</li><li>eu-frankfurt：欧洲地区（法兰克福）；</li><li>na-siliconvalley：美国西部（硅谷）。</li>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * Channel 信息。
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * RCE Channel 的开通地域，目前可选的取值范围：<li>ap-beijing：华北地区（北京）；</li><li>ap-jakarta：亚太东南（雅加达）；</li><li>ap-singapore：亚太东南（新加坡）；</li><li>eu-frankfurt：欧洲地区（法兰克福）；</li><li>na-siliconvalley：美国西部（硅谷）。</li>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_TCRCEOPTION_H_
