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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_COSINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_COSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/CosAuthMode.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 任务视频cos信息
                */
                class CosInfo : public AbstractModel
                {
                public:
                    CosInfo();
                    ~CosInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cos 区域值。例如：ap-beijing。
                     * @return Region cos 区域值。例如：ap-beijing。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置cos 区域值。例如：ap-beijing。
                     * @param _region cos 区域值。例如：ap-beijing。
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
                     * 获取cos 存储桶，格式为BuketName-AppId。例如：test-123456。
                     * @return Bucket cos 存储桶，格式为BuketName-AppId。例如：test-123456。
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置cos 存储桶，格式为BuketName-AppId。例如：test-123456。
                     * @param _bucket cos 存储桶，格式为BuketName-AppId。例如：test-123456。
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
                     * 获取cos 路径。 
对于写表示目录，例如：/test； 
对于读表示文件路径，例如：/test/test.mp4。
                     * @return Path cos 路径。 
对于写表示目录，例如：/test； 
对于读表示文件路径，例如：/test/test.mp4。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置cos 路径。 
对于写表示目录，例如：/test； 
对于读表示文件路径，例如：/test/test.mp4。
                     * @param _path cos 路径。 
对于写表示目录，例如：/test； 
对于读表示文件路径，例如：/test/test.mp4。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取cos 授权信息，不填默认为公有权限。
                     * @return CosAuthMode cos 授权信息，不填默认为公有权限。
                     * 
                     */
                    CosAuthMode GetCosAuthMode() const;

                    /**
                     * 设置cos 授权信息，不填默认为公有权限。
                     * @param _cosAuthMode cos 授权信息，不填默认为公有权限。
                     * 
                     */
                    void SetCosAuthMode(const CosAuthMode& _cosAuthMode);

                    /**
                     * 判断参数 CosAuthMode 是否已赋值
                     * @return CosAuthMode 是否已赋值
                     * 
                     */
                    bool CosAuthModeHasBeenSet() const;

                private:

                    /**
                     * cos 区域值。例如：ap-beijing。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * cos 存储桶，格式为BuketName-AppId。例如：test-123456。
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * cos 路径。 
对于写表示目录，例如：/test； 
对于读表示文件路径，例如：/test/test.mp4。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * cos 授权信息，不填默认为公有权限。
                     */
                    CosAuthMode m_cosAuthMode;
                    bool m_cosAuthModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_COSINFO_H_
