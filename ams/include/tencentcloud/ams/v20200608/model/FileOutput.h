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

#ifndef TENCENTCLOUD_AMS_V20200608_MODEL_FILEOUTPUT_H_
#define TENCENTCLOUD_AMS_V20200608_MODEL_FILEOUTPUT_H_

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
                * Cos FileOutput 
                */
                class FileOutput : public AbstractModel
                {
                public:
                    FileOutput();
                    ~FileOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储的Bucket
                     * @return Bucket 存储的Bucket
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置存储的Bucket
                     * @param _bucket 存储的Bucket
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
                     * 获取Cos Region
                     * @return Region Cos Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Cos Region
                     * @param _region Cos Region
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
                     * 获取对象前缀
                     * @return ObjectPrefix 对象前缀
                     * 
                     */
                    std::string GetObjectPrefix() const;

                    /**
                     * 设置对象前缀
                     * @param _objectPrefix 对象前缀
                     * 
                     */
                    void SetObjectPrefix(const std::string& _objectPrefix);

                    /**
                     * 判断参数 ObjectPrefix 是否已赋值
                     * @return ObjectPrefix 是否已赋值
                     * 
                     */
                    bool ObjectPrefixHasBeenSet() const;

                private:

                    /**
                     * 存储的Bucket
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * Cos Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 对象前缀
                     */
                    std::string m_objectPrefix;
                    bool m_objectPrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20200608_MODEL_FILEOUTPUT_H_
