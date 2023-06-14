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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANTASKREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AssetFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateAssetImageScanTask请求参数结构体
                */
                class CreateAssetImageScanTaskRequest : public AbstractModel
                {
                public:
                    CreateAssetImageScanTaskRequest();
                    ~CreateAssetImageScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否扫描全部镜像；全部镜像，镜像列表和根据过滤条件筛选三选一。
                     * @return All 是否扫描全部镜像；全部镜像，镜像列表和根据过滤条件筛选三选一。
                     * 
                     */
                    bool GetAll() const;

                    /**
                     * 设置是否扫描全部镜像；全部镜像，镜像列表和根据过滤条件筛选三选一。
                     * @param _all 是否扫描全部镜像；全部镜像，镜像列表和根据过滤条件筛选三选一。
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
                     * 获取需要扫描的镜像列表；全部镜像，镜像列表和根据过滤条件筛选三选一。
                     * @return Images 需要扫描的镜像列表；全部镜像，镜像列表和根据过滤条件筛选三选一。
                     * 
                     */
                    std::vector<std::string> GetImages() const;

                    /**
                     * 设置需要扫描的镜像列表；全部镜像，镜像列表和根据过滤条件筛选三选一。
                     * @param _images 需要扫描的镜像列表；全部镜像，镜像列表和根据过滤条件筛选三选一。
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
                     * 获取扫描漏洞；漏洞，木马和风险需选其一
                     * @return ScanVul 扫描漏洞；漏洞，木马和风险需选其一
                     * 
                     */
                    bool GetScanVul() const;

                    /**
                     * 设置扫描漏洞；漏洞，木马和风险需选其一
                     * @param _scanVul 扫描漏洞；漏洞，木马和风险需选其一
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
                     * 获取扫描木马；漏洞，木马和风险需选其一
                     * @return ScanVirus 扫描木马；漏洞，木马和风险需选其一
                     * 
                     */
                    bool GetScanVirus() const;

                    /**
                     * 设置扫描木马；漏洞，木马和风险需选其一
                     * @param _scanVirus 扫描木马；漏洞，木马和风险需选其一
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
                     * 获取扫描风险；漏洞，木马和风险需选其一
                     * @return ScanRisk 扫描风险；漏洞，木马和风险需选其一
                     * 
                     */
                    bool GetScanRisk() const;

                    /**
                     * 设置扫描风险；漏洞，木马和风险需选其一
                     * @param _scanRisk 扫描风险；漏洞，木马和风险需选其一
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
                     * 获取根据过滤条件筛选出镜像；全部镜像，镜像列表和根据过滤条件筛选三选一。
                     * @return Filters 根据过滤条件筛选出镜像；全部镜像，镜像列表和根据过滤条件筛选三选一。
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置根据过滤条件筛选出镜像；全部镜像，镜像列表和根据过滤条件筛选三选一。
                     * @param _filters 根据过滤条件筛选出镜像；全部镜像，镜像列表和根据过滤条件筛选三选一。
                     * 
                     */
                    void SetFilters(const std::vector<AssetFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取根据过滤条件筛选出镜像，再排除个别镜像
                     * @return ExcludeImageIds 根据过滤条件筛选出镜像，再排除个别镜像
                     * 
                     */
                    std::vector<std::string> GetExcludeImageIds() const;

                    /**
                     * 设置根据过滤条件筛选出镜像，再排除个别镜像
                     * @param _excludeImageIds 根据过滤条件筛选出镜像，再排除个别镜像
                     * 
                     */
                    void SetExcludeImageIds(const std::vector<std::string>& _excludeImageIds);

                    /**
                     * 判断参数 ExcludeImageIds 是否已赋值
                     * @return ExcludeImageIds 是否已赋值
                     * 
                     */
                    bool ExcludeImageIdsHasBeenSet() const;

                private:

                    /**
                     * 是否扫描全部镜像；全部镜像，镜像列表和根据过滤条件筛选三选一。
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * 需要扫描的镜像列表；全部镜像，镜像列表和根据过滤条件筛选三选一。
                     */
                    std::vector<std::string> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * 扫描漏洞；漏洞，木马和风险需选其一
                     */
                    bool m_scanVul;
                    bool m_scanVulHasBeenSet;

                    /**
                     * 扫描木马；漏洞，木马和风险需选其一
                     */
                    bool m_scanVirus;
                    bool m_scanVirusHasBeenSet;

                    /**
                     * 扫描风险；漏洞，木马和风险需选其一
                     */
                    bool m_scanRisk;
                    bool m_scanRiskHasBeenSet;

                    /**
                     * 根据过滤条件筛选出镜像；全部镜像，镜像列表和根据过滤条件筛选三选一。
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 根据过滤条件筛选出镜像，再排除个别镜像
                     */
                    std::vector<std::string> m_excludeImageIds;
                    bool m_excludeImageIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGESCANTASKREQUEST_H_
