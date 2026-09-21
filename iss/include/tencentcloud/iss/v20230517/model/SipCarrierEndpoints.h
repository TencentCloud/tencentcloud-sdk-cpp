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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_SIPCARRIERENDPOINTS_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_SIPCARRIERENDPOINTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 多运营商的国标服务器IP地址
                */
                class SipCarrierEndpoints : public AbstractModel
                {
                public:
                    SipCarrierEndpoints();
                    ~SipCarrierEndpoints() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>电信IP</p>
                     * @return CT <p>电信IP</p>
                     * 
                     */
                    std::string GetCT() const;

                    /**
                     * 设置<p>电信IP</p>
                     * @param _cT <p>电信IP</p>
                     * 
                     */
                    void SetCT(const std::string& _cT);

                    /**
                     * 判断参数 CT 是否已赋值
                     * @return CT 是否已赋值
                     * 
                     */
                    bool CTHasBeenSet() const;

                    /**
                     * 获取<p>联通IP</p>
                     * @return CU <p>联通IP</p>
                     * 
                     */
                    std::string GetCU() const;

                    /**
                     * 设置<p>联通IP</p>
                     * @param _cU <p>联通IP</p>
                     * 
                     */
                    void SetCU(const std::string& _cU);

                    /**
                     * 判断参数 CU 是否已赋值
                     * @return CU 是否已赋值
                     * 
                     */
                    bool CUHasBeenSet() const;

                    /**
                     * 获取<p>移动IP</p>
                     * @return CMCC <p>移动IP</p>
                     * 
                     */
                    std::string GetCMCC() const;

                    /**
                     * 设置<p>移动IP</p>
                     * @param _cMCC <p>移动IP</p>
                     * 
                     */
                    void SetCMCC(const std::string& _cMCC);

                    /**
                     * 判断参数 CMCC 是否已赋值
                     * @return CMCC 是否已赋值
                     * 
                     */
                    bool CMCCHasBeenSet() const;

                    /**
                     * 获取<p>腾讯网络IP</p>
                     * @return BGP <p>腾讯网络IP</p>
                     * 
                     */
                    std::string GetBGP() const;

                    /**
                     * 设置<p>腾讯网络IP</p>
                     * @param _bGP <p>腾讯网络IP</p>
                     * 
                     */
                    void SetBGP(const std::string& _bGP);

                    /**
                     * 判断参数 BGP 是否已赋值
                     * @return BGP 是否已赋值
                     * 
                     */
                    bool BGPHasBeenSet() const;

                    /**
                     * 获取<p>中小运营商IP</p>
                     * @return CAP <p>中小运营商IP</p>
                     * 
                     */
                    std::string GetCAP() const;

                    /**
                     * 设置<p>中小运营商IP</p>
                     * @param _cAP <p>中小运营商IP</p>
                     * 
                     */
                    void SetCAP(const std::string& _cAP);

                    /**
                     * 判断参数 CAP 是否已赋值
                     * @return CAP 是否已赋值
                     * 
                     */
                    bool CAPHasBeenSet() const;

                private:

                    /**
                     * <p>电信IP</p>
                     */
                    std::string m_cT;
                    bool m_cTHasBeenSet;

                    /**
                     * <p>联通IP</p>
                     */
                    std::string m_cU;
                    bool m_cUHasBeenSet;

                    /**
                     * <p>移动IP</p>
                     */
                    std::string m_cMCC;
                    bool m_cMCCHasBeenSet;

                    /**
                     * <p>腾讯网络IP</p>
                     */
                    std::string m_bGP;
                    bool m_bGPHasBeenSet;

                    /**
                     * <p>中小运营商IP</p>
                     */
                    std::string m_cAP;
                    bool m_cAPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_SIPCARRIERENDPOINTS_H_
