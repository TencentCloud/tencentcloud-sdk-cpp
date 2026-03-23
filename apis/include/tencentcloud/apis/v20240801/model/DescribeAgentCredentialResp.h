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
                     * 获取租户应用ID
                     * @return AppID 租户应用ID
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置租户应用ID
                     * @param _appID 租户应用ID
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
                     * 获取租户ID
                     * @return Uin 租户ID
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置租户ID
                     * @param _uin 租户ID
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
                     * 获取实例ID
                     * @return InstanceID 实例ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例ID
                     * @param _instanceID 实例ID
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
                     * 获取凭据ID
                     * @return ID 凭据ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置凭据ID
                     * @param _iD 凭据ID
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
                     * 获取凭据名称
                     * @return Name 凭据名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置凭据名称
                     * @param _name 凭据名称
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
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
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
                     * 获取关联应用数
                     * @return RelateAgentAppNum 关联应用数
                     * 
                     */
                    int64_t GetRelateAgentAppNum() const;

                    /**
                     * 设置关联应用数
                     * @param _relateAgentAppNum 关联应用数
                     * 
                     */
                    void SetRelateAgentAppNum(const int64_t& _relateAgentAppNum);

                    /**
                     * 判断参数 RelateAgentAppNum 是否已赋值
                     * @return RelateAgentAppNum 是否已赋值
                     * 
                     */
                    bool RelateAgentAppNumHasBeenSet() const;

                    /**
                     * 获取关联mcp数
                     * @return RelateMcpServerNum 关联mcp数
                     * 
                     */
                    int64_t GetRelateMcpServerNum() const;

                    /**
                     * 设置关联mcp数
                     * @param _relateMcpServerNum 关联mcp数
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
                     * 获取关联模型数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelateModelNum 关联模型数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRelateModelNum() const;

                    /**
                     * 设置关联模型数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relateModelNum 关联模型数
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
                     * 获取凭据内容
                     * @return Content 凭据内容
                     * 
                     */
                    AgentCredentialContentDTO GetContent() const;

                    /**
                     * 设置凭据内容
                     * @param _content 凭据内容
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取修改时间
                     * @return LastUpdateTime 修改时间
                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置修改时间
                     * @param _lastUpdateTime 修改时间
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
                     * 获取类型
                     * @return Type 类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
                     * @param _type 类型
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
                     * 租户应用ID
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * 租户ID
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 凭据ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 凭据名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 关联应用数
                     */
                    int64_t m_relateAgentAppNum;
                    bool m_relateAgentAppNumHasBeenSet;

                    /**
                     * 关联mcp数
                     */
                    int64_t m_relateMcpServerNum;
                    bool m_relateMcpServerNumHasBeenSet;

                    /**
                     * 关联模型数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_relateModelNum;
                    bool m_relateModelNumHasBeenSet;

                    /**
                     * 凭据内容
                     */
                    AgentCredentialContentDTO m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEAGENTCREDENTIALRESP_H_
