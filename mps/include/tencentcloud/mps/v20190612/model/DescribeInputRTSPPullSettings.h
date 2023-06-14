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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEINPUTRTSPPULLSETTINGS_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEINPUTRTSPPULLSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/DescribeRTSPPullSourceAddress.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 查询输入的RTSP配置信息。
                */
                class DescribeInputRTSPPullSettings : public AbstractModel
                {
                public:
                    DescribeInputRTSPPullSettings();
                    ~DescribeInputRTSPPullSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取RTSP源站地址信息。
                     * @return SourceAddresses RTSP源站地址信息。
                     * 
                     */
                    std::vector<DescribeRTSPPullSourceAddress> GetSourceAddresses() const;

                    /**
                     * 设置RTSP源站地址信息。
                     * @param _sourceAddresses RTSP源站地址信息。
                     * 
                     */
                    void SetSourceAddresses(const std::vector<DescribeRTSPPullSourceAddress>& _sourceAddresses);

                    /**
                     * 判断参数 SourceAddresses 是否已赋值
                     * @return SourceAddresses 是否已赋值
                     * 
                     */
                    bool SourceAddressesHasBeenSet() const;

                private:

                    /**
                     * RTSP源站地址信息。
                     */
                    std::vector<DescribeRTSPPullSourceAddress> m_sourceAddresses;
                    bool m_sourceAddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEINPUTRTSPPULLSETTINGS_H_
