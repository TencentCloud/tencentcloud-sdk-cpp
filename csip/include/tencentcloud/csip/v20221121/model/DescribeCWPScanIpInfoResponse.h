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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPSCANIPINFORESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPSCANIPINFORESPONSE_H_

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
                * DescribeCWPScanIpInfo返回参数结构体
                */
                class DescribeCWPScanIpInfoResponse : public AbstractModel
                {
                public:
                    DescribeCWPScanIpInfoResponse();
                    ~DescribeCWPScanIpInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>所属业务</p>
                     * @return Bussiness <p>所属业务</p>
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
                     * 获取<p>业务特征</p>
                     * @return Characteristic <p>业务特征</p>
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
                     * 获取<p>描述</p>
                     * @return Describe <p>描述</p>
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取<p>官方公告</p>
                     * @return Referer <p>官方公告</p>
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
                     * 获取<p>扫描示例</p>
                     * @return Demo <p>扫描示例</p>
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
                     * 获取<p>扫描对象</p>
                     * @return Target <p>扫描对象</p>
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
                     * 获取<p>扫描目的</p>
                     * @return Purpose <p>扫描目的</p>
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
                     * 获取<p>产品文案</p>
                     * @return Announcement <p>产品文案</p>
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
                     * 获取<p>地理位置</p>
                     * @return Location <p>地理位置</p>
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取<p>所属运营商</p>
                     * @return ISP <p>所属运营商</p>
                     * 
                     */
                    std::string GetISP() const;

                    /**
                     * 判断参数 ISP 是否已赋值
                     * @return ISP 是否已赋值
                     * 
                     */
                    bool ISPHasBeenSet() const;

                    /**
                     * 获取<p>是否归属于腾讯</p>
                     * @return IsBelongTencent <p>是否归属于腾讯</p>
                     * 
                     */
                    bool GetIsBelongTencent() const;

                    /**
                     * 判断参数 IsBelongTencent 是否已赋值
                     * @return IsBelongTencent 是否已赋值
                     * 
                     */
                    bool IsBelongTencentHasBeenSet() const;

                private:

                    /**
                     * <p>所属业务</p>
                     */
                    std::string m_bussiness;
                    bool m_bussinessHasBeenSet;

                    /**
                     * <p>业务特征</p>
                     */
                    std::string m_characteristic;
                    bool m_characteristicHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * <p>官方公告</p>
                     */
                    std::string m_referer;
                    bool m_refererHasBeenSet;

                    /**
                     * <p>扫描示例</p>
                     */
                    std::string m_demo;
                    bool m_demoHasBeenSet;

                    /**
                     * <p>扫描对象</p>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * <p>扫描目的</p>
                     */
                    std::string m_purpose;
                    bool m_purposeHasBeenSet;

                    /**
                     * <p>产品文案</p>
                     */
                    std::string m_announcement;
                    bool m_announcementHasBeenSet;

                    /**
                     * <p>地理位置</p>
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * <p>所属运营商</p>
                     */
                    std::string m_iSP;
                    bool m_iSPHasBeenSet;

                    /**
                     * <p>是否归属于腾讯</p>
                     */
                    bool m_isBelongTencent;
                    bool m_isBelongTencentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPSCANIPINFORESPONSE_H_
