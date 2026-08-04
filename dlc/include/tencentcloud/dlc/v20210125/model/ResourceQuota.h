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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_RESOURCEQUOTA_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_RESOURCEQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/ResourceSpec.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 资源配额
                */
                class ResourceQuota : public AbstractModel
                {
                public:
                    ResourceQuota();
                    ~ResourceQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>可售卖资源规格</p>
                     * @return ResourceSpec <p>可售卖资源规格</p>
                     * 
                     */
                    ResourceSpec GetResourceSpec() const;

                    /**
                     * 设置<p>可售卖资源规格</p>
                     * @param _resourceSpec <p>可售卖资源规格</p>
                     * 
                     */
                    void SetResourceSpec(const ResourceSpec& _resourceSpec);

                    /**
                     * 判断参数 ResourceSpec 是否已赋值
                     * @return ResourceSpec 是否已赋值
                     * 
                     */
                    bool ResourceSpecHasBeenSet() const;

                    /**
                     * 获取<p>配额数量</p>
                     * @return Quota <p>配额数量</p>
                     * 
                     */
                    int64_t GetQuota() const;

                    /**
                     * 设置<p>配额数量</p>
                     * @param _quota <p>配额数量</p>
                     * 
                     */
                    void SetQuota(const int64_t& _quota);

                    /**
                     * 判断参数 Quota 是否已赋值
                     * @return Quota 是否已赋值
                     * 
                     */
                    bool QuotaHasBeenSet() const;

                private:

                    /**
                     * <p>可售卖资源规格</p>
                     */
                    ResourceSpec m_resourceSpec;
                    bool m_resourceSpecHasBeenSet;

                    /**
                     * <p>配额数量</p>
                     */
                    int64_t m_quota;
                    bool m_quotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_RESOURCEQUOTA_H_
