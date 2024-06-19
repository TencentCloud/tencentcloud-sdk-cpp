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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYRISKCENTERSCANTASKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYRISKCENTERSCANTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TaskAssetObject.h>
#include <tencentcloud/csip/v20221121/model/TaskAdvanceCFG.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyRiskCenterScanTask请求参数结构体
                */
                class ModifyRiskCenterScanTaskRequest : public AbstractModel
                {
                public:
                    ModifyRiskCenterScanTaskRequest();
                    ~ModifyRiskCenterScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取0-全扫，1-指定资产扫，2-排除资产扫，3-手动填写扫；1和2则Assets字段必填，3则SelfDefiningAssets必填
                     * @return ScanAssetType 0-全扫，1-指定资产扫，2-排除资产扫，3-手动填写扫；1和2则Assets字段必填，3则SelfDefiningAssets必填
                     * 
                     */
                    int64_t GetScanAssetType() const;

                    /**
                     * 设置0-全扫，1-指定资产扫，2-排除资产扫，3-手动填写扫；1和2则Assets字段必填，3则SelfDefiningAssets必填
                     * @param _scanAssetType 0-全扫，1-指定资产扫，2-排除资产扫，3-手动填写扫；1和2则Assets字段必填，3则SelfDefiningAssets必填
                     * 
                     */
                    void SetScanAssetType(const int64_t& _scanAssetType);

                    /**
                     * 判断参数 ScanAssetType 是否已赋值
                     * @return ScanAssetType 是否已赋值
                     * 
                     */
                    bool ScanAssetTypeHasBeenSet() const;

                    /**
                     * 获取扫描项目；port/poc/weakpass/webcontent/configrisk
                     * @return ScanItem 扫描项目；port/poc/weakpass/webcontent/configrisk
                     * 
                     */
                    std::vector<std::string> GetScanItem() const;

                    /**
                     * 设置扫描项目；port/poc/weakpass/webcontent/configrisk
                     * @param _scanItem 扫描项目；port/poc/weakpass/webcontent/configrisk
                     * 
                     */
                    void SetScanItem(const std::vector<std::string>& _scanItem);

                    /**
                     * 判断参数 ScanItem 是否已赋值
                     * @return ScanItem 是否已赋值
                     * 
                     */
                    bool ScanItemHasBeenSet() const;

                    /**
                     * 获取0-周期任务,1-立即扫描,2-定时扫描,3-自定义；0,2,3则ScanPlanContent必填
                     * @return ScanPlanType 0-周期任务,1-立即扫描,2-定时扫描,3-自定义；0,2,3则ScanPlanContent必填
                     * 
                     */
                    int64_t GetScanPlanType() const;

                    /**
                     * 设置0-周期任务,1-立即扫描,2-定时扫描,3-自定义；0,2,3则ScanPlanContent必填
                     * @param _scanPlanType 0-周期任务,1-立即扫描,2-定时扫描,3-自定义；0,2,3则ScanPlanContent必填
                     * 
                     */
                    void SetScanPlanType(const int64_t& _scanPlanType);

                    /**
                     * 判断参数 ScanPlanType 是否已赋值
                     * @return ScanPlanType 是否已赋值
                     * 
                     */
                    bool ScanPlanTypeHasBeenSet() const;

                    /**
                     * 获取要修改的任务id
                     * @return TaskId 要修改的任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置要修改的任务id
                     * @param _taskId 要修改的任务id
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取集团账号的成员id
                     * @return MemberId 集团账号的成员id
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置集团账号的成员id
                     * @param _memberId 集团账号的成员id
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取扫描资产信息列表
                     * @return Assets 扫描资产信息列表
                     * 
                     */
                    std::vector<TaskAssetObject> GetAssets() const;

                    /**
                     * 设置扫描资产信息列表
                     * @param _assets 扫描资产信息列表
                     * 
                     */
                    void SetAssets(const std::vector<TaskAssetObject>& _assets);

                    /**
                     * 判断参数 Assets 是否已赋值
                     * @return Assets 是否已赋值
                     * 
                     */
                    bool AssetsHasBeenSet() const;

                    /**
                     * 获取扫描计划详情
                     * @return ScanPlanContent 扫描计划详情
                     * 
                     */
                    std::string GetScanPlanContent() const;

                    /**
                     * 设置扫描计划详情
                     * @param _scanPlanContent 扫描计划详情
                     * 
                     */
                    void SetScanPlanContent(const std::string& _scanPlanContent);

                    /**
                     * 判断参数 ScanPlanContent 是否已赋值
                     * @return ScanPlanContent 是否已赋值
                     * 
                     */
                    bool ScanPlanContentHasBeenSet() const;

                    /**
                     * 获取ip/域名/url数组
                     * @return SelfDefiningAssets ip/域名/url数组
                     * 
                     */
                    std::vector<std::string> GetSelfDefiningAssets() const;

                    /**
                     * 设置ip/域名/url数组
                     * @param _selfDefiningAssets ip/域名/url数组
                     * 
                     */
                    void SetSelfDefiningAssets(const std::vector<std::string>& _selfDefiningAssets);

                    /**
                     * 判断参数 SelfDefiningAssets 是否已赋值
                     * @return SelfDefiningAssets 是否已赋值
                     * 
                     */
                    bool SelfDefiningAssetsHasBeenSet() const;

                    /**
                     * 获取高级配置
                     * @return TaskAdvanceCFG 高级配置
                     * 
                     */
                    TaskAdvanceCFG GetTaskAdvanceCFG() const;

                    /**
                     * 设置高级配置
                     * @param _taskAdvanceCFG 高级配置
                     * 
                     */
                    void SetTaskAdvanceCFG(const TaskAdvanceCFG& _taskAdvanceCFG);

                    /**
                     * 判断参数 TaskAdvanceCFG 是否已赋值
                     * @return TaskAdvanceCFG 是否已赋值
                     * 
                     */
                    bool TaskAdvanceCFGHasBeenSet() const;

                    /**
                     * 获取体检模式，0-标准模式，1-快速模式，2-高级模式，默认标准模式
                     * @return TaskMode 体检模式，0-标准模式，1-快速模式，2-高级模式，默认标准模式
                     * 
                     */
                    int64_t GetTaskMode() const;

                    /**
                     * 设置体检模式，0-标准模式，1-快速模式，2-高级模式，默认标准模式
                     * @param _taskMode 体检模式，0-标准模式，1-快速模式，2-高级模式，默认标准模式
                     * 
                     */
                    void SetTaskMode(const int64_t& _taskMode);

                    /**
                     * 判断参数 TaskMode 是否已赋值
                     * @return TaskMode 是否已赋值
                     * 
                     */
                    bool TaskModeHasBeenSet() const;

                    /**
                     * 获取任务完成回调webhook地址
                     * @return FinishWebHook 任务完成回调webhook地址
                     * 
                     */
                    std::string GetFinishWebHook() const;

                    /**
                     * 设置任务完成回调webhook地址
                     * @param _finishWebHook 任务完成回调webhook地址
                     * 
                     */
                    void SetFinishWebHook(const std::string& _finishWebHook);

                    /**
                     * 判断参数 FinishWebHook 是否已赋值
                     * @return FinishWebHook 是否已赋值
                     * 
                     */
                    bool FinishWebHookHasBeenSet() const;

                private:

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 0-全扫，1-指定资产扫，2-排除资产扫，3-手动填写扫；1和2则Assets字段必填，3则SelfDefiningAssets必填
                     */
                    int64_t m_scanAssetType;
                    bool m_scanAssetTypeHasBeenSet;

                    /**
                     * 扫描项目；port/poc/weakpass/webcontent/configrisk
                     */
                    std::vector<std::string> m_scanItem;
                    bool m_scanItemHasBeenSet;

                    /**
                     * 0-周期任务,1-立即扫描,2-定时扫描,3-自定义；0,2,3则ScanPlanContent必填
                     */
                    int64_t m_scanPlanType;
                    bool m_scanPlanTypeHasBeenSet;

                    /**
                     * 要修改的任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 集团账号的成员id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 扫描资产信息列表
                     */
                    std::vector<TaskAssetObject> m_assets;
                    bool m_assetsHasBeenSet;

                    /**
                     * 扫描计划详情
                     */
                    std::string m_scanPlanContent;
                    bool m_scanPlanContentHasBeenSet;

                    /**
                     * ip/域名/url数组
                     */
                    std::vector<std::string> m_selfDefiningAssets;
                    bool m_selfDefiningAssetsHasBeenSet;

                    /**
                     * 高级配置
                     */
                    TaskAdvanceCFG m_taskAdvanceCFG;
                    bool m_taskAdvanceCFGHasBeenSet;

                    /**
                     * 体检模式，0-标准模式，1-快速模式，2-高级模式，默认标准模式
                     */
                    int64_t m_taskMode;
                    bool m_taskModeHasBeenSet;

                    /**
                     * 任务完成回调webhook地址
                     */
                    std::string m_finishWebHook;
                    bool m_finishWebHookHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYRISKCENTERSCANTASKREQUEST_H_
