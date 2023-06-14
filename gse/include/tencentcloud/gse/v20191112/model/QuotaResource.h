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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_QUOTARESOURCE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_QUOTARESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 配额资源
                */
                class QuotaResource : public AbstractModel
                {
                public:
                    QuotaResource();
                    ~QuotaResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源类型，1生成包、2服务部署、3别名、4游戏服务器队列、5实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceType 资源类型，1生成包、2服务部署、3别名、4游戏服务器队列、5实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetResourceType() const;

                    /**
                     * 设置资源类型，1生成包、2服务部署、3别名、4游戏服务器队列、5实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceType 资源类型，1生成包、2服务部署、3别名、4游戏服务器队列、5实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceType(const uint64_t& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取总额度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HardLimit 总额度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetHardLimit() const;

                    /**
                     * 设置总额度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hardLimit 总额度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHardLimit(const uint64_t& _hardLimit);

                    /**
                     * 判断参数 HardLimit 是否已赋值
                     * @return HardLimit 是否已赋值
                     * 
                     */
                    bool HardLimitHasBeenSet() const;

                    /**
                     * 获取剩余额度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remaining 剩余额度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRemaining() const;

                    /**
                     * 设置剩余额度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remaining 剩余额度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemaining(const uint64_t& _remaining);

                    /**
                     * 判断参数 Remaining 是否已赋值
                     * @return Remaining 是否已赋值
                     * 
                     */
                    bool RemainingHasBeenSet() const;

                    /**
                     * 获取额外信息，可能为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraInfo 额外信息，可能为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置额外信息，可能为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraInfo 额外信息，可能为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtraInfo(const std::string& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                private:

                    /**
                     * 资源类型，1生成包、2服务部署、3别名、4游戏服务器队列、5实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 总额度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_hardLimit;
                    bool m_hardLimitHasBeenSet;

                    /**
                     * 剩余额度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_remaining;
                    bool m_remainingHasBeenSet;

                    /**
                     * 额外信息，可能为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_QUOTARESOURCE_H_
