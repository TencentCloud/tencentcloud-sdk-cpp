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
                     * 获取合同流程ID，为32位字符串。
                     * @return FlowId 合同流程ID，为32位字符串。
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置合同流程ID，为32位字符串。
                     * @param _flowId 合同流程ID，为32位字符串。
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
                     * 获取合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
                     * @return FlowName 合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
                     * @param _flowName 合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
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
                     * 获取合同流程的类别分类（如销售合同/入职合同等）。	
                     * @return FlowType 合同流程的类别分类（如销售合同/入职合同等）。	
                     * 
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置合同流程的类别分类（如销售合同/入职合同等）。	
                     * @param _flowType 合同流程的类别分类（如销售合同/入职合同等）。	
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
                     * 获取合同流程当前的签署状态, 会存在下列的状态值 <ul><li> **0** : 未开启流程(合同中不存在填写环节)</li> <li> **1** : 待签署</li> <li> **2** : 部分签署</li> <li> **3** : 已拒签</li> <li> **4** : 已签署</li> <li> **5** : 已过期</li> <li> **6** : 已撤销</li> <li> **7** : 未开启流程(合同中存在填写环节)</li> <li> **8** : 等待填写</li> <li> **9** : 部分填写</li> <li> **10** : 已拒填</li> <li> **16** : 已失效（可能因为参与方修改姓名等原因）</li> <li> **21** : 已解除</li></ul>	
                     * @return FlowStatus 合同流程当前的签署状态, 会存在下列的状态值 <ul><li> **0** : 未开启流程(合同中不存在填写环节)</li> <li> **1** : 待签署</li> <li> **2** : 部分签署</li> <li> **3** : 已拒签</li> <li> **4** : 已签署</li> <li> **5** : 已过期</li> <li> **6** : 已撤销</li> <li> **7** : 未开启流程(合同中存在填写环节)</li> <li> **8** : 等待填写</li> <li> **9** : 部分填写</li> <li> **10** : 已拒填</li> <li> **16** : 已失效（可能因为参与方修改姓名等原因）</li> <li> **21** : 已解除</li></ul>	
                     * 
                     */
                    int64_t GetFlowStatus() const;

                    /**
                     * 设置合同流程当前的签署状态, 会存在下列的状态值 <ul><li> **0** : 未开启流程(合同中不存在填写环节)</li> <li> **1** : 待签署</li> <li> **2** : 部分签署</li> <li> **3** : 已拒签</li> <li> **4** : 已签署</li> <li> **5** : 已过期</li> <li> **6** : 已撤销</li> <li> **7** : 未开启流程(合同中存在填写环节)</li> <li> **8** : 等待填写</li> <li> **9** : 部分填写</li> <li> **10** : 已拒填</li> <li> **16** : 已失效（可能因为参与方修改姓名等原因）</li> <li> **21** : 已解除</li></ul>	
                     * @param _flowStatus 合同流程当前的签署状态, 会存在下列的状态值 <ul><li> **0** : 未开启流程(合同中不存在填写环节)</li> <li> **1** : 待签署</li> <li> **2** : 部分签署</li> <li> **3** : 已拒签</li> <li> **4** : 已签署</li> <li> **5** : 已过期</li> <li> **6** : 已撤销</li> <li> **7** : 未开启流程(合同中存在填写环节)</li> <li> **8** : 等待填写</li> <li> **9** : 部分填写</li> <li> **10** : 已拒填</li> <li> **16** : 已失效（可能因为参与方修改姓名等原因）</li> <li> **21** : 已解除</li></ul>	
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
                     * 获取当合同流程状态为已拒签（即 FlowStatus=3）或已撤销（即 FlowStatus=6）时，此字段 FlowMessage 为拒签或撤销原因。	
                     * @return FlowMessage 当合同流程状态为已拒签（即 FlowStatus=3）或已撤销（即 FlowStatus=6）时，此字段 FlowMessage 为拒签或撤销原因。	
                     * 
                     */
                    std::string GetFlowMessage() const;

                    /**
                     * 设置当合同流程状态为已拒签（即 FlowStatus=3）或已撤销（即 FlowStatus=6）时，此字段 FlowMessage 为拒签或撤销原因。	
                     * @param _flowMessage 当合同流程状态为已拒签（即 FlowStatus=3）或已撤销（即 FlowStatus=6）时，此字段 FlowMessage 为拒签或撤销原因。	
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
                     * 获取合同流程描述信息。	
                     * @return FlowDescription 合同流程描述信息。	
                     * 
                     */
                    std::string GetFlowDescription() const;

                    /**
                     * 设置合同流程描述信息。	
                     * @param _flowDescription 合同流程描述信息。	
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
                     * 获取合同流程的创建时间戳，格式为Unix标准时间戳（秒）。	
                     * @return CreatedOn 合同流程的创建时间戳，格式为Unix标准时间戳（秒）。	
                     * 
                     */
                    int64_t GetCreatedOn() const;

                    /**
                     * 设置合同流程的创建时间戳，格式为Unix标准时间戳（秒）。	
                     * @param _createdOn 合同流程的创建时间戳，格式为Unix标准时间戳（秒）。	
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
                     * 获取合同流程的签署方数组
                     * @return FlowApproverInfos 合同流程的签署方数组
                     * 
                     */
                    std::vector<FlowApproverDetail> GetFlowApproverInfos() const;

                    /**
                     * 设置合同流程的签署方数组
                     * @param _flowApproverInfos 合同流程的签署方数组
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
                     * 获取合同流程的关注方信息数组
                     * @return CcInfos 合同流程的关注方信息数组
                     * 
                     */
                    std::vector<FlowApproverDetail> GetCcInfos() const;

                    /**
                     * 设置合同流程的关注方信息数组
                     * @param _ccInfos 合同流程的关注方信息数组
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
                     * 获取合同流程发起方的员工编号, 即员工在腾讯电子签平台的唯一身份标识。	
                     * @return Creator 合同流程发起方的员工编号, 即员工在腾讯电子签平台的唯一身份标识。	
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置合同流程发起方的员工编号, 即员工在腾讯电子签平台的唯一身份标识。	
                     * @param _creator 合同流程发起方的员工编号, 即员工在腾讯电子签平台的唯一身份标识。	
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                private:

                    /**
                     * 合同流程ID，为32位字符串。
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 合同流程的类别分类（如销售合同/入职合同等）。	
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * 合同流程当前的签署状态, 会存在下列的状态值 <ul><li> **0** : 未开启流程(合同中不存在填写环节)</li> <li> **1** : 待签署</li> <li> **2** : 部分签署</li> <li> **3** : 已拒签</li> <li> **4** : 已签署</li> <li> **5** : 已过期</li> <li> **6** : 已撤销</li> <li> **7** : 未开启流程(合同中存在填写环节)</li> <li> **8** : 等待填写</li> <li> **9** : 部分填写</li> <li> **10** : 已拒填</li> <li> **16** : 已失效（可能因为参与方修改姓名等原因）</li> <li> **21** : 已解除</li></ul>	
                     */
                    int64_t m_flowStatus;
                    bool m_flowStatusHasBeenSet;

                    /**
                     * 当合同流程状态为已拒签（即 FlowStatus=3）或已撤销（即 FlowStatus=6）时，此字段 FlowMessage 为拒签或撤销原因。	
                     */
                    std::string m_flowMessage;
                    bool m_flowMessageHasBeenSet;

                    /**
                     * 合同流程描述信息。	
                     */
                    std::string m_flowDescription;
                    bool m_flowDescriptionHasBeenSet;

                    /**
                     * 合同流程的创建时间戳，格式为Unix标准时间戳（秒）。	
                     */
                    int64_t m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 合同流程的签署方数组
                     */
                    std::vector<FlowApproverDetail> m_flowApproverInfos;
                    bool m_flowApproverInfosHasBeenSet;

                    /**
                     * 合同流程的关注方信息数组
                     */
                    std::vector<FlowApproverDetail> m_ccInfos;
                    bool m_ccInfosHasBeenSet;

                    /**
                     * 合同流程发起方的员工编号, 即员工在腾讯电子签平台的唯一身份标识。	
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FLOWDETAILINFO_H_
