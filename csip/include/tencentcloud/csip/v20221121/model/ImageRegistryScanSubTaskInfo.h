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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYSCANSUBTASKINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYSCANSUBTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 镜像仓库扫描子任务信息
                */
                class ImageRegistryScanSubTaskInfo : public AbstractModel
                {
                public:
                    ImageRegistryScanSubTaskInfo();
                    ~ImageRegistryScanSubTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务子id</p>
                     * @return SubTaskId <p>任务子id</p>
                     * 
                     */
                    uint64_t GetSubTaskId() const;

                    /**
                     * 设置<p>任务子id</p>
                     * @param _subTaskId <p>任务子id</p>
                     * 
                     */
                    void SetSubTaskId(const uint64_t& _subTaskId);

                    /**
                     * 判断参数 SubTaskId 是否已赋值
                     * @return SubTaskId 是否已赋值
                     * 
                     */
                    bool SubTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>镜像id</p>
                     * @return ImageId <p>镜像id</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>镜像id</p>
                     * @param _imageId <p>镜像id</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>镜像名</p>
                     * @return ImageName <p>镜像名</p>
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置<p>镜像名</p>
                     * @param _imageName <p>镜像名</p>
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取<p>镜像tag</p>
                     * @return ImageTag <p>镜像tag</p>
                     * 
                     */
                    std::string GetImageTag() const;

                    /**
                     * 设置<p>镜像tag</p>
                     * @param _imageTag <p>镜像tag</p>
                     * 
                     */
                    void SetImageTag(const std::string& _imageTag);

                    /**
                     * 判断参数 ImageTag 是否已赋值
                     * @return ImageTag 是否已赋值
                     * 
                     */
                    bool ImageTagHasBeenSet() const;

                    /**
                     * 获取<p>任务状态</p><p>枚举值：</p><ul><li>FINISHED： 扫描完成</li><li>SCANNING： 扫描中</li><li>CANCELLED： 已取消</li><li>SCAN_EXCEPTION： 扫描异常</li></ul>
                     * @return ScanStatus <p>任务状态</p><p>枚举值：</p><ul><li>FINISHED： 扫描完成</li><li>SCANNING： 扫描中</li><li>CANCELLED： 已取消</li><li>SCAN_EXCEPTION： 扫描异常</li></ul>
                     * 
                     */
                    std::string GetScanStatus() const;

                    /**
                     * 设置<p>任务状态</p><p>枚举值：</p><ul><li>FINISHED： 扫描完成</li><li>SCANNING： 扫描中</li><li>CANCELLED： 已取消</li><li>SCAN_EXCEPTION： 扫描异常</li></ul>
                     * @param _scanStatus <p>任务状态</p><p>枚举值：</p><ul><li>FINISHED： 扫描完成</li><li>SCANNING： 扫描中</li><li>CANCELLED： 已取消</li><li>SCAN_EXCEPTION： 扫描异常</li></ul>
                     * 
                     */
                    void SetScanStatus(const std::string& _scanStatus);

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     * 
                     */
                    bool ScanStatusHasBeenSet() const;

                    /**
                     * 获取<p>失败原因</p>
                     * @return FailedReason <p>失败原因</p>
                     * 
                     */
                    std::string GetFailedReason() const;

                    /**
                     * 设置<p>失败原因</p>
                     * @param _failedReason <p>失败原因</p>
                     * 
                     */
                    void SetFailedReason(const std::string& _failedReason);

                    /**
                     * 判断参数 FailedReason 是否已赋值
                     * @return FailedReason 是否已赋值
                     * 
                     */
                    bool FailedReasonHasBeenSet() const;

                    /**
                     * 获取<p>解决方案</p>
                     * @return Solution <p>解决方案</p>
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置<p>解决方案</p>
                     * @param _solution <p>解决方案</p>
                     * 
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     * 
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取<p>定时任务所属账号名</p>
                     * @return OwnerAccountName <p>定时任务所属账号名</p>
                     * 
                     */
                    std::string GetOwnerAccountName() const;

                    /**
                     * 设置<p>定时任务所属账号名</p>
                     * @param _ownerAccountName <p>定时任务所属账号名</p>
                     * 
                     */
                    void SetOwnerAccountName(const std::string& _ownerAccountName);

                    /**
                     * 判断参数 OwnerAccountName 是否已赋值
                     * @return OwnerAccountName 是否已赋值
                     * 
                     */
                    bool OwnerAccountNameHasBeenSet() const;

                    /**
                     * 获取<p>定时任务所属账号uin</p>
                     * @return OwnerUin <p>定时任务所属账号uin</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>定时任务所属账号uin</p>
                     * @param _ownerUin <p>定时任务所属账号uin</p>
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>定时任务所属账号appid</p>
                     * @return OwnerAppId <p>定时任务所属账号appid</p>
                     * 
                     */
                    uint64_t GetOwnerAppId() const;

                    /**
                     * 设置<p>定时任务所属账号appid</p>
                     * @param _ownerAppId <p>定时任务所属账号appid</p>
                     * 
                     */
                    void SetOwnerAppId(const uint64_t& _ownerAppId);

                    /**
                     * 判断参数 OwnerAppId 是否已赋值
                     * @return OwnerAppId 是否已赋值
                     * 
                     */
                    bool OwnerAppIdHasBeenSet() const;

                    /**
                     * 获取<p>是否最新镜像</p>
                     * @return IsLatestImage <p>是否最新镜像</p>
                     * 
                     */
                    bool GetIsLatestImage() const;

                    /**
                     * 设置<p>是否最新镜像</p>
                     * @param _isLatestImage <p>是否最新镜像</p>
                     * 
                     */
                    void SetIsLatestImage(const bool& _isLatestImage);

                    /**
                     * 判断参数 IsLatestImage 是否已赋值
                     * @return IsLatestImage 是否已赋值
                     * 
                     */
                    bool IsLatestImageHasBeenSet() const;

                    /**
                     * 获取<p>镜像地址</p>
                     * @return ImageRepoAddress <p>镜像地址</p>
                     * 
                     */
                    std::string GetImageRepoAddress() const;

                    /**
                     * 设置<p>镜像地址</p>
                     * @param _imageRepoAddress <p>镜像地址</p>
                     * 
                     */
                    void SetImageRepoAddress(const std::string& _imageRepoAddress);

                    /**
                     * 判断参数 ImageRepoAddress 是否已赋值
                     * @return ImageRepoAddress 是否已赋值
                     * 
                     */
                    bool ImageRepoAddressHasBeenSet() const;

                    /**
                     * 获取<p>镜像仓库类型</p>
                     * @return RegistryType <p>镜像仓库类型</p>
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置<p>镜像仓库类型</p>
                     * @param _registryType <p>镜像仓库类型</p>
                     * 
                     */
                    void SetRegistryType(const std::string& _registryType);

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     * 
                     */
                    bool RegistryTypeHasBeenSet() const;

                private:

                    /**
                     * <p>任务子id</p>
                     */
                    uint64_t m_subTaskId;
                    bool m_subTaskIdHasBeenSet;

                    /**
                     * <p>镜像id</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>镜像名</p>
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * <p>镜像tag</p>
                     */
                    std::string m_imageTag;
                    bool m_imageTagHasBeenSet;

                    /**
                     * <p>任务状态</p><p>枚举值：</p><ul><li>FINISHED： 扫描完成</li><li>SCANNING： 扫描中</li><li>CANCELLED： 已取消</li><li>SCAN_EXCEPTION： 扫描异常</li></ul>
                     */
                    std::string m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * <p>失败原因</p>
                     */
                    std::string m_failedReason;
                    bool m_failedReasonHasBeenSet;

                    /**
                     * <p>解决方案</p>
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * <p>定时任务所属账号名</p>
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                    /**
                     * <p>定时任务所属账号uin</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>定时任务所属账号appid</p>
                     */
                    uint64_t m_ownerAppId;
                    bool m_ownerAppIdHasBeenSet;

                    /**
                     * <p>是否最新镜像</p>
                     */
                    bool m_isLatestImage;
                    bool m_isLatestImageHasBeenSet;

                    /**
                     * <p>镜像地址</p>
                     */
                    std::string m_imageRepoAddress;
                    bool m_imageRepoAddressHasBeenSet;

                    /**
                     * <p>镜像仓库类型</p>
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYSCANSUBTASKINFO_H_
