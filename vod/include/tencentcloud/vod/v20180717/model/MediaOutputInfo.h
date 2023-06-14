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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAOUTPUTINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAOUTPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 视频处理输出文件信息参数。
                */
                class MediaOutputInfo : public AbstractModel
                {
                public:
                    MediaOutputInfo();
                    ~MediaOutputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输出文件 Bucket 所属地域，如 ap-guangzhou  。
                     * @return Region 输出文件 Bucket 所属地域，如 ap-guangzhou  。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置输出文件 Bucket 所属地域，如 ap-guangzhou  。
                     * @param _region 输出文件 Bucket 所属地域，如 ap-guangzhou  。
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
                     * 获取输出文件 Bucket 。
                     * @return Bucket 输出文件 Bucket 。
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置输出文件 Bucket 。
                     * @param _bucket 输出文件 Bucket 。
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
                     * 获取输出文件目录，目录名必须以 "/" 结尾。
                     * @return Dir 输出文件目录，目录名必须以 "/" 结尾。
                     * 
                     */
                    std::string GetDir() const;

                    /**
                     * 设置输出文件目录，目录名必须以 "/" 结尾。
                     * @param _dir 输出文件目录，目录名必须以 "/" 结尾。
                     * 
                     */
                    void SetDir(const std::string& _dir);

                    /**
                     * 判断参数 Dir 是否已赋值
                     * @return Dir 是否已赋值
                     * 
                     */
                    bool DirHasBeenSet() const;

                private:

                    /**
                     * 输出文件 Bucket 所属地域，如 ap-guangzhou  。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 输出文件 Bucket 。
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 输出文件目录，目录名必须以 "/" 结尾。
                     */
                    std::string m_dir;
                    bool m_dirHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAOUTPUTINFO_H_
