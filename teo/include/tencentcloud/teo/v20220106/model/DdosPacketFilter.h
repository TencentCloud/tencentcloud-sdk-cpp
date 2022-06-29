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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DDOSPACKETFILTER_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DDOSPACKETFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/DDoSFeaturesFilter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * ddos特征过滤
                */
                class DdosPacketFilter : public AbstractModel
                {
                public:
                    DdosPacketFilter();
                    ~DdosPacketFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取特征过滤清空标识，off清空处理
                     * @return Switch 特征过滤清空标识，off清空处理
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置特征过滤清空标识，off清空处理
                     * @param Switch 特征过滤清空标识，off清空处理
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取特征过滤数组
                     * @return PacketFilter 特征过滤数组
                     */
                    std::vector<DDoSFeaturesFilter> GetPacketFilter() const;

                    /**
                     * 设置特征过滤数组
                     * @param PacketFilter 特征过滤数组
                     */
                    void SetPacketFilter(const std::vector<DDoSFeaturesFilter>& _packetFilter);

                    /**
                     * 判断参数 PacketFilter 是否已赋值
                     * @return PacketFilter 是否已赋值
                     */
                    bool PacketFilterHasBeenSet() const;

                private:

                    /**
                     * 特征过滤清空标识，off清空处理
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 特征过滤数组
                     */
                    std::vector<DDoSFeaturesFilter> m_packetFilter;
                    bool m_packetFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DDOSPACKETFILTER_H_
