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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMRECEIVERSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMRECEIVERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/ReceiverInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * ModifyAlarmReceivers请求参数结构体
                */
                class ModifyAlarmReceiversRequest : public AbstractModel
                {
                public:
                    ModifyAlarmReceiversRequest();
                    ~ModifyAlarmReceiversRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要修改接收人的策略组Id
                     * @return GroupId 需要修改接收人的策略组Id
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置需要修改接收人的策略组Id
                     * @param _groupId 需要修改接收人的策略组Id
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取必填。固定为“monitor”
                     * @return Module 必填。固定为“monitor”
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置必填。固定为“monitor”
                     * @param _module 必填。固定为“monitor”
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取新接收人信息, 没有填写则删除所有接收人
                     * @return ReceiverInfos 新接收人信息, 没有填写则删除所有接收人
                     * 
                     */
                    std::vector<ReceiverInfo> GetReceiverInfos() const;

                    /**
                     * 设置新接收人信息, 没有填写则删除所有接收人
                     * @param _receiverInfos 新接收人信息, 没有填写则删除所有接收人
                     * 
                     */
                    void SetReceiverInfos(const std::vector<ReceiverInfo>& _receiverInfos);

                    /**
                     * 判断参数 ReceiverInfos 是否已赋值
                     * @return ReceiverInfos 是否已赋值
                     * 
                     */
                    bool ReceiverInfosHasBeenSet() const;

                private:

                    /**
                     * 需要修改接收人的策略组Id
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 必填。固定为“monitor”
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 新接收人信息, 没有填写则删除所有接收人
                     */
                    std::vector<ReceiverInfo> m_receiverInfos;
                    bool m_receiverInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYALARMRECEIVERSREQUEST_H_
