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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_VODINPUTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_VODINPUTINFO_H_

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
                * 媒体处理 VOD 对象信息。
                */
                class VODInputInfo : public AbstractModel
                {
                public:
                    VODInputInfo();
                    ~VODInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>媒体处理对象文件所在的 <em>Bucket ID</em></p>
                     * @return Bucket <p>媒体处理对象文件所在的 <em>Bucket ID</em></p>
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置<p>媒体处理对象文件所在的 <em>Bucket ID</em></p>
                     * @param _bucket <p>媒体处理对象文件所在的 <em>Bucket ID</em></p>
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
                     * 获取<p>媒体处理对象文件所在的 Bucket 所属园区</p>
                     * @return Region <p>媒体处理对象文件所在的 Bucket 所属园区</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>媒体处理对象文件所在的 Bucket 所属园区</p>
                     * @param _region <p>媒体处理对象文件所在的 Bucket 所属园区</p>
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
                     * 获取<p>媒体处理对象文件的输入路径</p>
                     * @return Object <p>媒体处理对象文件的输入路径</p>
                     * 
                     */
                    std::string GetObject() const;

                    /**
                     * 设置<p>媒体处理对象文件的输入路径</p>
                     * @param _object <p>媒体处理对象文件的输入路径</p>
                     * 
                     */
                    void SetObject(const std::string& _object);

                    /**
                     * 判断参数 Object 是否已赋值
                     * @return Object 是否已赋值
                     * 
                     */
                    bool ObjectHasBeenSet() const;

                    /**
                     * 获取<p>点播应用Id。</p>
                     * @return SubAppId <p>点播应用Id。</p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p>点播应用Id。</p>
                     * @param _subAppId <p>点播应用Id。</p>
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
                     * 获取<p>是否使用VOD标准版。<br>注意：不填表示使用VOD专业版。</p><p>枚举值：</p><ul><li>0： 使用VOD专业版</li><li>1： 使用VOD标准版，可使用FileId发起任务</li></ul><p>默认值：0</p>
                     * @return VodBasic <p>是否使用VOD标准版。<br>注意：不填表示使用VOD专业版。</p><p>枚举值：</p><ul><li>0： 使用VOD专业版</li><li>1： 使用VOD标准版，可使用FileId发起任务</li></ul><p>默认值：0</p>
                     * 
                     */
                    int64_t GetVodBasic() const;

                    /**
                     * 设置<p>是否使用VOD标准版。<br>注意：不填表示使用VOD专业版。</p><p>枚举值：</p><ul><li>0： 使用VOD专业版</li><li>1： 使用VOD标准版，可使用FileId发起任务</li></ul><p>默认值：0</p>
                     * @param _vodBasic <p>是否使用VOD标准版。<br>注意：不填表示使用VOD专业版。</p><p>枚举值：</p><ul><li>0： 使用VOD专业版</li><li>1： 使用VOD标准版，可使用FileId发起任务</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetVodBasic(const int64_t& _vodBasic);

                    /**
                     * 判断参数 VodBasic 是否已赋值
                     * @return VodBasic 是否已赋值
                     * 
                     */
                    bool VodBasicHasBeenSet() const;

                    /**
                     * 获取<p>VOD标准版FileId</p>
                     * @return FileId <p>VOD标准版FileId</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>VOD标准版FileId</p>
                     * @param _fileId <p>VOD标准版FileId</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                private:

                    /**
                     * <p>媒体处理对象文件所在的 <em>Bucket ID</em></p>
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * <p>媒体处理对象文件所在的 Bucket 所属园区</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>媒体处理对象文件的输入路径</p>
                     */
                    std::string m_object;
                    bool m_objectHasBeenSet;

                    /**
                     * <p>点播应用Id。</p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>是否使用VOD标准版。<br>注意：不填表示使用VOD专业版。</p><p>枚举值：</p><ul><li>0： 使用VOD专业版</li><li>1： 使用VOD标准版，可使用FileId发起任务</li></ul><p>默认值：0</p>
                     */
                    int64_t m_vodBasic;
                    bool m_vodBasicHasBeenSet;

                    /**
                     * <p>VOD标准版FileId</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VODINPUTINFO_H_
