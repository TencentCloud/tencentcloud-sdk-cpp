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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEOUTPUTRTMPPULLSERVERURL_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEOUTPUTRTMPPULLSERVERURL_H_

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
                * 查询输出的RTMP拉流URL信息。
                */
                class DescribeOutputRTMPPullServerUrl : public AbstractModel
                {
                public:
                    DescribeOutputRTMPPullServerUrl();
                    ~DescribeOutputRTMPPullServerUrl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取RTMP拉流地址的tcUrl。
                     * @return TcUrl RTMP拉流地址的tcUrl。
                     * 
                     */
                    std::string GetTcUrl() const;

                    /**
                     * 设置RTMP拉流地址的tcUrl。
                     * @param _tcUrl RTMP拉流地址的tcUrl。
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
                     * 获取RTMP拉流地址的流key。
                     * @return StreamKey RTMP拉流地址的流key。
                     * 
                     */
                    std::string GetStreamKey() const;

                    /**
                     * 设置RTMP拉流地址的流key。
                     * @param _streamKey RTMP拉流地址的流key。
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
                     * RTMP拉流地址的tcUrl。
                     */
                    std::string m_tcUrl;
                    bool m_tcUrlHasBeenSet;

                    /**
                     * RTMP拉流地址的流key。
                     */
                    std::string m_streamKey;
                    bool m_streamKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEOUTPUTRTMPPULLSERVERURL_H_
