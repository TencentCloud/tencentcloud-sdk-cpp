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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYIMAGEAUTHORIZEDREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYIMAGEAUTHORIZEDREQUEST_H_

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
                * ModifyImageAuthorized请求参数结构体
                */
                class ModifyImageAuthorizedRequest : public AbstractModel
                {
                public:
                    ModifyImageAuthorizedRequest();
                    ~ModifyImageAuthorizedRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取本地镜像是否全部授权的标识，优先权高于根据本地镜像ids授权。等于true时需UpdatedLocalImageCnt大于0。
                     * @return AllLocalImages 本地镜像是否全部授权的标识，优先权高于根据本地镜像ids授权。等于true时需UpdatedLocalImageCnt大于0。
                     * 
                     */
                    bool GetAllLocalImages() const;

                    /**
                     * 设置本地镜像是否全部授权的标识，优先权高于根据本地镜像ids授权。等于true时需UpdatedLocalImageCnt大于0。
                     * @param _allLocalImages 本地镜像是否全部授权的标识，优先权高于根据本地镜像ids授权。等于true时需UpdatedLocalImageCnt大于0。
                     * 
                     */
                    void SetAllLocalImages(const bool& _allLocalImages);

                    /**
                     * 判断参数 AllLocalImages 是否已赋值
                     * @return AllLocalImages 是否已赋值
                     * 
                     */
                    bool AllLocalImagesHasBeenSet() const;

                    /**
                     * 获取仓库镜像是否全部授权的标识，优先权高于根据镜像ids授权。等于true时需UpdatedRegistryImageCnt大于0。
                     * @return AllRegistryImages 仓库镜像是否全部授权的标识，优先权高于根据镜像ids授权。等于true时需UpdatedRegistryImageCnt大于0。
                     * 
                     */
                    bool GetAllRegistryImages() const;

                    /**
                     * 设置仓库镜像是否全部授权的标识，优先权高于根据镜像ids授权。等于true时需UpdatedRegistryImageCnt大于0。
                     * @param _allRegistryImages 仓库镜像是否全部授权的标识，优先权高于根据镜像ids授权。等于true时需UpdatedRegistryImageCnt大于0。
                     * 
                     */
                    void SetAllRegistryImages(const bool& _allRegistryImages);

                    /**
                     * 判断参数 AllRegistryImages 是否已赋值
                     * @return AllRegistryImages 是否已赋值
                     * 
                     */
                    bool AllRegistryImagesHasBeenSet() const;

                    /**
                     * 获取指定操作授权的本地镜像数量，判断优先权最高，实际多出的镜像随机忽略，实际不足的部分也忽略。
                     * @return UpdatedLocalImageCnt 指定操作授权的本地镜像数量，判断优先权最高，实际多出的镜像随机忽略，实际不足的部分也忽略。
                     * 
                     */
                    uint64_t GetUpdatedLocalImageCnt() const;

                    /**
                     * 设置指定操作授权的本地镜像数量，判断优先权最高，实际多出的镜像随机忽略，实际不足的部分也忽略。
                     * @param _updatedLocalImageCnt 指定操作授权的本地镜像数量，判断优先权最高，实际多出的镜像随机忽略，实际不足的部分也忽略。
                     * 
                     */
                    void SetUpdatedLocalImageCnt(const uint64_t& _updatedLocalImageCnt);

                    /**
                     * 判断参数 UpdatedLocalImageCnt 是否已赋值
                     * @return UpdatedLocalImageCnt 是否已赋值
                     * 
                     */
                    bool UpdatedLocalImageCntHasBeenSet() const;

                    /**
                     * 获取指定操作授权的仓库镜像数量，判断优先权最高，实际多出的镜像随机忽略，实际不足的部分也忽略；
                     * @return UpdatedRegistryImageCnt 指定操作授权的仓库镜像数量，判断优先权最高，实际多出的镜像随机忽略，实际不足的部分也忽略；
                     * 
                     */
                    uint64_t GetUpdatedRegistryImageCnt() const;

                    /**
                     * 设置指定操作授权的仓库镜像数量，判断优先权最高，实际多出的镜像随机忽略，实际不足的部分也忽略；
                     * @param _updatedRegistryImageCnt 指定操作授权的仓库镜像数量，判断优先权最高，实际多出的镜像随机忽略，实际不足的部分也忽略；
                     * 
                     */
                    void SetUpdatedRegistryImageCnt(const uint64_t& _updatedRegistryImageCnt);

                    /**
                     * 判断参数 UpdatedRegistryImageCnt 是否已赋值
                     * @return UpdatedRegistryImageCnt 是否已赋值
                     * 
                     */
                    bool UpdatedRegistryImageCntHasBeenSet() const;

                    /**
                     * 获取根据满足条件的本地镜像授权,本地镜像来源；ASSETIMAGE:本地镜像列表；IMAGEALL:同步本地镜像；AllLocalImages为false且LocalImageIds为空和UpdatedLocalImageCnt大于0时，需要
                     * @return ImageSourceType 根据满足条件的本地镜像授权,本地镜像来源；ASSETIMAGE:本地镜像列表；IMAGEALL:同步本地镜像；AllLocalImages为false且LocalImageIds为空和UpdatedLocalImageCnt大于0时，需要
                     * 
                     */
                    std::string GetImageSourceType() const;

                    /**
                     * 设置根据满足条件的本地镜像授权,本地镜像来源；ASSETIMAGE:本地镜像列表；IMAGEALL:同步本地镜像；AllLocalImages为false且LocalImageIds为空和UpdatedLocalImageCnt大于0时，需要
                     * @param _imageSourceType 根据满足条件的本地镜像授权,本地镜像来源；ASSETIMAGE:本地镜像列表；IMAGEALL:同步本地镜像；AllLocalImages为false且LocalImageIds为空和UpdatedLocalImageCnt大于0时，需要
                     * 
                     */
                    void SetImageSourceType(const std::string& _imageSourceType);

                    /**
                     * 判断参数 ImageSourceType 是否已赋值
                     * @return ImageSourceType 是否已赋值
                     * 
                     */
                    bool ImageSourceTypeHasBeenSet() const;

                    /**
                     * 获取根据满足条件的本地镜像授权，AllLocalImages为false且LocalImageIds为空和UpdatedLocalImageCnt大于0时，需要。
                     * @return LocalImageFilter 根据满足条件的本地镜像授权，AllLocalImages为false且LocalImageIds为空和UpdatedLocalImageCnt大于0时，需要。
                     * 
                     */
                    std::vector<AssetFilters> GetLocalImageFilter() const;

                    /**
                     * 设置根据满足条件的本地镜像授权，AllLocalImages为false且LocalImageIds为空和UpdatedLocalImageCnt大于0时，需要。
                     * @param _localImageFilter 根据满足条件的本地镜像授权，AllLocalImages为false且LocalImageIds为空和UpdatedLocalImageCnt大于0时，需要。
                     * 
                     */
                    void SetLocalImageFilter(const std::vector<AssetFilters>& _localImageFilter);

                    /**
                     * 判断参数 LocalImageFilter 是否已赋值
                     * @return LocalImageFilter 是否已赋值
                     * 
                     */
                    bool LocalImageFilterHasBeenSet() const;

                    /**
                     * 获取根据满足条件的仓库镜像授权，AllRegistryImages为false且RegistryImageIds为空和UpdatedRegistryImageCnt大于0时，需要。
                     * @return RegistryImageFilter 根据满足条件的仓库镜像授权，AllRegistryImages为false且RegistryImageIds为空和UpdatedRegistryImageCnt大于0时，需要。
                     * 
                     */
                    std::vector<AssetFilters> GetRegistryImageFilter() const;

                    /**
                     * 设置根据满足条件的仓库镜像授权，AllRegistryImages为false且RegistryImageIds为空和UpdatedRegistryImageCnt大于0时，需要。
                     * @param _registryImageFilter 根据满足条件的仓库镜像授权，AllRegistryImages为false且RegistryImageIds为空和UpdatedRegistryImageCnt大于0时，需要。
                     * 
                     */
                    void SetRegistryImageFilter(const std::vector<AssetFilters>& _registryImageFilter);

                    /**
                     * 判断参数 RegistryImageFilter 是否已赋值
                     * @return RegistryImageFilter 是否已赋值
                     * 
                     */
                    bool RegistryImageFilterHasBeenSet() const;

                    /**
                     * 获取根据满足条件的镜像授权,同时排除的本地镜像。
                     * @return ExcludeLocalImageIds 根据满足条件的镜像授权,同时排除的本地镜像。
                     * 
                     */
                    std::vector<std::string> GetExcludeLocalImageIds() const;

                    /**
                     * 设置根据满足条件的镜像授权,同时排除的本地镜像。
                     * @param _excludeLocalImageIds 根据满足条件的镜像授权,同时排除的本地镜像。
                     * 
                     */
                    void SetExcludeLocalImageIds(const std::vector<std::string>& _excludeLocalImageIds);

                    /**
                     * 判断参数 ExcludeLocalImageIds 是否已赋值
                     * @return ExcludeLocalImageIds 是否已赋值
                     * 
                     */
                    bool ExcludeLocalImageIdsHasBeenSet() const;

                    /**
                     * 获取根据满足条件的镜像授权,同时排除的仓库镜像。
                     * @return ExcludeRegistryImageIds 根据满足条件的镜像授权,同时排除的仓库镜像。
                     * 
                     */
                    std::vector<std::string> GetExcludeRegistryImageIds() const;

                    /**
                     * 设置根据满足条件的镜像授权,同时排除的仓库镜像。
                     * @param _excludeRegistryImageIds 根据满足条件的镜像授权,同时排除的仓库镜像。
                     * 
                     */
                    void SetExcludeRegistryImageIds(const std::vector<std::string>& _excludeRegistryImageIds);

                    /**
                     * 判断参数 ExcludeRegistryImageIds 是否已赋值
                     * @return ExcludeRegistryImageIds 是否已赋值
                     * 
                     */
                    bool ExcludeRegistryImageIdsHasBeenSet() const;

                    /**
                     * 获取根据本地镜像ids授权，优先权高于根据满足条件的镜像授权。AllLocalImages为false且LocalImageFilter为空和UpdatedLocalImageCnt大于0时，需要。
                     * @return LocalImageIds 根据本地镜像ids授权，优先权高于根据满足条件的镜像授权。AllLocalImages为false且LocalImageFilter为空和UpdatedLocalImageCnt大于0时，需要。
                     * 
                     */
                    std::vector<std::string> GetLocalImageIds() const;

                    /**
                     * 设置根据本地镜像ids授权，优先权高于根据满足条件的镜像授权。AllLocalImages为false且LocalImageFilter为空和UpdatedLocalImageCnt大于0时，需要。
                     * @param _localImageIds 根据本地镜像ids授权，优先权高于根据满足条件的镜像授权。AllLocalImages为false且LocalImageFilter为空和UpdatedLocalImageCnt大于0时，需要。
                     * 
                     */
                    void SetLocalImageIds(const std::vector<std::string>& _localImageIds);

                    /**
                     * 判断参数 LocalImageIds 是否已赋值
                     * @return LocalImageIds 是否已赋值
                     * 
                     */
                    bool LocalImageIdsHasBeenSet() const;

                    /**
                     * 获取根据仓库镜像Ids授权，优先权高于根据满足条件的镜像授。AllRegistryImages为false且RegistryImageFilter为空和UpdatedRegistryImageCnt大于0时，需要。
                     * @return RegistryImageIds 根据仓库镜像Ids授权，优先权高于根据满足条件的镜像授。AllRegistryImages为false且RegistryImageFilter为空和UpdatedRegistryImageCnt大于0时，需要。
                     * 
                     */
                    std::vector<std::string> GetRegistryImageIds() const;

                    /**
                     * 设置根据仓库镜像Ids授权，优先权高于根据满足条件的镜像授。AllRegistryImages为false且RegistryImageFilter为空和UpdatedRegistryImageCnt大于0时，需要。
                     * @param _registryImageIds 根据仓库镜像Ids授权，优先权高于根据满足条件的镜像授。AllRegistryImages为false且RegistryImageFilter为空和UpdatedRegistryImageCnt大于0时，需要。
                     * 
                     */
                    void SetRegistryImageIds(const std::vector<std::string>& _registryImageIds);

                    /**
                     * 判断参数 RegistryImageIds 是否已赋值
                     * @return RegistryImageIds 是否已赋值
                     * 
                     */
                    bool RegistryImageIdsHasBeenSet() const;

                    /**
                     * 获取是否仅最新的镜像；RegistryImageFilter不为空且UpdatedRegistryImageCnt大于0时仓库镜像需要。
                     * @return OnlyShowLatest 是否仅最新的镜像；RegistryImageFilter不为空且UpdatedRegistryImageCnt大于0时仓库镜像需要。
                     * 
                     */
                    bool GetOnlyShowLatest() const;

                    /**
                     * 设置是否仅最新的镜像；RegistryImageFilter不为空且UpdatedRegistryImageCnt大于0时仓库镜像需要。
                     * @param _onlyShowLatest 是否仅最新的镜像；RegistryImageFilter不为空且UpdatedRegistryImageCnt大于0时仓库镜像需要。
                     * 
                     */
                    void SetOnlyShowLatest(const bool& _onlyShowLatest);

                    /**
                     * 判断参数 OnlyShowLatest 是否已赋值
                     * @return OnlyShowLatest 是否已赋值
                     * 
                     */
                    bool OnlyShowLatestHasBeenSet() const;

                private:

                    /**
                     * 本地镜像是否全部授权的标识，优先权高于根据本地镜像ids授权。等于true时需UpdatedLocalImageCnt大于0。
                     */
                    bool m_allLocalImages;
                    bool m_allLocalImagesHasBeenSet;

                    /**
                     * 仓库镜像是否全部授权的标识，优先权高于根据镜像ids授权。等于true时需UpdatedRegistryImageCnt大于0。
                     */
                    bool m_allRegistryImages;
                    bool m_allRegistryImagesHasBeenSet;

                    /**
                     * 指定操作授权的本地镜像数量，判断优先权最高，实际多出的镜像随机忽略，实际不足的部分也忽略。
                     */
                    uint64_t m_updatedLocalImageCnt;
                    bool m_updatedLocalImageCntHasBeenSet;

                    /**
                     * 指定操作授权的仓库镜像数量，判断优先权最高，实际多出的镜像随机忽略，实际不足的部分也忽略；
                     */
                    uint64_t m_updatedRegistryImageCnt;
                    bool m_updatedRegistryImageCntHasBeenSet;

                    /**
                     * 根据满足条件的本地镜像授权,本地镜像来源；ASSETIMAGE:本地镜像列表；IMAGEALL:同步本地镜像；AllLocalImages为false且LocalImageIds为空和UpdatedLocalImageCnt大于0时，需要
                     */
                    std::string m_imageSourceType;
                    bool m_imageSourceTypeHasBeenSet;

                    /**
                     * 根据满足条件的本地镜像授权，AllLocalImages为false且LocalImageIds为空和UpdatedLocalImageCnt大于0时，需要。
                     */
                    std::vector<AssetFilters> m_localImageFilter;
                    bool m_localImageFilterHasBeenSet;

                    /**
                     * 根据满足条件的仓库镜像授权，AllRegistryImages为false且RegistryImageIds为空和UpdatedRegistryImageCnt大于0时，需要。
                     */
                    std::vector<AssetFilters> m_registryImageFilter;
                    bool m_registryImageFilterHasBeenSet;

                    /**
                     * 根据满足条件的镜像授权,同时排除的本地镜像。
                     */
                    std::vector<std::string> m_excludeLocalImageIds;
                    bool m_excludeLocalImageIdsHasBeenSet;

                    /**
                     * 根据满足条件的镜像授权,同时排除的仓库镜像。
                     */
                    std::vector<std::string> m_excludeRegistryImageIds;
                    bool m_excludeRegistryImageIdsHasBeenSet;

                    /**
                     * 根据本地镜像ids授权，优先权高于根据满足条件的镜像授权。AllLocalImages为false且LocalImageFilter为空和UpdatedLocalImageCnt大于0时，需要。
                     */
                    std::vector<std::string> m_localImageIds;
                    bool m_localImageIdsHasBeenSet;

                    /**
                     * 根据仓库镜像Ids授权，优先权高于根据满足条件的镜像授。AllRegistryImages为false且RegistryImageFilter为空和UpdatedRegistryImageCnt大于0时，需要。
                     */
                    std::vector<std::string> m_registryImageIds;
                    bool m_registryImageIdsHasBeenSet;

                    /**
                     * 是否仅最新的镜像；RegistryImageFilter不为空且UpdatedRegistryImageCnt大于0时仓库镜像需要。
                     */
                    bool m_onlyShowLatest;
                    bool m_onlyShowLatestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYIMAGEAUTHORIZEDREQUEST_H_
