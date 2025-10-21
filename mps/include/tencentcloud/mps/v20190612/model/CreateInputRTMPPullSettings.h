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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEINPUTRTMPPULLSETTINGS_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEINPUTRTMPPULLSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/RTMPPullSourceAddress.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 创建的输入RTMP拉流的配置信息。
                */
                class CreateInputRTMPPullSettings : public AbstractModel
                {
                public:
                    CreateInputRTMPPullSettings();
                    ~CreateInputRTMPPullSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取RTMP源站的源站地址，有且只能有一个。
                     * @return SourceAddresses RTMP源站的源站地址，有且只能有一个。
                     * 
                     */
                    std::vector<RTMPPullSourceAddress> GetSourceAddresses() const;

                    /**
                     * 设置RTMP源站的源站地址，有且只能有一个。
                     * @param _sourceAddresses RTMP源站的源站地址，有且只能有一个。
                     * 
                     */
                    void SetSourceAddresses(const std::vector<RTMPPullSourceAddress>& _sourceAddresses);

                    /**
                     * 判断参数 SourceAddresses 是否已赋值
                     * @return SourceAddresses 是否已赋值
                     * 
                     */
                    bool SourceAddressesHasBeenSet() const;

                private:

                    /**
                     * RTMP源站的源站地址，有且只能有一个。
                     */
                    std::vector<RTMPPullSourceAddress> m_sourceAddresses;
                    bool m_sourceAddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEINPUTRTMPPULLSETTINGS_H_
