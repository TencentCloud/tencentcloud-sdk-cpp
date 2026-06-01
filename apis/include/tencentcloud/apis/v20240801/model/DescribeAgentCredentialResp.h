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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEAGENTCREDENTIALRESP_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEAGENTCREDENTIALRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/AgentCredentialContentDTO.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * 凭据详情响应
                */
                class DescribeAgentCredentialResp : public AbstractModel
                {
                public:
                    DescribeAgentCredentialResp();
                    ~DescribeAgentCredentialResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>租户应用ID</p>
                     * @return AppID <p>租户应用ID</p>
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置<p>租户应用ID</p>
                     * @param _appID <p>租户应用ID</p>
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>租户ID</p>
                     * @return Uin <p>租户ID</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>租户ID</p>
                     * @param _uin <p>租户ID</p>
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
                     * 获取<p>实例ID</p>
                     * @return InstanceID <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceID <p>实例ID</p>
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取<p>凭据ID</p>
                     * @return ID <p>凭据ID</p>
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置<p>凭据ID</p>
                     * @param _iD <p>凭据ID</p>
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>凭据名称</p>
                     * @return Name <p>凭据名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>凭据名称</p>
                     * @param _name <p>凭据名称</p>
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
                     * 获取<p>状态</p>
                     * @return Status <p>状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态</p>
                     * @param _status <p>状态</p>
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
                     * 获取<p>关联应用数</p>
                     * @return RelateAgentAppNum <p>关联应用数</p>
                     * @deprecated
                     */
                    int64_t GetRelateAgentAppNum() const;

                    /**
                     * 设置<p>关联应用数</p>
                     * @param _relateAgentAppNum <p>关联应用数</p>
                     * @deprecated
                     */
                    void SetRelateAgentAppNum(const int64_t& _relateAgentAppNum);

                    /**
                     * 判断参数 RelateAgentAppNum 是否已赋值
                     * @return RelateAgentAppNum 是否已赋值
                     * @deprecated
                     */
                    bool RelateAgentAppNumHasBeenSet() const;

                    /**
                     * 获取<p>关联mcp数</p>
                     * @return RelateMcpServerNum <p>关联mcp数</p>
                     * 
                     */
                    int64_t GetRelateMcpServerNum() const;

                    /**
                     * 设置<p>关联mcp数</p>
                     * @param _relateMcpServerNum <p>关联mcp数</p>
                     * 
                     */
                    void SetRelateMcpServerNum(const int64_t& _relateMcpServerNum);

                    /**
                     * 判断参数 RelateMcpServerNum 是否已赋值
                     * @return RelateMcpServerNum 是否已赋值
                     * 
                     */
                    bool RelateMcpServerNumHasBeenSet() const;

                    /**
                     * 获取<p>关联模型数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelateModelNum <p>关联模型数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRelateModelNum() const;

                    /**
                     * 设置<p>关联模型数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relateModelNum <p>关联模型数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRelateModelNum(const int64_t& _relateModelNum);

                    /**
                     * 判断参数 RelateModelNum 是否已赋值
                     * @return RelateModelNum 是否已赋值
                     * 
                     */
                    bool RelateModelNumHasBeenSet() const;

                    /**
                     * 获取<p>关联服务数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelateServiceNum <p>关联服务数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRelateServiceNum() const;

                    /**
                     * 设置<p>关联服务数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relateServiceNum <p>关联服务数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRelateServiceNum(const int64_t& _relateServiceNum);

                    /**
                     * 判断参数 RelateServiceNum 是否已赋值
                     * @return RelateServiceNum 是否已赋值
                     * 
                     */
                    bool RelateServiceNumHasBeenSet() const;

                    /**
                     * 获取<p>凭据内容</p>
                     * @return Content <p>凭据内容</p>
                     * 
                     */
                    AgentCredentialContentDTO GetContent() const;

                    /**
                     * 设置<p>凭据内容</p>
                     * @param _content <p>凭据内容</p>
                     * 
                     */
                    void SetContent(const AgentCredentialContentDTO& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>修改时间</p>
                     * @return LastUpdateTime <p>修改时间</p>
                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置<p>修改时间</p>
                     * @param _lastUpdateTime <p>修改时间</p>
                     * 
                     */
                    void SetLastUpdateTime(const std::string& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>类型</p>
                     * @return Type <p>类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>类型</p>
                     * @param _type <p>类型</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>租户应用ID</p>
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>租户ID</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>凭据ID</p>
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>凭据名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>关联应用数</p>
                     */
                    int64_t m_relateAgentAppNum;
                    bool m_relateAgentAppNumHasBeenSet;

                    /**
                     * <p>关联mcp数</p>
                     */
                    int64_t m_relateMcpServerNum;
                    bool m_relateMcpServerNumHasBeenSet;

                    /**
                     * <p>关联模型数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_relateModelNum;
                    bool m_relateModelNumHasBeenSet;

                    /**
                     * <p>关联服务数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_relateServiceNum;
                    bool m_relateServiceNumHasBeenSet;

                    /**
                     * <p>凭据内容</p>
                     */
                    AgentCredentialContentDTO m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>修改时间</p>
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * <p>类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEAGENTCREDENTIALRESP_H_
