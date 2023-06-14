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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_UPDATEIMAGEREGISTRYTIMINGSCANTASKREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_UPDATEIMAGEREGISTRYTIMINGSCANTASKREQUEST_H_

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
                * UpdateImageRegistryTimingScanTask请求参数结构体
                */
                class UpdateImageRegistryTimingScanTaskRequest : public AbstractModel
                {
                public:
                    UpdateImageRegistryTimingScanTaskRequest();
                    ~UpdateImageRegistryTimingScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取定时扫描周期
                     * @return ScanPeriod 定时扫描周期
                     * 
                     */
                    uint64_t GetScanPeriod() const;

                    /**
                     * 设置定时扫描周期
                     * @param _scanPeriod 定时扫描周期
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
                     * 获取定时扫描开关
                     * @return Enable 定时扫描开关
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置定时扫描开关
                     * @param _enable 定时扫描开关
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
                     * 获取定时扫描的时间
                     * @return ScanTime 定时扫描的时间
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置定时扫描的时间
                     * @param _scanTime 定时扫描的时间
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
                     * 获取扫描木马类型数组
                     * @return ScanType 扫描木马类型数组
                     * 
                     */
                    std::vector<std::string> GetScanType() const;

                    /**
                     * 设置扫描木马类型数组
                     * @param _scanType 扫描木马类型数组
                     * 
                     */
                    void SetScanType(const std::vector<std::string>& _scanType);

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

                    /**
                     * 获取扫描镜像
                     * @return Images 扫描镜像
                     * 
                     */
                    std::vector<ImageInfo> GetImages() const;

                    /**
                     * 设置扫描镜像
                     * @param _images 扫描镜像
                     * 
                     */
                    void SetImages(const std::vector<ImageInfo>& _images);

                    /**
                     * 判断参数 Images 是否已赋值
                     * @return Images 是否已赋值
                     * 
                     */
                    bool ImagesHasBeenSet() const;

                    /**
                     * 获取是否扫描所有
                     * @return All 是否扫描所有
                     * 
                     */
                    bool GetAll() const;

                    /**
                     * 设置是否扫描所有
                     * @param _all 是否扫描所有
                     * 
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * 
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取扫描镜像Id
                     * @return Id 扫描镜像Id
                     * 
                     */
                    std::vector<uint64_t> GetId() const;

                    /**
                     * 设置扫描镜像Id
                     * @param _id 扫描镜像Id
                     * 
                     */
                    void SetId(const std::vector<uint64_t>& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取是否扫描最新版本
                     * @return Latest 是否扫描最新版本
                     * 
                     */
                    bool GetLatest() const;

                    /**
                     * 设置是否扫描最新版本
                     * @param _latest 是否扫描最新版本
                     * 
                     */
                    void SetLatest(const bool& _latest);

                    /**
                     * 判断参数 Latest 是否已赋值
                     * @return Latest 是否已赋值
                     * 
                     */
                    bool LatestHasBeenSet() const;

                private:

                    /**
                     * 定时扫描周期
                     */
                    uint64_t m_scanPeriod;
                    bool m_scanPeriodHasBeenSet;

                    /**
                     * 定时扫描开关
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 定时扫描的时间
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * 扫描木马类型数组
                     */
                    std::vector<std::string> m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * 扫描镜像
                     */
                    std::vector<ImageInfo> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * 是否扫描所有
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * 扫描镜像Id
                     */
                    std::vector<uint64_t> m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 是否扫描最新版本
                     */
                    bool m_latest;
                    bool m_latestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_UPDATEIMAGEREGISTRYTIMINGSCANTASKREQUEST_H_
