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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_VODOUTPUTSTORAGE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_VODOUTPUTSTORAGE_H_

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
                * 媒体处理 VOD输出对象信息。
                */
                class VODOutputStorage : public AbstractModel
                {
                public:
                    VODOutputStorage();
                    ~VODOutputStorage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>媒体处理生成的文件输出的目标 <em>Bucket ID</em></p>
                     * @return Bucket <p>媒体处理生成的文件输出的目标 <em>Bucket ID</em></p>
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置<p>媒体处理生成的文件输出的目标 <em>Bucket ID</em></p>
                     * @param _bucket <p>媒体处理生成的文件输出的目标 <em>Bucket ID</em></p>
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
                     * 获取<p>媒体处理生成的文件输出的目标 Bucket 的园区</p>
                     * @return Region <p>媒体处理生成的文件输出的目标 Bucket 的园区</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>媒体处理生成的文件输出的目标 Bucket 的园区</p>
                     * @param _region <p>媒体处理生成的文件输出的目标 Bucket 的园区</p>
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
                     * 获取<p>点播应用Id</p>
                     * @return SubAppId <p>点播应用Id</p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p>点播应用Id</p>
                     * @param _subAppId <p>点播应用Id</p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>任务输出是否使用VOD标准版。<br>注意：不填表示使用VOD专业版。</p><p>枚举值：</p><ul><li>0： 不使用VOD标准版</li><li>1： 使用VOD标准版</li></ul>
                     * @return VodBasic <p>任务输出是否使用VOD标准版。<br>注意：不填表示使用VOD专业版。</p><p>枚举值：</p><ul><li>0： 不使用VOD标准版</li><li>1： 使用VOD标准版</li></ul>
                     * 
                     */
                    int64_t GetVodBasic() const;

                    /**
                     * 设置<p>任务输出是否使用VOD标准版。<br>注意：不填表示使用VOD专业版。</p><p>枚举值：</p><ul><li>0： 不使用VOD标准版</li><li>1： 使用VOD标准版</li></ul>
                     * @param _vodBasic <p>任务输出是否使用VOD标准版。<br>注意：不填表示使用VOD专业版。</p><p>枚举值：</p><ul><li>0： 不使用VOD标准版</li><li>1： 使用VOD标准版</li></ul>
                     * 
                     */
                    void SetVodBasic(const int64_t& _vodBasic);

                    /**
                     * 判断参数 VodBasic 是否已赋值
                     * @return VodBasic 是否已赋值
                     * 
                     */
                    bool VodBasicHasBeenSet() const;

                private:

                    /**
                     * <p>媒体处理生成的文件输出的目标 <em>Bucket ID</em></p>
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * <p>媒体处理生成的文件输出的目标 Bucket 的园区</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>点播应用Id</p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>任务输出是否使用VOD标准版。<br>注意：不填表示使用VOD专业版。</p><p>枚举值：</p><ul><li>0： 不使用VOD标准版</li><li>1： 使用VOD标准版</li></ul>
                     */
                    int64_t m_vodBasic;
                    bool m_vodBasicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VODOUTPUTSTORAGE_H_
