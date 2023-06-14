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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COSFILEUPLOADTRIGGER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COSFILEUPLOADTRIGGER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 绑定到 COS 的输入规则。
                */
                class CosFileUploadTrigger : public AbstractModel
                {
                public:
                    CosFileUploadTrigger();
                    ~CosFileUploadTrigger() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作流绑定的 COS Bucket 名，如 TopRankVideo-125xxx88。
                     * @return Bucket 工作流绑定的 COS Bucket 名，如 TopRankVideo-125xxx88。
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置工作流绑定的 COS Bucket 名，如 TopRankVideo-125xxx88。
                     * @param _bucket 工作流绑定的 COS Bucket 名，如 TopRankVideo-125xxx88。
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
                     * 获取工作流绑定的 COS Bucket 所属园区，如 ap-chongiqng。
                     * @return Region 工作流绑定的 COS Bucket 所属园区，如 ap-chongiqng。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置工作流绑定的 COS Bucket 所属园区，如 ap-chongiqng。
                     * @param _region 工作流绑定的 COS Bucket 所属园区，如 ap-chongiqng。
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
                     * 获取工作流绑定的输入路径目录，必须为绝对路径，即以 `/` 开头和结尾。如`/movie/201907/`，不填代表根目录`/`。
                     * @return Dir 工作流绑定的输入路径目录，必须为绝对路径，即以 `/` 开头和结尾。如`/movie/201907/`，不填代表根目录`/`。
                     * 
                     */
                    std::string GetDir() const;

                    /**
                     * 设置工作流绑定的输入路径目录，必须为绝对路径，即以 `/` 开头和结尾。如`/movie/201907/`，不填代表根目录`/`。
                     * @param _dir 工作流绑定的输入路径目录，必须为绝对路径，即以 `/` 开头和结尾。如`/movie/201907/`，不填代表根目录`/`。
                     * 
                     */
                    void SetDir(const std::string& _dir);

                    /**
                     * 判断参数 Dir 是否已赋值
                     * @return Dir 是否已赋值
                     * 
                     */
                    bool DirHasBeenSet() const;

                    /**
                     * 获取工作流允许触发的文件格式列表，如 ["mp4", "flv", "mov"]。不填代表所有格式的文件都可以触发工作流。
                     * @return Formats 工作流允许触发的文件格式列表，如 ["mp4", "flv", "mov"]。不填代表所有格式的文件都可以触发工作流。
                     * 
                     */
                    std::vector<std::string> GetFormats() const;

                    /**
                     * 设置工作流允许触发的文件格式列表，如 ["mp4", "flv", "mov"]。不填代表所有格式的文件都可以触发工作流。
                     * @param _formats 工作流允许触发的文件格式列表，如 ["mp4", "flv", "mov"]。不填代表所有格式的文件都可以触发工作流。
                     * 
                     */
                    void SetFormats(const std::vector<std::string>& _formats);

                    /**
                     * 判断参数 Formats 是否已赋值
                     * @return Formats 是否已赋值
                     * 
                     */
                    bool FormatsHasBeenSet() const;

                private:

                    /**
                     * 工作流绑定的 COS Bucket 名，如 TopRankVideo-125xxx88。
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 工作流绑定的 COS Bucket 所属园区，如 ap-chongiqng。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 工作流绑定的输入路径目录，必须为绝对路径，即以 `/` 开头和结尾。如`/movie/201907/`，不填代表根目录`/`。
                     */
                    std::string m_dir;
                    bool m_dirHasBeenSet;

                    /**
                     * 工作流允许触发的文件格式列表，如 ["mp4", "flv", "mov"]。不填代表所有格式的文件都可以触发工作流。
                     */
                    std::vector<std::string> m_formats;
                    bool m_formatsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COSFILEUPLOADTRIGGER_H_
