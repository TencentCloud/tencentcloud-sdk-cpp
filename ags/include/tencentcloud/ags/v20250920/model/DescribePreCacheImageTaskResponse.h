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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEPRECACHEIMAGETASKRESPONSE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEPRECACHEIMAGETASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribePreCacheImageTask返回参数结构体
                */
                class DescribePreCacheImageTaskResponse : public AbstractModel
                {
                public:
                    DescribePreCacheImageTaskResponse();
                    ~DescribePreCacheImageTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>镜像地址</p>
                     * @return Image <p>镜像地址</p>
                     * 
                     */
                    std::string GetImage() const;

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
                     * 判断参数 ImageDigest 是否已赋值
                     * @return ImageDigest 是否已赋值
                     * 
                     */
                    bool ImageDigestHasBeenSet() const;

                    /**
                     * 获取<p>镜像仓库类型：<code>enterprise</code>、<code>personal</code>。</p>
                     * @return ImageRegistryType <p>镜像仓库类型：<code>enterprise</code>、<code>personal</code>。</p>
                     * 
                     */
                    std::string GetImageRegistryType() const;

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
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>镜像预热状态描述</p>
                     * @return Message <p>镜像预热状态描述</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>镜像预热创建时间</p>
                     * @return CreateTime <p>镜像预热创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

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
                     * 判断参数 PreCacheImageId 是否已赋值
                     * @return PreCacheImageId 是否已赋值
                     * 
                     */
                    bool PreCacheImageIdHasBeenSet() const;

                    /**
                     * 获取<p>镜像预热资源的来源类型，取值为 EXPLICIT、AUTO</p><p>枚举值：</p><ul><li>EXPLICIT： 手动创建</li><li>AUTO： 自动创建</li><li>TCR_AUTO： TCR自动预热</li></ul>
                     * @return SourceType <p>镜像预热资源的来源类型，取值为 EXPLICIT、AUTO</p><p>枚举值：</p><ul><li>EXPLICIT： 手动创建</li><li>AUTO： 自动创建</li><li>TCR_AUTO： TCR自动预热</li></ul>
                     * 
                     */
                    std::string GetSourceType() const;

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
                     * <p>镜像仓库类型：<code>enterprise</code>、<code>personal</code>。</p>
                     */
                    std::string m_imageRegistryType;
                    bool m_imageRegistryTypeHasBeenSet;

                    /**
                     * <p>镜像预热状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>镜像预热状态描述</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

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
                     * <p>镜像预热资源的来源类型，取值为 EXPLICIT、AUTO</p><p>枚举值：</p><ul><li>EXPLICIT： 手动创建</li><li>AUTO： 自动创建</li><li>TCR_AUTO： TCR自动预热</li></ul>
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

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEPRECACHEIMAGETASKRESPONSE_H_
