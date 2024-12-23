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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYTASKCOSCONDITION_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYTASKCOSCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 描述对象存储类敏感识别扫描人元数据条件。
                */
                class DspaDiscoveryTaskCOSCondition : public AbstractModel
                {
                public:
                    DspaDiscoveryTaskCOSCondition();
                    ~DspaDiscoveryTaskCOSCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据桶名称
                     * @return Bucket 数据桶名称
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置数据桶名称
                     * @param _bucket 数据桶名称
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
                     * 获取文件类型
                     * @return FileTypes 文件类型
                     * 
                     */
                    std::vector<std::string> GetFileTypes() const;

                    /**
                     * 设置文件类型
                     * @param _fileTypes 文件类型
                     * 
                     */
                    void SetFileTypes(const std::vector<std::string>& _fileTypes);

                    /**
                     * 判断参数 FileTypes 是否已赋值
                     * @return FileTypes 是否已赋值
                     * 
                     */
                    bool FileTypesHasBeenSet() const;

                    /**
                     * 获取文件大小上限，单位为KB，如1000, 目前单个文件最大只支持1GB（1048576KB）
                     * @return FileSizeLimit 文件大小上限，单位为KB，如1000, 目前单个文件最大只支持1GB（1048576KB）
                     * 
                     */
                    int64_t GetFileSizeLimit() const;

                    /**
                     * 设置文件大小上限，单位为KB，如1000, 目前单个文件最大只支持1GB（1048576KB）
                     * @param _fileSizeLimit 文件大小上限，单位为KB，如1000, 目前单个文件最大只支持1GB（1048576KB）
                     * 
                     */
                    void SetFileSizeLimit(const int64_t& _fileSizeLimit);

                    /**
                     * 判断参数 FileSizeLimit 是否已赋值
                     * @return FileSizeLimit 是否已赋值
                     * 
                     */
                    bool FileSizeLimitHasBeenSet() const;

                private:

                    /**
                     * 数据桶名称
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 文件类型
                     */
                    std::vector<std::string> m_fileTypes;
                    bool m_fileTypesHasBeenSet;

                    /**
                     * 文件大小上限，单位为KB，如1000, 目前单个文件最大只支持1GB（1048576KB）
                     */
                    int64_t m_fileSizeLimit;
                    bool m_fileSizeLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYTASKCOSCONDITION_H_
