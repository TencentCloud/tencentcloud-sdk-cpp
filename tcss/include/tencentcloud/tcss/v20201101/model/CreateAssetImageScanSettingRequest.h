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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANSETTINGREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANSETTINGREQUEST_H_

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
                * CreateAssetImageScanSetting请求参数结构体
                */
                class CreateAssetImageScanSettingRequest : public AbstractModel
                {
                public:
                    CreateAssetImageScanSettingRequest();
                    ~CreateAssetImageScanSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开关
                     * @return Enable 开关
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置开关
                     * @param _enable 开关
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取扫描开始时间
01:00 时分
                     * @return ScanTime 扫描开始时间
01:00 时分
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置扫描开始时间
01:00 时分
                     * @param _scanTime 扫描开始时间
01:00 时分
                     * 
                     */
                    void SetScanTime(const std::string& _scanTime);

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取扫描周期
                     * @return ScanPeriod 扫描周期
                     * 
                     */
                    uint64_t GetScanPeriod() const;

                    /**
                     * 设置扫描周期
                     * @param _scanPeriod 扫描周期
                     * 
                     */
                    void SetScanPeriod(const uint64_t& _scanPeriod);

                    /**
                     * 判断参数 ScanPeriod 是否已赋值
                     * @return ScanPeriod 是否已赋值
                     * 
                     */
                    bool ScanPeriodHasBeenSet() const;

                    /**
                     * 获取扫描木马
                     * @return ScanVirus 扫描木马
                     * 
                     */
                    bool GetScanVirus() const;

                    /**
                     * 设置扫描木马
                     * @param _scanVirus 扫描木马
                     * 
                     */
                    void SetScanVirus(const bool& _scanVirus);

                    /**
                     * 判断参数 ScanVirus 是否已赋值
                     * @return ScanVirus 是否已赋值
                     * 
                     */
                    bool ScanVirusHasBeenSet() const;

                    /**
                     * 获取扫描敏感信息
                     * @return ScanRisk 扫描敏感信息
                     * 
                     */
                    bool GetScanRisk() const;

                    /**
                     * 设置扫描敏感信息
                     * @param _scanRisk 扫描敏感信息
                     * 
                     */
                    void SetScanRisk(const bool& _scanRisk);

                    /**
                     * 判断参数 ScanRisk 是否已赋值
                     * @return ScanRisk 是否已赋值
                     * 
                     */
                    bool ScanRiskHasBeenSet() const;

                    /**
                     * 获取扫描漏洞
                     * @return ScanVul 扫描漏洞
                     * 
                     */
                    bool GetScanVul() const;

                    /**
                     * 设置扫描漏洞
                     * @param _scanVul 扫描漏洞
                     * 
                     */
                    void SetScanVul(const bool& _scanVul);

                    /**
                     * 判断参数 ScanVul 是否已赋值
                     * @return ScanVul 是否已赋值
                     * 
                     */
                    bool ScanVulHasBeenSet() const;

                    /**
                     * 获取全部镜像
                     * @return All 全部镜像
                     * @deprecated
                     */
                    bool GetAll() const;

                    /**
                     * 设置全部镜像
                     * @param _all 全部镜像
                     * @deprecated
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * @deprecated
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取自定义镜像
                     * @return Images 自定义镜像
                     * 
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 设置自定义镜像
                     * @param _images 自定义镜像
                     * 
                     */
                    void SetImages(const std::vector<std::string>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取镜像是否存在运行中的容器
                     * @return ContainerRunning 镜像是否存在运行中的容器
                     * 
                     */
                    bool GetContainerRunning() const;

                    /**
                     * 设置镜像是否存在运行中的容器
                     * @param _containerRunning 镜像是否存在运行中的容器
                     * 
                     */
                    void SetContainerRunning(const bool& _containerRunning);

                    /**
                     * 判断参数 ContainerRunning 是否已赋值
                     * @return ContainerRunning 是否已赋值
                     * 
                     */
                    bool ContainerRunningHasBeenSet() const;

                    /**
                     * 获取扫描范围 0 全部授权镜像，1自选镜像，2 推荐扫描
                     * @return ScanScope 扫描范围 0 全部授权镜像，1自选镜像，2 推荐扫描
                     * 
                     */
                    uint64_t GetScanScope() const;

                    /**
                     * 设置扫描范围 0 全部授权镜像，1自选镜像，2 推荐扫描
                     * @param _scanScope 扫描范围 0 全部授权镜像，1自选镜像，2 推荐扫描
                     * 
                     */
                    void SetScanScope(const uint64_t& _scanScope);

                    /**
                     * 判断参数 ScanScope 是否已赋值
                     * @return ScanScope 是否已赋值
                     * 
                     */
                    bool ScanScopeHasBeenSet() const;

                    /**
                     * 获取扫描结束时间
02:00 时分
                     * @return ScanEndTime 扫描结束时间
02:00 时分
                     * 
                     */
                    std::string GetScanEndTime() const;

                    /**
                     * 设置扫描结束时间
02:00 时分
                     * @param _scanEndTime 扫描结束时间
02:00 时分
                     * 
                     */
                    void SetScanEndTime(const std::string& _scanEndTime);

                    /**
                     * 判断参数 ScanEndTime 是否已赋值
                     * @return ScanEndTime 是否已赋值
                     * 
                     */
                    bool ScanEndTimeHasBeenSet() const;

                    /**
                     * 获取排除扫描的镜像
                     * @return ExcludeImages 排除扫描的镜像
                     * 
                     */
                    std::vector<std::string> GetExcludeImages() const;

                    /**
                     * 设置排除扫描的镜像
                     * @param _excludeImages 排除扫描的镜像
                     * 
                     */
                    void SetExcludeImages(const std::vector<std::string>& _excludeImages);

                    /**
                     * 判断参数 ExcludeImages 是否已赋值
                     * @return ExcludeImages 是否已赋值
                     * 
                     */
                    bool ExcludeImagesHasBeenSet() const;

                private:

                    /**
                     * 开关
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 扫描开始时间
01:00 时分
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * 扫描周期
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
                     * 全部镜像
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * 自定义镜像
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * 镜像是否存在运行中的容器
                     */
                    bool m_containerRunning;
                    bool m_containerRunningHasBeenSet;

                    /**
                     * 扫描范围 0 全部授权镜像，1自选镜像，2 推荐扫描
                     */
                    uint64_t m_scanScope;
                    bool m_scanScopeHasBeenSet;

                    /**
                     * 扫描结束时间
02:00 时分
                     */
                    std::string m_scanEndTime;
                    bool m_scanEndTimeHasBeenSet;

                    /**
                     * 排除扫描的镜像
                     */
                    std::vector<std::string> m_excludeImages;
                    bool m_excludeImagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANSETTINGREQUEST_H_
