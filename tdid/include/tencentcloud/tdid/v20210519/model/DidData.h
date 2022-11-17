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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_DIDDATA_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_DIDDATA_H_

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
                * DID列表
                */
                class DidData : public AbstractModel
                {
                public:
                    DidData();
                    ~DidData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务ID
                     * @return ServiceId 服务ID
                     */
                    uint64_t GetServiceId() const;

                    /**
                     * 设置服务ID
                     * @param ServiceId 服务ID
                     */
                    void SetServiceId(const uint64_t& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取群组ID
                     * @return GroupId 群组ID
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置群组ID
                     * @param GroupId 群组ID
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取应用名称
                     * @return AppName 应用名称
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称
                     * @param AppName 应用名称
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取did号码
                     * @return Did did号码
                     */
                    std::string GetDid() const;

                    /**
                     * 设置did号码
                     * @param Did did号码
                     */
                    void SetDid(const std::string& _did);

                    /**
                     * 判断参数 Did 是否已赋值
                     * @return Did 是否已赋值
                     */
                    bool DidHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param Remark 备注
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取权威机构认证状态 1未注册 2 未认证 3 已认证
                     * @return AuthorityState 权威机构认证状态 1未注册 2 未认证 3 已认证
                     */
                    int64_t GetAuthorityState() const;

                    /**
                     * 设置权威机构认证状态 1未注册 2 未认证 3 已认证
                     * @param AuthorityState 权威机构认证状态 1未注册 2 未认证 3 已认证
                     */
                    void SetAuthorityState(const int64_t& _authorityState);

                    /**
                     * 判断参数 AuthorityState 是否已赋值
                     * @return AuthorityState 是否已赋值
                     */
                    bool AuthorityStateHasBeenSet() const;

                    /**
                     * 获取DID标签名称
                     * @return LabelName DID标签名称
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置DID标签名称
                     * @param LabelName DID标签名称
                     */
                    void SetLabelName(const std::string& _labelName);

                    /**
                     * 判断参数 LabelName 是否已赋值
                     * @return LabelName 是否已赋值
                     */
                    bool LabelNameHasBeenSet() const;

                    /**
                     * 获取DID创建时间
                     * @return CreatedAt DID创建时间
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置DID创建时间
                     * @param CreatedAt DID创建时间
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取网络ID
                     * @return ClusterId 网络ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置网络ID
                     * @param ClusterId 网络ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取联盟名称
                     * @return AllianceName 联盟名称
                     */
                    std::string GetAllianceName() const;

                    /**
                     * 设置联盟名称
                     * @param AllianceName 联盟名称
                     */
                    void SetAllianceName(const std::string& _allianceName);

                    /**
                     * 判断参数 AllianceName 是否已赋值
                     * @return AllianceName 是否已赋值
                     */
                    bool AllianceNameHasBeenSet() const;

                    /**
                     * 获取DID标签id
                     * @return LabelId DID标签id
                     */
                    uint64_t GetLabelId() const;

                    /**
                     * 设置DID标签id
                     * @param LabelId DID标签id
                     */
                    void SetLabelId(const uint64_t& _labelId);

                    /**
                     * 判断参数 LabelId 是否已赋值
                     * @return LabelId 是否已赋值
                     */
                    bool LabelIdHasBeenSet() const;

                private:

                    /**
                     * 服务ID
                     */
                    uint64_t m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 群组ID
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 应用名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * did号码
                     */
                    std::string m_did;
                    bool m_didHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 权威机构认证状态 1未注册 2 未认证 3 已认证
                     */
                    int64_t m_authorityState;
                    bool m_authorityStateHasBeenSet;

                    /**
                     * DID标签名称
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                    /**
                     * DID创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 网络ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 联盟名称
                     */
                    std::string m_allianceName;
                    bool m_allianceNameHasBeenSet;

                    /**
                     * DID标签id
                     */
                    uint64_t m_labelId;
                    bool m_labelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_DIDDATA_H_
