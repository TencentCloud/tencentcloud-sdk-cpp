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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPACOMPLIANCEGROUPREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPACOMPLIANCEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/ComplianceGroupRuleIdInfo.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * CreateDSPAComplianceGroup请求参数结构体
                */
                class CreateDSPAComplianceGroupRequest : public AbstractModel
                {
                public:
                    CreateDSPAComplianceGroupRequest();
                    ~CreateDSPAComplianceGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例ID
                     * @return DspaId DSPA实例ID
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例ID
                     * @param _dspaId DSPA实例ID
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取合规组名称，1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     * @return Name 合规组名称，1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置合规组名称，1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     * @param _name 合规组名称，1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
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
                     * 获取合规组描述，最大长度为1024个字符
                     * @return Description 合规组描述，最大长度为1024个字符
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置合规组描述，最大长度为1024个字符
                     * @param _description 合规组描述，最大长度为1024个字符
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取合规组规则配置（参数已废弃，请传空数组）
                     * @return ComplianceGroupRules 合规组规则配置（参数已废弃，请传空数组）
                     * 
                     */
                    std::vector<ComplianceGroupRuleIdInfo> GetComplianceGroupRules() const;

                    /**
                     * 设置合规组规则配置（参数已废弃，请传空数组）
                     * @param _complianceGroupRules 合规组规则配置（参数已废弃，请传空数组）
                     * 
                     */
                    void SetComplianceGroupRules(const std::vector<ComplianceGroupRuleIdInfo>& _complianceGroupRules);

                    /**
                     * 判断参数 ComplianceGroupRules 是否已赋值
                     * @return ComplianceGroupRules 是否已赋值
                     * 
                     */
                    bool ComplianceGroupRulesHasBeenSet() const;

                    /**
                     * 获取分级组ID，默认值为1，新增参数，可选
                     * @return LevelGroupId 分级组ID，默认值为1，新增参数，可选
                     * 
                     */
                    uint64_t GetLevelGroupId() const;

                    /**
                     * 设置分级组ID，默认值为1，新增参数，可选
                     * @param _levelGroupId 分级组ID，默认值为1，新增参数，可选
                     * 
                     */
                    void SetLevelGroupId(const uint64_t& _levelGroupId);

                    /**
                     * 判断参数 LevelGroupId 是否已赋值
                     * @return LevelGroupId 是否已赋值
                     * 
                     */
                    bool LevelGroupIdHasBeenSet() const;

                    /**
                     * 获取1代表模版开启，0代表模版关闭
                     * @return Status 1代表模版开启，0代表模版关闭
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置1代表模版开启，0代表模版关闭
                     * @param _status 1代表模版开启，0代表模版关闭
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取该complianceId的开启状态将被关闭
                     * @return CloseComplianceId 该complianceId的开启状态将被关闭
                     * 
                     */
                    int64_t GetCloseComplianceId() const;

                    /**
                     * 设置该complianceId的开启状态将被关闭
                     * @param _closeComplianceId 该complianceId的开启状态将被关闭
                     * 
                     */
                    void SetCloseComplianceId(const int64_t& _closeComplianceId);

                    /**
                     * 判断参数 CloseComplianceId 是否已赋值
                     * @return CloseComplianceId 是否已赋值
                     * 
                     */
                    bool CloseComplianceIdHasBeenSet() const;

                private:

                    /**
                     * DSPA实例ID
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 合规组名称，1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 合规组描述，最大长度为1024个字符
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 合规组规则配置（参数已废弃，请传空数组）
                     */
                    std::vector<ComplianceGroupRuleIdInfo> m_complianceGroupRules;
                    bool m_complianceGroupRulesHasBeenSet;

                    /**
                     * 分级组ID，默认值为1，新增参数，可选
                     */
                    uint64_t m_levelGroupId;
                    bool m_levelGroupIdHasBeenSet;

                    /**
                     * 1代表模版开启，0代表模版关闭
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 该complianceId的开启状态将被关闭
                     */
                    int64_t m_closeComplianceId;
                    bool m_closeComplianceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPACOMPLIANCEGROUPREQUEST_H_
