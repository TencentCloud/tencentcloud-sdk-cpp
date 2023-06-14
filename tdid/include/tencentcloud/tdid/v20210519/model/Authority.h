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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_AUTHORITY_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_AUTHORITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * 权威机构
                */
                class Authority : public AbstractModel
                {
                public:
                    Authority();
                    ~Authority() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取权威机构ID
                     * @return Id 权威机构ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置权威机构ID
                     * @param _id 权威机构ID
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
                     * 获取Did的ID
                     * @return DidId Did的ID
                     * 
                     */
                    uint64_t GetDidId() const;

                    /**
                     * 设置Did的ID
                     * @param _didId Did的ID
                     * 
                     */
                    void SetDidId(const uint64_t& _didId);

                    /**
                     * 判断参数 DidId 是否已赋值
                     * @return DidId 是否已赋值
                     * 
                     */
                    bool DidIdHasBeenSet() const;

                    /**
                     * 获取DID具体信息
                     * @return Did DID具体信息
                     * 
                     */
                    std::string GetDid() const;

                    /**
                     * 设置DID具体信息
                     * @param _did DID具体信息
                     * 
                     */
                    void SetDid(const std::string& _did);

                    /**
                     * 判断参数 Did 是否已赋值
                     * @return Did 是否已赋值
                     * 
                     */
                    bool DidHasBeenSet() const;

                    /**
                     * 获取机构名称
                     * @return Name 机构名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置机构名称
                     * @param _name 机构名称
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
                     * 获取权威认证 1:已认证，2:未认证
                     * @return Status 权威认证 1:已认证，2:未认证
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置权威认证 1:已认证，2:未认证
                     * @param _status 权威认证 1:已认证，2:未认证
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
                     * 获取DID服务ID
                     * @return DidServiceId DID服务ID
                     * 
                     */
                    uint64_t GetDidServiceId() const;

                    /**
                     * 设置DID服务ID
                     * @param _didServiceId DID服务ID
                     * 
                     */
                    void SetDidServiceId(const uint64_t& _didServiceId);

                    /**
                     * 判断参数 DidServiceId 是否已赋值
                     * @return DidServiceId 是否已赋值
                     * 
                     */
                    bool DidServiceIdHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return ContractAppId 应用ID
                     * 
                     */
                    uint64_t GetContractAppId() const;

                    /**
                     * 设置应用ID
                     * @param _contractAppId 应用ID
                     * 
                     */
                    void SetContractAppId(const uint64_t& _contractAppId);

                    /**
                     * 判断参数 ContractAppId 是否已赋值
                     * @return ContractAppId 是否已赋值
                     * 
                     */
                    bool ContractAppIdHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取注册时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegisterTime 注册时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegisterTime() const;

                    /**
                     * 设置注册时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _registerTime 注册时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegisterTime(const std::string& _registerTime);

                    /**
                     * 判断参数 RegisterTime 是否已赋值
                     * @return RegisterTime 是否已赋值
                     * 
                     */
                    bool RegisterTimeHasBeenSet() const;

                    /**
                     * 获取认证时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecognizeTime 认证时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecognizeTime() const;

                    /**
                     * 设置认证时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recognizeTime 认证时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecognizeTime(const std::string& _recognizeTime);

                    /**
                     * 判断参数 RecognizeTime 是否已赋值
                     * @return RecognizeTime 是否已赋值
                     * 
                     */
                    bool RecognizeTimeHasBeenSet() const;

                    /**
                     * 获取生成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 生成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置生成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 生成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取网络ID
                     * @return ClusterId 网络ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置网络ID
                     * @param _clusterId 网络ID
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
                     * 获取群组ID
                     * @return GroupId 群组ID
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置群组ID
                     * @param _groupId 群组ID
                     * 
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取合约名称
                     * @return AppName 合约名称
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置合约名称
                     * @param _appName 合约名称
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取链上标签
                     * @return LabelName 链上标签
                     * 
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置链上标签
                     * @param _labelName 链上标签
                     * 
                     */
                    void SetLabelName(const std::string& _labelName);

                    /**
                     * 判断参数 LabelName 是否已赋值
                     * @return LabelName 是否已赋值
                     * 
                     */
                    bool LabelNameHasBeenSet() const;

                private:

                    /**
                     * 权威机构ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Did的ID
                     */
                    uint64_t m_didId;
                    bool m_didIdHasBeenSet;

                    /**
                     * DID具体信息
                     */
                    std::string m_did;
                    bool m_didHasBeenSet;

                    /**
                     * 机构名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 权威认证 1:已认证，2:未认证
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * DID服务ID
                     */
                    uint64_t m_didServiceId;
                    bool m_didServiceIdHasBeenSet;

                    /**
                     * 应用ID
                     */
                    uint64_t m_contractAppId;
                    bool m_contractAppIdHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 注册时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_registerTime;
                    bool m_registerTimeHasBeenSet;

                    /**
                     * 认证时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recognizeTime;
                    bool m_recognizeTimeHasBeenSet;

                    /**
                     * 生成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 网络ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 群组ID
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 合约名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 链上标签
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_AUTHORITY_H_
