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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGEREGISTRYSCANTASKREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGEREGISTRYSCANTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ImageInfo.h>
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
                * CreateAssetImageRegistryScanTask请求参数结构体
                */
                class CreateAssetImageRegistryScanTaskRequest : public AbstractModel
                {
                public:
                    CreateAssetImageRegistryScanTaskRequest();
                    ~CreateAssetImageRegistryScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>是否扫描全部镜像</p>
                     * @return All <p>是否扫描全部镜像</p>
                     * 
                     */
                    bool GetAll() const;

                    /**
                     * 设置<p>是否扫描全部镜像</p>
                     * @param _all <p>是否扫描全部镜像</p>
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
                     * 获取<p>扫描的镜像列表</p>
                     * @return Images <p>扫描的镜像列表</p>
                     * 
                     */
                    std::vector<ImageInfo> GetImages() const;

                    /**
                     * 设置<p>扫描的镜像列表</p>
                     * @param _images <p>扫描的镜像列表</p>
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
                     * 获取<p>扫描类型数组</p>
                     * @return ScanType <p>扫描类型数组</p>
                     * 
                     */
                    std::vector<std::string> GetScanType() const;

                    /**
                     * 设置<p>扫描类型数组</p>
                     * @param _scanType <p>扫描类型数组</p>
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
                     * 获取<p>扫描的镜像列表</p>
                     * @return Id <p>扫描的镜像列表</p>
                     * 
                     */
                    std::vector<uint64_t> GetId() const;

                    /**
                     * 设置<p>扫描的镜像列表</p>
                     * @param _id <p>扫描的镜像列表</p>
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
                     * 获取<p>过滤条件</p>
                     * @return Filters <p>过滤条件</p>
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置<p>过滤条件</p>
                     * @param _filters <p>过滤条件</p>
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
                     * 获取<p>不需要扫描的镜像列表, 与Filters配合使用</p>
                     * @return ExcludeImageList <p>不需要扫描的镜像列表, 与Filters配合使用</p>
                     * 
                     */
                    std::vector<uint64_t> GetExcludeImageList() const;

                    /**
                     * 设置<p>不需要扫描的镜像列表, 与Filters配合使用</p>
                     * @param _excludeImageList <p>不需要扫描的镜像列表, 与Filters配合使用</p>
                     * 
                     */
                    void SetExcludeImageList(const std::vector<uint64_t>& _excludeImageList);

                    /**
                     * 判断参数 ExcludeImageList 是否已赋值
                     * @return ExcludeImageList 是否已赋值
                     * 
                     */
                    bool ExcludeImageListHasBeenSet() const;

                    /**
                     * 获取<p>是否仅扫描各repository最新版的镜像, 与Filters配合使用</p>
                     * @return OnlyScanLatest <p>是否仅扫描各repository最新版的镜像, 与Filters配合使用</p>
                     * 
                     */
                    bool GetOnlyScanLatest() const;

                    /**
                     * 设置<p>是否仅扫描各repository最新版的镜像, 与Filters配合使用</p>
                     * @param _onlyScanLatest <p>是否仅扫描各repository最新版的镜像, 与Filters配合使用</p>
                     * 
                     */
                    void SetOnlyScanLatest(const bool& _onlyScanLatest);

                    /**
                     * 判断参数 OnlyScanLatest 是否已赋值
                     * @return OnlyScanLatest 是否已赋值
                     * 
                     */
                    bool OnlyScanLatestHasBeenSet() const;

                    /**
                     * 获取<p>任务超时时长</p><p>单位：秒</p>
                     * @return Timeout <p>任务超时时长</p><p>单位：秒</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>任务超时时长</p><p>单位：秒</p>
                     * @param _timeout <p>任务超时时长</p><p>单位：秒</p>
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                private:

                    /**
                     * <p>是否扫描全部镜像</p>
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * <p>扫描的镜像列表</p>
                     */
                    std::vector<ImageInfo> m_images;
                    bool m_imagesHasBeenSet;

                    /**
                     * <p>扫描类型数组</p>
                     */
                    std::vector<std::string> m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * <p>扫描的镜像列表</p>
                     */
                    std::vector<uint64_t> m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>过滤条件</p>
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>不需要扫描的镜像列表, 与Filters配合使用</p>
                     */
                    std::vector<uint64_t> m_excludeImageList;
                    bool m_excludeImageListHasBeenSet;

                    /**
                     * <p>是否仅扫描各repository最新版的镜像, 与Filters配合使用</p>
                     */
                    bool m_onlyScanLatest;
                    bool m_onlyScanLatestHasBeenSet;

                    /**
                     * <p>任务超时时长</p><p>单位：秒</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEASSETIMAGEREGISTRYSCANTASKREQUEST_H_
