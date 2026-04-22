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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FLOWDETAILINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FLOWDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/FlowApproverDetail.h>
#include <tencentcloud/ess/v20201111/model/UserFlowType.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 此结构体(FlowDetailInfo)描述的是合同(流程)的详细信息
                */
                class FlowDetailInfo : public AbstractModel
                {
                public:
                    FlowDetailInfo();
                    ~FlowDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>合同流程ID，为32位字符串。</p>
                     * @return FlowId <p>合同流程ID，为32位字符串。</p>
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置<p>合同流程ID，为32位字符串。</p>
                     * @param _flowId <p>合同流程ID，为32位字符串。</p>
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取<p>合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
                     * @return FlowName <p>合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置<p>合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
                     * @param _flowName <p>合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
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
                     * 获取<p>合同流程的类别分类（如销售合同/入职合同等）。<br>该字段将被废弃，不建议使用。</p>
                     * @return FlowType <p>合同流程的类别分类（如销售合同/入职合同等）。<br>该字段将被废弃，不建议使用。</p>
                     * 
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置<p>合同流程的类别分类（如销售合同/入职合同等）。<br>该字段将被废弃，不建议使用。</p>
                     * @param _flowType <p>合同流程的类别分类（如销售合同/入职合同等）。<br>该字段将被废弃，不建议使用。</p>
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
                     * 获取<p>合同流程当前的签署状态, 会存在下列的状态值 </p><ul><li> **0** : 未开启流程(合同中不存在填写环节)</li> <li> **1** : 待签署</li> <li> **2** : 部分签署</li> <li> **3** : 已拒签</li> <li> **4** : 已签署</li> <li> **5** : 已过期</li> <li> **6** : 已撤销</li> <li> **7** : 未开启流程(合同中存在填写环节)</li> <li> **8** : 等待填写</li> <li> **9** : 部分填写</li> <li> **10** : 已拒填</li> <li> **16** : 已失效（可能因为参与方修改姓名等原因）</li> <li> **21** : 已解除</li></ul>
                     * @return FlowStatus <p>合同流程当前的签署状态, 会存在下列的状态值 </p><ul><li> **0** : 未开启流程(合同中不存在填写环节)</li> <li> **1** : 待签署</li> <li> **2** : 部分签署</li> <li> **3** : 已拒签</li> <li> **4** : 已签署</li> <li> **5** : 已过期</li> <li> **6** : 已撤销</li> <li> **7** : 未开启流程(合同中存在填写环节)</li> <li> **8** : 等待填写</li> <li> **9** : 部分填写</li> <li> **10** : 已拒填</li> <li> **16** : 已失效（可能因为参与方修改姓名等原因）</li> <li> **21** : 已解除</li></ul>
                     * 
                     */
                    int64_t GetFlowStatus() const;

                    /**
                     * 设置<p>合同流程当前的签署状态, 会存在下列的状态值 </p><ul><li> **0** : 未开启流程(合同中不存在填写环节)</li> <li> **1** : 待签署</li> <li> **2** : 部分签署</li> <li> **3** : 已拒签</li> <li> **4** : 已签署</li> <li> **5** : 已过期</li> <li> **6** : 已撤销</li> <li> **7** : 未开启流程(合同中存在填写环节)</li> <li> **8** : 等待填写</li> <li> **9** : 部分填写</li> <li> **10** : 已拒填</li> <li> **16** : 已失效（可能因为参与方修改姓名等原因）</li> <li> **21** : 已解除</li></ul>
                     * @param _flowStatus <p>合同流程当前的签署状态, 会存在下列的状态值 </p><ul><li> **0** : 未开启流程(合同中不存在填写环节)</li> <li> **1** : 待签署</li> <li> **2** : 部分签署</li> <li> **3** : 已拒签</li> <li> **4** : 已签署</li> <li> **5** : 已过期</li> <li> **6** : 已撤销</li> <li> **7** : 未开启流程(合同中存在填写环节)</li> <li> **8** : 等待填写</li> <li> **9** : 部分填写</li> <li> **10** : 已拒填</li> <li> **16** : 已失效（可能因为参与方修改姓名等原因）</li> <li> **21** : 已解除</li></ul>
                     * 
                     */
                    void SetFlowStatus(const int64_t& _flowStatus);

                    /**
                     * 判断参数 FlowStatus 是否已赋值
                     * @return FlowStatus 是否已赋值
                     * 
                     */
                    bool FlowStatusHasBeenSet() const;

                    /**
                     * 获取<p>当合同流程状态为已拒签（即 FlowStatus=3）或已撤销（即 FlowStatus=6）时，此字段 FlowMessage 为拒签或撤销原因。</p>
                     * @return FlowMessage <p>当合同流程状态为已拒签（即 FlowStatus=3）或已撤销（即 FlowStatus=6）时，此字段 FlowMessage 为拒签或撤销原因。</p>
                     * 
                     */
                    std::string GetFlowMessage() const;

                    /**
                     * 设置<p>当合同流程状态为已拒签（即 FlowStatus=3）或已撤销（即 FlowStatus=6）时，此字段 FlowMessage 为拒签或撤销原因。</p>
                     * @param _flowMessage <p>当合同流程状态为已拒签（即 FlowStatus=3）或已撤销（即 FlowStatus=6）时，此字段 FlowMessage 为拒签或撤销原因。</p>
                     * 
                     */
                    void SetFlowMessage(const std::string& _flowMessage);

                    /**
                     * 判断参数 FlowMessage 是否已赋值
                     * @return FlowMessage 是否已赋值
                     * 
                     */
                    bool FlowMessageHasBeenSet() const;

                    /**
                     * 获取<p>合同流程描述信息。</p>
                     * @return FlowDescription <p>合同流程描述信息。</p>
                     * 
                     */
                    std::string GetFlowDescription() const;

                    /**
                     * 设置<p>合同流程描述信息。</p>
                     * @param _flowDescription <p>合同流程描述信息。</p>
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
                     * 获取<p>合同流程的创建时间戳，格式为Unix标准时间戳（秒）。</p>
                     * @return CreatedOn <p>合同流程的创建时间戳，格式为Unix标准时间戳（秒）。</p>
                     * 
                     */
                    int64_t GetCreatedOn() const;

                    /**
                     * 设置<p>合同流程的创建时间戳，格式为Unix标准时间戳（秒）。</p>
                     * @param _createdOn <p>合同流程的创建时间戳，格式为Unix标准时间戳（秒）。</p>
                     * 
                     */
                    void SetCreatedOn(const int64_t& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取<p>合同流程的签署方数组</p>
                     * @return FlowApproverInfos <p>合同流程的签署方数组</p>
                     * 
                     */
                    std::vector<FlowApproverDetail> GetFlowApproverInfos() const;

                    /**
                     * 设置<p>合同流程的签署方数组</p>
                     * @param _flowApproverInfos <p>合同流程的签署方数组</p>
                     * 
                     */
                    void SetFlowApproverInfos(const std::vector<FlowApproverDetail>& _flowApproverInfos);

                    /**
                     * 判断参数 FlowApproverInfos 是否已赋值
                     * @return FlowApproverInfos 是否已赋值
                     * 
                     */
                    bool FlowApproverInfosHasBeenSet() const;

                    /**
                     * 获取<p>合同流程的关注方信息数组</p>
                     * @return CcInfos <p>合同流程的关注方信息数组</p>
                     * 
                     */
                    std::vector<FlowApproverDetail> GetCcInfos() const;

                    /**
                     * 设置<p>合同流程的关注方信息数组</p>
                     * @param _ccInfos <p>合同流程的关注方信息数组</p>
                     * 
                     */
                    void SetCcInfos(const std::vector<FlowApproverDetail>& _ccInfos);

                    /**
                     * 判断参数 CcInfos 是否已赋值
                     * @return CcInfos 是否已赋值
                     * 
                     */
                    bool CcInfosHasBeenSet() const;

                    /**
                     * 获取<p>合同流程发起方的员工编号, 即员工在腾讯电子签平台的唯一身份标识。</p>
                     * @return Creator <p>合同流程发起方的员工编号, 即员工在腾讯电子签平台的唯一身份标识。</p>
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>合同流程发起方的员工编号, 即员工在腾讯电子签平台的唯一身份标识。</p>
                     * @param _creator <p>合同流程发起方的员工编号, 即员工在腾讯电子签平台的唯一身份标识。</p>
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取<p>用户合同的自定义分类。</p><p>自定义合同类型的位置，在下图所示地方:<br><img src="https://qcloudimg.tencent-cloud.cn/raw/00d72934c31bd49115a566e4e1a4530d.png" alt="image"></p>
                     * @return UserFlowType <p>用户合同的自定义分类。</p><p>自定义合同类型的位置，在下图所示地方:<br><img src="https://qcloudimg.tencent-cloud.cn/raw/00d72934c31bd49115a566e4e1a4530d.png" alt="image"></p>
                     * 
                     */
                    UserFlowType GetUserFlowType() const;

                    /**
                     * 设置<p>用户合同的自定义分类。</p><p>自定义合同类型的位置，在下图所示地方:<br><img src="https://qcloudimg.tencent-cloud.cn/raw/00d72934c31bd49115a566e4e1a4530d.png" alt="image"></p>
                     * @param _userFlowType <p>用户合同的自定义分类。</p><p>自定义合同类型的位置，在下图所示地方:<br><img src="https://qcloudimg.tencent-cloud.cn/raw/00d72934c31bd49115a566e4e1a4530d.png" alt="image"></p>
                     * 
                     */
                    void SetUserFlowType(const UserFlowType& _userFlowType);

                    /**
                     * 判断参数 UserFlowType 是否已赋值
                     * @return UserFlowType 是否已赋值
                     * 
                     */
                    bool UserFlowTypeHasBeenSet() const;

                    /**
                     * 获取<p>发起模板时,使用的模板Id</p>
                     * @return TemplateId <p>发起模板时,使用的模板Id</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>发起模板时,使用的模板Id</p>
                     * @param _templateId <p>发起模板时,使用的模板Id</p>
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>合同备注列表</p>
                     * @return FlowRemarks <p>合同备注列表</p>
                     * 
                     */
                    std::vector<std::string> GetFlowRemarks() const;

                    /**
                     * 设置<p>合同备注列表</p>
                     * @param _flowRemarks <p>合同备注列表</p>
                     * 
                     */
                    void SetFlowRemarks(const std::vector<std::string>& _flowRemarks);

                    /**
                     * 判断参数 FlowRemarks 是否已赋值
                     * @return FlowRemarks 是否已赋值
                     * 
                     */
                    bool FlowRemarksHasBeenSet() const;

                private:

                    /**
                     * <p>合同流程ID，为32位字符串。</p>
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * <p>合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。</p>
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * <p>合同流程的类别分类（如销售合同/入职合同等）。<br>该字段将被废弃，不建议使用。</p>
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * <p>合同流程当前的签署状态, 会存在下列的状态值 </p><ul><li> **0** : 未开启流程(合同中不存在填写环节)</li> <li> **1** : 待签署</li> <li> **2** : 部分签署</li> <li> **3** : 已拒签</li> <li> **4** : 已签署</li> <li> **5** : 已过期</li> <li> **6** : 已撤销</li> <li> **7** : 未开启流程(合同中存在填写环节)</li> <li> **8** : 等待填写</li> <li> **9** : 部分填写</li> <li> **10** : 已拒填</li> <li> **16** : 已失效（可能因为参与方修改姓名等原因）</li> <li> **21** : 已解除</li></ul>
                     */
                    int64_t m_flowStatus;
                    bool m_flowStatusHasBeenSet;

                    /**
                     * <p>当合同流程状态为已拒签（即 FlowStatus=3）或已撤销（即 FlowStatus=6）时，此字段 FlowMessage 为拒签或撤销原因。</p>
                     */
                    std::string m_flowMessage;
                    bool m_flowMessageHasBeenSet;

                    /**
                     * <p>合同流程描述信息。</p>
                     */
                    std::string m_flowDescription;
                    bool m_flowDescriptionHasBeenSet;

                    /**
                     * <p>合同流程的创建时间戳，格式为Unix标准时间戳（秒）。</p>
                     */
                    int64_t m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * <p>合同流程的签署方数组</p>
                     */
                    std::vector<FlowApproverDetail> m_flowApproverInfos;
                    bool m_flowApproverInfosHasBeenSet;

                    /**
                     * <p>合同流程的关注方信息数组</p>
                     */
                    std::vector<FlowApproverDetail> m_ccInfos;
                    bool m_ccInfosHasBeenSet;

                    /**
                     * <p>合同流程发起方的员工编号, 即员工在腾讯电子签平台的唯一身份标识。</p>
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>用户合同的自定义分类。</p><p>自定义合同类型的位置，在下图所示地方:<br><img src="https://qcloudimg.tencent-cloud.cn/raw/00d72934c31bd49115a566e4e1a4530d.png" alt="image"></p>
                     */
                    UserFlowType m_userFlowType;
                    bool m_userFlowTypeHasBeenSet;

                    /**
                     * <p>发起模板时,使用的模板Id</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>合同备注列表</p>
                     */
                    std::vector<std::string> m_flowRemarks;
                    bool m_flowRemarksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FLOWDETAILINFO_H_
