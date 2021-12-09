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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGESCANSETTINGRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGESCANSETTINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAssetImageScanSetting返回参数结构体
                */
                class DescribeAssetImageScanSettingResponse : public AbstractModel
                {
                public:
                    DescribeAssetImageScanSettingResponse();
                    ~DescribeAssetImageScanSettingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取开关
                     * @return Enable 开关
                     */
                    bool GetEnable() const;

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取扫描时刻(完整时间;后端按0时区解析时分秒)
                     * @return ScanTime 扫描时刻(完整时间;后端按0时区解析时分秒)
                     */
                    std::string GetScanTime() const;

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取扫描间隔
                     * @return ScanPeriod 扫描间隔
                     */
                    uint64_t GetScanPeriod() const;

                    /**
                     * 判断参数 ScanPeriod 是否已赋值
                     * @return ScanPeriod 是否已赋值
                     */
                    bool ScanPeriodHasBeenSet() const;

                    /**
                     * 获取扫描木马
                     * @return ScanVirus 扫描木马
                     */
                    bool GetScanVirus() const;

                    /**
                     * 判断参数 ScanVirus 是否已赋值
                     * @return ScanVirus 是否已赋值
                     */
                    bool ScanVirusHasBeenSet() const;

                    /**
                     * 获取扫描敏感信息
                     * @return ScanRisk 扫描敏感信息
                     */
                    bool GetScanRisk() const;

                    /**
                     * 判断参数 ScanRisk 是否已赋值
                     * @return ScanRisk 是否已赋值
                     */
                    bool ScanRiskHasBeenSet() const;

                    /**
                     * 获取扫描漏洞
                     * @return ScanVul 扫描漏洞
                     */
                    bool GetScanVul() const;

                    /**
                     * 判断参数 ScanVul 是否已赋值
                     * @return ScanVul 是否已赋值
                     */
                    bool ScanVulHasBeenSet() const;

                    /**
                     * 获取扫描全部镜像
                     * @return All 扫描全部镜像
                     */
                    bool GetAll() const;

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取自定义扫描镜像
                     * @return Images 自定义扫描镜像
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     */
                    bool ImagesHasBeenSet() const;

                private:

                    /**
                     * 开关
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 扫描时刻(完整时间;后端按0时区解析时分秒)
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * 扫描间隔
                     */
                    uint64_t m_scanPeriod;
                    bool m_scanPeriodHasBeenSet;

                    /**
                     * 扫描木马
                     */
                    bool m_scanVirus;
                    bool m_scanVirusHasBeenSet;

                    /**
                     * 扫描敏感信息
                     */
                    bool m_scanRisk;
                    bool m_scanRiskHasBeenSet;

                    /**
                     * 扫描漏洞
                     */
                    bool m_scanVul;
                    bool m_scanVulHasBeenSet;

                    /**
                     * 扫描全部镜像
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * 自定义扫描镜像
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGESCANSETTINGRESPONSE_H_