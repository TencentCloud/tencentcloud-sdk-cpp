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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBERECORDBACKUPPLANDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBERECORDBACKUPPLANDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/LifeCycleData.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 查询录像上云计划返回数据
                */
                class DescribeRecordBackupPlanData : public AbstractModel
                {
                public:
                    DescribeRecordBackupPlanData();
                    ~DescribeRecordBackupPlanData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取录像上云计划ID
                     * @return PlanId 录像上云计划ID
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置录像上云计划ID
                     * @param _planId 录像上云计划ID
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取录像上云计划名称
                     * @return PlanName 录像上云计划名称
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置录像上云计划名称
                     * @param _planName 录像上云计划名称
                     * 
                     */
                    void SetPlanName(const std::string& _planName);

                    /**
                     * 判断参数 PlanName 是否已赋值
                     * @return PlanName 是否已赋值
                     * 
                     */
                    bool PlanNameHasBeenSet() const;

                    /**
                     * 获取录像上云模板ID
                     * @return TemplateId 录像上云模板ID
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置录像上云模板ID
                     * @param _templateId 录像上云模板ID
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
                     * 获取录像上云计划描述
                     * @return Describe 录像上云计划描述
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置录像上云计划描述
                     * @param _describe 录像上云计划描述
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取云文件生命周期
                     * @return LifeCycle 云文件生命周期
                     * 
                     */
                    LifeCycleData GetLifeCycle() const;

                    /**
                     * 设置云文件生命周期
                     * @param _lifeCycle 云文件生命周期
                     * 
                     */
                    void SetLifeCycle(const LifeCycleData& _lifeCycle);

                    /**
                     * 判断参数 LifeCycle 是否已赋值
                     * @return LifeCycle 是否已赋值
                     * 
                     */
                    bool LifeCycleHasBeenSet() const;

                    /**
                     * 获取录像上云计划状态，1:正常使用中，0:删除中，无法使用
                     * @return Status 录像上云计划状态，1:正常使用中，0:删除中，无法使用
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置录像上云计划状态，1:正常使用中，0:删除中，无法使用
                     * @param _status 录像上云计划状态，1:正常使用中，0:删除中，无法使用
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
                     * 获取通道数量
                     * @return ChannelCount 通道数量
                     * 
                     */
                    int64_t GetChannelCount() const;

                    /**
                     * 设置通道数量
                     * @param _channelCount 通道数量
                     * 
                     */
                    void SetChannelCount(const int64_t& _channelCount);

                    /**
                     * 判断参数 ChannelCount 是否已赋值
                     * @return ChannelCount 是否已赋值
                     * 
                     */
                    bool ChannelCountHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateAt 创建时间
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置创建时间
                     * @param _createAt 创建时间
                     * 
                     */
                    void SetCreateAt(const std::string& _createAt);

                    /**
                     * 判断参数 CreateAt 是否已赋值
                     * @return CreateAt 是否已赋值
                     * 
                     */
                    bool CreateAtHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return UpdateAt 修改时间
                     * 
                     */
                    std::string GetUpdateAt() const;

                    /**
                     * 设置修改时间
                     * @param _updateAt 修改时间
                     * 
                     */
                    void SetUpdateAt(const std::string& _updateAt);

                    /**
                     * 判断参数 UpdateAt 是否已赋值
                     * @return UpdateAt 是否已赋值
                     * 
                     */
                    bool UpdateAtHasBeenSet() const;

                private:

                    /**
                     * 录像上云计划ID
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 录像上云计划名称
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * 录像上云模板ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 录像上云计划描述
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * 云文件生命周期
                     */
                    LifeCycleData m_lifeCycle;
                    bool m_lifeCycleHasBeenSet;

                    /**
                     * 录像上云计划状态，1:正常使用中，0:删除中，无法使用
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 通道数量
                     */
                    int64_t m_channelCount;
                    bool m_channelCountHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_updateAt;
                    bool m_updateAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBERECORDBACKUPPLANDATA_H_
