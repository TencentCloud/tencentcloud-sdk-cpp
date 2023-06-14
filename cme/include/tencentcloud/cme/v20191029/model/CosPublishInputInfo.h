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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_COSPUBLISHINPUTINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_COSPUBLISHINPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * COS 发布信息。
                */
                class CosPublishInputInfo : public AbstractModel
                {
                public:
                    CosPublishInputInfo();
                    ~CosPublishInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发布生成的对象存储文件所在的 COS Bucket 名，如 TopRankVideo-125xxx88。
                     * @return Bucket 发布生成的对象存储文件所在的 COS Bucket 名，如 TopRankVideo-125xxx88。
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置发布生成的对象存储文件所在的 COS Bucket 名，如 TopRankVideo-125xxx88。
                     * @param _bucket 发布生成的对象存储文件所在的 COS Bucket 名，如 TopRankVideo-125xxx88。
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取发布生成的对象存储文件所在的 COS Bucket 所属园区，如 ap-chongqing。
                     * @return Region 发布生成的对象存储文件所在的 COS Bucket 所属园区，如 ap-chongqing。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置发布生成的对象存储文件所在的 COS Bucket 所属园区，如 ap-chongqing。
                     * @param _region 发布生成的对象存储文件所在的 COS Bucket 所属园区，如 ap-chongqing。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取发布生成的视频在 COS 存储的对象键。对象键（ObjectKey）是对象（Object）在存储桶（Bucket）中的唯一标识。
                     * @return VideoKey 发布生成的视频在 COS 存储的对象键。对象键（ObjectKey）是对象（Object）在存储桶（Bucket）中的唯一标识。
                     * 
                     */
                    std::string GetVideoKey() const;

                    /**
                     * 设置发布生成的视频在 COS 存储的对象键。对象键（ObjectKey）是对象（Object）在存储桶（Bucket）中的唯一标识。
                     * @param _videoKey 发布生成的视频在 COS 存储的对象键。对象键（ObjectKey）是对象（Object）在存储桶（Bucket）中的唯一标识。
                     * 
                     */
                    void SetVideoKey(const std::string& _videoKey);

                    /**
                     * 判断参数 VideoKey 是否已赋值
                     * @return VideoKey 是否已赋值
                     * 
                     */
                    bool VideoKeyHasBeenSet() const;

                    /**
                     * 获取发布生成的封面在 COS 存储的对象键。
                     * @return CoverKey 发布生成的封面在 COS 存储的对象键。
                     * 
                     */
                    std::string GetCoverKey() const;

                    /**
                     * 设置发布生成的封面在 COS 存储的对象键。
                     * @param _coverKey 发布生成的封面在 COS 存储的对象键。
                     * 
                     */
                    void SetCoverKey(const std::string& _coverKey);

                    /**
                     * 判断参数 CoverKey 是否已赋值
                     * @return CoverKey 是否已赋值
                     * 
                     */
                    bool CoverKeyHasBeenSet() const;

                private:

                    /**
                     * 发布生成的对象存储文件所在的 COS Bucket 名，如 TopRankVideo-125xxx88。
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 发布生成的对象存储文件所在的 COS Bucket 所属园区，如 ap-chongqing。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 发布生成的视频在 COS 存储的对象键。对象键（ObjectKey）是对象（Object）在存储桶（Bucket）中的唯一标识。
                     */
                    std::string m_videoKey;
                    bool m_videoKeyHasBeenSet;

                    /**
                     * 发布生成的封面在 COS 存储的对象键。
                     */
                    std::string m_coverKey;
                    bool m_coverKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_COSPUBLISHINPUTINFO_H_
