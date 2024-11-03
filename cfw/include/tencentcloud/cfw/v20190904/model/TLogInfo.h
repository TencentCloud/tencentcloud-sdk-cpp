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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_TLOGINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_TLOGINFO_H_

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
                * 告警中心概览数据
                */
                class TLogInfo : public AbstractModel
                {
                public:
                    TLogInfo();
                    ~TLogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取封禁列表
                     * @return BanNum 封禁列表
                     * 
                     */
                    int64_t GetBanNum() const;

                    /**
                     * 设置封禁列表
                     * @param _banNum 封禁列表
                     * 
                     */
                    void SetBanNum(const int64_t& _banNum);

                    /**
                     * 判断参数 BanNum 是否已赋值
                     * @return BanNum 是否已赋值
                     * 
                     */
                    bool BanNumHasBeenSet() const;

                    /**
                     * 获取暴力破解
                     * @return BruteForceNum 暴力破解
                     * 
                     */
                    int64_t GetBruteForceNum() const;

                    /**
                     * 设置暴力破解
                     * @param _bruteForceNum 暴力破解
                     * 
                     */
                    void SetBruteForceNum(const int64_t& _bruteForceNum);

                    /**
                     * 判断参数 BruteForceNum 是否已赋值
                     * @return BruteForceNum 是否已赋值
                     * 
                     */
                    bool BruteForceNumHasBeenSet() const;

                    /**
                     * 获取待处置告警
                     * @return HandleNum 待处置告警
                     * 
                     */
                    int64_t GetHandleNum() const;

                    /**
                     * 设置待处置告警
                     * @param _handleNum 待处置告警
                     * 
                     */
                    void SetHandleNum(const int64_t& _handleNum);

                    /**
                     * 判断参数 HandleNum 是否已赋值
                     * @return HandleNum 是否已赋值
                     * 
                     */
                    bool HandleNumHasBeenSet() const;

                    /**
                     * 获取网络探测
                     * @return NetworkNum 网络探测
                     * 
                     */
                    int64_t GetNetworkNum() const;

                    /**
                     * 设置网络探测
                     * @param _networkNum 网络探测
                     * 
                     */
                    void SetNetworkNum(const int64_t& _networkNum);

                    /**
                     * 判断参数 NetworkNum 是否已赋值
                     * @return NetworkNum 是否已赋值
                     * 
                     */
                    bool NetworkNumHasBeenSet() const;

                    /**
                     * 获取失陷主机
                     * @return OutNum 失陷主机
                     * 
                     */
                    int64_t GetOutNum() const;

                    /**
                     * 设置失陷主机
                     * @param _outNum 失陷主机
                     * 
                     */
                    void SetOutNum(const int64_t& _outNum);

                    /**
                     * 判断参数 OutNum 是否已赋值
                     * @return OutNum 是否已赋值
                     * 
                     */
                    bool OutNumHasBeenSet() const;

                    /**
                     * 获取漏洞攻击
                     * @return VulNum 漏洞攻击
                     * 
                     */
                    int64_t GetVulNum() const;

                    /**
                     * 设置漏洞攻击
                     * @param _vulNum 漏洞攻击
                     * 
                     */
                    void SetVulNum(const int64_t& _vulNum);

                    /**
                     * 判断参数 VulNum 是否已赋值
                     * @return VulNum 是否已赋值
                     * 
                     */
                    bool VulNumHasBeenSet() const;

                private:

                    /**
                     * 封禁列表
                     */
                    int64_t m_banNum;
                    bool m_banNumHasBeenSet;

                    /**
                     * 暴力破解
                     */
                    int64_t m_bruteForceNum;
                    bool m_bruteForceNumHasBeenSet;

                    /**
                     * 待处置告警
                     */
                    int64_t m_handleNum;
                    bool m_handleNumHasBeenSet;

                    /**
                     * 网络探测
                     */
                    int64_t m_networkNum;
                    bool m_networkNumHasBeenSet;

                    /**
                     * 失陷主机
                     */
                    int64_t m_outNum;
                    bool m_outNumHasBeenSet;

                    /**
                     * 漏洞攻击
                     */
                    int64_t m_vulNum;
                    bool m_vulNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_TLOGINFO_H_
