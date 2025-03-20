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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEREGISTRYTIMINGSCANTASKRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEREGISTRYTIMINGSCANTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ImageInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeImageRegistryTimingScanTask返回参数结构体
                */
                class DescribeImageRegistryTimingScanTaskResponse : public AbstractModel
                {
                public:
                    DescribeImageRegistryTimingScanTaskResponse();
                    ~DescribeImageRegistryTimingScanTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取定时扫描开关
                     * @return Enable 定时扫描开关
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取定时任务扫描时间
                     * @return ScanTime 定时任务扫描时间
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取定时扫描间隔
                     * @return ScanPeriod 定时扫描间隔
                     * 
                     */
                    uint64_t GetScanPeriod() const;

                    /**
                     * 判断参数 ScanPeriod 是否已赋值
                     * @return ScanPeriod 是否已赋值
                     * 
                     */
                    bool ScanPeriodHasBeenSet() const;

                    /**
                     * 获取扫描类型数组
                     * @return ScanType 扫描类型数组
                     * 
                     */
                    std::vector<std::string> GetScanType() const;

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

                    /**
                     * 获取扫描全部镜像
                     * @return All 扫描全部镜像
                     * @deprecated
                     */
                    bool GetAll() const;

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * @deprecated
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取自定义扫描镜像
                     * @return Images 自定义扫描镜像
                     * 
                     */
                    std::vector<ImageInfo> GetImages() const;

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取自动以扫描镜像Id
                     * @return Id 自动以扫描镜像Id
                     * 
                     */
                    std::vector<uint64_t> GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取是否扫描最新版本镜像
                     * @return Latest 是否扫描最新版本镜像
                     * 
                     */
                    bool GetLatest() const;

                    /**
                     * 判断参数 Latest 是否已赋值
                     * @return Latest 是否已赋值
                     * 
                     */
                    bool LatestHasBeenSet() const;

                    /**
                     * 获取扫描结束时间
                     * @return ScanEndTime 扫描结束时间
                     * 
                     */
                    std::string GetScanEndTime() const;

                    /**
                     * 判断参数 ScanEndTime 是否已赋值
                     * @return ScanEndTime 是否已赋值
                     * 
                     */
                    bool ScanEndTimeHasBeenSet() const;

                    /**
                     * 获取仓库类型 tcr,ccr,harbor	
                     * @return RegistryType 仓库类型 tcr,ccr,harbor	
                     * 
                     */
                    std::vector<std::string> GetRegistryType() const;

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     * 
                     */
                    bool RegistryTypeHasBeenSet() const;

                    /**
                     * 获取是否存在运行中的容器	
                     * @return ContainerRunning 是否存在运行中的容器	
                     * 
                     */
                    bool GetContainerRunning() const;

                    /**
                     * 判断参数 ContainerRunning 是否已赋值
                     * @return ContainerRunning 是否已赋值
                     * 
                     */
                    bool ContainerRunningHasBeenSet() const;

                    /**
                     * 获取扫描范围 0全部镜像，1自选镜像，2推荐扫描镜像
                     * @return ScanScope 扫描范围 0全部镜像，1自选镜像，2推荐扫描镜像
                     * 
                     */
                    uint64_t GetScanScope() const;

                    /**
                     * 判断参数 ScanScope 是否已赋值
                     * @return ScanScope 是否已赋值
                     * 
                     */
                    bool ScanScopeHasBeenSet() const;

                    /**
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::vector<std::string> GetNamespace() const;

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取排除的镜像资产id
                     * @return ExcludeImageAssetIds 排除的镜像资产id
                     * 
                     */
                    std::vector<uint64_t> GetExcludeImageAssetIds() const;

                    /**
                     * 判断参数 ExcludeImageAssetIds 是否已赋值
                     * @return ExcludeImageAssetIds 是否已赋值
                     * 
                     */
                    bool ExcludeImageAssetIdsHasBeenSet() const;

                    /**
                     * 获取最近扫描时间
                     * @return LastScanTime 最近扫描时间
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取扫描结果(Success|InsufficientLicense|ImageNeedIsEmpty|InternalError)
                     * @return ScanResult 扫描结果(Success|InsufficientLicense|ImageNeedIsEmpty|InternalError)
                     * 
                     */
                    std::string GetScanResult() const;

                    /**
                     * 判断参数 ScanResult 是否已赋值
                     * @return ScanResult 是否已赋值
                     * 
                     */
                    bool ScanResultHasBeenSet() const;

                private:

                    /**
                     * 定时扫描开关
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 定时任务扫描时间
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * 定时扫描间隔
                     */
                    uint64_t m_scanPeriod;
                    bool m_scanPeriodHasBeenSet;

                    /**
                     * 扫描类型数组
                     */
                    std::vector<std::string> m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * 扫描全部镜像
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * 自定义扫描镜像
                     */
                    std::vector<ImageInfo> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * 自动以扫描镜像Id
                     */
                    std::vector<uint64_t> m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 是否扫描最新版本镜像
                     */
                    bool m_latest;
                    bool m_latestHasBeenSet;

                    /**
                     * 扫描结束时间
                     */
                    std::string m_scanEndTime;
                    bool m_scanEndTimeHasBeenSet;

                    /**
                     * 仓库类型 tcr,ccr,harbor	
                     */
                    std::vector<std::string> m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * 是否存在运行中的容器	
                     */
                    bool m_containerRunning;
                    bool m_containerRunningHasBeenSet;

                    /**
                     * 扫描范围 0全部镜像，1自选镜像，2推荐扫描镜像
                     */
                    uint64_t m_scanScope;
                    bool m_scanScopeHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::vector<std::string> m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 排除的镜像资产id
                     */
                    std::vector<uint64_t> m_excludeImageAssetIds;
                    bool m_excludeImageAssetIdsHasBeenSet;

                    /**
                     * 最近扫描时间
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * 扫描结果(Success|InsufficientLicense|ImageNeedIsEmpty|InternalError)
                     */
                    std::string m_scanResult;
                    bool m_scanResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEREGISTRYTIMINGSCANTASKRESPONSE_H_
