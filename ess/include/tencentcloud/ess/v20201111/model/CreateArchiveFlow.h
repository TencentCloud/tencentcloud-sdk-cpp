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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEARCHIVEFLOW_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEARCHIVEFLOW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/ArchiveFlowApproverInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 创建归档合同信息
                */
                class CreateArchiveFlow : public AbstractModel
                {
                public:
                    CreateArchiveFlow();
                    ~CreateArchiveFlow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>合同文件的资源id，使用<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">UploadFiles</a> 上传文件返回resourceId，目前一个合同只能支持一个资源ID。</p>
                     * @return ResourceIds <p>合同文件的资源id，使用<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">UploadFiles</a> 上传文件返回resourceId，目前一个合同只能支持一个资源ID。</p>
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置<p>合同文件的资源id，使用<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">UploadFiles</a> 上传文件返回resourceId，目前一个合同只能支持一个资源ID。</p>
                     * @param _resourceIds <p>合同文件的资源id，使用<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">UploadFiles</a> 上传文件返回resourceId，目前一个合同只能支持一个资源ID。</p>
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取<p>合同名称，不传时系统会使用合同资源文件名作为合同名称；最终合同名称不能为空；长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
                     * @return FlowName <p>合同名称，不传时系统会使用合同资源文件名作为合同名称；最终合同名称不能为空；长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置<p>合同名称，不传时系统会使用合同资源文件名作为合同名称；最终合同名称不能为空；长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
                     * @param _flowName <p>合同名称，不传时系统会使用合同资源文件名作为合同名称；最终合同名称不能为空；长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
                     * 
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     * 
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取<p>合同类型，自定义文本字符串，长度不能超过200。</p>
                     * @return FlowType <p>合同类型，自定义文本字符串，长度不能超过200。</p>
                     * 
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置<p>合同类型，自定义文本字符串，长度不能超过200。</p>
                     * @param _flowType <p>合同类型，自定义文本字符串，长度不能超过200。</p>
                     * 
                     */
                    void SetFlowType(const std::string& _flowType);

                    /**
                     * 判断参数 FlowType 是否已赋值
                     * @return FlowType 是否已赋值
                     * 
                     */
                    bool FlowTypeHasBeenSet() const;

                    /**
                     * 获取<p>调用方业务系统中的合同业务编号，可以用于外部系统和归档合同做关联，长度不超过 128 字节</p>
                     * @return BusinessId <p>调用方业务系统中的合同业务编号，可以用于外部系统和归档合同做关联，长度不超过 128 字节</p>
                     * 
                     */
                    std::string GetBusinessId() const;

                    /**
                     * 设置<p>调用方业务系统中的合同业务编号，可以用于外部系统和归档合同做关联，长度不超过 128 字节</p>
                     * @param _businessId <p>调用方业务系统中的合同业务编号，可以用于外部系统和归档合同做关联，长度不超过 128 字节</p>
                     * 
                     */
                    void SetBusinessId(const std::string& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     * 
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取<p>合同发起方/创建人名称，用于归档合同展示和检索，长度不超过 32 字符</p>
                     * @return CreatorName <p>合同发起方/创建人名称，用于归档合同展示和检索，长度不超过 32 字符</p>
                     * 
                     */
                    std::string GetCreatorName() const;

                    /**
                     * 设置<p>合同发起方/创建人名称，用于归档合同展示和检索，长度不超过 32 字符</p>
                     * @param _creatorName <p>合同发起方/创建人名称，用于归档合同展示和检索，长度不超过 32 字符</p>
                     * 
                     */
                    void SetCreatorName(const std::string& _creatorName);

                    /**
                     * 判断参数 CreatorName 是否已赋值
                     * @return CreatorName 是否已赋值
                     * 
                     */
                    bool CreatorNameHasBeenSet() const;

                    /**
                     * 获取<p>签署人信息列表，用于记录合同由哪些个人或企业签署，最多 50 个参与者。</p>
                     * @return ApproverInfo <p>签署人信息列表，用于记录合同由哪些个人或企业签署，最多 50 个参与者。</p>
                     * 
                     */
                    std::vector<ArchiveFlowApproverInfo> GetApproverInfo() const;

                    /**
                     * 设置<p>签署人信息列表，用于记录合同由哪些个人或企业签署，最多 50 个参与者。</p>
                     * @param _approverInfo <p>签署人信息列表，用于记录合同由哪些个人或企业签署，最多 50 个参与者。</p>
                     * 
                     */
                    void SetApproverInfo(const std::vector<ArchiveFlowApproverInfo>& _approverInfo);

                    /**
                     * 判断参数 ApproverInfo 是否已赋值
                     * @return ApproverInfo 是否已赋值
                     * 
                     */
                    bool ApproverInfoHasBeenSet() const;

                    /**
                     * 获取<p>关注人信息列表，用于记录合同关注对象，最多 50 个关注者。</p>
                     * @return CcInfo <p>关注人信息列表，用于记录合同关注对象，最多 50 个关注者。</p>
                     * 
                     */
                    std::vector<ArchiveFlowApproverInfo> GetCcInfo() const;

                    /**
                     * 设置<p>关注人信息列表，用于记录合同关注对象，最多 50 个关注者。</p>
                     * @param _ccInfo <p>关注人信息列表，用于记录合同关注对象，最多 50 个关注者。</p>
                     * 
                     */
                    void SetCcInfo(const std::vector<ArchiveFlowApproverInfo>& _ccInfo);

                    /**
                     * 判断参数 CcInfo 是否已赋值
                     * @return CcInfo 是否已赋值
                     * 
                     */
                    bool CcInfoHasBeenSet() const;

                    /**
                     * 获取<p>调用方自定义透传数据，可用于保存业务扩展信息，长度不超过 20480 字节。</p>
                     * @return UserData <p>调用方自定义透传数据，可用于保存业务扩展信息，长度不超过 20480 字节。</p>
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置<p>调用方自定义透传数据，可用于保存业务扩展信息，长度不超过 20480 字节。</p>
                     * @param _userData <p>调用方自定义透传数据，可用于保存业务扩展信息，长度不超过 20480 字节。</p>
                     * 
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     * 
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取<p>合同描述/备注信息，长度不超过 1000 个字符</p>
                     * @return FlowDescription <p>合同描述/备注信息，长度不超过 1000 个字符</p>
                     * 
                     */
                    std::string GetFlowDescription() const;

                    /**
                     * 设置<p>合同描述/备注信息，长度不超过 1000 个字符</p>
                     * @param _flowDescription <p>合同描述/备注信息，长度不超过 1000 个字符</p>
                     * 
                     */
                    void SetFlowDescription(const std::string& _flowDescription);

                    /**
                     * 判断参数 FlowDescription 是否已赋值
                     * @return FlowDescription 是否已赋值
                     * 
                     */
                    bool FlowDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>合同签署完成时间，Unix 秒级时间戳</p>
                     * @return ApproveTime <p>合同签署完成时间，Unix 秒级时间戳</p>
                     * 
                     */
                    int64_t GetApproveTime() const;

                    /**
                     * 设置<p>合同签署完成时间，Unix 秒级时间戳</p>
                     * @param _approveTime <p>合同签署完成时间，Unix 秒级时间戳</p>
                     * 
                     */
                    void SetApproveTime(const int64_t& _approveTime);

                    /**
                     * 判断参数 ApproveTime 是否已赋值
                     * @return ApproveTime 是否已赋值
                     * 
                     */
                    bool ApproveTimeHasBeenSet() const;

                    /**
                     * 获取<p>合同发起时间/合同原始创建时间，Unix 秒级时间戳</p>
                     * @return CustomCreatedOn <p>合同发起时间/合同原始创建时间，Unix 秒级时间戳</p>
                     * 
                     */
                    int64_t GetCustomCreatedOn() const;

                    /**
                     * 设置<p>合同发起时间/合同原始创建时间，Unix 秒级时间戳</p>
                     * @param _customCreatedOn <p>合同发起时间/合同原始创建时间，Unix 秒级时间戳</p>
                     * 
                     */
                    void SetCustomCreatedOn(const int64_t& _customCreatedOn);

                    /**
                     * 判断参数 CustomCreatedOn 是否已赋值
                     * @return CustomCreatedOn 是否已赋值
                     * 
                     */
                    bool CustomCreatedOnHasBeenSet() const;

                private:

                    /**
                     * <p>合同文件的资源id，使用<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">UploadFiles</a> 上传文件返回resourceId，目前一个合同只能支持一个资源ID。</p>
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * <p>合同名称，不传时系统会使用合同资源文件名作为合同名称；最终合同名称不能为空；长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * <p>合同类型，自定义文本字符串，长度不能超过200。</p>
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * <p>调用方业务系统中的合同业务编号，可以用于外部系统和归档合同做关联，长度不超过 128 字节</p>
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * <p>合同发起方/创建人名称，用于归档合同展示和检索，长度不超过 32 字符</p>
                     */
                    std::string m_creatorName;
                    bool m_creatorNameHasBeenSet;

                    /**
                     * <p>签署人信息列表，用于记录合同由哪些个人或企业签署，最多 50 个参与者。</p>
                     */
                    std::vector<ArchiveFlowApproverInfo> m_approverInfo;
                    bool m_approverInfoHasBeenSet;

                    /**
                     * <p>关注人信息列表，用于记录合同关注对象，最多 50 个关注者。</p>
                     */
                    std::vector<ArchiveFlowApproverInfo> m_ccInfo;
                    bool m_ccInfoHasBeenSet;

                    /**
                     * <p>调用方自定义透传数据，可用于保存业务扩展信息，长度不超过 20480 字节。</p>
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * <p>合同描述/备注信息，长度不超过 1000 个字符</p>
                     */
                    std::string m_flowDescription;
                    bool m_flowDescriptionHasBeenSet;

                    /**
                     * <p>合同签署完成时间，Unix 秒级时间戳</p>
                     */
                    int64_t m_approveTime;
                    bool m_approveTimeHasBeenSet;

                    /**
                     * <p>合同发起时间/合同原始创建时间，Unix 秒级时间戳</p>
                     */
                    int64_t m_customCreatedOn;
                    bool m_customCreatedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEARCHIVEFLOW_H_
