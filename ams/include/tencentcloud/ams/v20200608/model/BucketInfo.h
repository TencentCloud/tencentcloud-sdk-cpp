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

#ifndef TENCENTCLOUD_AMS_V20200608_MODEL_BUCKETINFO_H_
#define TENCENTCLOUD_AMS_V20200608_MODEL_BUCKETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20200608
        {
            namespace Model
            {
                /**
                * 文件桶信息
参考腾讯云存储相关说明 https://cloud.tencent.com/document/product/436/44352
                */
                class BucketInfo : public AbstractModel
                {
                public:
                    BucketInfo();
                    ~BucketInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取腾讯云对象存储，存储桶名称
                     * @return Bucket 腾讯云对象存储，存储桶名称
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置腾讯云对象存储，存储桶名称
                     * @param _bucket 腾讯云对象存储，存储桶名称
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
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
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
                     * 获取对象Key
                     * @return Object 对象Key
                     * 
                     */
                    std::string GetObject() const;

                    /**
                     * 设置对象Key
                     * @param _object 对象Key
                     * 
                     */
                    void SetObject(const std::string& _object);

                    /**
                     * 判断参数 Object 是否已赋值
                     * @return Object 是否已赋值
                     * 
                     */
                    bool ObjectHasBeenSet() const;

                private:

                    /**
                     * 腾讯云对象存储，存储桶名称
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 对象Key
                     */
                    std::string m_object;
                    bool m_objectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20200608_MODEL_BUCKETINFO_H_
