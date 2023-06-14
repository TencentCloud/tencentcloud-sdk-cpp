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

#ifndef TENCENTCLOUD_TOURISM_V20230215_MODEL_RESOURCEDRAWLISTTYPE_H_
#define TENCENTCLOUD_TOURISM_V20230215_MODEL_RESOURCEDRAWLISTTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tourism
    {
        namespace V20230215
        {
            namespace Model
            {
                /**
                * 输出用户的资源数据
                */
                class ResourceDrawListType : public AbstractModel
                {
                public:
                    ResourceDrawListType();
                    ~ResourceDrawListType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取资源记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowId 资源记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFlowId() const;

                    /**
                     * 设置资源记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flowId 资源记录id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFlowId(const uint64_t& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId 资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceId 资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取本订单资源序列号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexId 本订单资源序列号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexId() const;

                    /**
                     * 设置本订单资源序列号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexId 本订单资源序列号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexId(const std::string& _indexId);

                    /**
                     * 判断参数 IndexId 是否已赋值
                     * @return IndexId 是否已赋值
                     * 
                     */
                    bool IndexIdHasBeenSet() const;

                    /**
                     * 获取客户的uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 客户的uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置客户的uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin 客户的uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取大订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BigDealId 大订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBigDealId() const;

                    /**
                     * 设置大订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bigDealId 大订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBigDealId(const std::string& _bigDealId);

                    /**
                     * 判断参数 BigDealId 是否已赋值
                     * @return BigDealId 是否已赋值
                     * 
                     */
                    bool BigDealIdHasBeenSet() const;

                    /**
                     * 获取小订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SmallOrderId 小订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSmallOrderId() const;

                    /**
                     * 设置小订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _smallOrderId 小订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSmallOrderId(const std::string& _smallOrderId);

                    /**
                     * 判断参数 SmallOrderId 是否已赋值
                     * @return SmallOrderId 是否已赋值
                     * 
                     */
                    bool SmallOrderIdHasBeenSet() const;

                    /**
                     * 获取资源创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceNewStartTime 资源创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceNewStartTime() const;

                    /**
                     * 设置资源创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceNewStartTime 资源创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceNewStartTime(const std::string& _resourceNewStartTime);

                    /**
                     * 判断参数 ResourceNewStartTime 是否已赋值
                     * @return ResourceNewStartTime 是否已赋值
                     * 
                     */
                    bool ResourceNewStartTimeHasBeenSet() const;

                    /**
                     * 获取资源到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceNewEndTime 资源到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceNewEndTime() const;

                    /**
                     * 设置资源到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceNewEndTime 资源到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceNewEndTime(const std::string& _resourceNewEndTime);

                    /**
                     * 判断参数 ResourceNewEndTime 是否已赋值
                     * @return ResourceNewEndTime 是否已赋值
                     * 
                     */
                    bool ResourceNewEndTimeHasBeenSet() const;

                    /**
                     * 获取资源状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceStatus 资源状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetResourceStatus() const;

                    /**
                     * 设置资源状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceStatus 资源状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceStatus(const int64_t& _resourceStatus);

                    /**
                     * 判断参数 ResourceStatus 是否已赋值
                     * @return ResourceStatus 是否已赋值
                     * 
                     */
                    bool ResourceStatusHasBeenSet() const;

                    /**
                     * 获取本记录状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 本记录状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置本记录状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 本记录状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取项目类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceType 项目类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetResourceType() const;

                    /**
                     * 设置项目类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceType 项目类型
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

                private:

                    /**
                     * 记录id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 资源记录id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 资源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 本订单资源序列号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexId;
                    bool m_indexIdHasBeenSet;

                    /**
                     * 客户的uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 大订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bigDealId;
                    bool m_bigDealIdHasBeenSet;

                    /**
                     * 小订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_smallOrderId;
                    bool m_smallOrderIdHasBeenSet;

                    /**
                     * 资源创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceNewStartTime;
                    bool m_resourceNewStartTimeHasBeenSet;

                    /**
                     * 资源到期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceNewEndTime;
                    bool m_resourceNewEndTimeHasBeenSet;

                    /**
                     * 资源状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_resourceStatus;
                    bool m_resourceStatusHasBeenSet;

                    /**
                     * 本记录状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 项目类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOURISM_V20230215_MODEL_RESOURCEDRAWLISTTYPE_H_
