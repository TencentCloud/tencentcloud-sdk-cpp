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

#ifndef TENCENTCLOUD_ZJ_V20190121_MODEL_UPLOADFANSINFOCOSINFO_H_
#define TENCENTCLOUD_ZJ_V20190121_MODEL_UPLOADFANSINFOCOSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Zj
    {
        namespace V20190121
        {
            namespace Model
            {
                /**
                * 接口返回给服务商的COS路径等信息
                */
                class UploadFansInfoCosInfo : public AbstractModel
                {
                public:
                    UploadFansInfoCosInfo();
                    ~UploadFansInfoCosInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取COS bucket
                     * @return Bucket COS bucket
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置COS bucket
                     * @param Bucket COS bucket
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取COS路径
                     * @return Key COS路径
                     */
                    std::string GetKey() const;

                    /**
                     * 设置COS路径
                     * @param Key COS路径
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取COS区域
                     * @return Region COS区域
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置COS区域
                     * @param Region COS区域
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * COS bucket
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * COS路径
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * COS区域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ZJ_V20190121_MODEL_UPLOADFANSINFOCOSINFO_H_
