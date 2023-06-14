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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULIMAGESUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULIMAGESUMMARYRESPONSE_H_

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
                * DescribeVulImageSummary返回参数结构体
                */
                class DescribeVulImageSummaryResponse : public AbstractModel
                {
                public:
                    DescribeVulImageSummaryResponse();
                    ~DescribeVulImageSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取受严重或高危漏洞影响的镜像数
                     * @return SeriousVulImageCount 受严重或高危漏洞影响的镜像数
                     * 
                     */
                    int64_t GetSeriousVulImageCount() const;

                    /**
                     * 判断参数 SeriousVulImageCount 是否已赋值
                     * @return SeriousVulImageCount 是否已赋值
                     * 
                     */
                    bool SeriousVulImageCountHasBeenSet() const;

                    /**
                     * 获取已扫描的镜像数
                     * @return ScannedImageCount 已扫描的镜像数
                     * 
                     */
                    int64_t GetScannedImageCount() const;

                    /**
                     * 判断参数 ScannedImageCount 是否已赋值
                     * @return ScannedImageCount 是否已赋值
                     * 
                     */
                    bool ScannedImageCountHasBeenSet() const;

                    /**
                     * 获取漏洞总数量
                     * @return VulTotalCount 漏洞总数量
                     * 
                     */
                    int64_t GetVulTotalCount() const;

                    /**
                     * 判断参数 VulTotalCount 是否已赋值
                     * @return VulTotalCount 是否已赋值
                     * 
                     */
                    bool VulTotalCountHasBeenSet() const;

                    /**
                     * 获取系统漏洞数
                     * @return SysTemVulCount 系统漏洞数
                     * 
                     */
                    int64_t GetSysTemVulCount() const;

                    /**
                     * 判断参数 SysTemVulCount 是否已赋值
                     * @return SysTemVulCount 是否已赋值
                     * 
                     */
                    bool SysTemVulCountHasBeenSet() const;

                    /**
                     * 获取web应用漏洞数
                     * @return WebVulCount web应用漏洞数
                     * 
                     */
                    int64_t GetWebVulCount() const;

                    /**
                     * 判断参数 WebVulCount 是否已赋值
                     * @return WebVulCount 是否已赋值
                     * 
                     */
                    bool WebVulCountHasBeenSet() const;

                    /**
                     * 获取已授权镜像数
                     * @return AllAuthorizedImageCount 已授权镜像数
                     * 
                     */
                    int64_t GetAllAuthorizedImageCount() const;

                    /**
                     * 判断参数 AllAuthorizedImageCount 是否已赋值
                     * @return AllAuthorizedImageCount 是否已赋值
                     * 
                     */
                    bool AllAuthorizedImageCountHasBeenSet() const;

                    /**
                     * 获取应急漏洞数
                     * @return EmergencyVulCount 应急漏洞数
                     * 
                     */
                    int64_t GetEmergencyVulCount() const;

                    /**
                     * 判断参数 EmergencyVulCount 是否已赋值
                     * @return EmergencyVulCount 是否已赋值
                     * 
                     */
                    bool EmergencyVulCountHasBeenSet() const;

                    /**
                     * 获取支持扫描的漏洞总数量
                     * @return SupportVulTotalCount 支持扫描的漏洞总数量
                     * 
                     */
                    int64_t GetSupportVulTotalCount() const;

                    /**
                     * 判断参数 SupportVulTotalCount 是否已赋值
                     * @return SupportVulTotalCount 是否已赋值
                     * 
                     */
                    bool SupportVulTotalCountHasBeenSet() const;

                    /**
                     * 获取漏洞库更新时间
                     * @return VulLibraryUpdateTime 漏洞库更新时间
                     * 
                     */
                    std::string GetVulLibraryUpdateTime() const;

                    /**
                     * 判断参数 VulLibraryUpdateTime 是否已赋值
                     * @return VulLibraryUpdateTime 是否已赋值
                     * 
                     */
                    bool VulLibraryUpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 受严重或高危漏洞影响的镜像数
                     */
                    int64_t m_seriousVulImageCount;
                    bool m_seriousVulImageCountHasBeenSet;

                    /**
                     * 已扫描的镜像数
                     */
                    int64_t m_scannedImageCount;
                    bool m_scannedImageCountHasBeenSet;

                    /**
                     * 漏洞总数量
                     */
                    int64_t m_vulTotalCount;
                    bool m_vulTotalCountHasBeenSet;

                    /**
                     * 系统漏洞数
                     */
                    int64_t m_sysTemVulCount;
                    bool m_sysTemVulCountHasBeenSet;

                    /**
                     * web应用漏洞数
                     */
                    int64_t m_webVulCount;
                    bool m_webVulCountHasBeenSet;

                    /**
                     * 已授权镜像数
                     */
                    int64_t m_allAuthorizedImageCount;
                    bool m_allAuthorizedImageCountHasBeenSet;

                    /**
                     * 应急漏洞数
                     */
                    int64_t m_emergencyVulCount;
                    bool m_emergencyVulCountHasBeenSet;

                    /**
                     * 支持扫描的漏洞总数量
                     */
                    int64_t m_supportVulTotalCount;
                    bool m_supportVulTotalCountHasBeenSet;

                    /**
                     * 漏洞库更新时间
                     */
                    std::string m_vulLibraryUpdateTime;
                    bool m_vulLibraryUpdateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULIMAGESUMMARYRESPONSE_H_
