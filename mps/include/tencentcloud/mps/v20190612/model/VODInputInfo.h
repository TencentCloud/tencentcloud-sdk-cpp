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
                * 媒体处理 VOD （点播专业版）对象信息。
                */
                class VODInputInfo : public AbstractModel
                {
                public:
                    VODInputInfo();
                    ~VODInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒体处理对象文件所在的 *Bucket ID*
                     * @return Bucket 媒体处理对象文件所在的 *Bucket ID*
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置媒体处理对象文件所在的 *Bucket ID*
                     * @param _bucket 媒体处理对象文件所在的 *Bucket ID*
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
                     * 获取媒体处理对象文件所在的 Bucket 所属园区
                     * @return Region 媒体处理对象文件所在的 Bucket 所属园区
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置媒体处理对象文件所在的 Bucket 所属园区
                     * @param _region 媒体处理对象文件所在的 Bucket 所属园区
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
                     * 获取媒体处理对象文件的输入路径
                     * @return Object 媒体处理对象文件的输入路径
                     * 
                     */
                    std::string GetObject() const;

                    /**
                     * 设置媒体处理对象文件的输入路径
                     * @param _object 媒体处理对象文件的输入路径
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
                     * 获取点播专业版应用Id
                     * @return SubAppId 点播专业版应用Id
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置点播专业版应用Id
                     * @param _subAppId 点播专业版应用Id
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * 媒体处理对象文件所在的 *Bucket ID*
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 媒体处理对象文件所在的 Bucket 所属园区
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 媒体处理对象文件的输入路径
                     */
                    std::string m_object;
                    bool m_objectHasBeenSet;

                    /**
                     * 点播专业版应用Id
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VODINPUTINFO_H_
