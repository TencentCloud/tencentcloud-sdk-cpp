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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAIANALYSISROBOTINFORESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAIANALYSISROBOTINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAIAnalysisRobotInfo返回参数结构体
                */
                class DescribeAIAnalysisRobotInfoResponse : public AbstractModel
                {
                public:
                    DescribeAIAnalysisRobotInfoResponse();
                    ~DescribeAIAnalysisRobotInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>机器人配置url</p>
                     * @return URL <p>机器人配置url</p>
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取<p>访问token</p>
                     * @return AccessToken <p>访问token</p>
                     * 
                     */
                    std::string GetAccessToken() const;

                    /**
                     * 判断参数 AccessToken 是否已赋值
                     * @return AccessToken 是否已赋值
                     * 
                     */
                    bool AccessTokenHasBeenSet() const;

                    /**
                     * 获取<p>aes key</p>
                     * @return AesKey <p>aes key</p>
                     * 
                     */
                    std::string GetAesKey() const;

                    /**
                     * 判断参数 AesKey 是否已赋值
                     * @return AesKey 是否已赋值
                     * 
                     */
                    bool AesKeyHasBeenSet() const;

                    /**
                     * 获取<p>机器人ID</p>
                     * @return BotID <p>机器人ID</p>
                     * 
                     */
                    std::string GetBotID() const;

                    /**
                     * 判断参数 BotID 是否已赋值
                     * @return BotID 是否已赋值
                     * 
                     */
                    bool BotIDHasBeenSet() const;

                    /**
                     * 获取<p>二维码图片获取地址</p>
                     * @return QrcodeImageContext <p>二维码图片获取地址</p>
                     * 
                     */
                    std::string GetQrcodeImageContext() const;

                    /**
                     * 判断参数 QrcodeImageContext 是否已赋值
                     * @return QrcodeImageContext 是否已赋值
                     * 
                     */
                    bool QrcodeImageContextHasBeenSet() const;

                private:

                    /**
                     * <p>机器人配置url</p>
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * <p>访问token</p>
                     */
                    std::string m_accessToken;
                    bool m_accessTokenHasBeenSet;

                    /**
                     * <p>aes key</p>
                     */
                    std::string m_aesKey;
                    bool m_aesKeyHasBeenSet;

                    /**
                     * <p>机器人ID</p>
                     */
                    std::string m_botID;
                    bool m_botIDHasBeenSet;

                    /**
                     * <p>二维码图片获取地址</p>
                     */
                    std::string m_qrcodeImageContext;
                    bool m_qrcodeImageContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAIANALYSISROBOTINFORESPONSE_H_
