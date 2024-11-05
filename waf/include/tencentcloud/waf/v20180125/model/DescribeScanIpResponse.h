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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBESCANIPRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBESCANIPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ScanIpInfo.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeScanIp返回参数结构体
                */
                class DescribeScanIpResponse : public AbstractModel
                {
                public:
                    DescribeScanIpResponse();
                    ~DescribeScanIpResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取ip列表,当入参Ip为all时，返回所有已知ip列表
                     * @return IpList ip列表,当入参Ip为all时，返回所有已知ip列表
                     * 
                     */
                    std::vector<ScanIpInfo> GetIpList() const;

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                    /**
                     * 获取所属业务
                     * @return Bussiness 所属业务
                     * 
                     */
                    std::string GetBussiness() const;

                    /**
                     * 判断参数 Bussiness 是否已赋值
                     * @return Bussiness 是否已赋值
                     * 
                     */
                    bool BussinessHasBeenSet() const;

                    /**
                     * 获取业务特征
                     * @return Characteristic 业务特征
                     * 
                     */
                    std::string GetCharacteristic() const;

                    /**
                     * 判断参数 Characteristic 是否已赋值
                     * @return Characteristic 是否已赋值
                     * 
                     */
                    bool CharacteristicHasBeenSet() const;

                    /**
                     * 获取扫描说明
                     * @return Descibe 扫描说明
                     * 
                     */
                    std::string GetDescibe() const;

                    /**
                     * 判断参数 Descibe 是否已赋值
                     * @return Descibe 是否已赋值
                     * 
                     */
                    bool DescibeHasBeenSet() const;

                    /**
                     * 获取官方公告
                     * @return Referer 官方公告
                     * 
                     */
                    std::string GetReferer() const;

                    /**
                     * 判断参数 Referer 是否已赋值
                     * @return Referer 是否已赋值
                     * 
                     */
                    bool RefererHasBeenSet() const;

                    /**
                     * 获取扫描示例
                     * @return Demo 扫描示例
                     * 
                     */
                    std::string GetDemo() const;

                    /**
                     * 判断参数 Demo 是否已赋值
                     * @return Demo 是否已赋值
                     * 
                     */
                    bool DemoHasBeenSet() const;

                    /**
                     * 获取扫描对象
                     * @return Target 扫描对象
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取扫描目的
                     * @return Purpose 扫描目的
                     * 
                     */
                    std::string GetPurpose() const;

                    /**
                     * 判断参数 Purpose 是否已赋值
                     * @return Purpose 是否已赋值
                     * 
                     */
                    bool PurposeHasBeenSet() const;

                    /**
                     * 获取产品文案
                     * @return Announcement 产品文案
                     * 
                     */
                    std::string GetAnnouncement() const;

                    /**
                     * 判断参数 Announcement 是否已赋值
                     * @return Announcement 是否已赋值
                     * 
                     */
                    bool AnnouncementHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取ipowner
                     * @return IpOwner ipowner
                     * 
                     */
                    std::string GetIpOwner() const;

                    /**
                     * 判断参数 IpOwner 是否已赋值
                     * @return IpOwner 是否已赋值
                     * 
                     */
                    bool IpOwnerHasBeenSet() const;

                private:

                    /**
                     * ip列表,当入参Ip为all时，返回所有已知ip列表
                     */
                    std::vector<ScanIpInfo> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * 所属业务
                     */
                    std::string m_bussiness;
                    bool m_bussinessHasBeenSet;

                    /**
                     * 业务特征
                     */
                    std::string m_characteristic;
                    bool m_characteristicHasBeenSet;

                    /**
                     * 扫描说明
                     */
                    std::string m_descibe;
                    bool m_descibeHasBeenSet;

                    /**
                     * 官方公告
                     */
                    std::string m_referer;
                    bool m_refererHasBeenSet;

                    /**
                     * 扫描示例
                     */
                    std::string m_demo;
                    bool m_demoHasBeenSet;

                    /**
                     * 扫描对象
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 扫描目的
                     */
                    std::string m_purpose;
                    bool m_purposeHasBeenSet;

                    /**
                     * 产品文案
                     */
                    std::string m_announcement;
                    bool m_announcementHasBeenSet;

                    /**
                     * 更新时间
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * ipowner
                     */
                    std::string m_ipOwner;
                    bool m_ipOwnerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBESCANIPRESPONSE_H_
