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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SCANRESULTINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SCANRESULTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 新手引导扫描结果信息
                */
                class ScanResultInfo : public AbstractModel
                {
                public:
                    ScanResultInfo();
                    ~ScanResultInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否禁封端口
                     * @return BanStatus 是否禁封端口
                     * 
                     */
                    bool GetBanStatus() const;

                    /**
                     * 设置是否禁封端口
                     * @param _banStatus 是否禁封端口
                     * 
                     */
                    void SetBanStatus(const bool& _banStatus);

                    /**
                     * 判断参数 BanStatus 是否已赋值
                     * @return BanStatus 是否已赋值
                     * 
                     */
                    bool BanStatusHasBeenSet() const;

                    /**
                     * 获取防护ip数量
                     * @return IPNum 防护ip数量
                     * 
                     */
                    uint64_t GetIPNum() const;

                    /**
                     * 设置防护ip数量
                     * @param _iPNum 防护ip数量
                     * 
                     */
                    void SetIPNum(const uint64_t& _iPNum);

                    /**
                     * 判断参数 IPNum 是否已赋值
                     * @return IPNum 是否已赋值
                     * 
                     */
                    bool IPNumHasBeenSet() const;

                    /**
                     * 获取是否开启防护
                     * @return IPStatus 是否开启防护
                     * 
                     */
                    bool GetIPStatus() const;

                    /**
                     * 设置是否开启防护
                     * @param _iPStatus 是否开启防护
                     * 
                     */
                    void SetIPStatus(const bool& _iPStatus);

                    /**
                     * 判断参数 IPStatus 是否已赋值
                     * @return IPStatus 是否已赋值
                     * 
                     */
                    bool IPStatusHasBeenSet() const;

                    /**
                     * 获取是否拦截攻击
                     * @return IdpStatus 是否拦截攻击
                     * 
                     */
                    bool GetIdpStatus() const;

                    /**
                     * 设置是否拦截攻击
                     * @param _idpStatus 是否拦截攻击
                     * 
                     */
                    void SetIdpStatus(const bool& _idpStatus);

                    /**
                     * 判断参数 IdpStatus 是否已赋值
                     * @return IdpStatus 是否已赋值
                     * 
                     */
                    bool IdpStatusHasBeenSet() const;

                    /**
                     * 获取暴露漏洞数量
                     * @return LeakNum 暴露漏洞数量
                     * 
                     */
                    uint64_t GetLeakNum() const;

                    /**
                     * 设置暴露漏洞数量
                     * @param _leakNum 暴露漏洞数量
                     * 
                     */
                    void SetLeakNum(const uint64_t& _leakNum);

                    /**
                     * 判断参数 LeakNum 是否已赋值
                     * @return LeakNum 是否已赋值
                     * 
                     */
                    bool LeakNumHasBeenSet() const;

                    /**
                     * 获取暴露端口数量
                     * @return PortNum 暴露端口数量
                     * 
                     */
                    uint64_t GetPortNum() const;

                    /**
                     * 设置暴露端口数量
                     * @param _portNum 暴露端口数量
                     * 
                     */
                    void SetPortNum(const uint64_t& _portNum);

                    /**
                     * 判断参数 PortNum 是否已赋值
                     * @return PortNum 是否已赋值
                     * 
                     */
                    bool PortNumHasBeenSet() const;

                private:

                    /**
                     * 是否禁封端口
                     */
                    bool m_banStatus;
                    bool m_banStatusHasBeenSet;

                    /**
                     * 防护ip数量
                     */
                    uint64_t m_iPNum;
                    bool m_iPNumHasBeenSet;

                    /**
                     * 是否开启防护
                     */
                    bool m_iPStatus;
                    bool m_iPStatusHasBeenSet;

                    /**
                     * 是否拦截攻击
                     */
                    bool m_idpStatus;
                    bool m_idpStatusHasBeenSet;

                    /**
                     * 暴露漏洞数量
                     */
                    uint64_t m_leakNum;
                    bool m_leakNumHasBeenSet;

                    /**
                     * 暴露端口数量
                     */
                    uint64_t m_portNum;
                    bool m_portNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SCANRESULTINFO_H_
