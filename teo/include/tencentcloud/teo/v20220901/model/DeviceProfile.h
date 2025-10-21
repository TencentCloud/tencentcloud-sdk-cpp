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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DEVICEPROFILE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DEVICEPROFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 客户端设备配置
                */
                class DeviceProfile : public AbstractModel
                {
                public:
                    DeviceProfile();
                    ~DeviceProfile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户端设备类型。取值有：<li>iOS；</li><li>Android；</li><li>WebView。</li>
                     * @return ClientType 客户端设备类型。取值有：<li>iOS；</li><li>Android；</li><li>WebView。</li>
                     * 
                     */
                    std::string GetClientType() const;

                    /**
                     * 设置客户端设备类型。取值有：<li>iOS；</li><li>Android；</li><li>WebView。</li>
                     * @param _clientType 客户端设备类型。取值有：<li>iOS；</li><li>Android；</li><li>WebView。</li>
                     * 
                     */
                    void SetClientType(const std::string& _clientType);

                    /**
                     * 判断参数 ClientType 是否已赋值
                     * @return ClientType 是否已赋值
                     * 
                     */
                    bool ClientTypeHasBeenSet() const;

                    /**
                     * 获取判定请求为高风险的最低值，取值范围为 1～99。数值越大请求风险越高越接近 Bot 客户端发起的请求。默认值为 50，对应含义 51～100 为高风险。
                     * @return HighRiskMinScore 判定请求为高风险的最低值，取值范围为 1～99。数值越大请求风险越高越接近 Bot 客户端发起的请求。默认值为 50，对应含义 51～100 为高风险。
                     * 
                     */
                    uint64_t GetHighRiskMinScore() const;

                    /**
                     * 设置判定请求为高风险的最低值，取值范围为 1～99。数值越大请求风险越高越接近 Bot 客户端发起的请求。默认值为 50，对应含义 51～100 为高风险。
                     * @param _highRiskMinScore 判定请求为高风险的最低值，取值范围为 1～99。数值越大请求风险越高越接近 Bot 客户端发起的请求。默认值为 50，对应含义 51～100 为高风险。
                     * 
                     */
                    void SetHighRiskMinScore(const uint64_t& _highRiskMinScore);

                    /**
                     * 判断参数 HighRiskMinScore 是否已赋值
                     * @return HighRiskMinScore 是否已赋值
                     * 
                     */
                    bool HighRiskMinScoreHasBeenSet() const;

                    /**
                     * 获取高风险请求的处置方式。SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Redirect：重定向；</li><li>Challenge：挑战。</li>默认值为 Monitor。
                     * @return HighRiskRequestAction 高风险请求的处置方式。SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Redirect：重定向；</li><li>Challenge：挑战。</li>默认值为 Monitor。
                     * 
                     */
                    SecurityAction GetHighRiskRequestAction() const;

                    /**
                     * 设置高风险请求的处置方式。SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Redirect：重定向；</li><li>Challenge：挑战。</li>默认值为 Monitor。
                     * @param _highRiskRequestAction 高风险请求的处置方式。SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Redirect：重定向；</li><li>Challenge：挑战。</li>默认值为 Monitor。
                     * 
                     */
                    void SetHighRiskRequestAction(const SecurityAction& _highRiskRequestAction);

                    /**
                     * 判断参数 HighRiskRequestAction 是否已赋值
                     * @return HighRiskRequestAction 是否已赋值
                     * 
                     */
                    bool HighRiskRequestActionHasBeenSet() const;

                    /**
                     * 获取判定请求为中风险的最低值，取值范围为 1～99。数值越大请求风险越高越接近 Bot 客户端发起的请求。默认值为 15，对应含义 16～50 为中风险。
                     * @return MediumRiskMinScore 判定请求为中风险的最低值，取值范围为 1～99。数值越大请求风险越高越接近 Bot 客户端发起的请求。默认值为 15，对应含义 16～50 为中风险。
                     * 
                     */
                    uint64_t GetMediumRiskMinScore() const;

                    /**
                     * 设置判定请求为中风险的最低值，取值范围为 1～99。数值越大请求风险越高越接近 Bot 客户端发起的请求。默认值为 15，对应含义 16～50 为中风险。
                     * @param _mediumRiskMinScore 判定请求为中风险的最低值，取值范围为 1～99。数值越大请求风险越高越接近 Bot 客户端发起的请求。默认值为 15，对应含义 16～50 为中风险。
                     * 
                     */
                    void SetMediumRiskMinScore(const uint64_t& _mediumRiskMinScore);

                    /**
                     * 判断参数 MediumRiskMinScore 是否已赋值
                     * @return MediumRiskMinScore 是否已赋值
                     * 
                     */
                    bool MediumRiskMinScoreHasBeenSet() const;

                    /**
                     * 获取中风险请求的处置方式。SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Redirect：重定向；</li><li>Challenge：挑战。</li>默认值为 Monitor。
                     * @return MediumRiskRequestAction 中风险请求的处置方式。SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Redirect：重定向；</li><li>Challenge：挑战。</li>默认值为 Monitor。
                     * 
                     */
                    SecurityAction GetMediumRiskRequestAction() const;

                    /**
                     * 设置中风险请求的处置方式。SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Redirect：重定向；</li><li>Challenge：挑战。</li>默认值为 Monitor。
                     * @param _mediumRiskRequestAction 中风险请求的处置方式。SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Redirect：重定向；</li><li>Challenge：挑战。</li>默认值为 Monitor。
                     * 
                     */
                    void SetMediumRiskRequestAction(const SecurityAction& _mediumRiskRequestAction);

                    /**
                     * 判断参数 MediumRiskRequestAction 是否已赋值
                     * @return MediumRiskRequestAction 是否已赋值
                     * 
                     */
                    bool MediumRiskRequestActionHasBeenSet() const;

                private:

                    /**
                     * 客户端设备类型。取值有：<li>iOS；</li><li>Android；</li><li>WebView。</li>
                     */
                    std::string m_clientType;
                    bool m_clientTypeHasBeenSet;

                    /**
                     * 判定请求为高风险的最低值，取值范围为 1～99。数值越大请求风险越高越接近 Bot 客户端发起的请求。默认值为 50，对应含义 51～100 为高风险。
                     */
                    uint64_t m_highRiskMinScore;
                    bool m_highRiskMinScoreHasBeenSet;

                    /**
                     * 高风险请求的处置方式。SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Redirect：重定向；</li><li>Challenge：挑战。</li>默认值为 Monitor。
                     */
                    SecurityAction m_highRiskRequestAction;
                    bool m_highRiskRequestActionHasBeenSet;

                    /**
                     * 判定请求为中风险的最低值，取值范围为 1～99。数值越大请求风险越高越接近 Bot 客户端发起的请求。默认值为 15，对应含义 16～50 为中风险。
                     */
                    uint64_t m_mediumRiskMinScore;
                    bool m_mediumRiskMinScoreHasBeenSet;

                    /**
                     * 中风险请求的处置方式。SecurityAction 的 Name 取值支持：<li>Deny：拦截；</li><li>Monitor：观察；</li><li>Redirect：重定向；</li><li>Challenge：挑战。</li>默认值为 Monitor。
                     */
                    SecurityAction m_mediumRiskRequestAction;
                    bool m_mediumRiskRequestActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DEVICEPROFILE_H_
