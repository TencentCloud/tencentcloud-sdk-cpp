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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_PRECACHEIMAGE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_PRECACHEIMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 镜像预热产物
                */
                class PreCacheImage : public AbstractModel
                {
                public:
                    PreCacheImage();
                    ~PreCacheImage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>镜像地址</p>
                     * @return Image <p>镜像地址</p>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>镜像地址</p>
                     * @param _image <p>镜像地址</p>
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取<p>镜像 Digest</p>
                     * @return ImageDigest <p>镜像 Digest</p>
                     * 
                     */
                    std::string GetImageDigest() const;

                    /**
                     * 设置<p>镜像 Digest</p>
                     * @param _imageDigest <p>镜像 Digest</p>
                     * 
                     */
                    void SetImageDigest(const std::string& _imageDigest);

                    /**
                     * 判断参数 ImageDigest 是否已赋值
                     * @return ImageDigest 是否已赋值
                     * 
                     */
                    bool ImageDigestHasBeenSet() const;

                    /**
                     * 获取<p>镜像仓库类型：<code>enterprise</code>、<code>personal</code>、<code>custom</code> 。</p><p>枚举值：</p><ul><li>enterprise： tcr 企业容器镜像服务</li><li>personal： ccr 个人容器镜像服务</li></ul>
                     * @return ImageRegistryType <p>镜像仓库类型：<code>enterprise</code>、<code>personal</code>、<code>custom</code> 。</p><p>枚举值：</p><ul><li>enterprise： tcr 企业容器镜像服务</li><li>personal： ccr 个人容器镜像服务</li></ul>
                     * 
                     */
                    std::string GetImageRegistryType() const;

                    /**
                     * 设置<p>镜像仓库类型：<code>enterprise</code>、<code>personal</code>、<code>custom</code> 。</p><p>枚举值：</p><ul><li>enterprise： tcr 企业容器镜像服务</li><li>personal： ccr 个人容器镜像服务</li></ul>
                     * @param _imageRegistryType <p>镜像仓库类型：<code>enterprise</code>、<code>personal</code>、<code>custom</code> 。</p><p>枚举值：</p><ul><li>enterprise： tcr 企业容器镜像服务</li><li>personal： ccr 个人容器镜像服务</li></ul>
                     * 
                     */
                    void SetImageRegistryType(const std::string& _imageRegistryType);

                    /**
                     * 判断参数 ImageRegistryType 是否已赋值
                     * @return ImageRegistryType 是否已赋值
                     * 
                     */
                    bool ImageRegistryTypeHasBeenSet() const;

                    /**
                     * 获取<p>镜像预热状态</p>
                     * @return Status <p>镜像预热状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>镜像预热状态</p>
                     * @param _status <p>镜像预热状态</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>镜像预热创建时间</p>
                     * @return CreateTime <p>镜像预热创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>镜像预热创建时间</p>
                     * @param _createTime <p>镜像预热创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>镜像预热ID</p>
                     * @return PreCacheImageId <p>镜像预热ID</p>
                     * 
                     */
                    std::string GetPreCacheImageId() const;

                    /**
                     * 设置<p>镜像预热ID</p>
                     * @param _preCacheImageId <p>镜像预热ID</p>
                     * 
                     */
                    void SetPreCacheImageId(const std::string& _preCacheImageId);

                    /**
                     * 判断参数 PreCacheImageId 是否已赋值
                     * @return PreCacheImageId 是否已赋值
                     * 
                     */
                    bool PreCacheImageIdHasBeenSet() const;

                    /**
                     * 获取<p>镜像预热来源</p><p>枚举值：</p><ul><li>AUTO： Sandbox Tool / Instance 自动预热</li><li>EXPLICIT： 手动预热</li><li>TCR_AUTO： TCR自动预热</li></ul>
                     * @return SourceType <p>镜像预热来源</p><p>枚举值：</p><ul><li>AUTO： Sandbox Tool / Instance 自动预热</li><li>EXPLICIT： 手动预热</li><li>TCR_AUTO： TCR自动预热</li></ul>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置<p>镜像预热来源</p><p>枚举值：</p><ul><li>AUTO： Sandbox Tool / Instance 自动预热</li><li>EXPLICIT： 手动预热</li><li>TCR_AUTO： TCR自动预热</li></ul>
                     * @param _sourceType <p>镜像预热来源</p><p>枚举值：</p><ul><li>AUTO： Sandbox Tool / Instance 自动预热</li><li>EXPLICIT： 手动预热</li><li>TCR_AUTO： TCR自动预热</li></ul>
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>镜像预热存储大小</p><p>单位：Byte</p>
                     * @return CachedImageSizeBytes <p>镜像预热存储大小</p><p>单位：Byte</p>
                     * 
                     */
                    int64_t GetCachedImageSizeBytes() const;

                    /**
                     * 设置<p>镜像预热存储大小</p><p>单位：Byte</p>
                     * @param _cachedImageSizeBytes <p>镜像预热存储大小</p><p>单位：Byte</p>
                     * 
                     */
                    void SetCachedImageSizeBytes(const int64_t& _cachedImageSizeBytes);

                    /**
                     * 判断参数 CachedImageSizeBytes 是否已赋值
                     * @return CachedImageSizeBytes 是否已赋值
                     * 
                     */
                    bool CachedImageSizeBytesHasBeenSet() const;

                    /**
                     * 获取<p>该预热镜像最近一次被沙箱实例使用时间</p>
                     * @return LastUsedTime <p>该预热镜像最近一次被沙箱实例使用时间</p>
                     * 
                     */
                    std::string GetLastUsedTime() const;

                    /**
                     * 设置<p>该预热镜像最近一次被沙箱实例使用时间</p>
                     * @param _lastUsedTime <p>该预热镜像最近一次被沙箱实例使用时间</p>
                     * 
                     */
                    void SetLastUsedTime(const std::string& _lastUsedTime);

                    /**
                     * 判断参数 LastUsedTime 是否已赋值
                     * @return LastUsedTime 是否已赋值
                     * 
                     */
                    bool LastUsedTimeHasBeenSet() const;

                private:

                    /**
                     * <p>镜像地址</p>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>镜像 Digest</p>
                     */
                    std::string m_imageDigest;
                    bool m_imageDigestHasBeenSet;

                    /**
                     * <p>镜像仓库类型：<code>enterprise</code>、<code>personal</code>、<code>custom</code> 。</p><p>枚举值：</p><ul><li>enterprise： tcr 企业容器镜像服务</li><li>personal： ccr 个人容器镜像服务</li></ul>
                     */
                    std::string m_imageRegistryType;
                    bool m_imageRegistryTypeHasBeenSet;

                    /**
                     * <p>镜像预热状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>镜像预热创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>镜像预热ID</p>
                     */
                    std::string m_preCacheImageId;
                    bool m_preCacheImageIdHasBeenSet;

                    /**
                     * <p>镜像预热来源</p><p>枚举值：</p><ul><li>AUTO： Sandbox Tool / Instance 自动预热</li><li>EXPLICIT： 手动预热</li><li>TCR_AUTO： TCR自动预热</li></ul>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>镜像预热存储大小</p><p>单位：Byte</p>
                     */
                    int64_t m_cachedImageSizeBytes;
                    bool m_cachedImageSizeBytesHasBeenSet;

                    /**
                     * <p>该预热镜像最近一次被沙箱实例使用时间</p>
                     */
                    std::string m_lastUsedTime;
                    bool m_lastUsedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_PRECACHEIMAGE_H_
