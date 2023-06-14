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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEALARMATTRIBUTERESPONSE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEALARMATTRIBUTERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAlarmAttribute返回参数结构体
                */
                class DescribeAlarmAttributeResponse : public AbstractModel
                {
                public:
                    DescribeAlarmAttributeResponse();
                    ~DescribeAlarmAttributeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取防护软件离线告警状态：
<li>OPEN：告警已开启</li>
<li>CLOSE： 告警已关闭</li>
                     * @return Offline 防护软件离线告警状态：
<li>OPEN：告警已开启</li>
<li>CLOSE： 告警已关闭</li>
                     * 
                     */
                    std::string GetOffline() const;

                    /**
                     * 判断参数 Offline 是否已赋值
                     * @return Offline 是否已赋值
                     * 
                     */
                    bool OfflineHasBeenSet() const;

                    /**
                     * 获取发现木马告警状态：
<li>OPEN：告警已开启</li>
<li>CLOSE： 告警已关闭</li>
                     * @return Malware 发现木马告警状态：
<li>OPEN：告警已开启</li>
<li>CLOSE： 告警已关闭</li>
                     * 
                     */
                    std::string GetMalware() const;

                    /**
                     * 判断参数 Malware 是否已赋值
                     * @return Malware 是否已赋值
                     * 
                     */
                    bool MalwareHasBeenSet() const;

                    /**
                     * 获取发现异地登录告警状态：
<li>OPEN：告警已开启</li>
<li>CLOSE： 告警已关闭</li>
                     * @return NonlocalLogin 发现异地登录告警状态：
<li>OPEN：告警已开启</li>
<li>CLOSE： 告警已关闭</li>
                     * 
                     */
                    std::string GetNonlocalLogin() const;

                    /**
                     * 判断参数 NonlocalLogin 是否已赋值
                     * @return NonlocalLogin 是否已赋值
                     * 
                     */
                    bool NonlocalLoginHasBeenSet() const;

                    /**
                     * 获取被暴力破解成功告警状态：
<li>OPEN：告警已开启</li>
<li>CLOSE： 告警已关闭</li>
                     * @return CrackSuccess 被暴力破解成功告警状态：
<li>OPEN：告警已开启</li>
<li>CLOSE： 告警已关闭</li>
                     * 
                     */
                    std::string GetCrackSuccess() const;

                    /**
                     * 判断参数 CrackSuccess 是否已赋值
                     * @return CrackSuccess 是否已赋值
                     * 
                     */
                    bool CrackSuccessHasBeenSet() const;

                private:

                    /**
                     * 防护软件离线告警状态：
<li>OPEN：告警已开启</li>
<li>CLOSE： 告警已关闭</li>
                     */
                    std::string m_offline;
                    bool m_offlineHasBeenSet;

                    /**
                     * 发现木马告警状态：
<li>OPEN：告警已开启</li>
<li>CLOSE： 告警已关闭</li>
                     */
                    std::string m_malware;
                    bool m_malwareHasBeenSet;

                    /**
                     * 发现异地登录告警状态：
<li>OPEN：告警已开启</li>
<li>CLOSE： 告警已关闭</li>
                     */
                    std::string m_nonlocalLogin;
                    bool m_nonlocalLoginHasBeenSet;

                    /**
                     * 被暴力破解成功告警状态：
<li>OPEN：告警已开启</li>
<li>CLOSE： 告警已关闭</li>
                     */
                    std::string m_crackSuccess;
                    bool m_crackSuccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEALARMATTRIBUTERESPONSE_H_
