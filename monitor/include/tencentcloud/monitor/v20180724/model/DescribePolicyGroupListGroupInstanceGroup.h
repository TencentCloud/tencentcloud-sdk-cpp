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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPLISTGROUPINSTANCEGROUP_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPLISTGROUPINSTANCEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePolicyGroupList接口策略组绑定的实例分组信息
                */
                class DescribePolicyGroupListGroupInstanceGroup : public AbstractModel
                {
                public:
                    DescribePolicyGroupListGroupInstanceGroup();
                    ~DescribePolicyGroupListGroupInstanceGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例分组名称id
                     * @return InstanceGroupId 实例分组名称id
                     * 
                     */
                    int64_t GetInstanceGroupId() const;

                    /**
                     * 设置实例分组名称id
                     * @param _instanceGroupId 实例分组名称id
                     * 
                     */
                    void SetInstanceGroupId(const int64_t& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     * 
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                    /**
                     * 获取策略类型视图名称
                     * @return ViewName 策略类型视图名称
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置策略类型视图名称
                     * @param _viewName 策略类型视图名称
                     * 
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     * 
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取最近编辑的用户uin
                     * @return LastEditUin 最近编辑的用户uin
                     * 
                     */
                    std::string GetLastEditUin() const;

                    /**
                     * 设置最近编辑的用户uin
                     * @param _lastEditUin 最近编辑的用户uin
                     * 
                     */
                    void SetLastEditUin(const std::string& _lastEditUin);

                    /**
                     * 判断参数 LastEditUin 是否已赋值
                     * @return LastEditUin 是否已赋值
                     * 
                     */
                    bool LastEditUinHasBeenSet() const;

                    /**
                     * 获取实例分组名称
                     * @return GroupName 实例分组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置实例分组名称
                     * @param _groupName 实例分组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取实例数量
                     * @return InstanceSum 实例数量
                     * 
                     */
                    int64_t GetInstanceSum() const;

                    /**
                     * 设置实例数量
                     * @param _instanceSum 实例数量
                     * 
                     */
                    void SetInstanceSum(const int64_t& _instanceSum);

                    /**
                     * 判断参数 InstanceSum 是否已赋值
                     * @return InstanceSum 是否已赋值
                     * 
                     */
                    bool InstanceSumHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return InsertTime 创建时间
                     * 
                     */
                    int64_t GetInsertTime() const;

                    /**
                     * 设置创建时间
                     * @param _insertTime 创建时间
                     * 
                     */
                    void SetInsertTime(const int64_t& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                private:

                    /**
                     * 实例分组名称id
                     */
                    int64_t m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * 策略类型视图名称
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * 最近编辑的用户uin
                     */
                    std::string m_lastEditUin;
                    bool m_lastEditUinHasBeenSet;

                    /**
                     * 实例分组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 实例数量
                     */
                    int64_t m_instanceSum;
                    bool m_instanceSumHasBeenSet;

                    /**
                     * 更新时间
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_insertTime;
                    bool m_insertTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPLISTGROUPINSTANCEGROUP_H_
