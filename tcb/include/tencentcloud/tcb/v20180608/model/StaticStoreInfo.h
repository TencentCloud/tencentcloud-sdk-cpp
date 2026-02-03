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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_STATICSTOREINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_STATICSTOREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 静态托管资源信息
                */
                class StaticStoreInfo : public AbstractModel
                {
                public:
                    StaticStoreInfo();
                    ~StaticStoreInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取环境ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnvId 环境ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _envId 环境ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取静态域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CdnDomain 静态域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCdnDomain() const;

                    /**
                     * 设置静态域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cdnDomain 静态域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCdnDomain(const std::string& _cdnDomain);

                    /**
                     * 判断参数 CdnDomain 是否已赋值
                     * @return CdnDomain 是否已赋值
                     * 
                     */
                    bool CdnDomainHasBeenSet() const;

                    /**
                     * 获取COS桶
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bucket COS桶
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置COS桶
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bucket COS桶
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取cos区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Regoin cos区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetRegoin() const;

                    /**
                     * 设置cos区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regoin cos区域
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetRegoin(const std::string& _regoin);

                    /**
                     * 判断参数 Regoin 是否已赋值
                     * @return Regoin 是否已赋值
                     * @deprecated
                     */
                    bool RegoinHasBeenSet() const;

                    /**
                     * 获取资源状态:init(初始化)/process(处理中)/online(上线)/destroying(销毁中)/offline(下线))
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 资源状态:init(初始化)/process(处理中)/online(上线)/destroying(销毁中)/offline(下线))
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置资源状态:init(初始化)/process(处理中)/online(上线)/destroying(销毁中)/offline(下线))
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 资源状态:init(初始化)/process(处理中)/online(上线)/destroying(销毁中)/offline(下线))
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * 环境ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 静态域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cdnDomain;
                    bool m_cdnDomainHasBeenSet;

                    /**
                     * COS桶
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * cos区域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regoin;
                    bool m_regoinHasBeenSet;

                    /**
                     * 资源状态:init(初始化)/process(处理中)/online(上线)/destroying(销毁中)/offline(下线))
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_STATICSTOREINFO_H_
