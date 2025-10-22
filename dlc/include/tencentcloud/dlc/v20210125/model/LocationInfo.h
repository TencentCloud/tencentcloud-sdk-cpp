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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LOCATIONINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LOCATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Location信息结构
                */
                class LocationInfo : public AbstractModel
                {
                public:
                    LocationInfo();
                    ~LocationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取桶名称
                     * @return Bucket 桶名称
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置桶名称
                     * @param _bucket 桶名称
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
                     * 获取location路径
                     * @return DataLocation location路径
                     * 
                     */
                    std::string GetDataLocation() const;

                    /**
                     * 设置location路径
                     * @param _dataLocation location路径
                     * 
                     */
                    void SetDataLocation(const std::string& _dataLocation);

                    /**
                     * 判断参数 DataLocation 是否已赋值
                     * @return DataLocation 是否已赋值
                     * 
                     */
                    bool DataLocationHasBeenSet() const;

                private:

                    /**
                     * 桶名称
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * location路径
                     */
                    std::string m_dataLocation;
                    bool m_dataLocationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LOCATIONINFO_H_
