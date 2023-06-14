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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COSOUTPUTSTORAGE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COSOUTPUTSTORAGE_H_

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
                * 媒体处理 COS 输出对象信息。
                */
                class CosOutputStorage : public AbstractModel
                {
                public:
                    CosOutputStorage();
                    ~CosOutputStorage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒体处理生成的文件输出的目标 Bucket 名，如 TopRankVideo-125xxx88。如果不填，表示继承上层。
                     * @return Bucket 媒体处理生成的文件输出的目标 Bucket 名，如 TopRankVideo-125xxx88。如果不填，表示继承上层。
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置媒体处理生成的文件输出的目标 Bucket 名，如 TopRankVideo-125xxx88。如果不填，表示继承上层。
                     * @param _bucket 媒体处理生成的文件输出的目标 Bucket 名，如 TopRankVideo-125xxx88。如果不填，表示继承上层。
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
                     * 获取媒体处理生成的文件输出的目标 Bucket 的园区，如 ap-chongqing。如果不填，表示继承上层。
                     * @return Region 媒体处理生成的文件输出的目标 Bucket 的园区，如 ap-chongqing。如果不填，表示继承上层。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置媒体处理生成的文件输出的目标 Bucket 的园区，如 ap-chongqing。如果不填，表示继承上层。
                     * @param _region 媒体处理生成的文件输出的目标 Bucket 的园区，如 ap-chongqing。如果不填，表示继承上层。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * 媒体处理生成的文件输出的目标 Bucket 名，如 TopRankVideo-125xxx88。如果不填，表示继承上层。
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 媒体处理生成的文件输出的目标 Bucket 的园区，如 ap-chongqing。如果不填，表示继承上层。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COSOUTPUTSTORAGE_H_
