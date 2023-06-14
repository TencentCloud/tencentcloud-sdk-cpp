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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_RTMPPULLSOURCEADDRESS_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_RTMPPULLSOURCEADDRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 创建的输入RTMP拉流源站配置信息。
                */
                class RTMPPullSourceAddress : public AbstractModel
                {
                public:
                    RTMPPullSourceAddress();
                    ~RTMPPullSourceAddress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取RTMP源站的TcUrl地址。
                     * @return TcUrl RTMP源站的TcUrl地址。
                     * 
                     */
                    std::string GetTcUrl() const;

                    /**
                     * 设置RTMP源站的TcUrl地址。
                     * @param _tcUrl RTMP源站的TcUrl地址。
                     * 
                     */
                    void SetTcUrl(const std::string& _tcUrl);

                    /**
                     * 判断参数 TcUrl 是否已赋值
                     * @return TcUrl 是否已赋值
                     * 
                     */
                    bool TcUrlHasBeenSet() const;

                    /**
                     * 获取RTMP源站的StreamKey信息。
                     * @return StreamKey RTMP源站的StreamKey信息。
                     * 
                     */
                    std::string GetStreamKey() const;

                    /**
                     * 设置RTMP源站的StreamKey信息。
                     * @param _streamKey RTMP源站的StreamKey信息。
                     * 
                     */
                    void SetStreamKey(const std::string& _streamKey);

                    /**
                     * 判断参数 StreamKey 是否已赋值
                     * @return StreamKey 是否已赋值
                     * 
                     */
                    bool StreamKeyHasBeenSet() const;

                private:

                    /**
                     * RTMP源站的TcUrl地址。
                     */
                    std::string m_tcUrl;
                    bool m_tcUrlHasBeenSet;

                    /**
                     * RTMP源站的StreamKey信息。
                     */
                    std::string m_streamKey;
                    bool m_streamKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RTMPPULLSOURCEADDRESS_H_
