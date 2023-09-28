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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_RIUTILIZATIONDETAIL_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_RIUTILIZATIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 预留券抵扣详情
                */
                class RIUtilizationDetail : public AbstractModel
                {
                public:
                    RIUtilizationDetail();
                    ~RIUtilizationDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取预留券ID
                     * @return ReservedInstanceId 预留券ID
                     * 
                     */
                    std::string GetReservedInstanceId() const;

                    /**
                     * 设置预留券ID
                     * @param _reservedInstanceId 预留券ID
                     * 
                     */
                    void SetReservedInstanceId(const std::string& _reservedInstanceId);

                    /**
                     * 判断参数 ReservedInstanceId 是否已赋值
                     * @return ReservedInstanceId 是否已赋值
                     * 
                     */
                    bool ReservedInstanceIdHasBeenSet() const;

                    /**
                     * 获取Pod唯一ID
                     * @return EksId Pod唯一ID
                     * 
                     */
                    std::string GetEksId() const;

                    /**
                     * 设置Pod唯一ID
                     * @param _eksId Pod唯一ID
                     * 
                     */
                    void SetEksId(const std::string& _eksId);

                    /**
                     * 判断参数 EksId 是否已赋值
                     * @return EksId 是否已赋值
                     * 
                     */
                    bool EksIdHasBeenSet() const;

                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Pod的名称
                     * @return Name Pod的名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Pod的名称
                     * @param _name Pod的名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Pod的命名空间
                     * @return Namespace Pod的命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Pod的命名空间
                     * @param _namespace Pod的命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取工作负载类型
                     * @return Kind 工作负载类型
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置工作负载类型
                     * @param _kind 工作负载类型
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取工作负载名称
                     * @return KindName 工作负载名称
                     * 
                     */
                    std::string GetKindName() const;

                    /**
                     * 设置工作负载名称
                     * @param _kindName 工作负载名称
                     * 
                     */
                    void SetKindName(const std::string& _kindName);

                    /**
                     * 判断参数 KindName 是否已赋值
                     * @return KindName 是否已赋值
                     * 
                     */
                    bool KindNameHasBeenSet() const;

                    /**
                     * 获取Pod的uid
                     * @return Uid Pod的uid
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置Pod的uid
                     * @param _uid Pod的uid
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取用量开始时间
                     * @return StartTime 用量开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置用量开始时间
                     * @param _startTime 用量开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取用量结束时间
                     * @return EndTime 用量结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置用量结束时间
                     * @param _endTime 用量结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取抵扣资源所属产品
                     * @return Product 抵扣资源所属产品
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置抵扣资源所属产品
                     * @param _product 抵扣资源所属产品
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * 预留券ID
                     */
                    std::string m_reservedInstanceId;
                    bool m_reservedInstanceIdHasBeenSet;

                    /**
                     * Pod唯一ID
                     */
                    std::string m_eksId;
                    bool m_eksIdHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Pod的名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Pod的命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 工作负载类型
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 工作负载名称
                     */
                    std::string m_kindName;
                    bool m_kindNameHasBeenSet;

                    /**
                     * Pod的uid
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 用量开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 用量结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 抵扣资源所属产品
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_RIUTILIZATIONDETAIL_H_
