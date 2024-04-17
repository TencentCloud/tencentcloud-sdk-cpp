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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_COSBUCKETITEM_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_COSBUCKETITEM_H_

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
                * cos桶资源项
                */
                class CosBucketItem : public AbstractModel
                {
                public:
                    CosBucketItem();
                    ~CosBucketItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源所处地域。
                     * @return Region 资源所处地域。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置资源所处地域。
                     * @param _region 资源所处地域。
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
                     * 获取COS桶列表。
                     * @return Buckets COS桶列表。
                     * 
                     */
                    std::vector<std::string> GetBuckets() const;

                    /**
                     * 设置COS桶列表。
                     * @param _buckets COS桶列表。
                     * 
                     */
                    void SetBuckets(const std::vector<std::string>& _buckets);

                    /**
                     * 判断参数 Buckets 是否已赋值
                     * @return Buckets 是否已赋值
                     * 
                     */
                    bool BucketsHasBeenSet() const;

                private:

                    /**
                     * 资源所处地域。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * COS桶列表。
                     */
                    std::vector<std::string> m_buckets;
                    bool m_bucketsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_COSBUCKETITEM_H_
