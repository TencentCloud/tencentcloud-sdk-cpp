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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_PACKINGQUOTAINFO_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_PACKINGQUOTAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 一组相关联的装箱配额信息
                */
                class PackingQuotaInfo : public AbstractModel
                {
                public:
                    PackingQuotaInfo();
                    ~PackingQuotaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例类型
                     * @return InstanceType 实例类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型
                     * @param _instanceType 实例类型
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取装箱配额
                     * @return PackingQuota 装箱配额
                     * 
                     */
                    int64_t GetPackingQuota() const;

                    /**
                     * 设置装箱配额
                     * @param _packingQuota 装箱配额
                     * 
                     */
                    void SetPackingQuota(const int64_t& _packingQuota);

                    /**
                     * 判断参数 PackingQuota 是否已赋值
                     * @return PackingQuota 是否已赋值
                     * 
                     */
                    bool PackingQuotaHasBeenSet() const;

                private:

                    /**
                     * 实例类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 装箱配额
                     */
                    int64_t m_packingQuota;
                    bool m_packingQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_PACKINGQUOTAINFO_H_
